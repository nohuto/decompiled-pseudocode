/*
 * XREFs of InbvDetermineFunction @ 0x14058C2E0
 * Callers:
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x1404FAAD0 (_strupr.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 */

__int64 __fastcall InbvDetermineFunction(__int64 a1)
{
  unsigned int v1; // edx
  char *v3; // rcx
  bool v4; // bl
  char *v5; // rax
  char *v6; // rax
  __int64 (__fastcall **v7)(); // rax

  v1 = dword_140E65E68;
  if ( !dword_140E65E68 )
  {
    v3 = *(char **)(a1 + 216);
    v4 = 1;
    if ( v3 )
    {
      v5 = strupr(v3);
      v6 = strstr(v5, "NOVGA");
      v1 = dword_140E65E68;
      v4 = v6 == 0LL;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL) )
    {
      v7 = off_140E00DB0;
      if ( !v4 )
        v7 = off_140E00CF0;
      qword_140E65E70 = (__int64)v7;
      v1 = 2 * v4 + 1;
      goto LABEL_10;
    }
    if ( v4 )
    {
      v1 = 2;
      qword_140E65E70 = (__int64)off_140E00DB0;
LABEL_10:
      dword_140E65E68 = v1;
    }
  }
  return v1;
}
