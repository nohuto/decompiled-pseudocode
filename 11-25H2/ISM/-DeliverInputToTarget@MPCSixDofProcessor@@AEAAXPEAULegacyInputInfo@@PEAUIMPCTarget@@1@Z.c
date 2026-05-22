/*
 * XREFs of ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1801B4208
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18000FC60 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C7D34 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800C7EC0 (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B5798 (-TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCSixDofProcessor::DeliverInputToTarget(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget *a4)
{
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v11; // [rsp+48h] [rbp+10h] BYREF

  if ( a4 && !(*(unsigned __int8 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a4 + 32LL))(a4) )
    MPCSixDofProcessor::TreatTouchpadPressAsInteraction(this, a2);
  MPCInputProviderBase::SendInputToPostProcessor(this, a2);
  v11 = 0;
  MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a3, a4, &v11);
  if ( a4 && !v11 && ((*((_DWORD *)a2 + 17) - 1) & 0xFFFFFFFB) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct LegacyInputInfo *))(*(_QWORD *)a4 + 24LL))(a4, a2);
    if ( v8 == -2147417853 )
    {
      *((_BYTE *)this + 3568) = 0;
    }
    else if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147417828 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x25C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        v9);
    }
  }
}
