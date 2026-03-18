/*
 * XREFs of VidSchiAllocateHwQueuePacket @ 0x1400E4CE0
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1400034F0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140031EF0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x140048F00 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1400E31E8 (VidSchiSubmitHwPagingCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1400E46B0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140020F30 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedInsertTailList @ 0x140023690 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140034A80 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400B5974 (VidSchRegisterCompletionEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiAllocateHwQueuePacket(__int64 a1, char a2)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  size_t v5; // rsi
  _QWORD *v6; // rax
  __int64 Pool2; // rbx
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD v11[20]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = *(_DWORD *)(v4 + 152) * ((*(_DWORD *)(v4 + 76) << 6) + ((8 * *(_DWORD *)(v4 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v4 + 76) + 171);
  if ( (unsigned int)v5 <= 0x640 )
    v5 = 1600LL;
  v6 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1992), (_QWORD **)(a1 + 216), (_DWORD *)(a1 + 232));
  if ( v6 )
  {
    Pool2 = (__int64)(v6 - 1);
    if ( *(_BYTE *)(v4 + 7059) && (*(_DWORD *)(Pool2 + 52) || *(_QWORD *)(Pool2 + 176) || *(_QWORD *)(Pool2 + 184)) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 61440LL, v4, 0LL, 0LL);
      WdLogGlobalForLineNumber = 906;
LABEL_18:
      VidSchWaitForCompletionEvent(v4, (__int64)v11, 19);
      while ( !Pool2 )
      {
LABEL_15:
        v10 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v4 + 1992),
                (_QWORD **)(a1 + 216),
                (_DWORD *)(a1 + 232));
        if ( !v10 )
          goto LABEL_18;
        Pool2 = (__int64)(v10 - 1);
      }
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 2000), v11, 0LL);
      goto LABEL_9;
    }
    if ( v6 != (_QWORD *)8 )
    {
LABEL_9:
      memset((void *)Pool2, 0, v5);
LABEL_10:
      *(_QWORD *)(Pool2 + 56) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(Pool2 + 52) = 1;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1992), a1 + 240, (_QWORD *)(Pool2 + 8), (_DWORD *)(a1 + 256));
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v5, 895576406LL);
    if ( Pool2 )
      goto LABEL_10;
    if ( a2 )
    {
      memset(v11, 0, sizeof(v11));
      v9 = *(unsigned __int16 *)(v3 + 4);
      LODWORD(v11[4]) |= 0x40u;
      LODWORD(v11[6]) = v9;
      LODWORD(v11[2]) = 1;
      VidSchRegisterCompletionEvent(v4, (__int64)v11);
      goto LABEL_15;
    }
  }
  return Pool2;
}
