/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180026200
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x180025FC4 (-StateCheckExpiredCallback@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180022D4C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Move_unchecked@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180026374 (--$_Move_unchecked@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800263DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x1800A370C (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_cfbb0c6987d5abcf9ababb9f7de24ee3___ @ 0x1800C2284 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IAudioPr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rax
  const char *v5; // r9
  __int64 v6; // rbx
  __int64 *v7; // rbx
  _QWORD *v8; // r14
  __int64 *v9; // rdi
  _QWORD *v10; // r15
  const struct std::nothrow_t *v11; // rdx
  void *v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v15 = v2;
  v3 = *((_QWORD *)this + 89);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(&v16, v12);
  try
  {
    v4 = (_QWORD *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_cfbb0c6987d5abcf9ababb9f7de24ee3___();
    if ( *v4 != v3 )
    {
      v6 = std::_Move_unchecked<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *>(
             v3,
             *((_QWORD *)this + 89),
             *v4);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
        v6,
        *((_QWORD *)this + 89));
      *((_QWORD *)this + 89) = v6;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    v7 = (__int64 *)v12[0];
    v8 = v12[0];
    v9 = (__int64 *)v12[1];
    v10 = v12[1];
    while ( v8 != v10 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v8 + 32LL))(
        *v8,
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      ++v8;
      v9 = (__int64 *)v12[1];
      v7 = (__int64 *)v12[0];
    }
    if ( v7 )
    {
      if ( v7 != v9 )
      {
        do
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v7++);
        while ( v7 != v9 );
        v7 = (__int64 *)v12[0];
      }
      v11 = (const struct std::nothrow_t *)(8 * ((v13 - (__int64)v7) >> 3));
      v16 = (unsigned __int64)v11;
      v15 = v7;
      if ( (unsigned __int64)v11 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v15, &v16);
        v7 = (__int64 *)v15;
        v11 = (const struct std::nothrow_t *)v16;
      }
      operator delete(v7, v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x784,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      v5);
  }
}
