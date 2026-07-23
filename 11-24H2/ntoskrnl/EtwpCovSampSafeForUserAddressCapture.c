/*
 * XREFs of EtwpCovSampSafeForUserAddressCapture @ 0x14044312C
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 */

__int64 __fastcall EtwpCovSampSafeForUserAddressCapture(int a1, int *a2)
{
  __int64 CurrentIrql; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // eax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || (v5 = 0, !CurrentThread->Teb) )
    v5 = 1;
  *a2 = v5;
  if ( (unsigned __int8)CurrentIrql >= 2u
    || KeGetCurrentThread()->WaitBlock[3].SpareLong
    || !MmCanThreadFault(CurrentIrql, (__int64)a2)
    || BYTE6(CurrentThread[1].Queue) && !a1 )
  {
    return 3221225659LL;
  }
  result = 3221225659LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
    return 0LL;
  return result;
}
