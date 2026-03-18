/*
 * XREFs of NtUserSetMenuDefaultItem @ 0x1401F55F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _SetMenuDefaultItem @ 0x14006FBFC (_SetMenuDefaultItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserSetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v14, v6);
  v7 = ValidateHmenu(a1, 512LL);
  v8 = 0;
  v15 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v14, v7);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v14)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v10 = v15;
    if ( !v15 )
      v10 = *(_QWORD *)v14[0];
    v8 = SetMenuDefaultItem(v10, a2, a3);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v14, v9);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
