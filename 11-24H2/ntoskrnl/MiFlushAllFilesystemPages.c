/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1404D6B8C
 * Callers:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x140470EE8 (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x140678800 (MiEmptyAllWorkingSets.c)
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
          result = (unsigned int)_InterlockedIncrement(&dword_140E30048);
          if ( (_DWORD)result != 1 )
            return result;
          MiEmptyAllWorkingSets(&MiSystemPartition);
        }
        _InterlockedIncrement(&dword_140E38F44);
        result = qword_140E3D7C0;
        if ( qword_140E3D7C0 != qword_140E3D8A0 )
        {
          v3 = dword_140E38EDC;
          for ( i = 0; i < 0xFF; ++i )
          {
            KeSetEvent(&stru_140E38F48, 0, 0);
            CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
            result = qword_140E3D7C0;
            if ( qword_140E3D7C0 == qword_140E3D8A0 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
            result = (unsigned int)dword_140E38EDC;
            if ( v3 != dword_140E38EDC )
              i = -1;
            if ( v3 == dword_140E38EDC )
              result = v3;
            v3 = result;
          }
        }
        _InterlockedDecrement(&dword_140E38F44);
      }
    }
  }
  return result;
}
