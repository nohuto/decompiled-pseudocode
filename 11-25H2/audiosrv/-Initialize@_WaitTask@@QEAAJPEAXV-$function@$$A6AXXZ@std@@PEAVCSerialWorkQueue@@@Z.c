/*
 * XREFs of ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18001DCA4
 * Callers:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001DB1C (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D25C (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _WaitTask::Initialize(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  unsigned int v10; // edi
  HANDLE CurrentProcess; // rbx
  HANDLE v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  signed int LastError; // eax

  *(_QWORD *)(a1 + 32) = a4;
  v7 = operator new(0x50uLL);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
    std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>((__int64)(v7 + 4), a3);
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = v8 + 4;
  v9 = *(std::_Ref_count_base **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v10 = 0;
    CurrentProcess = GetCurrentProcess();
    v12 = GetCurrentProcess();
    if ( !DuplicateHandle(v12, a2, CurrentProcess, (LPHANDLE)(a1 + 24), 0, 0, 2u) )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  v13 = *(__int64 **)(a3 + 56);
  if ( v13 )
  {
    v14 = *v13;
    LOBYTE(v14) = v13 != (__int64 *)a3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v13 + 32))(v13, v14);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return v10;
}
