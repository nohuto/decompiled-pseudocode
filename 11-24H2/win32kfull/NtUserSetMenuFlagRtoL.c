/*
 * XREFs of NtUserSetMenuFlagRtoL @ 0x14021CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserSetMenuFlagRtoL(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10, v2);
  v3 = ValidateHmenu(a1, 64LL);
  v4 = 0LL;
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, v3);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v10) )
  {
    v6 = v11;
    if ( !v11 )
      v6 = *(_QWORD *)v10[0];
    v4 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v6 + 40) + 40LL) |= 0x20u;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10, v5);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
