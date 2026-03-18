/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x140183508
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1402FA1CC (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140013690 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x14003725C (-IsNativeWslProcess@DXGPROCESS@@QEBAEXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1400391D4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x14004651C (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x140047A60 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058200 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x1401839C8 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1403E887C (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(
        DXGSYNCOBJECT *this,
        struct DXGPAGINGQUEUE *a2,
        struct DXGDEVICE *a3,
        unsigned __int8 *a4)
{
  __int64 Pool2; // rsi
  struct DXGPROCESS *Current; // rcx
  int v10; // ecx
  void *v11; // rcx
  NTSTATUS v12; // eax
  unsigned int FenceStorageSlot; // edi
  unsigned int *v14; // rdi
  int v15; // edx
  int v16; // eax
  unsigned int *v17; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // r8
  unsigned int v20; // r9d
  VIDMM_EXPORT *v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // edx
  struct DXGGLOBAL *v25; // rax
  VIDMM_EXPORT *v26; // r10
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  unsigned __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rcx
  int v35; // eax
  struct DXGPROCESS *v36; // rax
  bool Object; // [rsp+20h] [rbp-68h]
  bool v39; // [rsp+30h] [rbp-58h]
  _BYTE v40[16]; // [rsp+50h] [rbp-38h] BYREF
  PVOID v41; // [rsp+90h] [rbp+8h] BYREF

  Pool2 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current && DXGPROCESS::IsNativeWslProcess(Current) )
    *((_DWORD *)this + 103) |= 4u;
  if ( *((_DWORD *)this + 101) == 4 )
  {
    v10 = *((_DWORD *)Current + 102);
    if ( (v10 & 0x10) == 0
      && (v10 & 0x100) == 0
      && ((*((_DWORD *)this + 103) & 2) != 0 || (*((_DWORD *)this + 102) & 0x100) != 0) )
    {
      v11 = (void *)*((_QWORD *)this + 27);
      v41 = 0LL;
      v12 = ObReferenceObjectByHandle(v11, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v41, 0LL);
      FenceStorageSlot = v12;
      *((_QWORD *)this + 11) = v41;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(3LL, v12);
        WdLogGlobalForLineNumber = 1685;
        return FenceStorageSlot;
      }
    }
  }
  v14 = (unsigned int *)((char *)this + 412);
  v15 = *((_DWORD *)this + 103);
  if ( (v15 & 2) == 0 )
  {
    v16 = *((_DWORD *)this + 101);
    if ( v16 == 4 )
    {
      if ( (v15 & 4) != 0 )
      {
        if ( !*((_QWORD *)this + 27) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1698;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"WSL CPU event is NULL", 1698LL, 0LL, 0LL, 0LL, 0LL);
          return (unsigned int)-1073741811;
        }
        Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
        if ( !Pool2 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1705;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
            1705LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)-1073741801;
        }
        *(_QWORD *)(Pool2 + 8) = *((_QWORD *)this + 27);
        *(_BYTE *)(Pool2 + 17) = 1;
        *(_BYTE *)(Pool2 + 19) = 1;
        *((_QWORD *)this + 27) = Pool2;
        DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
      }
      goto LABEL_37;
    }
    v17 = (unsigned int *)((char *)this + 412);
    if ( v16 != 5 )
    {
      if ( v16 != 6 )
      {
        if ( v16 != 7 )
          goto LABEL_37;
        Global = DXGGLOBAL::GetGlobal();
        v20 = *v14;
        v39 = 1;
        v21 = (VIDMM_EXPORT *)*((_QWORD *)Global + 33);
        v22 = *((_QWORD *)this + 36);
        goto LABEL_32;
      }
      v17 = (unsigned int *)((char *)this + 412);
    }
    v23 = *((_DWORD *)this + 102);
    if ( (v23 & 0x80u) == 0 )
    {
      if ( (v23 & 4) != 0 )
        v24 = v15 & 0xFFFFFFFE;
      else
        v24 = ((unsigned __int8)v15 ^ (unsigned __int8)~(unsigned __int8)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 55)
                                                                                                + 16LL)
                                                                                    + 2464LL) >> 5)) & 1 ^ v15;
    }
    else
    {
      v24 = v15 | 1;
    }
    *v14 = v24;
    v25 = DXGGLOBAL::GetGlobal();
    v20 = *v17;
    v26 = (VIDMM_EXPORT *)*((_QWORD *)v25 + 33);
    v22 = 0LL;
    if ( *((_DWORD *)this + 101) != 6 )
      v22 = *((_QWORD *)this + 27);
    v39 = *(_BYTE *)v17 & 1;
    v21 = v26;
LABEL_32:
    LOBYTE(v19) = *((_BYTE *)this + 408) & 1;
    FenceStorageSlot = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                         v21,
                         (DXGSYNCOBJECT *)((char *)this + 128),
                         v19,
                         (v20 & 0x20) != 0,
                         Object,
                         v22,
                         v39);
    if ( (FenceStorageSlot & 0x80000000) != 0 )
      return FenceStorageSlot;
    if ( a2 )
      v27 = *((_QWORD *)a2 + 4);
    else
      v27 = 0LL;
    *((_QWORD *)this + 19) = v27;
  }
LABEL_37:
  if ( (*((_DWORD *)this + 102) & 4) != 0 )
    v28 = DXGSYNCOBJECTCA::Initialize(this);
  else
    v28 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)this + 424), this, a3, a2, a4, 0, 0);
  FenceStorageSlot = v28;
  if ( v28 < 0 )
    goto LABEL_56;
  v29 = *((_DWORD *)this + 102);
  if ( (v29 & 1) == 0 )
    goto LABEL_55;
  v30 = (v29 & 2) == 0;
  v31 = *((_DWORD *)this + 103);
  if ( !v30 )
  {
    if ( (v31 & 0x10) == 0 )
      goto LABEL_55;
    goto LABEL_46;
  }
  if ( (v31 & 0x10) != 0 )
  {
LABEL_46:
    v32 = (unsigned __int64)DXGPROCESS::GetCurrent();
    v33 = *(_DWORD *)(v32 + 408);
    if ( (v33 & 0x100) != 0 )
      v34 = *(_QWORD *)(v32 + 592);
    else
      v34 = v32 & -(__int64)((v33 & 0x80u) != 0);
    *((_DWORD *)this + 20) = DXGPROCESS::AllocHandleSafe(v34, (__int64)this, 8u);
    goto LABEL_51;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v40);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  *((_DWORD *)this + 20) = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 8u);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
LABEL_51:
  v35 = *((_DWORD *)this + 20);
  if ( !v35 )
  {
    FenceStorageSlot = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1809;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"SyncObj 0x%I64x: Unable to create synchronization object handle, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_56;
  }
  if ( *((_DWORD *)this + 101) != 7 )
    *((_DWORD *)this + 70) = v35;
LABEL_55:
  v36 = DXGPROCESS::GetCurrent();
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), v36);
  WdLogGlobalForLineNumber = 1830;
LABEL_56:
  if ( Pool2 )
  {
    DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    *((_QWORD *)this + 27) = 0LL;
  }
  return FenceStorageSlot;
}
