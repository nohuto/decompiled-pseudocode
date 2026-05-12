/*
 * XREFs of RaidDeassignTcgLockingObject @ 0x14008B9A8
 * Callers:
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x14007C21C (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140080ADC (RaidUnitStorageTcgDeassignLockingObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibDeassignNamespaceLocking @ 0x14013BE18 (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x14013BFF8 (TcglibEraseBand.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x14013C8E8 (TcglibSetBandLocationEx.c)
 *     TcglibStartTransaction @ 0x14013D0C4 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x14013D154 (TcglibStopTransaction.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidDeassignTcgLockingObject(
        int *a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        NTSTRSAFE_PSTR pszDest)
{
  int v10; // eax
  __int64 v11; // rsi
  int TcgLockingObject; // ebx
  __int64 v14; // rdx
  int v15; // r9d
  const char *v16; // r8
  __int64 v17; // r9
  _OWORD v18[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+78h] [rbp-88h]
  _OWORD v20[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  _QWORD v22[7]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-8h]
  int v24; // [rsp+108h] [rbp+8h]
  _OWORD v25[3]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v26; // [rsp+140h] [rbp+40h]

  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  memset_0(v22, 0, 0x50uLL);
  v19 = 0;
  v26 = 0LL;
  v10 = *a1;
  memset(v18, 0, sizeof(v18));
  memset(v25, 0, sizeof(v25));
  if ( v10 != 1431193940 )
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 757);
    if ( !v11 || !*((_QWORD *)a1 + 758) )
      return (unsigned int)-1073741637;
LABEL_11:
    TcgLockingObject = RaidGetTcgLockingObject(a1, a2, v22, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( !v23 && !v24 )
      return (unsigned int)-1073741811;
    LOBYTE(v14) = a3;
    TcgLockingObject = RaidFillTcgAuthKey(v11, v14, a4, a5, v18, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    LODWORD(v20[0]) = 56;
    TcgLockingObject = TcglibOpenSession(v11, 2LL, v25);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)TcgLockingObject;
    }
    TcgLockingObject = TcglibStartTransaction(v11, v25);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibStartTransaction");
LABEL_28:
      TcglibCloseSession(v11, v25);
      return (unsigned int)TcgLockingObject;
    }
    TcglibEraseBand(v11, v25, a2);
    if ( v23 )
    {
      LOBYTE(v15) = a3;
      TcgLockingObject = TcglibSetBandLocationEx(v11, (unsigned int)v25, a2, v15, (__int64)v18, (__int64)v20);
      if ( TcgLockingObject < 0 )
      {
        v16 = "TcglibSetBandLocationEx";
LABEL_25:
        RtlStringCbCopyA(pszDest, 0x20uLL, v16);
LABEL_27:
        TcglibStopTransaction(v11, v25, (unsigned int)TcgLockingObject, v17);
        goto LABEL_28;
      }
    }
    else
    {
      TcgLockingObject = TcglibDeassignNamespaceLocking(v11, v25, v18, v22[0]);
      if ( TcgLockingObject < 0 )
      {
        v16 = "TcglibDeassignNamespaceLocking";
        goto LABEL_25;
      }
    }
    TcglibSetBand(v11, (unsigned int)v25, a2, 1, 1, 1, 0, 0LL, 0LL);
    goto LABEL_27;
  }
  if ( (*((_BYTE *)a1 + 507) & 0x40) == 0 )
  {
    v11 = *((_QWORD *)a1 + 448);
    if ( v11 )
    {
      if ( *((_QWORD *)a1 + 449) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
