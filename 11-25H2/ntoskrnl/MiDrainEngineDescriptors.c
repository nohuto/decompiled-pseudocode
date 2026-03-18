/*
 * XREFs of MiDrainEngineDescriptors @ 0x140683EE4
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x1406837B4 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140418610 (MiDeleteAcceleratorDescriptor.c)
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
      if ( !*((_BYTE *)v4 + 16) && ((*(_DWORD *)(v4[3] + 52LL) & 1) != 0 || byte_140E37214) )
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
