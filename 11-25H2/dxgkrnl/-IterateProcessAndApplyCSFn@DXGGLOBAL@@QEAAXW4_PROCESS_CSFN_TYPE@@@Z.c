/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402EC0C4
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1402EBFA0 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402EC3C4 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // r14
  _QWORD *i; // rbx
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *j; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  char v17; // [rsp+68h] [rbp-18h]
  _BYTE v18[16]; // [rsp+70h] [rbp-10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v18);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v15[1] = v15;
  v4 = a1 + 432;
  v15[0] = v15;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 432, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 448));
  v5 = (_QWORD *)(a1 + 416);
  for ( i = *(_QWORD **)(a1 + 416); i != v5 && i && i != (_QWORD *)8; i = (_QWORD *)*i )
  {
    DXGPROCESS::AcquireReference((DXGPROCESS *)(i - 1));
    v8 = (_QWORD *)operator new(0x18uLL, 0x4B677844u, 256LL, v7);
    if ( !v8 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 655;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"IterateProcessAndApplyCSFn: Failed to allocate ProcessListEntry",
        655LL,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
    }
    *v8 = i - 1;
    v9 = v15[0];
    v10 = v8 + 1;
    if ( *(_QWORD **)(v15[0] + 8LL) != v15 )
LABEL_21:
      __fastfail(3u);
    *v10 = v15[0];
    v10[1] = v15;
    *(_QWORD *)(v9 + 8) = v10;
    v15[0] = v10;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  for ( j = (_QWORD *)v15[0]; j != v15; j = (_QWORD *)*j )
  {
    v12 = *(j - 1);
    v17 = 0;
    v16 = v12 + 104;
    if ( v12 == -104 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _KTHREAD **)(v16 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v16);
    DXGPROCESS::ApplyCsFunction(*(j - 1), a2);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v16);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v16);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  while ( 1 )
  {
    v13 = v15[0];
    if ( (_QWORD *)v15[0] == v15 )
      break;
    if ( *(_QWORD **)(v15[0] + 8LL) != v15 )
      goto LABEL_21;
    v14 = *(_QWORD *)v15[0];
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 8LL) != v15[0] )
      goto LABEL_21;
    v15[0] = *(_QWORD *)v15[0];
    *(_QWORD *)(v14 + 8) = v15;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v13 - 8));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)(v13 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
}
