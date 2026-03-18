/*
 * XREFs of MiKernelStackVaToStackNode @ 0x14032346C
 * Callers:
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // si
  __int64 v4; // rdx
  _QWORD *v5; // rbx

  if ( a2 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E35C98);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_140E35C98);
  }
  v5 = (_QWORD *)qword_140E35C90;
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
  MiReleaseSpinLockShared(&dword_140E35C98, v4);
  return v5;
}
