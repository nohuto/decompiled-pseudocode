/*
 * XREFs of ArmRawMouseThrottlingTimer @ 0x1400DA400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA4B0 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

int __fastcall ArmRawMouseThrottlingTimer(__int64 a1, int a2)
{
  __int64 v2; // rsi
  char v3; // di
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  void *DispatcherHandleByName; // rcx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v5 = *(_QWORD *)(UserSessionState + 3144);
  if ( v5 )
  {
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(
                                       *(_QWORD *)(UserSessionState + 3144),
                                       16LL,
                                       1LL);
    if ( v3 )
    {
      *(_BYTE *)(v5 + 1336) = 1;
      DueTime.QuadPart = -10000 * v2;
      LODWORD(UserSessionState) = ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
    }
    else
    {
      *(_BYTE *)(v5 + 1336) = 0;
      LODWORD(UserSessionState) = ZwCancelTimer(DispatcherHandleByName, 0LL);
    }
  }
  return UserSessionState;
}
