/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082958
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C730 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x1800828F0 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180118C60 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1801192E0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x18011A3E8 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001DDF0 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180057750 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$?0VWorkItem@CWorkFifo@@$0A@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFifo@@@Z @ 0x180117A38 (--$-0VWorkItem@CWorkFifo@@$0A@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFi.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180118E9C (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180118EF0 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x18011AE88 (-push_back@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWorkFifo::ScheduleWorkItem(PTP_WORK *this, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v21; // [rsp+28h] [rbp-60h]
  _BYTE v22[88]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct _Mtx_internal_imp_t *v24; // [rsp+90h] [rbp+8h]

  v4 = (struct _Mtx_internal_imp_t *)(this + 18);
  v24 = (struct _Mtx_internal_imp_t *)(this + 18);
  std::_Mutex_base::lock((std::_Mutex_base *)(this + 18));
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(this + 17) )
  {
    v5 = CWorkFifo::Initialize((CWorkFifo *)this);
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)(unsigned int)v5);
LABEL_4:
      _Mtx_unlock(v4);
      v9 = *(_QWORD *)(a2 + 56);
      if ( v9 )
      {
        LOBYTE(v8) = v9 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      return v7;
    }
    wil::details::ResetEvent(this[22], v6);
    v11 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
    }
    std::shared_ptr<CWorkFifo::WorkItem>::shared_ptr<CWorkFifo::WorkItem>(&v20, v11);
    if ( !v20 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      _Mtx_unlock(v4);
      v13 = *(_QWORD *)(a2 + 56);
      if ( v13 )
      {
        LOBYTE(v12) = v13 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      return 2147942414LL;
    }
    v14 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v22, a2);
    v15 = CWorkFifo::WorkItem::Initialize(v20, v14);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)(unsigned int)v15);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      goto LABEL_4;
    }
    try
    {
      std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::push_back(this + 12, &v20);
      if ( this[16] == (PTP_WORK)1 && !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 137) )
        SubmitThreadpoolWork(this[2]);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      _Mtx_unlock(v24);
      v19 = *(_QWORD *)(a2 + 56);
      if ( v19 )
      {
        LOBYTE(v18) = v19 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v18);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      return 2147942414LL;
    }
  }
  _Mtx_unlock(v4);
  v17 = *(_QWORD *)(a2 + 56);
  if ( v17 )
  {
    LOBYTE(v16) = v17 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v16);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return 0LL;
}
