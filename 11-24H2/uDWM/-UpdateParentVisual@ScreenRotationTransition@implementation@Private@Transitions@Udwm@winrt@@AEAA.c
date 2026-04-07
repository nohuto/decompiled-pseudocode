/*
 * XREFs of ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E21C4
 * Callers:
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800E20BC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800960CC (-SetCenter@CVisual@@QEAAXMM@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800EC59C (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateParentVisual(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  struct tagPOINT *v2; // rcx
  int v3; // ebx
  int v4; // edi
  int v5; // ecx
  struct tagPOINT *v6; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct tagPOINT *)*((_QWORD *)this + 7);
  v7 = v2[9];
  v3 = v7.x / 2;
  v4 = v7.y / 2;
  CVisual::SetCenter((CVisual *)v2, (float)(v7.x / 2), (float)(v7.y / 2));
  CVisual::SetRotation(*((CVisual **)this + 7), (double)*((int *)this + 11));
  v5 = -*((_DWORD *)this + 11);
  if ( *((int *)this + 11) > 0 )
    v5 = *((_DWORD *)this + 11);
  if ( v5 == 90 )
  {
    v6 = (struct tagPOINT *)*((_QWORD *)this + 7);
    v7.y = v3 - v4;
    v7.x = v4 - v3;
    CVisual::SetOffset(v6, &v7);
  }
}
