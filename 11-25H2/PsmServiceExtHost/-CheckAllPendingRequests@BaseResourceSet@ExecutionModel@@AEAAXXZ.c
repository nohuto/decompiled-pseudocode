/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800129D0
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011CF0 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C08C (CempListEntryIsNull.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180011EBC (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800123D0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180012E80 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180012EA8 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180012ECC (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18001F300 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002BC84 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18005F3C4 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18006B75C (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800739B8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18008DF38 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18008E408 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::_ResourceInfo *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  struct _RM_PARTITION **v5; // rsi
  __int64 v6; // rdi
  _QWORD *i; // rdx
  volatile signed __int64 *v8; // r9
  signed __int64 *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  _QWORD *v12; // rbx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *j; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  _BYTE *v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // rcx
  signed __int64 v22; // r14
  signed __int64 v23; // rax
  bool v24; // cc
  signed __int64 v25; // rax
  _DWORD *v26; // rbx
  bool v27; // zf
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v30[32]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v31[1136]; // [rsp+98h] [rbp-70h] BYREF

  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(v29);
  v2 = (ExecutionModel::_ResourceInfo *)v31;
  v3 = 47LL;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v2);
    v2 = (ExecutionModel::_ResourceInfo *)((char *)v2 + 24);
    --v3;
  }
  while ( v3 );
  if ( *((_DWORD *)this + 4) == 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 128LL);
    v5 = *(struct _RM_PARTITION ***)(v4 + 376);
    memset_0(v5, 0, 8LL * *(unsigned int *)(v4 + 384));
    RtlAcquireSRWLockShared(v4 + 312);
    v6 = 0LL;
    for ( i = *(_QWORD **)(v4 + 328); i != (_QWORD *)(v4 + 328); i = (_QWORD *)*i )
    {
      v8 = i - 1;
      if ( (i[29] & 3) == 1 )
      {
        if ( _InterlockedIncrement64(v8) <= 1 )
          __fastfail(0xEu);
        v5[v6] = (struct _RM_PARTITION *)v8;
        v6 = (unsigned int)(v6 + 1);
      }
    }
    RtlReleaseSRWLockShared(v4 + 312);
    if ( (_DWORD)v6 )
    {
      do
      {
        v9 = (signed __int64 *)*v5;
        ExecutionModel::ResourceSet::ProcessPendingRequestList(*v5, 0LL);
        _m_prefetchw(v9);
        v10 = *v9;
        while ( v10 - 1 > 0 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64(v9, v10 - 1, v10);
          if ( v11 == v10 )
            goto LABEL_13;
        }
        if ( v10 != 1 )
          __fastfail(0xEu);
        v22 = v9[3];
        RtlAcquireSRWLockExclusive(v22 + 312);
        *(_DWORD *)(v22 + 320) = GetCurrentThreadId();
        v23 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
        v24 = v23 <= 1;
        v25 = v23 - 1;
        if ( v24 )
        {
          if ( v25 )
            __fastfail(0xEu);
          if ( (unsigned int)CempListEntryIsNull(v9 + 1) )
          {
            RmpPartitionCleanup((struct _RM_PARTITION *)v9);
            HampFreeHeap(v9);
          }
          else
          {
            *((_DWORD *)v9 + 60) = v9[30] & 0xFFFFFFFC | 2;
            SetEvent((HANDLE)v9[8]);
          }
        }
        *(_DWORD *)(v22 + 320) = 0;
        RtlReleaseSRWLockExclusive(v22 + 312);
LABEL_13:
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    for ( j = (_QWORD *)*((_QWORD *)this + 5); j != (_QWORD *)((char *)this + 40); j = (_QWORD *)*j )
    {
      v26 = (_DWORD *)j[2];
      if ( v26 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 8LL))(j[2]);
      if ( v26[320] == 1 && (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(v29, v26) < 0 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
        goto LABEL_14;
      }
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v12 = (_QWORD *)v29[0];
    if ( (_QWORD *)v29[0] == v29 )
      goto LABEL_15;
    while ( v12 != v29 )
    {
      v16 = v12[2];
      utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(v30);
      v17 = v16 + 144;
      LOWORD(v28) = 0;
      v18 = v31;
      v19 = 8LL;
      do
      {
        v18 += 128;
        v20 = *(_OWORD *)v17;
        v17 += 128LL;
        *((_OWORD *)v18 - 8) = v20;
        *((_OWORD *)v18 - 7) = *(_OWORD *)(v17 - 112);
        *((_OWORD *)v18 - 6) = *(_OWORD *)(v17 - 96);
        *((_OWORD *)v18 - 5) = *(_OWORD *)(v17 - 80);
        *((_OWORD *)v18 - 4) = *(_OWORD *)(v17 - 64);
        *((_OWORD *)v18 - 3) = *(_OWORD *)(v17 - 48);
        *((_OWORD *)v18 - 2) = *(_OWORD *)(v17 - 32);
        *((_OWORD *)v18 - 1) = *(_OWORD *)(v17 - 16);
        --v19;
      }
      while ( v19 );
      *(_OWORD *)v18 = *(_OWORD *)v17;
      *((_OWORD *)v18 + 1) = *(_OWORD *)(v17 + 16);
      *((_OWORD *)v18 + 2) = *(_OWORD *)(v17 + 32);
      *((_OWORD *)v18 + 3) = *(_OWORD *)(v17 + 48);
      *((_OWORD *)v18 + 4) = *(_OWORD *)(v17 + 64);
      *((_OWORD *)v18 + 5) = *(_OWORD *)(v17 + 80);
      *((_QWORD *)v18 + 12) = *(_QWORD *)(v17 + 96);
      if ( (int)ExecutionModel::BaseResourceSet::CheckResourceAvailability(
                  (_DWORD)this,
                  47,
                  (unsigned int)v31,
                  *(_DWORD *)(v16 + 8),
                  *(_DWORD *)(v16 + 1288),
                  1,
                  (__int64)&v28 + 1,
                  (__int64)&v28,
                  (__int64)v30) < 0 )
      {
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v30);
        break;
      }
      if ( (_BYTE)v28 )
      {
        if ( BYTE1(v28) )
        {
          ExecutionModel::BaseResourceSet::RevokeResourceList(v21, v30);
        }
        else
        {
          LOWORD(v28) = 0;
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            (_DWORD)this,
            1,
            47,
            (unsigned int)v31,
            *(_DWORD *)(v16 + 8),
            1,
            (__int64)&v28,
            (__int64)&v28 + 1,
            0LL,
            v16);
          v27 = (*(_BYTE *)(v16 + 1352) & 2) == 0;
          *(_DWORD *)(v16 + 1280) = 2;
          if ( v27 )
            ExecutionModel::ExternalResourceSet::QueueMessage(v16, 0LL);
        }
      }
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v30);
      v12 = (_QWORD *)*v12;
    }
  }
LABEL_14:
  v12 = (_QWORD *)v29[0];
LABEL_15:
  while ( v12 != v29 )
  {
    v13 = (_QWORD *)v12[1];
    v14 = (_QWORD *)*v12;
    *v13 = *v12;
    v14[1] = v13;
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(v12 + 2);
    operator delete(v12);
    v12 = (_QWORD *)v29[0];
  }
}
