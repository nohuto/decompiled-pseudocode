/*
 * XREFs of ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x14037A398
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x140052FC4 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140349B48 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsAndTransferToList(
        DXGDEVICE *this,
        struct DXGALLOCATION **a2,
        unsigned int a3,
        struct DXGALLOCATION **a4)
{
  struct _KTHREAD **v4; // rbx
  __int64 v5; // rsi
  __int64 v9; // rdx
  struct DXGALLOCATION *v10; // rbx
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+58h] [rbp-30h]
  _BYTE v13[8]; // [rsp+60h] [rbp-28h] BYREF
  char *v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+70h] [rbp-18h]

  v15 = 0;
  v4 = (struct _KTHREAD **)((char *)this + 208);
  v5 = a3;
  v14 = (char *)this + 208;
  if ( this != (DXGDEVICE *)-208LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v4[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v11 = 0LL;
  v12 = 0;
  if ( (_DWORD)v5 && *a2 && (v9 = *((_QWORD *)*a2 + 5)) != 0 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v11, (struct DXGFASTMUTEX *const)(v9 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11);
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v4);
    v15 = 2;
  }
  if ( (_DWORD)v5 )
  {
    do
    {
      v10 = *a2;
      if ( *a2 )
      {
        DXGDEVICE::RemoveAllocationFromList(this, *a2, 1);
        *((_QWORD *)v10 + 8) = *a4;
        *a4 = v10;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8531;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAllocation != NULL", 8531LL, 0LL, 0LL, 0LL, 0LL);
      }
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v11);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
}
