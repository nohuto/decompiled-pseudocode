/*
 * XREFs of VidSchSubmitCommand @ 0x1400D2850
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x14001DEC8 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14001EDD0 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140020F30 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiFreeQueuePacket @ 0x1400232B0 (VidSchiFreeQueuePacket.c)
 *     VidSchiInterlockedInsertTailList @ 0x140023690 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140025E54 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140027598 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140034A80 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiConvertDeferredWaits @ 0x140037D24 (VidSchiConvertDeferredWaits.c)
 *     VidSchiSetPriorityContext @ 0x140047D78 (VidSchiSetPriorityContext.c)
 *     memmove @ 0x140056040 (memmove.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400B5974 (VidSchRegisterCompletionEvent.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1400D327C (VidSchiEnsureHwFlipQueueLog.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchSubmitCommand(struct _VIDSCH_CONTEXT *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // r12d
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // r13
  size_t v10; // r15
  _QWORD *v11; // rax
  _DWORD *Pool2; // rbx
  __int64 v13; // r15
  unsigned __int32 v14; // r13d
  bool v15; // zf
  __int16 v16; // ax
  void *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _VIDSCH_CONTEXT *v20; // rax
  char *v21; // rbx
  struct _VIDSCH_CONTEXT **v22; // rcx
  const void *v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int i; // r15d
  int v29; // eax
  char v30; // cl
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  char *v40; // r8
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  KPRIORITY PriorityThread; // eax
  __int64 v46; // rcx
  size_t v47; // [rsp+60h] [rbp-E8h]
  _QWORD v48[20]; // [rsp+70h] [rbp-D8h] BYREF
  int v49; // [rsp+160h] [rbp+18h]
  __int64 v50; // [rsp+168h] [rbp+20h] BYREF

  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6562;
    DxgkLogInternalTriageEvent(v46, 0x40000LL);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)a1 + 13);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(v4 + 204) || (v6 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 200), 0, 0)) )
  {
    WdLogSingleEntry2(3LL, v4, -1071775232LL);
    result = 3223192064LL;
    WdLogGlobalForLineNumber = 6587;
    return result;
  }
  v50 = *(_QWORD *)a2;
  v7 = v50;
  if ( (v50 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v4, (struct _VIDSCH_SUBMIT_FLAGS *)&v50);
    if ( (int)result < 0 )
      return result;
    v7 = v50;
  }
  else if ( (v50 & 0x40000) != 0
         && !*((_DWORD *)a1 + 108)
         && !*((_DWORD *)a1 + 196)
         && (v50 & 0x1000000) == 0
         && (v50 & 0x400000000LL) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      v5,
      *((union _SLIST_HEADER **)a2 + 12),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
      0,
      0,
      0,
      0,
      0LL,
      0LL,
      (__int64)a2,
      0LL,
      0);
    return 0LL;
  }
  if ( (v7 & 0x800004) == 4 && *(_BYTE *)(v5 + 59) )
  {
    v40 = (char *)a2 + 600;
    if ( !*((_BYTE *)a2 + 356) )
      v40 = (char *)a2 + 496;
    *(_DWORD *)v40 = *(_DWORD *)v40 & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v5 + 152)) - 1) & 0x3FE) << 10);
  }
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v10 = *(_DWORD *)(v9 + 152) * ((*(_DWORD *)(v9 + 76) << 6) + ((8 * *(_DWORD *)(v9 + 76) + 231) & 0xFFFFFFF8))
      + 8 * (*(_DWORD *)(v9 + 76) + 171);
  if ( (unsigned int)v10 <= 0x640 )
    v10 = 1600LL;
  v11 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v9 + 1992), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
  if ( !v11 )
  {
    v47 = v10;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v10, 895576406LL);
    if ( !Pool2 )
    {
      memset(v48, 0, sizeof(v48));
      v38 = *((_QWORD *)a1 + 12);
      LODWORD(v48[4]) |= 0x40u;
      LODWORD(v48[2]) = 1;
      LODWORD(v48[6]) = *(unsigned __int16 *)(v38 + 4);
      VidSchRegisterCompletionEvent(v9, (__int64)v48);
      goto LABEL_90;
    }
    goto LABEL_18;
  }
  Pool2 = v11 - 1;
  if ( *(_BYTE *)(v9 + 7059) && (Pool2[13] || *((_QWORD *)Pool2 + 22) || *((_QWORD *)Pool2 + 23)) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, v9, 0LL, 0LL);
    WdLogGlobalForLineNumber = 906;
LABEL_102:
    VidSchWaitForCompletionEvent(v9, (__int64)v48, 19);
    while ( !Pool2 )
    {
LABEL_90:
      v39 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v9 + 1992), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
      if ( !v39 )
        goto LABEL_102;
      Pool2 = v39 - 1;
    }
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v9 + 2000), v48, 0LL);
    v10 = v47;
    goto LABEL_17;
  }
  if ( v11 != (_QWORD *)8 )
  {
LABEL_17:
    memset(Pool2, 0, v10);
LABEL_18:
    v13 = (__int64)(Pool2 + 14);
    *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
    Pool2[13] = 1;
    VidSchiInterlockedInsertTailList(
      (KSPIN_LOCK *)(v9 + 1992),
      (__int64)a1 + 760,
      (_QWORD *)Pool2 + 1,
      (_DWORD *)a1 + 194);
    goto LABEL_19;
  }
  v13 = 56LL;
LABEL_19:
  *Pool2 = 895576406;
  v14 = 2;
  v15 = (v50 & 0x40000) == 0;
  *(_QWORD *)v13 = MEMORY[0xFFFFF78000000320];
  Pool2[13] = 2;
  Pool2[16] = 0;
  if ( v15 )
  {
    if ( ((*((_DWORD *)a2 + 30) - 3) & 0xFFFFFFFD) != 0 )
    {
      Pool2[12] = 0;
    }
    else
    {
      Pool2[12] = 3;
      v27 = *((_DWORD *)a2 + 29);
      if ( v27 != -1 )
      {
        for ( i = ((unsigned __int16)*((_DWORD *)a2 + 150) | (unsigned __int16)(*((_DWORD *)a2 + 150) >> 10)) & 0x3FF;
              ;
              i &= ~(1 << v14) )
        {
          if ( !i )
          {
            v14 = 2;
            goto LABEL_21;
          }
          v15 = !_BitScanForward((unsigned int *)&v29, i);
          v30 = -1;
          if ( !v15 )
            v30 = v29;
          v14 = v30;
          if ( *(_BYTE *)(v5 + 59) )
          {
            v49 = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v5, v27, v30);
            if ( v49 < 0 )
            {
              VidSchiFreeQueuePacket((__int64)a1, (__int64)Pool2);
              return (unsigned int)v49;
            }
          }
          v31 = *((unsigned int *)a2 + 29);
          v32 = *(int *)(*(_QWORD *)(v5 + 8 * v31 + 3432) + 304LL * v14 + 188);
          if ( (int)v32 > -1 && *(_DWORD *)(160 * v32 + *(_QWORD *)(v5 + 3560) + 112) == 2 )
            break;
          v27 = *((_DWORD *)a2 + 29);
        }
        g_DxgMmsBugcheckExportIndex = 1;
        v16 = WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v14, v31, v5);
        WdLogGlobalForLineNumber = 906;
LABEL_106:
        if ( (v16 & 0x800) == 0 )
          goto LABEL_24;
LABEL_71:
        v33 = *((unsigned int *)a2 + 29);
        *((_QWORD *)a2 + 16) = ++*(_QWORD *)(v4 + 8 * v33 + 248);
        goto LABEL_24;
      }
    }
  }
  else
  {
    Pool2[12] = 7;
  }
LABEL_21:
  *((_QWORD *)Pool2 + 11) = a1;
  *((_QWORD *)Pool2 + 13) = KeGetCurrentThread();
  v16 = v50;
  *((_QWORD *)Pool2 + 9) = v50;
  *((_QWORD *)Pool2 + 19) = *((_QWORD *)a2 + 12);
  *((_QWORD *)Pool2 + 20) = *((_QWORD *)a2 + 13);
  Pool2[42] = *((_DWORD *)a2 + 29);
  if ( (v16 & 4) != 0 )
  {
    Pool2[16] ^= ((unsigned __int8)Pool2[16] ^ (unsigned __int8)(*(_DWORD *)(v5 + 2792) >> 4)) & 4;
    if ( ((*((_DWORD *)a2 + 30) - 3) & 0xFFFFFFFD) != 0 )
      goto LABEL_24;
    if ( (v16 & 0x400) == 0 )
      goto LABEL_71;
    goto LABEL_106;
  }
  if ( (v16 & 0x20) != 0 )
  {
    Pool2[16] ^= ((unsigned __int8)Pool2[16] ^ (unsigned __int8)(*(_DWORD *)(v5 + 2792) >> 5)) & 4;
  }
  else if ( Pool2[12] != 7 )
  {
    Pool2[16] |= 4u;
  }
LABEL_24:
  memmove(Pool2 + 188, a2, *((unsigned int *)a2 + 139));
  if ( !*((_BYTE *)a1 + 909) )
    VidSchiAcquirePrivateDataReference(
      (struct _VIDSCH_GLOBAL *)v5,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 338));
  if ( *((_QWORD *)a2 + 4) && !*((_BYTE *)a1 + 909) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Pool2 + 98) + 12LL));
  v17 = (void *)*((_QWORD *)Pool2 + 105);
  if ( v17 )
    ObfReferenceObject(v17);
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v5,
    (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 338));
  v18 = *((_QWORD *)Pool2 + 95);
  if ( v18 && (Pool2[188] & 0x8000000) != 0 && !*((_QWORD *)Pool2 + 99) )
    *((_QWORD *)Pool2 + 99) = *(_QWORD *)(v18 + 88);
  if ( (Pool2[272] & 1) != 0 )
    VidSchiConvertDeferredWaits((__int64)a1);
  if ( Pool2[238] )
  {
    v24 = *(_QWORD *)(v5 + 16);
    if ( *(_BYTE *)(v24 + 4976) )
    {
      if ( *(_DWORD *)(v24 + 296) == 1 )
      {
        v25 = (unsigned int)Pool2[42];
        if ( (unsigned int)v25 < *(_DWORD *)(v5 + 40) )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v25 + 3432) + 16LL);
          if ( v26 )
          {
            if ( v26 != v4 )
              Pool2[16] |= 0x80u;
          }
        }
      }
    }
  }
  v19 = *((unsigned int *)a2 + 88);
  if ( !(_DWORD)v19 )
    goto LABEL_34;
  v23 = (const void *)*((_QWORD *)a2 + 43);
  if ( (unsigned int)v19 > 4 )
  {
    v41 = *((unsigned int *)a2 + 88);
    v42 = ExAllocatePool2(64LL, 8 * v19, 1633773910LL);
    *((_QWORD *)Pool2 + 137) = v42;
    if ( v42 )
    {
      v44 = ExAllocatePool2(64LL, 16 * v41, 1633773910LL);
      *((_QWORD *)Pool2 + 36) = v44;
      if ( v44 )
        goto LABEL_53;
      ExFreePoolWithTag(*((PVOID *)Pool2 + 137), 0);
      *((_QWORD *)Pool2 + 137) = 0LL;
      _InterlockedIncrement(&dword_14008190C);
      WdLogSingleEntry1(6LL, 11771LL);
      WdLogGlobalForLineNumber = 11771;
    }
    else
    {
      _InterlockedIncrement(&dword_140081908);
      WdLogSingleEntry1(6LL, 11758LL);
      WdLogGlobalForLineNumber = 11758;
    }
    DxgkLogInternalTriageEvent(v43, 262145LL);
    return 3221225495LL;
  }
  *((_QWORD *)Pool2 + 137) = Pool2 + 48;
  *((_QWORD *)Pool2 + 36) = Pool2 + 56;
LABEL_53:
  memmove(*((void **)Pool2 + 137), v23, 8LL * *((unsigned int *)a2 + 88));
LABEL_34:
  if ( (*(_DWORD *)(v5 + 2792) & 4) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(a1, PriorityThread);
  }
  *((_QWORD *)Pool2 + 7) = MEMORY[0xFFFFF78000000320];
  v20 = (struct _VIDSCH_CONTEXT *)(Pool2 + 8);
  Pool2[13] = 3;
  v21 = (char *)a1 + 680;
  v22 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 86);
  if ( *v22 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 680) )
    goto LABEL_37;
  *((_QWORD *)v20 + 1) = v22;
  *(_QWORD *)v20 = v21;
  *v22 = v20;
  *((_QWORD *)a1 + 86) = v20;
  v34 = *((_DWORD *)a1 + 108) + 1;
  *((_DWORD *)a1 + 108) = v34;
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
    v6 = 1;
  if ( v34 > v6 )
  {
    while ( 1 )
    {
      v35 = *(__int64 **)v21;
      if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
        break;
      v36 = *v35;
      if ( *(__int64 **)(*v35 + 8) != v35 )
        break;
      *(_QWORD *)v21 = v36;
      *(_QWORD *)(v36 + 8) = v21;
      --*((_DWORD *)a1 + 108);
      VidSchiSubmitCommandPacketToQueue((__int64)(v35 - 4));
      if ( *((_DWORD *)a1 + 108) <= v6 )
        goto LABEL_79;
    }
LABEL_37:
    __fastfail(3u);
  }
LABEL_79:
  v37 = *((unsigned int *)a2 + 29);
  if ( (unsigned int)v37 < *(_DWORD *)(v5 + 40) && (*(_BYTE *)a2 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v37 + 3432) + 78944LL), v14, 1);
  return 0LL;
}
