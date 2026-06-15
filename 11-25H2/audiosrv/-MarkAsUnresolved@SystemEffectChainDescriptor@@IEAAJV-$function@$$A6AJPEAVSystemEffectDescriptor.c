/*
 * XREFs of ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003E6BC
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003D98C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D25C (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectChainDescriptor::MarkAsUnresolved(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = operator new(0x50uLL);
  v6 = v4;
  if ( v4 )
  {
    try
    {
      *(_OWORD *)v4 = 0LL;
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
      std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>((__int64)(v4 + 4), a2);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      v10 = *(_QWORD *)(a2 + 56);
      if ( v10 )
      {
        LOBYTE(v11) = v10 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v11);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      return 2147942414LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = v6 + 4;
  v7 = *(std::_Ref_count_base **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  *(_DWORD *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 20) = 1;
  v8 = *(_QWORD *)(a2 + 56);
  if ( v8 )
  {
    LOBYTE(v5) = v8 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return 0LL;
}
