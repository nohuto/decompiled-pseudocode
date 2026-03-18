/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1400E4AC0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x140003F10 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitGlobalCommand @ 0x1400E45A8 (VidSchSubmitGlobalCommand.c)
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
__int64 __fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v4; // rbp
  size_t v5; // rsi
  _QWORD *v6; // rax
  __int64 Pool2; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD v11[20]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(_DWORD *)(v4 + 152) * ((*(_DWORD *)(v4 + 76) << 6) + ((8 * *(_DWORD *)(v4 + 76) + 231) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v4 + 76) + 171);
  if ( (unsigned int)v5 <= 0x640 )
    v5 = 1600LL;
  v6 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1992), (_QWORD **)(a1 + 712), (_DWORD *)(a1 + 728));
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
                (_QWORD **)(a1 + 712),
                (_DWORD *)(a1 + 728));
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
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1992), a1 + 760, (_QWORD *)(Pool2 + 8), (_DWORD *)(a1 + 776));
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
      v9 = *(_QWORD *)(a1 + 96);
      LODWORD(v11[4]) |= 0x40u;
      LODWORD(v11[2]) = 1;
      LODWORD(v11[6]) = *(unsigned __int16 *)(v9 + 4);
      VidSchRegisterCompletionEvent(v4, (__int64)v11);
      goto LABEL_15;
    }
  }
  return Pool2;
}
