/*
 * XREFs of RaidGetTcgLockingObjectMetadata @ 0x14008CBA4
 * Callers:
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x14007D338 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140081C48 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibGetBandMetadata @ 0x14013C10C (TcglibGetBandMetadata.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibStartTransaction @ 0x14013D0C4 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x14013D154 (TcglibStopTransaction.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidGetTcgLockingObjectMetadata(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        const void *a6,
        char *pszDest)
{
  size_t v8; // r15
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int TcgLockingObject; // ebx
  int v16; // r9d
  const char *v17; // r8
  __int64 v18; // r9
  _OWORD v19[2]; // [rsp+38h] [rbp-B9h] BYREF
  int v20; // [rsp+58h] [rbp-99h]
  _BYTE v21[56]; // [rsp+60h] [rbp-91h] BYREF
  __int64 v22; // [rsp+98h] [rbp-59h]
  int v23; // [rsp+A8h] [rbp-49h]
  _OWORD v24[3]; // [rsp+B0h] [rbp-41h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-11h]

  v8 = a3;
  memset_0(v21, 0, 0x50uLL);
  v20 = 0;
  v25 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v19, 0, sizeof(v19));
  memset(v24, 0, sizeof(v24));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3584);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6056);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 6064);
  }
  if ( v13 )
  {
    TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v21, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( !v22 && !v23
      || !(_DWORD)v8
      || (unsigned int)v8 > *(_DWORD *)(v13 + 140) / (unsigned int)*(unsigned __int16 *)(v13 + 136) )
    {
      return (unsigned int)-1073741811;
    }
    memset_0(a4, 0, v8);
    TcgLockingObject = RaidFillTcgAuthKey(v12, 0, a5, a6, (unsigned int *)v19, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    TcgLockingObject = TcglibOpenSession(v12, 2LL, v24);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)TcgLockingObject;
    }
    TcgLockingObject = TcglibStartTransaction(v12, v24);
    if ( TcgLockingObject >= 0 )
    {
      TcgLockingObject = TcglibGetBandMetadata(v12, (unsigned int)v24, a2, v16, v8, (__int64)a4);
      TcglibStopTransaction(v12, v24, (unsigned int)TcgLockingObject, v18);
      if ( TcgLockingObject >= 0 )
      {
LABEL_26:
        TcglibCloseSession(v12, v24);
        return (unsigned int)TcgLockingObject;
      }
      v17 = "TcglibGetBandMetadata";
    }
    else
    {
      v17 = "TcglibStartTransaction";
    }
    RtlStringCbCopyA(pszDest, 0x20uLL, v17);
    goto LABEL_26;
  }
  return (unsigned int)-1073741637;
}
