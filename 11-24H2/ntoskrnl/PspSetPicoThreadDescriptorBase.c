/*
 * XREFs of PspSetPicoThreadDescriptorBase @ 0x1404CA8C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PspSetPicoThreadDescriptorBase(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v4; // ebx
  unsigned __int8 CurrentIrql; // di
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( v4 )
  {
    CurrentThread[1].WaitBlock[2].Object = (PVOID)a2;
    v6 = -1073741566;
  }
  else
  {
    CurrentThread[1].WaitBlock[2].Thread = (struct _KTHREAD *)a2;
    v6 = -1073741568;
  }
  v7 = HIDWORD(a2);
  __writemsr(v6, a2);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
