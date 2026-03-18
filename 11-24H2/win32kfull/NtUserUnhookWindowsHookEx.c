/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x140077210
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140078964 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x140078E64 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  struct tagHOOK *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  tagDomLock *v8; // [rsp+28h] [rbp-40h] BYREF
  char v9; // [rsp+30h] [rbp-38h]
  char v10; // [rsp+50h] [rbp-18h]

  EnterLeaveCritShared::EnterLeaveCritShared(v7, 1LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(&v8);
  LOBYTE(v2) = 5;
  v3 = (struct tagHOOK *)HMValidateHandleWithDescriptor(a1, v2);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = (int)zzzUnhookWindowsHookEx(v3);
    if ( v10 )
    {
      if ( v8 )
      {
        if ( v9 )
          tagDomLock::UnLockExclusive(v8);
        else
          tagDomLock::UnLockShared(v8);
      }
      v10 = 0;
    }
    v4 = v5;
  }
  else if ( v10 )
  {
    if ( v8 )
    {
      if ( v9 )
        tagDomLock::UnLockExclusive(v8);
      else
        tagDomLock::UnLockShared(v8);
    }
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
