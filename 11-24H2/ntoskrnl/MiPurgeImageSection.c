/*
 * XREFs of MiPurgeImageSection @ 0x140AC2CF4
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 * Callees:
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 */

void __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // rbx
  _OWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+50h] [rbp-18h]

  v1 = a1 + 128;
  memset(v2, 0, sizeof(v2));
  v3 = 0LL;
  while ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 32) & 0x20000) != 0 )
      MiPurgeSubsection(
        (__int64 *)v1,
        *(_QWORD *)(v1 + 8),
        *(_QWORD *)(v1 + 8) + 8LL * *(unsigned int *)(v1 + 44),
        5u,
        (__int64)v2);
    v1 = *(_QWORD *)(v1 + 16);
  }
}
