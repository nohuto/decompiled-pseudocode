/*
 * XREFs of NtUserUnhookWinEvent @ 0x140084EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400850E4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     _UnhookWinEvent @ 0x140085268 (_UnhookWinEvent.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  struct _HEAD *v4; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[48]; // [rsp+30h] [rbp-48h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v6, 1LL);
  v2 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(v7);
  LOBYTE(v3) = 15;
  v4 = (struct _HEAD *)HMValidateHandleWithDescriptor(a1, v3);
  if ( v4 )
    v2 = UnhookWinEvent(v4);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v7);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v2;
}
