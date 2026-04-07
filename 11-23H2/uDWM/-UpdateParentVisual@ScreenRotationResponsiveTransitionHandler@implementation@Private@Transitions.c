/*
 * XREFs of ?UpdateParentVisual@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F66E8
 * Callers:
 *     ?UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F64B8 (-UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105508 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801057CC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UpdateParentVisual(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  struct tagPOINT *v2; // rcx
  int v3; // ebx
  int v4; // edi
  struct tagPOINT *v5; // rcx
  struct tagPOINT v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct tagPOINT *)*((_QWORD *)this + 7);
  v6 = v2[16];
  v3 = v6.x / 2;
  v4 = v6.y / 2;
  CVisual::SetCenter((CVisual *)v2, (double)(v6.x / 2), (double)(v6.y / 2));
  CVisual::SetRotation(*((CVisual **)this + 7), (double)*((int *)this + 11));
  if ( abs32(*((_DWORD *)this + 11)) == 90 )
  {
    v5 = (struct tagPOINT *)*((_QWORD *)this + 7);
    v6.y = v3 - v4;
    v6.x = v4 - v3;
    CVisual::SetOffset(v5, &v6);
  }
}
