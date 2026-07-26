/*
 * XREFs of ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x140146C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qddqqS @ 0x140099990 (WPP_RECORDER_SF_qddqqS.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ??_GNDIS_PD_FILTER@@QEAAPEAXI@Z @ 0x140144694 (--_GNDIS_PD_FILTER@@QEAAPEAXI@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDPISetReceiveFilter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_FILTER_PARAMETERS *a2,
        struct NDIS_PD_FILTER_HANDLE__ **a3)
{
  const wchar_t *v6; // r9
  int v7; // ebx
  _NDIS_PD_QUEUE *TargetReceiveQueue; // rax
  _DWORD *v9; // r13
  NDIS_PD_COUNTER_HANDLE__ *CounterHandle; // rbp
  struct NDIS_PD_FILTER_HANDLE__ *PoolWithTag; // rax
  struct NDIS_PD_FILTER_HANDLE__ *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned int HeaderGroupMatchArrayTotalSize; // eax
  size_t v15; // rbx
  void *Pool2; // rax
  int v17; // eax
  struct KPushLockBase *v18; // rdx
  struct NDIS_PD_FILTER_HANDLE__ **v19; // rcx
  _QWORD *v20; // rax
  void **v21; // rdx
  NDIS_PD_COUNTER_HANDLE__ **v22; // rdx
  NDIS_PD_COUNTER_HANDLE__ *v23; // rax
  int v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  KLockThisExclusive v27; // [rsp+60h] [rbp-48h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v6 = L" ";
    WPP_RECORDER_SF_qddqqS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      (__int64)v6,
      v25,
      (char)a1,
      a2->MatchProfileId,
      a2->Priority,
      (char)a2->TargetReceiveQueue,
      (char)a2->CounterHandle,
      v6);
  }
  if ( !*((_BYTE *)a1 + 88) )
  {
    *a3 = 0LL;
    if ( a2->Header.Type != 0x80
      || a2->Header.Revision != 1
      || a2->Header.Size < 0x3Cu
      || a2->Flags
      || !a2->MatchProfileId
      || (TargetReceiveQueue = a2->TargetReceiveQueue) == 0LL
      || (v9 = TargetReceiveQueue->PDPlatformReserved[1], CounterHandle = a2->CounterHandle, v9[38] != 1)
      || CounterHandle && *((_DWORD *)CounterHandle + 14) != 3 )
    {
      v7 = -1073741811;
      goto LABEL_40;
    }
    PoolWithTag = (struct NDIS_PD_FILTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6641444Eu);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_40;
    }
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_QWORD *)PoolWithTag + 11) = 0LL;
    *((_QWORD *)PoolWithTag + 12) = 0LL;
    *((_QWORD *)PoolWithTag + 13) = 0LL;
    *((_QWORD *)PoolWithTag + 14) = 0LL;
    *((_DWORD *)PoolWithTag + 30) = 0;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *((_QWORD *)PoolWithTag + 10) = 0LL;
    *((_QWORD *)PoolWithTag + 9) = 0LL;
    v13 = a2->HeaderGroupMatchArrayNumElements * (unsigned __int64)a2->HeaderGroupMatchArrayElementSize;
    if ( v13 > 0xFFFFFFFF
      || (HeaderGroupMatchArrayTotalSize = a2->HeaderGroupMatchArrayTotalSize,
          (unsigned int)v13 > HeaderGroupMatchArrayTotalSize) )
    {
      v7 = -1073741811;
      goto LABEL_37;
    }
    if ( HeaderGroupMatchArrayTotalSize )
    {
      v15 = HeaderGroupMatchArrayTotalSize;
      Pool2 = (void *)ExAllocatePool2(66LL, HeaderGroupMatchArrayTotalSize, 1715553358);
      *((_QWORD *)v12 + 13) = Pool2;
      if ( !Pool2 )
      {
        v7 = -1073741670;
LABEL_37:
        NDIS_PD_FILTER::`scalar deleting destructor'((NDIS_PD_FILTER *)v12);
        goto LABEL_40;
      }
      *(_DWORD *)(v12 + 28) = a2->HeaderGroupMatchArrayNumElements;
      *(_DWORD *)(v12 + 29) = a2->HeaderGroupMatchArrayElementSize;
      *(_DWORD *)(v12 + 30) = a2->HeaderGroupMatchArrayTotalSize;
      memmove(Pool2, a2->HeaderGroupMatchArray, v15);
    }
    if ( CounterHandle )
      a2->CounterHandle = (NDIS_PD_COUNTER_HANDLE__ *)*((_QWORD *)CounterHandle + 6);
    v17 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, struct NDIS_PD_FILTER_HANDLE__ *))(*((_QWORD *)a1 + 10) + 64LL))(
            *((_QWORD *)a1 + 9),
            a2,
            v12 + 8);
    v7 = v17;
    if ( CounterHandle )
      a2->CounterHandle = CounterHandle;
    if ( v17 < 0 )
      goto LABEL_37;
    v18 = qword_140127008;
    *((_QWORD *)v12 + 2) = a1;
    *(_DWORD *)(v12 + 22) = a2->MatchProfileId;
    *(_DWORD *)(v12 + 23) = a2->Priority;
    *((_QWORD *)v12 + 12) = a2->RxFilterContext;
    KLockThisExclusive::KLockThisExclusive(&v27, v18);
    v19 = (struct NDIS_PD_FILTER_HANDLE__ **)*((_QWORD *)a1 + 23);
    if ( *v19 == (struct NDIS_PD_FILTER_HANDLE__ *)(a1 + 44) )
    {
      *(_QWORD *)v12 = a1 + 44;
      *((_QWORD *)v12 + 1) = v19;
      *v19 = v12;
      *((_QWORD *)a1 + 23) = v12;
      v20 = v12 + 18;
      v21 = (void **)*((_QWORD *)v9 + 27);
      if ( *v21 == v9 + 52 )
      {
        *v20 = v9 + 52;
        *((_QWORD *)v12 + 10) = v21;
        *v21 = v20;
        *((_QWORD *)v9 + 27) = v20;
        if ( !CounterHandle )
        {
LABEL_34:
          KLockHolder::~KLockHolder(&v27);
          *a3 = v12;
          goto LABEL_40;
        }
        *((_QWORD *)v12 + 5) = CounterHandle;
        v22 = (NDIS_PD_COUNTER_HANDLE__ **)*((_QWORD *)CounterHandle + 10);
        v23 = (NDIS_PD_COUNTER_HANDLE__ *)(v12 + 12);
        if ( *v22 == CounterHandle + 18 )
        {
          *(_QWORD *)v23 = CounterHandle + 18;
          *((_QWORD *)v12 + 7) = v22;
          *v22 = v23;
          *((_QWORD *)CounterHandle + 10) = v23;
          ++*((_DWORD *)CounterHandle + 22);
          goto LABEL_34;
        }
      }
    }
    __fastfail(3u);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_FILTER_PARAMETERS *, struct NDIS_PD_FILTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 64LL))(
         *((_QWORD *)a1 + 9),
         a2,
         a3);
  if ( v7 >= 0 )
    *((_QWORD *)*a3 + 3) = a1;
LABEL_40:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v26) = v7;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x31u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)*a3,
      v26);
  }
  return (unsigned int)v7;
}
