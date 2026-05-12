/*
 * XREFs of RaidEraseTcgLockingObject @ 0x14008BED4
 * Callers:
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x14007CDC0 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400816AC (RaidUnitStorageTcgEraseLockingObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibEraseBand @ 0x14013BFF8 (TcglibEraseBand.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidEraseTcgLockingObject(int *a1, __int64 a2, __int64 a3, __int64 a4, NTSTRSAFE_PSTR pszDest)
{
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  int v8; // ebx
  _OWORD v10[2]; // [rsp+30h] [rbp-41h] BYREF
  int v11; // [rsp+50h] [rbp-21h]
  _OWORD v12[3]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h]

  v11 = 0;
  v13 = 0LL;
  v5 = *a1;
  v6 = a2;
  memset(v10, 0, sizeof(v10));
  memset(v12, 0, sizeof(v12));
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
  LOBYTE(a2) = 1;
  v8 = RaidFillTcgAuthKey(v7, a2, a3, a4, v10, pszDest);
  if ( v8 >= 0 )
  {
    v8 = TcglibOpenSession(v7, 2LL, v12);
    if ( v8 >= 0 )
    {
      v8 = TcglibEraseBand(v7, v12, v6);
      if ( v8 < 0 )
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibEraseBand");
      TcglibCloseSession(v7, v12);
    }
    else
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
    }
  }
  return (unsigned int)v8;
}
