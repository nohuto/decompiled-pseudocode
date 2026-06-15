/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A4F1C
 * Callers:
 *     ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180083134 (-Initialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18008AFF0 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D088C (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800E684C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800EA720 (-SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180111DA8 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x180127028 (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18015876C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1800C62A0 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
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
  v4 = (char *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1);
  v6 = 2 * v5;
  *(_QWORD *)(a1 + 16) = v5;
  v7 = v4;
  memmove_0(v4, v8, 2 * v5);
  *(_WORD *)&v7[v6] = 0;
  return a1;
}
