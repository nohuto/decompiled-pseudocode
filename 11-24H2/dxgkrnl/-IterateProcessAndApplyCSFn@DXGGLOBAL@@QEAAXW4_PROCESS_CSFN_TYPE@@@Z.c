/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402E5C64
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1402E5B40 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140015E68 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140038670 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140039DBC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402E5F68 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // r14
  _QWORD *i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *j; // rbx
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  char v18; // [rsp+68h] [rbp-18h]
  _BYTE v19[16]; // [rsp+70h] [rbp-10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v19);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v16[1] = v16;
  v4 = a1 + 432;
  v16[0] = v16;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 432, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 448));
  v5 = (_QWORD *)(a1 + 416);
  for ( i = *(_QWORD **)(a1 + 416); i != v5 && i && i != (_QWORD *)8; i = (_QWORD *)*i )
  {
    DXGPROCESS::AcquireReference((DXGPROCESS *)(i - 1));
    v7 = (_QWORD *)operator new(0x18uLL, 0x4B677844u, 256LL);
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 655;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"IterateProcessAndApplyCSFn: Failed to allocate ProcessListEntry",
        655LL,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
    }
    *v7 = i - 1;
    v8 = v16[0];
    v9 = v7 + 1;
    if ( *(_QWORD **)(v16[0] + 8LL) != v16 )
LABEL_21:
      __fastfail(3u);
    *v9 = v16[0];
    v9[1] = v16;
    *(_QWORD *)(v8 + 8) = v9;
    v16[0] = v9;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  for ( j = (_QWORD *)v16[0]; j != v16; j = (_QWORD *)*j )
  {
    v11 = *(j - 1);
    v12 = v11 == -104;
    v13 = v11 + 104;
    v18 = 0;
    v17 = v13;
    if ( v12 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v13 = v17;
    }
    if ( *(struct _KTHREAD **)(v13 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v17);
    DXGPROCESS::ApplyCsFunction(*(j - 1), a2);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v17);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v17);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  while ( 1 )
  {
    v14 = v16[0];
    if ( (_QWORD *)v16[0] == v16 )
      break;
    if ( *(_QWORD **)(v16[0] + 8LL) != v16 )
      goto LABEL_21;
    v15 = *(_QWORD *)v16[0];
    if ( *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) != v16[0] )
      goto LABEL_21;
    v16[0] = *(_QWORD *)v16[0];
    *(_QWORD *)(v15 + 8) = v16;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v14 - 8));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)(v14 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
}
