/*
 * XREFs of ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800DF1FC
 * Callers:
 *     wil::details::lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___::_lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___ @ 0x1800DAEA0 (wil--details--lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___--_lambda_call__lambda_bc5d.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DC434 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEA.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E0B04 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180054958 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006310C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800DA2D0 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x1800DA534 (--$_Emplace_reallocate@AEBV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     ??$construct@V?$function@$$A6AX_N@Z@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@1@QEAV?$function@$$A6AX_N@Z@1@AEBV31@@Z @ 0x1800DAB30 (--$construct@V-$function@$$A6AX_N@Z@std@@AEBV12@@-$_Default_allocator_traits@V-$allocator@V-$fun.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtAudioResourceManagerBase::NotifyStreamChange(RTL_SRWLOCK *this, char a2)
{
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  char *v10; // rdi
  __int64 i; // r14
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v16; // [rsp+80h] [rbp+40h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = this + 25;
  AcquireSRWLockShared(this + 25);
  v16 = v5;
  v7 = *(_QWORD *)this[27].Ptr;
  v15 = v7;
  v8 = 0LL;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    v9 = v7 + 40;
    if ( v8 == v4 )
    {
      std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> const &>(
        (__int64 *)&v13,
        v8,
        v9);
      v4 = v14;
      v8 = *((_QWORD *)&v13 + 1);
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<std::function<void (bool)>>>::construct<std::function<void (bool)>,std::function<void (bool)> const &>(
        v6,
        v8,
        v9);
      v8 += 64LL;
      *((_QWORD *)&v13 + 1) = v8;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(&v15);
    v7 = v15;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
  v10 = (char *)v13;
  for ( i = v13; i != v8; i += 64LL )
  {
    LOBYTE(v15) = a2;
    v12 = *(_QWORD *)(i + 56);
    if ( !v12 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800DF30CLL);
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, &v15);
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>((__int64)v10, v8);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v4 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
