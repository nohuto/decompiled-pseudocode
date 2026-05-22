/*
 * XREFs of ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C0750
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800C1730 (-reset@-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QE.c)
 *     ?reset@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800C1754 (-reset@-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@s.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C4FC8 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::Uninitialize3DComponents(MPCGamepadProcessor *this)
{
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 530, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 531, 0LL);
  std::unique_ptr<MPCSlateDeadzoneHelper>::reset((_QWORD *)this + 532, 0LL);
  MPCInputProviderBase::ClearInputTargets((MPCGamepadProcessor *)((char *)this - 24));
  *((_BYTE *)this + 3547) = 0;
}
