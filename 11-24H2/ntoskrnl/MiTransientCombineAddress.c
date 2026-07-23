/*
 * XREFs of MiTransientCombineAddress @ 0x14020D0AC
 * Callers:
 *     MiRaisedIrqlFault @ 0x1402FADDC (MiRaisedIrqlFault.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  KIRQL v9; // r14
  _QWORD *v10; // rbx

  v3 = 0;
  if ( !dword_140E2FF44 )
    return 0LL;
  if ( a3 )
  {
    v9 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FF40);
  }
  else
  {
    v9 = ExAcquireSpinLockShared(&dword_140E2FF40);
  }
  v10 = (_QWORD *)qword_140E2FF48;
  while ( v10 )
  {
    if ( a1 > v10[3] )
    {
      v10 = (_QWORD *)v10[1];
    }
    else
    {
      if ( a1 >= v10[3] )
        break;
      v10 = (_QWORD *)*v10;
    }
  }
  if ( v10 )
  {
    if ( v10[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      v10 = 0LL;
  }
  MiReleaseSpinLockShared(&dword_140E2FF40, v9, v7, v8);
  LOBYTE(v3) = v10 != 0LL;
  return v3;
}
