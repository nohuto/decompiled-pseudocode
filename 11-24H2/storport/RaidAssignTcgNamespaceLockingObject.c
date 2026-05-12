/*
 * XREFs of RaidAssignTcgNamespaceLockingObject @ 0x14008AC00
 * Callers:
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x14007BBD0 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x140080484 (RaidUnitStorageTcgAssignLockingObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidFillTcgLockingInfo @ 0x14008C26C (RaidFillTcgLockingInfo.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjects @ 0x14008CDB4 (RaidGetTcgLockingObjects.c)
 *     TcglibAssignNamespaceLocking @ 0x14013B9FC (TcglibAssignNamespaceLocking.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibStartTransaction @ 0x14013D0C4 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x14013D154 (TcglibStopTransaction.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAssignTcgNamespaceLockingObject(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        NTSTRSAFE_PSTR pszDest)
{
  int started; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int TcgLockingObjects; // eax
  _DWORD *v13; // r12
  __int64 v14; // rdx
  __int64 i; // r14
  int v16; // eax
  __int64 v17; // r9
  void *v18; // rdi
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  void *v24; // [rsp+70h] [rbp-90h]
  _OWORD v25[2]; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[80]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v28[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v29; // [rsp+120h] [rbp+20h]

  v23 = a4;
  v24 = a5;
  memset_0(v27, 0, sizeof(v27));
  P = 0LL;
  v22 = 0LL;
  v26 = 0;
  v29 = 0LL;
  memset(v25, 0, sizeof(v25));
  memset(v28, 0, sizeof(v28));
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 3584);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 6056);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6064);
  }
  if ( !v10 || !*(_BYTE *)(v10 + 152) || !*(_BYTE *)(v10 + 153) || !*(_BYTE *)(v10 + 134) )
    return (unsigned int)-1073741637;
  TcgLockingObjects = RaidGetTcgLockingObjects(a1, &P, pszDest);
  v13 = P;
  started = TcgLockingObjects;
  if ( TcgLockingObjects < 0 )
    goto LABEL_31;
  v14 = *(unsigned int *)(v10 + 128);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)P + 20 * i + 2) )
    {
      v16 = *((_DWORD *)P + 20 * i + 18);
      if ( v16 )
      {
        if ( v16 == a2 )
        {
          started = -1073741808;
          goto LABEL_31;
        }
      }
    }
  }
  LOBYTE(v14) = 1;
  started = RaidFillTcgAuthKey(v9, v14, a3, v23, v25, pszDest);
  if ( started < 0 )
    goto LABEL_31;
  started = TcglibOpenSession(v9, 2LL, v28);
  if ( started < 0 )
  {
    RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
    goto LABEL_31;
  }
  started = TcglibStartTransaction(v9, v28);
  if ( started >= 0 )
  {
    started = TcglibAssignNamespaceLocking(v9, (unsigned int)v28, a2, (unsigned int)v25, (__int64)&v22);
    if ( started >= 0 )
    {
      i = 0LL;
      v17 = 1LL;
      while ( (unsigned int)i < *(_DWORD *)(v10 + 128) )
      {
        if ( *(_QWORD *)&v13[20 * i] == v22 )
        {
          started = TcglibSetBand(v9, (unsigned int)v28, v13[20 * i + 2], 1, 1, 1, 1, 0LL, 0LL);
          if ( started < 0 )
            RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibSetBand");
          break;
        }
        i = (unsigned int)(i + 1);
      }
      if ( (_DWORD)i != *(_DWORD *)(v10 + 128) )
      {
LABEL_43:
        TcglibStopTransaction(v9, v28, (unsigned int)started, v17);
        if ( started >= 0 )
        {
          TcglibCloseSession(v9, v28);
          v18 = v24;
          memset_0(v24, 0, 0x40uLL);
          started = RaidGetTcgLockingObject(a1, (unsigned int)v13[20 * i + 2], v27, pszDest);
          if ( started >= 0 )
            RaidFillTcgLockingInfo(v27, v18);
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      started = -1073741275;
    }
    RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibAssignNamespaceLocking");
    goto LABEL_43;
  }
  RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibStartTransaction");
LABEL_30:
  TcglibCloseSession(v9, v28);
LABEL_31:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x43546152u);
  return (unsigned int)started;
}
