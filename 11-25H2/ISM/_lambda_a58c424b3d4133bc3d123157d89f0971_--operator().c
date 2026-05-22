/*
 * XREFs of _lambda_a58c424b3d4133bc3d123157d89f0971_::operator() @ 0x180157098
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180087F00 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x180024D1C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180024E94 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?GetSuppressionRegions@BamoShellGesturesClientProxy@@UEAAXPEAPEBUtagRECT@@PEAI@Z @ 0x180157DB0 (-GetSuppressionRegions@BamoShellGesturesClientProxy@@UEAAXPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAA_NXZ @ 0x180158E98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@w.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_a58c424b3d4133bc3d123157d89f0971_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v6; // rdx
  int v7; // ebx
  Microsoft::BamoImpl::BamoImplObject *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct tagRECT *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a1;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SuppressTouchGestures>::GetImpl'::`2'::impl)
    || *(_DWORD *)a3 == 0x1000000 )
  {
    return 0;
  }
  v11 = 0LL;
  LODWORD(v10) = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL) + 32LL);
  if ( *(int *)(v5 + 8) <= 0 )
    v6 = 0LL;
  else
    v6 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v5 + 16);
  Microsoft::Bamo::Lock::Lock(v9, v6);
  BamoShellGesturesClientProxy::GetSuppressionRegions(
    (BamoShellGesturesClientProxy *)(a2 + 8),
    (const struct tagRECT **)&v11,
    (unsigned int *)&v10);
  v7 = 0;
  if ( !(_DWORD)v10 )
  {
LABEL_9:
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
    return 0;
  }
  while ( !PtInRect(&v11[v7], *(POINT *)(a3 + 44)) )
  {
    if ( ++v7 == (_DWORD)v10 )
      goto LABEL_9;
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
  return 1;
}
