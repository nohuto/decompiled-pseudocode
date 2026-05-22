/*
 * XREFs of ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800C16F0
 * Callers:
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800C1710 (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C2170 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801B307C (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801B45F0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801B6F3C (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801B77B0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VMPCSlateDeadzoneHelper@@@std@@QEBAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800C1A28 (--R-$default_delete@VMPCSlateDeadzoneHelper@@@std@@QEBAXPEAVMPCSlateDeadzoneHelper@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCSlateDeadzoneHelper>::operator()();
  return result;
}
