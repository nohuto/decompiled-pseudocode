/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403354B4
 * Callers:
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x14031E194 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334CA4 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14037DFF0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x14038128C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  __int64 v2; // rax
  char *v5; // rdi
  struct _KTHREAD **v6; // rsi
  bool v7; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  _BYTE v11[8]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v12; // [rsp+58h] [rbp-70h]
  __int64 v13; // [rsp+60h] [rbp-68h]
  char v14; // [rsp+68h] [rbp-60h]
  __int64 v15; // [rsp+70h] [rbp-58h]

  v2 = *((_QWORD *)a2 + 2);
  v13 = v2;
  v14 = 0;
  v15 = 0LL;
  if ( v2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 24));
    v12 = -1LL;
  }
  v5 = (char *)a2 + 72;
  v6 = (struct _KTHREAD **)((char *)a2 + 80);
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    v7 = (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() == 0;
    CurrentThread = KeGetCurrentThread();
    if ( v7 )
    {
      *v6 = CurrentThread;
    }
    else
    {
      v6 = (struct _KTHREAD **)(v5 + 8);
      *((_QWORD *)v5 + 1) = CurrentThread;
    }
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL));
    if ( !v9 )
      break;
    if ( !*(_DWORD *)(v9 + 56) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2702;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pAdapterInfo->AdapterInfoReferenceCount > 0",
        2702LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v7 = (*(_DWORD *)(v9 + 56))-- == 1;
    if ( !v7 )
      break;
    if ( a2 != *(struct ADAPTER_RENDER **)(v9 + 80) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2705;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pRenderCore == pAdapterInfo->pRenderCore",
        2705LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_BYTE *)(v9 + 109) || DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)a2 + 2)) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v9);
      break;
    }
    ++*(_DWORD *)(v9 + 56);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      v6 = (struct _KTHREAD **)(v5 + 8);
    *v6 = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::AcquireShared((COREACCESS *)v11, 0LL);
  }
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    *((_QWORD *)v5 + 1) = 0LL;
  else
    *v6 = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v11, v10);
}
