/*
 * XREFs of XmEmulateStream @ 0x140461A64
 * Callers:
 *     XmEmulateInterrupt @ 0x14055C6A0 (XmEmulateInterrupt.c)
 * Callees:
 *     XmGetCodeByte @ 0x140461BC8 (XmGetCodeByte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _setjmp @ 0x1406B5FA0 (_setjmp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // rdx

  dword_140E11898 = *(_DWORD *)a4;
  dword_140E1189C = *(_DWORD *)(a4 + 4);
  dword_140E118A0 = *(_DWORD *)(a4 + 8);
  dword_140E118A4 = *(_DWORD *)(a4 + 12);
  dword_140E118AC = *(_DWORD *)(a4 + 16);
  dword_140E118B0 = *(_DWORD *)(a4 + 20);
  dword_140E118B4 = *(_DWORD *)(a4 + 24);
  word_140E118BE = *(_WORD *)(a4 + 28);
  word_140E118B8 = *(_WORD *)(a4 + 30);
  word_140E118BA = a2;
  dword_140E11894 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      CodeByte = XmGetCodeByte(&XmContext);
      *((_DWORD *)&XmContext + 28) = CodeByte;
      v7 = *(_WORD *)(XmContext + 2LL * CodeByte);
      *((_WORD *)&XmContext + 40) = v7;
      *((_DWORD *)&XmContext + 31) = (unsigned __int8)v7;
    }
    while ( !(unsigned int)guard_dispatch_icall_no_overrides(&XmContext, v8) );
    guard_dispatch_icall_no_overrides(&XmContext, v9);
  }
  *(_DWORD *)a4 = *((_DWORD *)&XmContext + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&XmContext + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&XmContext + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&XmContext + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&XmContext + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&XmContext + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&XmContext + 13);
  return v4;
}
