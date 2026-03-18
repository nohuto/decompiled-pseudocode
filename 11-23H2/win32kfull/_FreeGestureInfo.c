/*
 * XREFs of _FreeGestureInfo @ 0x1C02042E0
 * Callers:
 *     UnlinkSendListSms @ 0x1C00274A8 (UnlinkSendListSms.c)
 *     xxxInterSendMsgEx @ 0x1C0033720 (xxxInterSendMsgEx.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C008CB48 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     fnHkINLPMSG @ 0x1C0125540 (fnHkINLPMSG.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D0D00 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01D0E60 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01D49F0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C0203FA4 (SendGestureMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0139864 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01AE384 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 */

__int64 __fastcall FreeGestureInfo(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  tagDomLock *v5; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-40h]
  char v7; // [rsp+48h] [rbp-20h]
  char v8; // [rsp+50h] [rbp-18h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)&v5);
  v2 = HMValidateHandleNoSecure(a1, 21);
  v3 = v2;
  if ( v2 && *(_BYTE *)(_HMPheFromObject(v2) + 24) == 21 )
  {
    HMDestroyObject(v3);
    if ( v8 && v7 && v5 )
    {
      if ( v6 )
        tagDomLock::UnLockExclusive(v5);
      else
        tagDomLock::UnLockShared(v5);
    }
    return 1LL;
  }
  else
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v5);
    return 0LL;
  }
}
