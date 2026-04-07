/*
 * XREFs of ?GetRepresentationWindowData@CWindowData@@QEAAPEAV1@W4WindowRepresentationType@@@Z @ 0x18008FAE4
 * Callers:
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18003DAC8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost@@@details@wil@@QEAA_NXZ @ 0x1800ED170 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLos.c)
 */

CWindowData *__fastcall CWindowData::GetRepresentationWindowData(CWindowData *a1, int a2)
{
  __int64 v2; // rbx
  int v4; // edx
  int v5; // edx
  __int64 v6; // rax
  __int64 v8; // rax

  v2 = 0LL;
  v4 = a2 - 1;
  if ( !v4 )
    return a1;
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *((_QWORD *)a1 + 60);
    if ( v8 )
      return *(CWindowData **)(v8 + 32);
    return a1;
  }
  if ( v5 == 1 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixUdwmIconicWindowAfterDeviceLost>::GetImpl'::`2'::impl) )
    {
      if ( CWindowData::IsImmersiveWindow(a1) )
        return a1;
      v6 = *((_QWORD *)a1 + 61);
      if ( !v6 )
        return a1;
    }
    else
    {
      if ( CWindowData::IsImmersiveWindow(a1) )
        return a1;
      v6 = *((_QWORD *)a1 + 61);
    }
    return *(CWindowData **)(v6 + 80);
  }
  return (CWindowData *)v2;
}
