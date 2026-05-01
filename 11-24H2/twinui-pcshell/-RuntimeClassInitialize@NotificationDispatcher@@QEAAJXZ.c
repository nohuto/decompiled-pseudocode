/*
 * XREFs of ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x18030F370
 * Callers:
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x1802301EC (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall NotificationDispatcher::RuntimeClassInitialize(NotificationDispatcher *this)
{
  HRESULT ApartmentType; // eax
  __int64 v4; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 0;
  ApartmentType = CoGetApartmentType((APTTYPE *)&v7, (APTTYPEQUALIFIER *)&v8);
  if ( ApartmentType >= 0 )
  {
    if ( !v7 || v7 == 3 )
      ApartmentType = 0;
    else
      ApartmentType = -2147467259;
  }
  if ( ApartmentType >= 0 )
  {
    v4 = SHCreateWorkerWindowW(NotificationDispatcher::WndProc, -3LL, 0LL, 0LL, 0LL, this);
    *((_QWORD *)this + 5) = v4;
    if ( v4 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x47,
               (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
               v5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
