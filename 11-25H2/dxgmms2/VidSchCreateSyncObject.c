/*
 * XREFs of VidSchCreateSyncObject @ 0x1400F9A30
 * Callers:
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400911C8 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400F94D8 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x14003AF08 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x14003AFC0 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x14003B07C (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x140044398 (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1400454B8 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x140047600 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x14004AD54 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     DxgkAcquireGuestCpuEvent @ 0x14004BC7C (DxgkAcquireGuestCpuEvent.c)
 *     VidMmAllocateFenceStorageSlot @ 0x1400FA270 (VidMmAllocateFenceStorageSlot.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        int *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        _OWORD *a8,
        __int64 a9,
        _OWORD *a10)
{
  __int64 v10; // r14
  int *v15; // rcx
  int v16; // r15d
  __int64 Pool2; // rax
  __int64 v18; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  unsigned int v23; // ecx
  bool v24; // al
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  bool v28; // zf
  __int64 result; // rax
  __int64 v30; // r9
  const EVENT_DESCRIPTOR *v31; // rdx
  char v32; // al
  __int64 v33; // r8
  int FenceStorageSlot; // eax
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // ebx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  _OWORD *v41; // rax
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rcx
  void *v45; // rcx
  NTSTATUS v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  v10 = a9;
  if ( a3 )
  {
    if ( !a9 )
      goto LABEL_3;
    v37 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10611;
LABEL_58:
    DxgkLogInternalTriageEvent(v44, 0x40000LL);
    return v37;
  }
  if ( !a9 )
  {
    v37 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10618;
    goto LABEL_58;
  }
LABEL_3:
  v15 = (int *)(a9 + 16);
  *a7 = 0LL;
  if ( !v10 )
    v15 = a3 + 1;
  v16 = *v15;
  Pool2 = ExAllocatePool2(64LL, (*v15 & 4) != 0 ? 320LL : 240LL, 945908054LL);
  v18 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 10641;
    return result;
  }
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_DWORD *)Pool2 = 945908054;
  *(_DWORD *)(Pool2 + 36) = 1;
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 52) = a4;
  *(_BYTE *)(Pool2 + 24) = v16 & 1;
  *(_BYTE *)(Pool2 + 27) = v16 < 0;
  *(_BYTE *)(Pool2 + 28) = (v16 & 4) != 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v20 = *((_DWORD *)Current + 102) >> 8;
    if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
      *(_BYTE *)(v18 + 32) = 1;
    if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
      *(_WORD *)(v18 + 32) = 257;
  }
  if ( !a3 )
  {
    v28 = *(_DWORD *)(a2 + 404) == 5;
    *(_DWORD *)(v18 + 48) = 6;
    *(_BYTE *)(v18 + 57) = v28;
    *(_BYTE *)(v18 + 30) = *(_BYTE *)(a2 + 412) & 1;
    v38 = a8;
    v39 = a8[1];
    *(_OWORD *)(v18 + 64) = *a8;
    v40 = v38[2];
    v41 = a10;
    *(_OWORD *)(v18 + 80) = v39;
    *(_OWORD *)(v18 + 96) = v40;
    v42 = v41[1];
    *(_OWORD *)(v18 + 112) = *v41;
    v43 = v41[2];
    *(_OWORD *)(v18 + 128) = v42;
    *(_OWORD *)(v18 + 144) = v43;
    goto LABEL_19;
  }
  v22 = *a3;
  v20 = (unsigned int)(*a3 - 1);
  if ( *a3 == 1 )
  {
    *(_DWORD *)(v18 + 48) = 0;
    *(_BYTE *)(v18 + 25) = 0;
    if ( a3[2] )
    {
      *(_QWORD *)(v18 + 64) = 0LL;
      *(_QWORD *)(v18 + 72) = 0LL;
    }
    else
    {
      *(_QWORD *)(v18 + 64) = -1LL;
      *(_QWORD *)(v18 + 72) = -1LL;
    }
    goto LABEL_19;
  }
  if ( *a3 != 2 )
  {
    v20 = (unsigned int)(*a3 - 3);
    if ( *a3 == 3 )
    {
      v36 = *((_QWORD *)a3 + 1);
      *(_QWORD *)(v18 + 64) = v36;
      *(_QWORD *)(v18 + 72) = v36;
      *(_QWORD *)(v18 + 80) = v36;
      *(_DWORD *)(v18 + 48) = 2;
      *(_BYTE *)(v18 + 25) = 1;
    }
    else
    {
      if ( *a3 != 4 )
      {
        if ( (unsigned int)(*a3 - 5) > 1 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 10819;
          v37 = -1073741811;
        }
        else
        {
          v23 = a3[1];
          *(_BYTE *)(v18 + 25) = 1;
          v21 = (unsigned __int8)v23 & 0x80;
          *(_DWORD *)(v18 + 48) = 5 - (v22 != 6);
          v24 = (v23 & 0x80) != 0;
          v20 = v23 >> 10;
          LOBYTE(v20) = v20 & 1;
          *(_BYTE *)(v18 + 31) = v24;
          v25 = a8;
          *(_BYTE *)(v18 + 26) = v20;
          if ( v25 )
          {
            v26 = v25[1];
            *(_OWORD *)(v18 + 64) = *v25;
            v27 = v25[2];
            v28 = *(_DWORD *)(a2 + 404) == 7;
            *(_BYTE *)(v18 + 30) = *(_BYTE *)(a2 + 412) & 1;
            *(_OWORD *)(v18 + 80) = v26;
            *(_BYTE *)(v18 + 56) = v28;
            *(_OWORD *)(v18 + 96) = v27;
            goto LABEL_19;
          }
          if ( *(_BYTE *)(a1 + 48) || (v32 = 0, (_DWORD)v21) )
            v32 = 1;
          *(_BYTE *)(v18 + 30) = v32;
          v33 = 0LL;
          if ( v22 != 6 )
            v33 = *((_QWORD *)a3 + 1);
          FenceStorageSlot = VidMmAllocateFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(v18 + 64), v33, v32);
          if ( FenceStorageSlot >= 0 )
          {
            *(_QWORD *)(v18 + 88) = a6;
            goto LABEL_19;
          }
          v37 = FenceStorageSlot;
        }
        goto LABEL_51;
      }
      if ( (a3[1] & 1) != 0 )
      {
        v37 = -1073741811;
        WdLogSingleEntry1(1LL, -1073741811LL);
        WdLogGlobalForLineNumber = 10735;
        DxgkLogInternalTriageEvent(v48, 0x40000LL);
        goto LABEL_51;
      }
      v45 = (void *)*((_QWORD *)a3 + 1);
      *(_DWORD *)(v18 + 48) = 3;
      *(_BYTE *)(v18 + 25) = 0;
      if ( *(_BYTE *)(v18 + 32) )
      {
        *(_QWORD *)(v18 + 72) = v45;
        DxgkAcquireGuestCpuEvent();
      }
      else
      {
        Object = 0LL;
        v46 = ObReferenceObjectByHandle(v45, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v20 = (__int64)Object;
        *(_QWORD *)(v18 + 64) = Object;
        v37 = v46;
        if ( v46 < 0 )
        {
          WdLogSingleEntry1(3LL, v46);
          WdLogGlobalForLineNumber = 10764;
LABEL_51:
          ExFreePoolWithTag((PVOID)v18, 0);
          return v37;
        }
      }
    }
LABEL_19:
    *(_QWORD *)(v18 + 184) = v18 + 176;
    *(_QWORD *)(v18 + 176) = v18 + 176;
    *(_QWORD *)(v18 + 200) = v18 + 192;
    *(_QWORD *)(v18 + 192) = v18 + 192;
    *(_QWORD *)(v18 + 232) = v18 + 224;
    *(_QWORD *)(v18 + 224) = v18 + 224;
    if ( *(_BYTE *)(v18 + 28) )
    {
      *(_QWORD *)(v18 + 304) = a5;
      *(_QWORD *)(v18 + 312) = VidSchPostCrossAdapterSignal;
      VidSchiAddSyncObjectToAdapterList(a1, v18);
      VidSchiAddSyncObjectToCrossAdapterInfo(v18);
    }
    *a7 = v18;
    if ( v10 )
    {
      if ( (byte_140081241 & 1) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0pptqx_EtwWriteTransfer(
          v20,
          &EventCreateNativeFence,
          v21,
          *(_QWORD *)(a1 + 16),
          v18,
          HandleInformation,
          *(_DWORD *)(v10 + 16),
          *(_QWORD *)v10);
      }
      return 0LL;
    }
    if ( !bTracingEnabled )
      return 0LL;
    v30 = *(_QWORD *)(a1 + 16);
    if ( *a3 == 1 )
    {
      if ( (byte_140081241 & 1) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpt_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventCreateSynchronizationMutex,
          0LL,
          v30,
          v18,
          HandleInformation,
          a3[1],
          (unsigned int)a3[18],
          a3[2]);
      }
      return 0LL;
    }
    if ( *a3 == 2 )
    {
      if ( (byte_140081241 & 1) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventCreateSemaphore,
          0LL,
          v30,
          v18,
          HandleInformation,
          a3[1],
          (unsigned int)a3[18],
          a3[2],
          a3[3]);
      }
      return 0LL;
    }
    if ( *a3 == 3 )
    {
      if ( (byte_140081241 & 1) == 0 )
        return 0LL;
      v31 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
    }
    else
    {
      if ( *a3 == 4 )
      {
        if ( (byte_140081241 & 1) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpx_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateCPUNotification,
            0LL,
            v30,
            v18,
            HandleInformation,
            a3[1],
            (unsigned int)a3[18],
            *((_QWORD *)a3 + 1));
        }
        return 0LL;
      }
      if ( *a3 != 5 )
      {
        if ( *a3 == 6 )
        {
          if ( (byte_140081241 & 1) != 0 )
          {
            LODWORD(HandleInformation) = 0;
            McTemplateK0ppqqppqi_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventCreatePeriodicMonitoredFence,
              0LL,
              v30,
              v18,
              HandleInformation,
              a3[1],
              (unsigned int)a3[18],
              (unsigned int)a3[2],
              a3[3],
              *((_QWORD *)a3 + 2));
          }
        }
        else
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1053;
          DxgkLogInternalTriageEvent(v49, 262146LL);
        }
        return 0LL;
      }
      if ( (byte_140081241 & 1) == 0 )
        return 0LL;
      v31 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
    }
    LODWORD(HandleInformation) = 0;
    McTemplateK0ppqqpx_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      v31,
      0LL,
      v30,
      v18,
      HandleInformation,
      a3[1],
      (unsigned int)a3[18],
      *((_QWORD *)a3 + 1));
    return 0LL;
  }
  v35 = a3[3];
  v20 = (unsigned int)a3[2];
  if ( v35 <= (unsigned int)v20 )
  {
    *(_DWORD *)(v18 + 48) = 1;
    *(_BYTE *)(v18 + 25) = 0;
    *(_DWORD *)(v18 + 64) = v35;
    *(_DWORD *)(v18 + 72) = v35;
    *(_DWORD *)(v18 + 68) = v20;
    goto LABEL_19;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 10713;
  DxgkLogInternalTriageEvent(v47, 0x40000LL);
  ExFreePoolWithTag((PVOID)v18, 0);
  return -1073741811LL;
}
