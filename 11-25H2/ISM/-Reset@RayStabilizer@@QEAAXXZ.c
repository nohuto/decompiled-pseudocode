/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800C92A8
 * Callers:
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x1800C1598 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x1800C8030 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1801B6DA4 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1801B9AB4 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1801BB200 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801BB330 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXXZ @ 0x1800C3720 (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXX.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  std::deque<RayStabilizationResult>::_Tidy(this);
  *((_BYTE *)this + 80) = 0;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
}
