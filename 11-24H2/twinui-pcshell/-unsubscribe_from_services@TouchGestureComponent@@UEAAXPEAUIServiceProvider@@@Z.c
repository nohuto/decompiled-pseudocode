/*
 * XREFs of ?unsubscribe_from_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x18026FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800C75C8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 */

void __fastcall TouchGestureComponent::unsubscribe_from_services(
        TouchGestureComponent *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  char v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h] BYREF

  v2 = (_QWORD *)((char *)this + 112);
  if ( (char *)this + 112 != &v6 )
  {
    if ( *v2 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 14);
    *v2 = 0LL;
  }
  v4 = (_QWORD *)((char *)this + 120);
  if ( (char *)this + 120 != &v7 )
  {
    if ( *v4 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 15);
    *v4 = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 256);
  if ( (char *)this + 256 != &v8 )
  {
    if ( *v5 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(
        (char *)this + 256,
        a2);
    *v5 = 0LL;
  }
  SmartCookie::Unregister((TouchGestureComponent *)((char *)this + 128));
  SmartCookie::Unregister((TouchGestureComponent *)((char *)this + 264));
}
