/*
 * XREFs of _FreeGestureInfo @ 0x140266FF0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x1400800D0 (fnHkINLPMSG.c)
 *     UnlinkSendListSms @ 0x14016F544 (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401A4FD8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     NtUserGetGestureInfo @ 0x140208640 (NtUserGetGestureInfo.c)
 *     SendGestureMessage @ 0x1402186E8 (SendGestureMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1402961E0 (NtUserGetGestureExtArgs.c)
 *     NtUserInjectGesture @ 0x140298D20 (NtUserInjectGesture.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x140084538 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14008490C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14008495C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall FreeGestureInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+50h] [rbp-18h]

  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)v9);
  v10 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v3, v2, v4) )
  {
    v10 = 1;
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v9);
  }
  LOBYTE(v5) = 21;
  v6 = HMValidateHandleNoSecure(a1, v5);
  v7 = v6;
  if ( v6 && *(_BYTE *)(_HMPheFromObject(v6) + 24) == 21 )
  {
    HMDestroyObject(v7);
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v9);
    return 1LL;
  }
  else
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v9);
    return 0LL;
  }
}
