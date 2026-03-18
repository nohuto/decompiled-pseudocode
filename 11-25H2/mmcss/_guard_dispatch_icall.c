/*
 * XREFs of _guard_dispatch_icall @ 0x1C0004F20
 * Callers:
 *     CiProcessNotification @ 0x1C0001180 (CiProcessNotification.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x1C0003040 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     WPP_SF_ @ 0x1C0004620 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0004704 (WPP_SF_D.c)
 *     WPP_SF_Sd @ 0x1C0004750 (WPP_SF_Sd.c)
 *     WPP_SF_Z @ 0x1C00047D4 (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x1C0004854 (WPP_SF_Zd.c)
 *     WPP_SF_Zq @ 0x1C00048E8 (WPP_SF_Zq.c)
 *     WPP_SF_d @ 0x1C0004960 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C00049A4 (WPP_SF_dd.c)
 *     WPP_SF_q @ 0x1C00049FC (WPP_SF_q.c)
 *     WPP_SF_P @ 0x1C0004A84 (WPP_SF_P.c)
 *     WPP_SF_S @ 0x1C0004AD0 (WPP_SF_S.c)
 *     WPP_SF_dI @ 0x1C0004B48 (WPP_SF_dI.c)
 *     WPP_SF_qqd @ 0x1C0004BA4 (WPP_SF_qqd.c)
 *     WPP_SF_L @ 0x1C0004C0C (WPP_SF_L.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1C0006010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     WppLoadTracingSupport @ 0x1C000C010 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C000C160 (WppInitKm.c)
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 *     WppTraceCallback @ 0x1C000C560 (WppTraceCallback.c)
 *     CiDispatchCreate @ 0x1C000E570 (CiDispatchCreate.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_dispatch_icall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
