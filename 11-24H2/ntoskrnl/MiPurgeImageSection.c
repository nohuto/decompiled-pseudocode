/*
 * XREFs of MiPurgeImageSection @ 0x140ABDFDC
 * Callers:
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 * Callees:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 */

char __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  _OWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v1 = a1 + 128;
  LOBYTE(v2) = 0;
  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  while ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 32);
    if ( (v2 & 0x20000) != 0 )
      LOBYTE(v2) = MiPurgeSubsection(
                     (__int64 *)v1,
                     *(_QWORD *)(v1 + 8),
                     *(_QWORD *)(v1 + 8) + 8LL * *(unsigned int *)(v1 + 44),
                     5u,
                     (__int64)v4);
    v1 = *(_QWORD *)(v1 + 16);
  }
  return v2;
}
