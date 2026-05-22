/*
 * XREFs of ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800BF510
 * Callers:
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800BF530 (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800BFFE0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801BA5AC (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801BBB20 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801BE46C (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801BECE0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VMPCSlateDeadzoneHelper@@@std@@QEBAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800BF848 (--R-$default_delete@VMPCSlateDeadzoneHelper@@@std@@QEBAXPEAVMPCSlateDeadzoneHelper@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCSlateDeadzoneHelper>::operator()();
  return result;
}
