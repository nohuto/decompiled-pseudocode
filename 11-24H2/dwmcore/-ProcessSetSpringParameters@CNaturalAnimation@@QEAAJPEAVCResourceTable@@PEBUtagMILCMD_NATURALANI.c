/*
 * XREFs of ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x1802A09F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x18022B7D4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     ??$?4VCSpringAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCSpringAccelerator@@@12@@Z @ 0x18029FBC0 (--$-4VCSpringAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCSp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetSpringParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS *a3)
{
  __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm1_4
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+38h] [rbp+10h] BYREF

  v9 = (__int64 (__fastcall ***)(_QWORD))a2;
  CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
  v5 = *((_QWORD *)this + 54);
  v9 = (__int64 (__fastcall ***)(_QWORD))v5;
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  v6 = 1.0 / *((float *)a3 + 3);
  v7 = *((float *)a3 + 2);
  *(float *)(v5 + 28) = v7;
  *(float *)(v5 + 32) = v6;
  *(float *)(v5 + 20) = v6 * v6;
  *(float *)(v5 + 24) = (float)(v7 + v7) * v6;
  Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringAccelerator>((__int64 *)this + 54, &v9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
