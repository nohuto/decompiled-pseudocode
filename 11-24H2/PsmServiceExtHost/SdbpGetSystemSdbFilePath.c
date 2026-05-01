/*
 * XREFs of SdbpGetSystemSdbFilePath @ 0x180096D34
 * Callers:
 *     SdbGetPathCustomSdb @ 0x180095F08 (SdbGetPathCustomSdb.c)
 *     SdbGetPathResourceDll @ 0x180095FD8 (SdbGetPathResourceDll.c)
 *     SdbGetPathSystemSdb @ 0x180096004 (SdbGetPathSystemSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 i; // rdx
  char *v8; // rax
  int v9; // ebx
  __int64 v10; // r8

  *a1 = 0;
  if ( a3 && a3 < 13 )
  {
    v6 = 1LL;
    for ( i = 32LL; ; i += 32LL )
    {
      if ( i >= 0x1A0 )
        goto LABEL_15;
      if ( *(_DWORD *)((char *)&unk_1800BB9D0 + i) == a3 )
        break;
      ++v6;
    }
    v8 = (char *)&unk_1800BB9D0 + 32 * v6;
    if ( !v8 )
    {
LABEL_15:
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741275;
    }
    if ( *((_QWORD *)v8 + 2) )
    {
      v10 = a5;
      if ( !a5 )
        v10 = *((_QWORD *)v8 + 1);
      v9 = (*((__int64 (__fastcall **)(_WORD *, __int64, __int64, __int64))v8 + 2))(a1, 260LL, v10, a6);
      if ( v9 >= 0 )
        return 0;
      else
        AslLogCallPrintf(1LL);
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return (unsigned int)v9;
}
