/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402CEA6C
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE23C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x140322E94 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x14036CF30 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  __int64 v2; // rax
  char *v5; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  _BYTE v9[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  __int64 v11; // [rsp+60h] [rbp-58h]
  char v12; // [rsp+68h] [rbp-50h]
  __int64 v13; // [rsp+70h] [rbp-48h]

  v2 = *((_QWORD *)a2 + 2);
  v11 = v2;
  v12 = 0;
  v13 = 0LL;
  if ( v2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 24));
    v10 = -1LL;
  }
  v5 = (char *)a2 + 72;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL));
    if ( !v7 )
      break;
    if ( !*(_DWORD *)(v7 + 56) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2703;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pAdapterInfo->AdapterInfoReferenceCount > 0",
        2703LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(v7 + 56))-- != 1 )
      break;
    if ( a2 != *(struct ADAPTER_RENDER **)(v7 + 80) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2706;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pRenderCore == pAdapterInfo->pRenderCore",
        2706LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_BYTE *)(v7 + 109) || DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)a2 + 2)) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v7);
      break;
    }
    ++*(_DWORD *)(v7 + 56);
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::AcquireShared((COREACCESS *)v9, 0LL);
  }
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v9, v8);
}
