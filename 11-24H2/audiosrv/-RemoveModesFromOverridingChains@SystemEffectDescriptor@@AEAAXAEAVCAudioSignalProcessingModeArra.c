/*
 * XREFs of ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18003A35C
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039C00 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?RemoveAt@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800A2448 (-RemoveAt@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualH.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800A2FC4 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

void __fastcall SystemEffectDescriptor::RemoveModesFromOverridingChains(
        SystemEffectDescriptor *this,
        unsigned __int64 i)
{
  int v2; // esi
  struct CAudioSignalProcessingModeArray *v3; // rbp
  __int64 v5; // r14
  int v6; // ecx
  int v7; // ebx
  __int64 v8; // r9
  signed int v9; // edx
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v2 = 0;
  v3 = (struct CAudioSignalProcessingModeArray *)i;
  if ( *((int *)this + 10) > 0 )
  {
    v5 = 0LL;
    do
    {
      v6 = *((_DWORD *)v3 + 2);
      if ( v6 > 0 )
      {
        v7 = 0;
        if ( v5 >= 0 )
        {
          while ( v2 < *((_DWORD *)this + 10) )
          {
            v8 = *(_QWORD *)(v5 + *((_QWORD *)this + 4));
            if ( v7 < 0 || v7 >= v6 )
            {
              ATL::_AtlRaiseException(0xC000008C, i);
              __debugbreak();
            }
            v14 = (_QWORD *)(*(_QWORD *)v3 + 16LL * v7);
            for ( i = 0LL; (int)i < *(_DWORD *)(v8 + 8); i = (unsigned int)(i + 1) )
            {
              v12 = (_QWORD *)(*(_QWORD *)v8 + 16LL * (int)i);
              v13 = *v12 - *v14;
              if ( *v12 == *v14 )
                v13 = v12[1] - v14[1];
              if ( !v13 )
              {
                if ( (_DWORD)i != -1 )
                  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v8, i);
                break;
              }
            }
            v6 = *((_DWORD *)v3 + 2);
            if ( ++v7 >= v6 )
              goto LABEL_9;
          }
        }
        ATL::_AtlRaiseException(0xC000008C, i);
        __debugbreak();
      }
LABEL_9:
      ++v2;
      v5 += 16LL;
    }
    while ( v2 < *((_DWORD *)this + 10) );
  }
LABEL_10:
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  while ( v10 < *((int *)this + 10) )
  {
    if ( v11 < 0 || v9 >= *((_DWORD *)this + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, v9);
      __debugbreak();
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v11 + *((_QWORD *)this + 4)) + 8LL) )
    {
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAt((char *)this + 32);
      goto LABEL_10;
    }
    ++v9;
    ++v10;
    v11 += 16LL;
  }
}
