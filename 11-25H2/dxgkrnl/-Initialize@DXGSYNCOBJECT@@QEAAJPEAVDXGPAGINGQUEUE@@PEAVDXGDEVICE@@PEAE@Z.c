/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x1401811E4
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x14001F680 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x1400379BC (-IsNativeWslProcess@DXGPROCESS@@QEBAEXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x14003959C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x140046B4C (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1400485D8 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058780 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x1401816A4 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1403EE64C (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(
        DXGSYNCOBJECT *this,
        struct DXGPAGINGQUEUE *a2,
        struct DXGDEVICE *a3,
        unsigned __int8 *a4)
{
  __int64 Pool2; // rsi
  struct DXGPROCESS *Current; // rcx
  __int64 v10; // r9
  int v11; // ecx
  void *v12; // rcx
  NTSTATUS v13; // eax
  unsigned int FenceStorageSlot; // edi
  unsigned int *v15; // rdi
  int v16; // edx
  int v17; // eax
  unsigned int *v18; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // r8
  unsigned int v21; // r9d
  VIDMM_EXPORT *v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edx
  struct DXGGLOBAL *v26; // rax
  VIDMM_EXPORT *v27; // r10
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  unsigned __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rcx
  int v36; // eax
  struct DXGPROCESS *v37; // rax
  bool Object; // [rsp+20h] [rbp-68h]
  bool v40; // [rsp+30h] [rbp-58h]
  _BYTE v41[16]; // [rsp+50h] [rbp-38h] BYREF
  PVOID v42; // [rsp+90h] [rbp+8h] BYREF

  Pool2 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current && DXGPROCESS::IsNativeWslProcess(Current) )
    *((_DWORD *)this + 103) |= 4u;
  if ( *((_DWORD *)this + 101) == 4 )
  {
    v11 = *((_DWORD *)Current + 102);
    if ( (v11 & 0x10) == 0
      && (v11 & 0x100) == 0
      && ((*((_DWORD *)this + 103) & 2) != 0 || (*((_DWORD *)this + 102) & 0x100) != 0) )
    {
      v12 = (void *)*((_QWORD *)this + 27);
      v42 = 0LL;
      v13 = ObReferenceObjectByHandle(v12, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v42, 0LL);
      FenceStorageSlot = v13;
      *((_QWORD *)this + 11) = v42;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(3LL, v13);
        WdLogGlobalForLineNumber = 1685;
        return FenceStorageSlot;
      }
    }
  }
  v15 = (unsigned int *)((char *)this + 412);
  v16 = *((_DWORD *)this + 103);
  if ( (v16 & 2) == 0 )
  {
    v17 = *((_DWORD *)this + 101);
    if ( v17 == 4 )
    {
      if ( (v16 & 4) != 0 )
      {
        if ( !*((_QWORD *)this + 27) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1698;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"WSL CPU event is NULL", 1698LL, 0LL, 0LL, 0LL, 0LL);
          return (unsigned int)-1073741811;
        }
        Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v10);
        if ( !Pool2 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1705;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
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
    v18 = (unsigned int *)((char *)this + 412);
    if ( v17 != 5 )
    {
      if ( v17 != 6 )
      {
        if ( v17 != 7 )
          goto LABEL_37;
        Global = DXGGLOBAL::GetGlobal();
        v21 = *v15;
        v40 = 1;
        v22 = (VIDMM_EXPORT *)*((_QWORD *)Global + 33);
        v23 = *((_QWORD *)this + 36);
        goto LABEL_32;
      }
      v18 = (unsigned int *)((char *)this + 412);
    }
    v24 = *((_DWORD *)this + 102);
    if ( (v24 & 0x80u) == 0 )
    {
      if ( (v24 & 4) != 0 )
        v25 = v16 & 0xFFFFFFFE;
      else
        v25 = ((unsigned __int8)v16 ^ (unsigned __int8)~(unsigned __int8)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 55)
                                                                                                + 16LL)
                                                                                    + 2464LL) >> 5)) & 1 ^ v16;
    }
    else
    {
      v25 = v16 | 1;
    }
    *v15 = v25;
    v26 = DXGGLOBAL::GetGlobal();
    v21 = *v18;
    v27 = (VIDMM_EXPORT *)*((_QWORD *)v26 + 33);
    v23 = 0LL;
    if ( *((_DWORD *)this + 101) != 6 )
      v23 = *((_QWORD *)this + 27);
    v40 = *(_BYTE *)v18 & 1;
    v22 = v27;
LABEL_32:
    LOBYTE(v20) = *((_BYTE *)this + 408) & 1;
    FenceStorageSlot = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                         v22,
                         (DXGSYNCOBJECT *)((char *)this + 128),
                         v20,
                         (v21 & 0x20) != 0,
                         Object,
                         v23,
                         v40);
    if ( (FenceStorageSlot & 0x80000000) != 0 )
      return FenceStorageSlot;
    if ( a2 )
      v28 = *((_QWORD *)a2 + 4);
    else
      v28 = 0LL;
    *((_QWORD *)this + 19) = v28;
  }
LABEL_37:
  if ( (*((_DWORD *)this + 102) & 4) != 0 )
    v29 = DXGSYNCOBJECTCA::Initialize(this);
  else
    v29 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)this + 424), this, a3, a2, a4, 0, 0);
  FenceStorageSlot = v29;
  if ( v29 < 0 )
    goto LABEL_56;
  v30 = *((_DWORD *)this + 102);
  if ( (v30 & 1) == 0 )
    goto LABEL_55;
  v31 = (v30 & 2) == 0;
  v32 = *((_DWORD *)this + 103);
  if ( !v31 )
  {
    if ( (v32 & 0x10) == 0 )
      goto LABEL_55;
    goto LABEL_46;
  }
  if ( (v32 & 0x10) != 0 )
  {
LABEL_46:
    v33 = (unsigned __int64)DXGPROCESS::GetCurrent();
    v34 = *(_DWORD *)(v33 + 408);
    if ( (v34 & 0x100) != 0 )
      v35 = *(_QWORD *)(v33 + 592);
    else
      v35 = v33 & -(__int64)((v34 & 0x80u) != 0);
    *((_DWORD *)this + 20) = DXGPROCESS::AllocHandleSafe(v35, (__int64)this, 8u);
    goto LABEL_51;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v41);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  *((_DWORD *)this + 20) = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 8u);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
LABEL_51:
  v36 = *((_DWORD *)this + 20);
  if ( !v36 )
  {
    FenceStorageSlot = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1809;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
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
    *((_DWORD *)this + 70) = v36;
LABEL_55:
  v37 = DXGPROCESS::GetCurrent();
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), v37);
  WdLogGlobalForLineNumber = 1830;
LABEL_56:
  if ( Pool2 )
  {
    DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    *((_QWORD *)this + 27) = 0LL;
  }
  return FenceStorageSlot;
}
