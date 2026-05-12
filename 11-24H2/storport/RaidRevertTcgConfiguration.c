/*
 * XREFs of RaidRevertTcgConfiguration @ 0x14008DDF0
 * Callers:
 *     RaidAdapterStorageTcgRevertConfig @ 0x14007E2FC (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x140082C44 (RaidUnitStorageTcgRevertConfig.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibRevertLockingSpEx @ 0x14013C434 (TcglibRevertLockingSpEx.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidRevertTcgConfiguration(
        int *a1,
        char a2,
        unsigned int a3,
        const void *a4,
        NTSTRSAFE_PSTR pszDest)
{
  int v5; // eax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v10; // r8
  _OWORD v11[2]; // [rsp+30h] [rbp-41h] BYREF
  int v12; // [rsp+50h] [rbp-21h]
  _OWORD v13[3]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v14; // [rsp+88h] [rbp+17h]

  v12 = 0;
  v14 = 0LL;
  v5 = *a1;
  memset(v11, 0, sizeof(v11));
  memset(v13, 0, sizeof(v13));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 507) & 0x40) != 0 || (v7 = *((_QWORD *)a1 + 448)) == 0 || !*((_QWORD *)a1 + 449) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 757);
    if ( !v7 || !*((_QWORD *)a1 + 758) )
      return (unsigned int)-1073741637;
  }
  v8 = RaidFillTcgAuthKey(v7, 1, a3, a4, (unsigned int *)v11, pszDest);
  if ( v8 >= 0 )
  {
    v8 = TcglibOpenSession(v7, 1LL, v13);
    if ( v8 >= 0 )
    {
      LOBYTE(v10) = a2;
      v8 = TcglibRevertLockingSpEx(v7, v13, v10, v11);
      if ( v8 < 0 )
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibRevertLockingSpEx");
      TcglibCloseSession(v7, v13);
    }
    else
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
    }
  }
  return (unsigned int)v8;
}
