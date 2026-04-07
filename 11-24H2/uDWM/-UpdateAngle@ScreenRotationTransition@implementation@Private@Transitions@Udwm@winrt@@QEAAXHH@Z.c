/*
 * XREFs of ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800E20BC
 * Callers:
 *     ?UpdateAngle@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHHH@Z @ 0x1800E2090 (-UpdateAngle@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004B8F0 (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18004B9E0 (-Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800E0914 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0A44 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ @ 0x1800E1618 (-ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ.c)
 *     ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E21C4 (-UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800E2B1C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800EC59C (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateAngle(
        CVisual **this,
        int a2,
        int a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct tagPOINT *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  struct tagPOINT v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
    this + 13,
    L"Receive updated angle signal");
  UDwmTrace::ResponsiveRotationUpdateAngle(v5);
  if ( !winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this) )
    return;
  *((_DWORD *)this + 11) = a2;
  if ( a2 == -270 || a2 == -360 )
  {
    v6 = a2 + 360;
    goto LABEL_8;
  }
  if ( a2 == 270 || a2 == 360 )
  {
    v6 = a2 - 360;
LABEL_8:
    *((_DWORD *)this + 11) = v6;
  }
  v7 = *((_DWORD *)this + 10);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( (unsigned int)(v9 - 1) <= 1 )
        {
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this);
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateParentVisual((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this);
          *((_BYTE *)this + 81) = 1;
        }
      }
      else
      {
        *((_BYTE *)this + 80) = 1;
      }
    }
    else
    {
      CVisual::SetRotation(this[7], 0.0);
      v10 = (struct tagPOINT *)this[7];
      v13 = 0LL;
      CVisual::SetOffset(v10, &v13);
    }
  }
  else
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateParentVisual((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this);
    if ( !*((_BYTE *)this + 82) )
    {
      v14 = 1;
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DelayNextAnimation(
        (winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this,
        (const enum winrt::Udwm::Transitions::Private::implementation::RotationTimelineReason *)&v14,
        v11,
        v12);
    }
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::SetRotationState((__int64)this, 1);
  }
}
