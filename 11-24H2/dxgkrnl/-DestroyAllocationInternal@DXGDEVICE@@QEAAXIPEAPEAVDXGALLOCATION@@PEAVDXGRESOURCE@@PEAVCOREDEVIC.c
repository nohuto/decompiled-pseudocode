/*
 * XREFs of ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC
 * Callers:
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x14018A6B4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140197118 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1401B9A4C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E44AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x140218B10 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x140281EF4 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1402CC71C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1402CC920 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402CD408 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x140304ED8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403506F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x140351948 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140353EC0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x140354890 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140354F2C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x140052C74 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x14022A12C (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140336F2C (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140337BD4 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  int v7; // r12d
  __int64 v8; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r13
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  struct DXGALLOCATION *v19; // rdi
  __int64 v20; // rdx
  struct DXGALLOCATION *v21; // rsi
  struct DXGRESOURCE *v22; // rsi
  _QWORD *v23; // rax
  struct DXGALLOCATION *v24; // r9
  _QWORD *v25; // rax
  struct DXGALLOCATION *v26; // r9
  __int64 v27; // [rsp+50h] [rbp-58h] BYREF
  char v28; // [rsp+58h] [rbp-50h]
  _BYTE v29[8]; // [rsp+60h] [rbp-48h] BYREF
  char *v30; // [rsp+68h] [rbp-40h]
  int v31; // [rsp+70h] [rbp-38h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v32; // [rsp+B0h] [rbp+8h]

  v7 = 0;
  v8 = a2;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6644;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
      6644LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v12 + 209) )
  {
    v32 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v12 + 4664);
    if ( a4 )
      v7 = *((_DWORD *)a4 + 5);
    v13 = *((_DWORD *)this + 118);
    v14 = (__int64)a4 + 20;
    if ( !a4 )
      v14 = 20LL;
    Current = DXGPROCESS::GetCurrent(v12);
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(v32, *((_DWORD *)Current + 122), v13, v7, v8, a3, a6, a5);
    if ( a4 )
      *(_DWORD *)v14 = 0;
    if ( (_DWORD)v8 )
    {
      v16 = a3;
      v17 = v8;
      do
      {
        v18 = (__int64)*v16++;
        *(_BYTE *)(v18 + 128) &= ~4u;
        --v17;
      }
      while ( v17 );
    }
  }
  if ( a4 )
  {
    DXGDEVICE::TerminateAllocations(this, a4, 1, *((struct DXGALLOCATION **)a4 + 3), (struct COREDEVICEACCESS *)a5, a6);
  }
  else
  {
    v31 = 0;
    v30 = (char *)this + 208;
    v19 = 0LL;
    if ( this != (DXGDEVICE *)-208LL && *((struct _KTHREAD **)this + 27) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1512LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v27 = 0LL;
    v28 = 0;
    if ( (_DWORD)v8 && *a3 && (v20 = *((_QWORD *)*a3 + 5)) != 0 )
    {
      DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v27, (struct DXGFASTMUTEX *const)(v20 + 80), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
    }
    else
    {
      DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 208));
      v31 = 2;
    }
    if ( (_DWORD)v8 )
    {
      do
      {
        v21 = *a3;
        if ( *a3 )
        {
          DXGDEVICE::RemoveAllocationFromList(this, *a3, 1);
          *((_QWORD *)v21 + 8) = v19;
          v19 = v21;
        }
        else
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8776;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pAllocation != NULL", 8776LL, 0LL, 0LL, 0LL, 0LL);
        }
        ++a3;
        --v8;
      }
      while ( v8 );
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    if ( v19 )
    {
      v22 = (struct DXGRESOURCE *)*((_QWORD *)v19 + 5);
      if ( v22 )
      {
        do
        {
          v23 = (_QWORD *)((char *)v19 + 64);
          v24 = v19;
          v19 = (struct DXGALLOCATION *)*((_QWORD *)v19 + 8);
          *v23 = 0LL;
          DXGDEVICE::TerminateAllocations(this, v22, 0, v24, (struct COREDEVICEACCESS *)a5, a6);
        }
        while ( v19 );
      }
      else
      {
        do
        {
          v25 = (_QWORD *)((char *)v19 + 64);
          v26 = v19;
          v19 = (struct DXGALLOCATION *)*((_QWORD *)v19 + 8);
          *v25 = 0LL;
          DXGDEVICE::TerminateAllocations(this, 0LL, 0, v26, (struct COREDEVICEACCESS *)a5, a6);
        }
        while ( v19 );
      }
    }
  }
}
