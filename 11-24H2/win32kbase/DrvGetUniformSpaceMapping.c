/*
 * XREFs of DrvGetUniformSpaceMapping @ 0x14000B784
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x14000B3C0 (NtUserGetUniformSpaceMapping.c)
 * Callees:
 *     DrvIsUniformSpaceMapping @ 0x14000B9A0 (DrvIsUniformSpaceMapping.c)
 */

__int64 __fastcall DrvGetUniformSpaceMapping(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v6; // ebx
  unsigned int i; // r9d
  __int64 v8; // rcx

  v6 = 0;
  if ( (unsigned int)DrvIsUniformSpaceMapping() )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
    {
      v8 = 56LL * i;
      if ( *(_QWORD *)(v8 + a1 + 40) == a2 )
      {
        v6 = 1;
        *a3 = *(_OWORD *)(v8 + a1 + 76);
      }
    }
  }
  return v6;
}
