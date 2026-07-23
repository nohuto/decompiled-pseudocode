/*
 * XREFs of LdrpGetFullPath @ 0x180070F10
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 */

__int64 __fastcall LdrpGetFullPath(unsigned __int16 *a1, __int64 a2)
{
  SIZE_T FullPathName_Ustr; // rsi
  _WORD *Atom; // r14
  void *v7; // rcx
  char v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  v8 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    FullPathName_Ustr = (unsigned int)RtlGetFullPathName_Ustr(
                                        a1,
                                        *(unsigned __int16 *)(a2 + 2),
                                        *(WCHAR **)(a2 + 8),
                                        &v10,
                                        &v8,
                                        &v9);
    if ( v8 )
      return 3221225781LL;
    if ( (unsigned int)(FullPathName_Ustr - 1) > 0xFFFD )
      break;
    if ( (_DWORD)v9 == 5 && (LdrpIllegalCWDDevices & HIDWORD(v9)) != 0 )
      return 3221225781LL;
    if ( (unsigned int)FullPathName_Ustr < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = FullPathName_Ustr;
      return 0LL;
    }
    Atom = RtlpAllocateAtom(FullPathName_Ustr);
    if ( !Atom )
      return 3221225495LL;
    v7 = *(void **)(a2 + 8);
    if ( (void *)(a2 + 16) != v7 )
      RtlpSysVolFree(v7);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = Atom;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = FullPathName_Ustr;
    *Atom = 0;
  }
  return 3221225734LL;
}
