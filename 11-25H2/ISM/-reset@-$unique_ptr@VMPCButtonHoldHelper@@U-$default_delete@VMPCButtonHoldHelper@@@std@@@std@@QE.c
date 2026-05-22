/*
 * XREFs of ?reset@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800C37C0
 * Callers:
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1240 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C36C0 (-Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801B58C0 (-Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801B9220 (-Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x1800BF240 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

__int64 (__fastcall ***__fastcall std::unique_ptr<MPCButtonHoldHelper>::reset(_QWORD *a1, __int64 a2))(_QWORD, __int64)
{
  __int64 (__fastcall ***result)(_QWORD, __int64); // rax

  result = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = a2;
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64))std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(
                                                        (__int64)a1,
                                                        result);
  return result;
}
