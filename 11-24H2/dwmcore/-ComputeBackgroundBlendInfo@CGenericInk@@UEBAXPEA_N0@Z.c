/*
 * XREFs of ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x18024AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801A2290 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGenericInk::ComputeBackgroundBlendInfo(CGenericInk *this, bool *a2, bool *a3)
{
  int v4; // ebx
  int v5; // eax
  struct CMILPoolResource *v6; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v4 = 0;
  v6 = 0LL;
  v5 = CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef(
         (CGenericInk *)((char *)this + 152),
         0LL,
         &v6);
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x211u, 0LL);
  else
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 9) + 24LL))(*((_QWORD *)v6 + 9));
  *a3 = v4 != 0;
}
