/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A1504
 * Callers:
 *     ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x1800701D4 (-Initialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18007CE04 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D2FD8 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D72CC (-RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIC.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EAC98 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800EF5D8 (-SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180119C08 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x18012EF34 (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18016151C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1800C5784 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 __fastcall std::wstring::assign(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  char *v7; // rdi
  const void *v8; // rdx

  if ( a3 > *(_QWORD *)(a1 + 24) )
    return std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
             a1,
             a3,
             a3,
             a2);
  v4 = (char *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1, a2);
  v6 = 2 * v5;
  *(_QWORD *)(a1 + 16) = v5;
  v7 = v4;
  memmove_0(v4, v8, 2 * v5);
  *(_WORD *)&v7[v6] = 0;
  return a1;
}
