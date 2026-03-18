/*
 * XREFs of RtlCSparseBitmapEnterLockingRegion @ 0x14045D26C
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x14045CD70 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 *__fastcall RtlCSparseBitmapEnterLockingRegion(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rax

  v2 = a1;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = a2;
  if ( *(_BYTE *)(a2 + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    *v2 = CurrentIrql;
  }
  else
  {
    *a1 = -1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  return v2;
}
