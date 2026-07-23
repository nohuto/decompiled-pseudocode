/*
 * XREFs of CmpVolumeManagerGetContextForGuidUnsafe @ 0x140A47324
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14094F848 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpVolumeManagerGetContextForGuidUnsafe(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx

  v2 = qword_140FDA410;
  v3 = 0LL;
  while ( (__int64 *)v2 != &qword_140FDA410 )
  {
    v4 = *(_QWORD *)(v2 + 32) - *a2;
    if ( !v4 )
      v4 = *(_QWORD *)(v2 + 40) - a2[1];
    if ( !v4 )
    {
      v3 = v2;
      if ( v2 && _InterlockedIncrement64((volatile signed __int64 *)(v2 + 24)) <= 1 )
        __fastfail(0xEu);
      return v3;
    }
    v2 = *(_QWORD *)v2;
  }
  return v3;
}
