/*
 * XREFs of RaidSetTcgLockingObject @ 0x14008E140
 * Callers:
 *     RaidAdapterStorageTcgSetLockingObject @ 0x14007E850 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1400831B4 (RaidUnitStorageTcgSetLockingObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibStartTransaction @ 0x14013D0C4 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x14013D154 (TcglibStopTransaction.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidSetTcgLockingObject(
        __int64 a1,
        unsigned int a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        unsigned int a9,
        const void *a10,
        NTSTRSAFE_PSTR pszDest)
{
  int v14; // esi
  int v15; // eax
  __int64 v16; // r14
  int TcgLockingObject; // ebx
  int v19; // edi
  int v20; // edi
  int v21; // edi
  const char *v22; // r8
  __int64 v23; // r9
  _OWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+80h] [rbp-80h]
  _BYTE v27[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char v29; // [rsp+D0h] [rbp-30h]
  char v30; // [rsp+D1h] [rbp-2Fh]
  char v31; // [rsp+D2h] [rbp-2Eh]
  char v32; // [rsp+D3h] [rbp-2Dh]
  char v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  _OWORD v35[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h]

  memset_0(v27, 0, 0x50uLL);
  v26 = 0;
  v36 = 0LL;
  v14 = 0;
  v15 = *(_DWORD *)a1;
  memset(v25, 0, sizeof(v25));
  memset(v35, 0, sizeof(v35));
  if ( v15 != 1431193940 )
  {
    if ( v15 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v16 = *(_QWORD *)(a1 + 6056);
    if ( !v16 || !*(_QWORD *)(a1 + 6064) )
      return (unsigned int)-1073741637;
LABEL_11:
    TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v27, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( !v28 && !v34 )
      return (unsigned int)-1073741811;
    TcgLockingObject = RaidFillTcgAuthKey(v16, 0, a9, a10, (unsigned int *)v25, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( a3 )
    {
      v19 = a4 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            v14 = 3;
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
      v21 = v14;
    }
    else
    {
      v21 = 1;
      v14 = 1;
      if ( v29 )
      {
        if ( v31 )
        {
          v14 = 3;
        }
        else if ( v33 )
        {
          v14 = 2;
        }
      }
      if ( v30 )
      {
        if ( v32 )
        {
          v21 = 3;
        }
        else if ( v33 )
        {
          v21 = 2;
        }
      }
    }
    TcgLockingObject = TcglibOpenSession(v16, 2LL, v35);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)TcgLockingObject;
    }
    TcgLockingObject = TcglibStartTransaction(v16, v35);
    if ( TcgLockingObject >= 0 )
    {
      TcgLockingObject = TcglibSetBand(
                           v16,
                           (unsigned int)v35,
                           a2,
                           v14,
                           v21,
                           a5,
                           a6,
                           a8 & -(__int64)(a7 != 0),
                           (__int64)v25);
      TcglibStopTransaction(v16, v35, (unsigned int)TcgLockingObject, v23);
      if ( TcgLockingObject >= 0 )
      {
LABEL_41:
        TcglibCloseSession(v16, v35);
        return (unsigned int)TcgLockingObject;
      }
      v22 = "TcglibSetBand";
    }
    else
    {
      v22 = "TcglibStartTransaction";
    }
    RtlStringCbCopyA(pszDest, 0x20uLL, v22);
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(a1 + 507) & 0x40) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 3584);
    if ( v16 )
    {
      if ( *(_QWORD *)(a1 + 3592) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
