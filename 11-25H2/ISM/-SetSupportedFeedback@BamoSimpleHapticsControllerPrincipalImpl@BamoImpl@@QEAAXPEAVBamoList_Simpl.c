/*
 * XREFs of ?SetSupportedFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18008D8EC
 * Callers:
 *     ?SetSupportedFeedback@BamoSimpleHapticsControllerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180085960 (-SetSupportedFeedback@BamoSimpleHapticsControllerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsContr.c)
 * Callees:
 *     ??$EnumerateStubs@PEAVBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoSimpleHapticsControllerPrincipalImpl@1@@Z_N1@Z @ 0x180083970 (--$EnumerateStubs@PEAVBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@Bamo.c)
 *     ?LogSetSupportedFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18008D984 (-LogSetSupportedFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoList_Si.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SetSupportedFeedback(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::LogSetSupportedFeedback(this, a2);
  v6 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *>(
         (__int64)this,
         (__int64 (__fastcall *)(__int64, __int64))BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateSupportedFeedbackRemoteCacheStatic,
         v5,
         (__int64)this);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7CED,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v7);
}
