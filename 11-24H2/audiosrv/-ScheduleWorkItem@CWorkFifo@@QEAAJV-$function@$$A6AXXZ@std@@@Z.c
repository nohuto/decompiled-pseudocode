/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180070498
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18004DCF0 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180070430 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180120910 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180120F60 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180122068 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18001FE80 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180027D1C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B3D80 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$?0VWorkItem@CWorkFifo@@$0A@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFifo@@@Z @ 0x18011F6E8 (--$-0VWorkItem@CWorkFifo@@$0A@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFi.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x180120B4C (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180120BA0 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x180122B08 (-push_back@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWorkFifo::ScheduleWorkItem(PTP_WORK *this, __int64 a2)
{
  __int64 v2; // r14
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // esi
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-60h]
  _BYTE v16[88]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct _Mtx_internal_imp_t *v18; // [rsp+90h] [rbp+8h]

  v2 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(this + 18);
  v18 = (struct _Mtx_internal_imp_t *)(this + 18);
  std::_Mutex_base::lock((std::_Mutex_base *)(this + 18));
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(this + 17) )
    goto LABEL_17;
  v5 = CWorkFifo::Initialize((CWorkFifo *)this);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
      (const char *)(unsigned int)v5);
    goto LABEL_18;
  }
  wil::details::ResetEvent(this[22], v6);
  v8 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
  }
  std::shared_ptr<CWorkFifo::WorkItem>::shared_ptr<CWorkFifo::WorkItem>(&v14, v8);
  v9 = v14;
  if ( !v14 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
      (const char *)0x8007000ELL);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
LABEL_22:
    v7 = -2147024882;
    goto LABEL_18;
  }
  v10 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v16, v2);
  v11 = CWorkFifo::WorkItem::Initialize(v9, v10);
  v7 = v11;
  if ( v11 >= 0 )
  {
    try
    {
      std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::push_back(this + 12, &v14);
      if ( this[16] == (PTP_WORK)1 && !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 137) )
        SubmitThreadpoolWork(this[2]);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        (const char *)0x8007000ELL);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      v4 = v18;
      v2 = a2;
      goto LABEL_22;
    }
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
    (const char *)(unsigned int)v11);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
LABEL_18:
  _Mtx_unlock(v4);
  std::_Func_class<void,>::_Tidy(v2, v12);
  return v7;
}
