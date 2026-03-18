/*
 * XREFs of GetHmodTableIndex @ 0x1C003D58C
 * Callers:
 *     _RegisterUserApiHook @ 0x1C003AC64 (_RegisterUserApiHook.c)
 *     zzzSetWindowsHookEx @ 0x1C003DEE0 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C003F2F4 (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x1C0084750 (_RegisterDManipHook.c)
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C003C6A0 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C003C6E0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall GetHmodTableIndex(__int64 a1)
{
  unsigned __int16 v2; // ax
  int v3; // ebx
  unsigned __int16 near **v4; // rcx
  unsigned __int16 near **v6; // rcx
  _BYTE v7[48]; // [rsp+30h] [rbp-48h] BYREF

  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>((__int64)v7);
  v2 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, a1, 0LL, 2LL);
  if ( v2 )
  {
    v3 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v4 = &aatomSysLoaded;
      do
      {
        if ( *(_WORD *)v4 == v2 )
          break;
        ++v3;
        v4 = (unsigned __int16 near **)((char *)v4 + 2);
      }
      while ( v3 < catomSysTableEntries );
    }
    if ( v3 != catomSysTableEntries )
    {
      UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v2, &aatomSysLoaded, 0LL, v2);
LABEL_8:
      DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>((__int64)v7);
      return (unsigned int)v3;
    }
    v3 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v6 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v6 )
          break;
        ++v3;
        v6 = (unsigned __int16 near **)((char *)v6 + 2);
      }
      while ( v3 < catomSysTableEntries );
    }
    if ( v3 != catomSysTableEntries )
    {
LABEL_14:
      *((_WORD *)&aatomSysLoaded + v3) = v2;
      *((_DWORD *)&acatomSysUse + v3) = 0;
      *((_DWORD *)&acatomSysDepends + v3) = 0;
      goto LABEL_8;
    }
    if ( v3 != 32 )
    {
      ++catomSysTableEntries;
      goto LABEL_14;
    }
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v2, &aatomSysLoaded, 0LL, v2);
    UserSetLastError(8LL);
  }
  DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>((__int64)v7);
  return 0xFFFFFFFFLL;
}
