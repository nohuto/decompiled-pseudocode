/*
 * XREFs of MiDrainControlAreaWrites @ 0x1402704C4
 * Callers:
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiPrepareSegmentForDeletion @ 0x1402703FC (MiPrepareSegmentForDeletion.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  int v6; // [rsp+2Ch] [rbp-24h]
  __int16 v7; // [rsp+30h] [rbp-20h] BYREF
  char v8; // [rsp+32h] [rbp-1Eh]
  char v9; // [rsp+33h] [rbp-1Dh]
  int v10; // [rsp+34h] [rbp-1Ch]
  _QWORD v11[3]; // [rsp+38h] [rbp-18h] BYREF

  v6 = 0;
  v3 = *(_DWORD *)(a1 + 76) == 0;
  v9 = 0;
  if ( !v3 )
  {
    do
    {
      v10 = 0;
      v11[1] = v11;
      v5 = 8;
      v11[0] = v11;
      v4 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = &v4;
      v7 = 263;
      v8 = 6;
      MiReleaseSpinLockExclusive(a1 + 72, a2);
      KeWaitForGate(&v7, 18LL);
      LOBYTE(a2) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    }
    while ( *(_DWORD *)(a1 + 76) );
  }
}
