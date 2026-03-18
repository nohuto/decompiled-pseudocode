/*
 * XREFs of VidSchDestroySyncObject @ 0x1400B2F30
 * Callers:
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x140091130 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400B2ED0 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x14003AF08 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x14003AFC0 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x14003B07C (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003B290 (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchTimeoutSyncObject @ 0x14003D658 (VidSchTimeoutSyncObject.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x140047600 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x14004AD54 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VidSchDestroySyncObject(struct _VIDSCH_SYNC_OBJECT *P, __int64 a2)
{
  __int64 v3; // r8
  int v4; // esi
  __int64 v5; // r9
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  const EVENT_DESCRIPTOR *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+40h] [rbp-21h]
  int v22; // [rsp+48h] [rbp-19h]
  __int64 v23; // [rsp+48h] [rbp-19h]
  int v24; // [rsp+48h] [rbp-19h]
  __int64 v25; // [rsp+48h] [rbp-19h]
  int v26; // [rsp+50h] [rbp-11h]
  int v27; // [rsp+50h] [rbp-11h]
  __int64 v28; // [rsp+58h] [rbp-9h]
  _QWORD v29[10]; // [rsp+68h] [rbp+7h] BYREF

  if ( P )
  {
    if ( *((_BYTE *)P + 26) )
      UnwaitCpuWaitersHelper(P);
    if ( *((int *)P + 9) > 1 )
      VidSchTimeoutSyncObject(P);
    v3 = *((_QWORD *)P + 2);
    v4 = *((_DWORD *)P + 12);
    if ( v3 )
    {
      if ( v4 == 6 || *((_BYTE *)P + 56) )
      {
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0pptqx_EtwWriteTransfer(
            (__int64)P,
            &EventDestroyNativeFence,
            v3,
            *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
            P,
            1,
            *(_DWORD *)(v3 + 304),
            *(_QWORD *)(v3 + 288));
        goto LABEL_16;
      }
      if ( !bTracingEnabled )
      {
LABEL_16:
        VidSchiReleaseSyncObjectReference((char *)P, a2);
        return 0LL;
      }
      v5 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v3 + 208) != 1 )
      {
        if ( *(_DWORD *)(v3 + 208) != 2 )
        {
          if ( *(_DWORD *)(v3 + 208) != 3 )
          {
            if ( *(_DWORD *)(v3 + 208) != 4 )
            {
              if ( *(_DWORD *)(v3 + 208) == 5 )
              {
                if ( (byte_140081241 & 1) == 0 )
                  goto LABEL_16;
                v23 = *(_QWORD *)(v3 + 216);
                v10 = *(_DWORD *)(v3 + 212);
                v20 = *(unsigned int *)(v3 + 280);
                goto LABEL_40;
              }
              if ( *(_DWORD *)(v3 + 208) == 6 )
              {
                if ( (byte_140081241 & 1) == 0 )
                  goto LABEL_16;
                v16 = *(unsigned int *)(v3 + 216);
                v17 = *(unsigned int *)(v3 + 280);
                v28 = *(_QWORD *)(v3 + 224);
                v27 = *(_DWORD *)(v3 + 220);
                v18 = *(_DWORD *)(v3 + 212);
LABEL_55:
                McTemplateK0ppqqppqi_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventDestroyPeriodicMonitoredFence,
                  0LL,
                  v5,
                  P,
                  1,
                  v18,
                  v17,
                  v16,
                  v27,
                  v28);
                goto LABEL_16;
              }
              goto LABEL_59;
            }
            if ( (byte_140081241 & 1) == 0 )
              goto LABEL_16;
            v25 = *(_QWORD *)(v3 + 216);
            v15 = *(_DWORD *)(v3 + 212);
            v21 = *(unsigned int *)(v3 + 280);
            goto LABEL_48;
          }
          if ( (byte_140081241 & 1) == 0 )
            goto LABEL_16;
          v23 = *(_QWORD *)(v3 + 216);
          v10 = *(_DWORD *)(v3 + 212);
          v20 = *(unsigned int *)(v3 + 280);
          goto LABEL_36;
        }
        if ( (byte_140081241 & 1) == 0 )
          goto LABEL_16;
        v7 = *(unsigned int *)(v3 + 280);
        v26 = *(_DWORD *)(v3 + 220);
        v22 = *(_DWORD *)(v3 + 216);
        v8 = *(_DWORD *)(v3 + 212);
        goto LABEL_19;
      }
      if ( (byte_140081241 & 1) == 0 )
        goto LABEL_16;
      v12 = *(unsigned int *)(v3 + 280);
      v24 = *(_DWORD *)(v3 + 216);
      v13 = *(_DWORD *)(v3 + 212);
    }
    else
    {
      memset(v29, 0, sizeof(v29));
      if ( v4 == 4 )
      {
        v9 = 4294962295LL;
        a2 = 5LL;
        v29[1] = 4294962295LL;
      }
      else
      {
        v9 = v29[1];
        a2 = 3LL;
      }
      LODWORD(v29[0]) = a2;
      if ( !bTracingEnabled )
        goto LABEL_16;
      v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8LL) + 16LL);
      a2 = (unsigned int)(a2 - 1);
      if ( (_DWORD)a2 )
      {
        a2 = (unsigned int)(a2 - 1);
        if ( (_DWORD)a2 )
        {
          a2 = (unsigned int)(a2 - 1);
          if ( (_DWORD)a2 )
          {
            a2 = (unsigned int)(a2 - 1);
            if ( (_DWORD)a2 )
            {
              a2 = (unsigned int)(a2 - 1);
              if ( !(_DWORD)a2 )
              {
                if ( (byte_140081241 & 1) == 0 )
                  goto LABEL_16;
                v23 = v9;
                v20 = LODWORD(v29[9]);
                v10 = HIDWORD(v29[0]);
LABEL_40:
                v14 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
                goto LABEL_41;
              }
              if ( (_DWORD)a2 == 1 )
              {
                if ( (byte_140081241 & 1) == 0 )
                  goto LABEL_16;
                v16 = LODWORD(v29[1]);
                v17 = LODWORD(v29[9]);
                v28 = v29[2];
                v27 = HIDWORD(v29[1]);
                v18 = HIDWORD(v29[0]);
                goto LABEL_55;
              }
LABEL_59:
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1053;
              DxgkLogInternalTriageEvent(v19, 262146LL);
              goto LABEL_16;
            }
            if ( (byte_140081241 & 1) == 0 )
              goto LABEL_16;
            v25 = v9;
            v21 = LODWORD(v29[9]);
            v15 = HIDWORD(v29[0]);
LABEL_48:
            McTemplateK0ppqqpx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventDestroyCPUNotification,
              0LL,
              v5,
              P,
              1,
              v15,
              v21,
              v25);
            goto LABEL_16;
          }
          if ( (byte_140081241 & 1) == 0 )
            goto LABEL_16;
          v23 = v9;
          v20 = LODWORD(v29[9]);
          v10 = HIDWORD(v29[0]);
LABEL_36:
          v14 = (const EVENT_DESCRIPTOR *)&EventDestroyFence;
LABEL_41:
          McTemplateK0ppqqpx_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, v14, 0LL, v5, P, 1, v10, v20, v23);
          goto LABEL_16;
        }
        if ( (byte_140081241 & 1) == 0 )
          goto LABEL_16;
        v7 = LODWORD(v29[9]);
        v26 = HIDWORD(v29[1]);
        v22 = v29[1];
        v8 = HIDWORD(v29[0]);
LABEL_19:
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventDestroySemaphore,
          0LL,
          v5,
          P,
          1,
          v8,
          v7,
          v22,
          v26);
        goto LABEL_16;
      }
      if ( (byte_140081241 & 1) == 0 )
        goto LABEL_16;
      v12 = LODWORD(v29[9]);
      v24 = v29[1];
      v13 = HIDWORD(v29[0]);
    }
    McTemplateK0ppqqpt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      &EventDestroySynchronizationMutex,
      0LL,
      v5,
      P,
      1,
      v13,
      v12,
      v24);
    goto LABEL_16;
  }
  WdLogSingleEntry1(1LL, -1073741811LL);
  WdLogGlobalForLineNumber = 10994;
  DxgkLogInternalTriageEvent(v11, 0x40000LL);
  return 3221225485LL;
}
