/*
 * XREFs of ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800378F8
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18003D5F4 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003D98C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18004AC70 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004E050 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800378C0 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800A6B9C (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

_DWORD *__fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(_DWORD *a1, __int64 *a2)
{
  int v2; // edi
  __int64 *v3; // rsi
  void *v5; // rax
  int v6; // eax
  int v7; // ebp
  __int64 v8; // r14
  int v9; // edi
  __int64 v10; // r15
  unsigned int v11; // edi
  __int64 v12; // rax
  _OWORD *v13; // rax
  bool v15; // sf

  v2 = a1[2];
  v3 = a2;
  if ( v2 == *((_DWORD *)a2 + 2) )
  {
    while ( v2 > 0 )
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(a1, (unsigned int)--v2);
  }
  else
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
    v5 = calloc(*((int *)v3 + 2), 0x10uLL);
    *(_QWORD *)a1 = v5;
    if ( v5 )
      a1[3] = *((_DWORD *)v3 + 2);
  }
  v6 = *((_DWORD *)v3 + 2);
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 < 0 || v7 >= v6 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
        JUMPOUT(0x180037A11LL);
      }
      v9 = a1[2];
      v10 = *v3;
      if ( v9 != a1[3] )
        goto LABEL_14;
      if ( a1[3] )
      {
        v15 = (v9 & 0x40000000) != 0;
        v11 = 2 * v9;
        if ( v15 )
          goto LABEL_17;
      }
      else
      {
        v11 = 1;
      }
      LODWORD(a2) = v11;
      if ( v11 <= 0x7FFFFFFuLL )
      {
        v12 = _o__recalloc(*(_QWORD *)a1, v11, 16LL);
        if ( v12 )
        {
          a1[3] = v11;
          *(_QWORD *)a1 = v12;
LABEL_14:
          v13 = (_OWORD *)(*(_QWORD *)a1 + 16LL * (int)a1[2]);
          if ( v13 )
            *v13 = *(_OWORD *)(v8 + v10);
          ++a1[2];
        }
      }
LABEL_17:
      v6 = *((_DWORD *)v3 + 2);
      ++v7;
      v8 += 16LL;
    }
    while ( v7 < v6 );
  }
  return a1;
}
