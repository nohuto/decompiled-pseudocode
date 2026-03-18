/*
 * XREFs of MiKernelStackVaToStackNode @ 0x14024468C
 * Callers:
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // si
  __int64 v4; // rdx
  _QWORD *v5; // rbx

  if ( a2 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35ED8);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_140E35ED8);
  }
  v5 = (_QWORD *)qword_140E35ED0;
  while ( v5 )
  {
    if ( a1 > v5[3] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v5[4] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  LOBYTE(v4) = v3;
  MiReleaseSpinLockShared(&dword_140E35ED8, v4);
  return v5;
}
