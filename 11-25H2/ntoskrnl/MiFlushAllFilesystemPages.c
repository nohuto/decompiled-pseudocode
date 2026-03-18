/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1404D7D5C
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x14035EBE4 (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14066CEF4 (MiEmptyAllWorkingSets.c)
 */

unsigned __int64 __fastcall MiFlushAllFilesystemPages(int a1)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v3; // edi
  unsigned int i; // ebx

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x2000) == 0 )
    {
      result = (unsigned __int64)CurrentThread[1].ApcState.ApcListHead[0].Blink;
      if ( (int (__fastcall *)(__int64 *))result != MiModifiedPageWriter
        && (__int64 (__fastcall *)(__int64))result != MiMappedPageWriter )
      {
        if ( a1 == 1 )
        {
          result = (unsigned int)_InterlockedIncrement(&dword_140E2FE08);
          if ( (_DWORD)result != 1 )
            return result;
          MiEmptyAllWorkingSets(&MiSystemPartition);
        }
        _InterlockedIncrement(&dword_140E38D04);
        result = qword_140E3D580;
        if ( qword_140E3D580 != qword_140E3D660 )
        {
          v3 = dword_140E38C9C;
          for ( i = 0; i < 0xFF; ++i )
          {
            KeSetEvent(&stru_140E38D08, 0, 0);
            CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
            result = qword_140E3D580;
            if ( qword_140E3D580 == qword_140E3D660 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
            result = (unsigned int)dword_140E38C9C;
            if ( v3 != dword_140E38C9C )
              i = -1;
            if ( v3 == dword_140E38C9C )
              result = v3;
            v3 = result;
          }
        }
        _InterlockedDecrement(&dword_140E38D04);
      }
    }
  }
  return result;
}
