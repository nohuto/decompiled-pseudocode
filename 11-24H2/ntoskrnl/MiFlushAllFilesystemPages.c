/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1404CFFDC
 * Callers:
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x14021AA70 (CcForEachPartition.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiEmptyAllWorkingSets @ 0x1406799E0 (MiEmptyAllWorkingSets.c)
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
      if ( (int (__fastcall *)(__int64))result != MiModifiedPageWriter
        && (__int64 (__fastcall *)(__int64))result != MiMappedPageWriter )
      {
        if ( a1 == 1 )
        {
          result = (unsigned int)_InterlockedIncrement(&dword_140E30188);
          if ( (_DWORD)result != 1 )
            return result;
          MiEmptyAllWorkingSets(&MiSystemPartition);
        }
        _InterlockedIncrement(&dword_140E39084);
        result = qword_140E3D900;
        if ( qword_140E3D900 != qword_140E3D9E0 )
        {
          v3 = dword_140E3901C;
          for ( i = 0; i < 0xFF; ++i )
          {
            KeSetEvent(&stru_140E39088, 0, 0);
            CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
            result = qword_140E3D900;
            if ( qword_140E3D900 == qword_140E3D9E0 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
            result = (unsigned int)dword_140E3901C;
            if ( v3 != dword_140E3901C )
              i = -1;
            if ( v3 == dword_140E3901C )
              result = v3;
            v3 = result;
          }
        }
        _InterlockedDecrement(&dword_140E39084);
      }
    }
  }
  return result;
}
