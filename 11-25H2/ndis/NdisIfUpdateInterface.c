/*
 * XREFs of NdisIfUpdateInterface @ 0x1400CFF70
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14004BEA0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400CF8F0 (--1-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1-Re.c)
 *     ?acquire_kspin_lock@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@@1@PEA_K@Z @ 0x1400CF954 (-acquire_kspin_lock@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEB.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@QEAAXUkspin_lock_saved_irql@23@@Z @ 0x1400CFE54 (-reset@-$unique_storage@U-$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$.c)
 *     ??$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA?AV?$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U?$KFreePool@UNDIS_IF_UPDATE_CONTEXT@@@@@wistd@@K@Z @ 0x140152518 (--$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA-AV-$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U-$KFreePoo.c)
 */

__int64 __fastcall NdisIfUpdateInterface(ULONG_PTR BugCheckParameter4, int a2)
{
  KIRQL CurrentIrql; // al
  struct _WORK_QUEUE_ITEM *v5; // rbx
  struct _NDIS_IF_BLOCK *Interface; // rax
  struct _NDIS_IF_BLOCK *v8; // rsi
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  if ( !BugCheckParameter4
    || (void *)BugCheckParameter4 == qword_1401275E0
    || (void *)BugCheckParameter4 == qword_1401275D8 )
  {
    ndisBugCheckEx(0x34uLL, 4uLL, 1uLL, BugCheckParameter4);
  }
  if ( KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    ndisBugCheckEx(0x2EuLL, 3uLL, CurrentIrql, 0LL);
  }
  MakePoolPtr<NDIS_IF_UPDATE_CONTEXT>(&P);
  v5 = (struct _WORK_QUEUE_ITEM *)P;
  if ( !P )
    return 3221225626LL;
  wil::acquire_kspin_lock(&v10);
  Interface = ndisIfFindInterface(a2);
  v8 = Interface;
  if ( Interface )
  {
    if ( Interface->ProviderHandle == (struct _NDIS_IF_PROVIDER_BLOCK *)BugCheckParameter4 )
    {
      if ( Interface->IsUpdatePending )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)Interface->RefCountTracker;
        Interface->IsUpdatePending = 1;
        NdisReferenceWithTag(RefCountTracker, 0x11u);
        *(_QWORD *)&v11 = 0LL;
        ++v8->Ref;
        BYTE8(v11) = 0;
        wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::reset(
          &v10,
          &v11);
        v5[1].List.Flink = (_LIST_ENTRY *)v8;
        v5->List.Flink = 0LL;
        v5->WorkerRoutine = (void (__fastcall *)(void *))ndisIfUpdateExternalInterface;
        v5->Parameter = v5;
        ExQueueWorkItem(v5, CustomPriorityWorkQueue|MaximumWorkQueue);
        wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
      }
      return 0LL;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 3221225485LL;
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64 *,void (wil::details::kspin_lock_saved_irql const &),&public: static void wil::details::kspin_lock_saved_irql::Release(wil::details::kspin_lock_saved_irql const &),wistd::integral_constant<unsigned __int64,2>,wil::details::kspin_lock_saved_irql,unsigned __int64 *,0,std::nullptr_t>>(&v10);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return 3223519275LL;
  }
}
