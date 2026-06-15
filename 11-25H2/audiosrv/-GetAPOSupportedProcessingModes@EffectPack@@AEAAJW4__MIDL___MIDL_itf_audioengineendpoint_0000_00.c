/*
 * XREFs of ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180037A18
 * Callers:
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18012D76C (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall EffectPack::GetAPOSupportedProcessingModes(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  int v4; // edi
  __int64 *v6; // rbx
  BOOL v7; // eax
  int v8; // r8d

  v4 = a2;
  if ( (unsigned __int64)(int)a2 >= *(_QWORD *)(a1 + 1456) )
  {
    _o_terminate(a1, a2);
    __debugbreak();
    JUMPOUT(0x180037A90LL);
  }
  v6 = (__int64 *)(*(_QWORD *)(a1 + 1464) + 96LL * (int)a2);
  if ( a3 == 1
    || (v7 = CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(a1 + 1584)), v8 = 0, v7)
    || v4 == 3 )
  {
    v8 = 1;
  }
  return SystemEffectDescriptor::GetSupportedProcessingModes(v6, a4, v8);
}
