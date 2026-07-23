/*
 * XREFs of MiDrainEngineDescriptors @ 0x1406907E0
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     MiDeleteAcceleratorDescriptor @ 0x140271A18 (MiDeleteAcceleratorDescriptor.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDrainEngineDescriptors(__int64 a1)
{
  _QWORD *v2; // rsi
  KIRQL v3; // r8
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  KIRQL v7; // al

  v2 = (_QWORD *)(a1 + 120);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
  v4 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 != v2 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      if ( !*((_BYTE *)v4 + 16) && ((*(_DWORD *)(v4[3] + 52LL) & 1) != 0 || byte_140E37594) )
      {
        if ( (_QWORD *)v5[1] != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = v6;
        MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(a1 + 208) + 15280LL), v3);
        MiDeleteAcceleratorDescriptor((__int64)(v4 + 4));
        v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
        v5 = (_QWORD *)*v2;
        v3 = v7;
      }
      v4 = v5;
    }
    while ( v5 != v2 );
  }
  return MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(a1 + 208) + 15280LL), v3);
}
