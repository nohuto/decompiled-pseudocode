/*
 * XREFs of ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BCF1C
 * Callers:
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BCF3C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800BF530 (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800BFFE0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801BA5AC (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801BBB20 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801BD594 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801BE46C (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801BECE0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$4 @ 0x1801D4CEE (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$4.c)
 * Callees:
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x1800BD060 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

__int64 __fastcall std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()();
  return result;
}
