/*
 * XREFs of NtUserCheckMenuItem @ 0x1401C7270
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     _CheckMenuItem @ 0x1401C73A0 (_CheckMenuItem.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _BYTE v14[16]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15, v6);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_11:
    v11 = -1;
    goto LABEL_10;
  }
  v7 = ValidateHmenu(a1, 256LL);
  v16 = 0LL;
  v8 = v7;
  if ( v7 != *(_QWORD *)v15[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v15);
    if ( v8 )
    {
      v15[0] = *(_QWORD *)(v8 + 152);
      ++*(_DWORD *)(v15[0] + 8);
    }
    else
    {
      v15[0] = gSmartObjNullRef;
    }
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v15)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_11;
  }
  v10 = v16;
  if ( !v16 )
    v10 = *(_QWORD *)v15[0];
  v11 = CheckMenuItem(v10, a2, a3);
LABEL_10:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15, v9);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v12);
  return v11;
}
