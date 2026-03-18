/*
 * XREFs of MiTransientCombineAddress @ 0x1402448C4
 * Callers:
 *     MiRaisedIrqlFault @ 0x140245EB8 (MiRaisedIrqlFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  KIRQL v7; // r14
  _QWORD *v8; // rbx

  v3 = 0;
  if ( !dword_140E2FE04 )
    return 0LL;
  if ( a3 )
  {
    v7 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FE00);
  }
  else
  {
    v7 = ExAcquireSpinLockShared(&dword_140E2FE00);
  }
  v8 = (_QWORD *)qword_140E2FE08;
  while ( v8 )
  {
    if ( a1 > v8[3] )
    {
      v8 = (_QWORD *)v8[1];
    }
    else
    {
      if ( a1 >= v8[3] )
        break;
      v8 = (_QWORD *)*v8;
    }
  }
  if ( v8 )
  {
    if ( v8[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      v8 = 0LL;
  }
  MiReleaseSpinLockShared(&dword_140E2FE00, v7);
  LOBYTE(v3) = v8 != 0LL;
  return v3;
}
