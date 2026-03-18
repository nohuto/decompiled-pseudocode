/*
 * XREFs of IopProcessUpdateTransferCount @ 0x1403C4620
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopUpdateIrpTransferCount @ 0x1403C4580 (IopUpdateIrpTransferCount.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopWriteFile @ 0x1408C1630 (IopWriteFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopProcessUpdateTransferCount(_KPROCESS *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r11
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( a1 && a1 == CurrentThread->Process )
  {
    result = a3;
    *(_QWORD *)((char *)&CurrentThread->Header.Lock + a3) += a2;
  }
  else if ( a1 )
  {
    result = a4;
    _InterlockedAdd64((volatile signed __int64 *)((char *)&a1->Header.Lock + a4), a2);
  }
  else
  {
    result = a3;
    *(_QWORD *)((char *)&CurrentThread->Header.Lock + a3) += a2;
  }
  return result;
}
