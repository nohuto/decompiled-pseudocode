/*
 * XREFs of MiKernelStackVaToStackNode @ 0x14020CE1C
 * Callers:
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // si
  __int64 v4; // rdx
  _QWORD *v5; // rbx

  if ( a2 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E36018);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_140E36018);
  }
  v5 = (_QWORD *)qword_140E36010;
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
  MiReleaseSpinLockShared(&dword_140E36018, v4);
  return v5;
}
