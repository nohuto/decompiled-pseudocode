/*
 * XREFs of ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801BDCB8
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B8F2C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801BA4B8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCGestureCancelTracker::StartTracking(
        MPCGestureCancelTracker *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        float a3)
{
  int v3; // eax

  *(_QWORD *)this = *(_QWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  *((float *)this + 3) = a3;
  *((_DWORD *)this + 2) = v3;
  *((_WORD *)this + 8) = 256;
  *((_QWORD *)this + 3) = GetTickCount64();
}
