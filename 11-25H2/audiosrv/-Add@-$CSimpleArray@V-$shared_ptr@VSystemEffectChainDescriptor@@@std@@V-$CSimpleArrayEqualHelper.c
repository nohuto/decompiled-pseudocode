/*
 * XREFs of ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003E350
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003D98C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // esi
  int v4; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  _DWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  bool v12; // sf

  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v2 != v4 )
  {
    v8 = (_DWORD *)(a1 + 8);
    goto LABEL_7;
  }
  if ( v4 )
  {
    v12 = (v2 & 0x40000000) != 0;
    v6 = 2 * v2;
    if ( v12 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( v6 > 0x7FFFFFFuLL )
    return 0LL;
  v7 = _o__recalloc(*(_QWORD *)a1, v6, 16LL);
  if ( !v7 )
    return 0LL;
  *(_QWORD *)a1 = v7;
  v8 = (_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v6;
LABEL_7:
  v9 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v10 = a2[1];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *v9 = *a2;
    v9[1] = a2[1];
  }
  ++*v8;
  return 1LL;
}
