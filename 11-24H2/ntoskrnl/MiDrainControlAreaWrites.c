/*
 * XREFs of MiDrainControlAreaWrites @ 0x140416FA4
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x140416EDC (MiPrepareSegmentForDeletion.c)
 *     MiDestroySection @ 0x140417200 (MiDestroySection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, KIRQL a2)
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
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
      KeWaitForGate((__int64)&v7, 18LL, 0);
      a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    }
    while ( *(_DWORD *)(a1 + 76) );
  }
}
