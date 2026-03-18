/*
 * XREFs of ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1400CDD58
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     _lambda_b1e571efbfc61821245745bd1df533a0_::operator() @ 0x1400CCECC (_lambda_b1e571efbfc61821245745bd1df533a0_--operator().c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140190C3C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 *     ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1402218B0 (-ProcessInitialization@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDDDC (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 */

void __fastcall CPTPEngine::TPAAPSetCurtainState(CPTPEngine *this, int a2)
{
  _BYTE v2[20]; // [rsp+20h] [rbp-48h]
  __int128 v3; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+50h] [rbp-18h]

  if ( (*((_DWORD *)this + 768) & 0x8000u) >> 15 != (a2 != 0) )
  {
    *(_DWORD *)v2 = a2;
    *(_OWORD *)&v2[4] = 0LL;
    *((_DWORD *)this + 768) = (a2 << 15) ^ (*((_DWORD *)this + 768) ^ (a2 << 15)) & 0xFFFF7FFF;
    v3 = *(_OWORD *)v2;
    v4 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    CBasePTPEngine::SendEtwOutput(this, 1LL, &v3);
  }
}
