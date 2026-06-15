/*
 * XREFs of ?NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800DF10C
 * Callers:
 *     ?DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800DC5C8 (-DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800DEE10 (-IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18000FC0C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180027D1C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180054958 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006310C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1800DA298 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV-$function@$$A6AXXZ@.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x1800DA424 (--$_Emplace_reallocate@AEBV-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtAudioResourceManagerBase::NotifyBidirectionalModeChanged(RTL_SRWLOCK *this)
{
  __int64 v2; // rsi
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 i; // rdi
  __int128 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+28h] BYREF

  v7 = 0LL;
  v2 = 0LL;
  v8 = 0LL;
  v3 = this + 25;
  AcquireSRWLockShared(this + 25);
  v10 = v3;
  v4 = *(_QWORD *)this[30].Ptr;
  v9 = v4;
  v5 = 0LL;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( v5 == v2 )
    {
      std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)> const &>(
        (__int64 *)&v7,
        v5,
        v4 + 40);
      v2 = v8;
      v5 = *((_QWORD *)&v7 + 1);
    }
    else
    {
      std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v5, v4 + 40);
      v5 += 64LL;
      *((_QWORD *)&v7 + 1) = v5;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(&v9);
    v4 = v9;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
  for ( i = v7; i != v5; i += 64LL )
    std::_Func_class<void,>::operator()(i);
  if ( (_QWORD)v7 )
  {
    std::_Destroy_range<std::allocator<std::function<void (void)>>>(v7, v5);
    std::_Deallocate<16,0>((char *)v7, (const struct std::nothrow_t *)((v2 - v7) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
