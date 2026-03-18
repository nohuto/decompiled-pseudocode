/*
 * XREFs of SepInitializeCodeIntegrity @ 0x14077F20C
 * Callers:
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 * Callees:
 *     strstr @ 0x1404FB230 (strstr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int *v3; // rdx
  char *v4; // rbx
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v9 = 0LL;
  v0 = 6;
  v10 = 0LL;
  memset_0(&unk_140F044A4, 0, 0xF4uLL);
  v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  SeCiCallbacks = 256;
  qword_140F04598 = 167772176LL;
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 240);
    if ( v2 )
    {
      v3 = *(unsigned int **)(v2 + 2904);
      if ( v3 )
        v0 = *v3;
    }
    v4 = *(char **)(v1 + 216);
    if ( v4 )
    {
      v5 = strstr(*(const char **)(v1 + 216), "MINTCBIGNOREKD");
      if ( v5 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( aMintcbignorekd[v6] );
        if ( (v5 == v4 || *(v5 - 1) == 32) && (v5[(unsigned int)v6] & 0xDF) == 0 )
          SeCiDebugOptions |= 1u;
      }
    }
    v7 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    *(_QWORD *)&v9 = v7 + 80;
    *((_QWORD *)&v9 + 1) = v7 + 112;
    *(_QWORD *)&v10 = v7 + 64;
    *((_QWORD *)&v10 + 1) = v7 + 96;
    v11 = v7 + 48;
  }
  return CiInitialize(v0, &v9, 5LL, &SeCiCallbacks, SeCiPrivateApis);
}
