/*
 * XREFs of RaidAssignTcgRangeLockingObject @ 0x14008AF58
 * Callers:
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x14007BBD0 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x140080484 (RaidUnitStorageTcgAssignLockingObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidFillTcgLockingInfo @ 0x14008C26C (RaidFillTcgLockingInfo.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjects @ 0x14008CDB4 (RaidGetTcgLockingObjects.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x14013C8E8 (TcglibSetBandLocationEx.c)
 *     TcglibStartTransaction @ 0x14013D0C4 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x14013D154 (TcglibStopTransaction.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAssignTcgRangeLockingObject(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        void *a7,
        NTSTRSAFE_PSTR pszDest)
{
  unsigned int v11; // r12d
  int started; // ebx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v16; // r8d
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  int TcgLockingObjects; // eax
  _QWORD *v20; // r15
  __int64 i; // rdx
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  int v28; // r9d
  __int64 v29; // r9
  const char *v30; // r8
  void *v31; // rdi
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  void *v37; // [rsp+78h] [rbp-88h]
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  _OWORD v42[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v43; // [rsp+D8h] [rbp-28h]
  _BYTE v44[80]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v45[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v46; // [rsp+160h] [rbp+60h]

  v36 = a6;
  v37 = a7;
  v34 = a3;
  v35 = a2;
  v11 = 0;
  v38 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset_0(v44, 0, sizeof(v44));
  v43 = 0;
  P = 0LL;
  v46 = 0LL;
  memset(v42, 0, sizeof(v42));
  memset(v45, 0, sizeof(v45));
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 3584);
    if ( !v13 )
      return (unsigned int)-1073741637;
    v14 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 6056);
    if ( !v13 )
      return (unsigned int)-1073741637;
    v14 = *(_QWORD *)(a1 + 6064);
  }
  if ( !v14 || *(_BYTE *)(v14 + 152) && *(_BYTE *)(v14 + 153) && *(_BYTE *)(v14 + 134) )
    return (unsigned int)-1073741637;
  v16 = *(_DWORD *)(v14 + 100);
  v17 = *(_DWORD *)(v14 + 112) * v16;
  v18 = (unsigned int)(*(_DWORD *)(v14 + 104) * v16);
  if ( (a2 - v17) % v18 || a3 % v18 )
    return (unsigned int)-1073741811;
  TcgLockingObjects = RaidGetTcgLockingObjects(a1, &P, pszDest);
  v20 = P;
  started = TcgLockingObjects;
  if ( TcgLockingObjects >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v14 + 128); i = (unsigned int)(i + 1) )
    {
      if ( LODWORD(v20[10 * i + 1]) )
      {
        v22 = v20[10 * i + 7];
        if ( v22 )
        {
          if ( (v23 = v20[10 * i + 6], v24 = v23 + v22, v35 >= v23) && v35 < v24
            || (v20 = P, v25 = v35 + v34, v35 + v34 > v23) && v25 <= v24
            || v35 < v23 && v25 > v24 )
          {
            started = -1073741808;
            goto LABEL_44;
          }
        }
        if ( !v20[10 * i + 6] && !v22 && !v11 )
          v11 = i;
      }
    }
    if ( !v11 )
    {
      started = -1073741670;
      goto LABEL_44;
    }
    LODWORD(v38) = 56;
    *((_QWORD *)&v38 + 1) = v35 / *(unsigned int *)(v14 + 100);
    v26 = *(unsigned int *)(v14 + 100);
    v27 = v34 % v26;
    LOBYTE(v27) = a4;
    *(_QWORD *)&v39 = v34 / v26;
    started = RaidFillTcgAuthKey(v13, v27, a5, v36, v42, pszDest);
    if ( started >= 0 )
    {
      started = TcglibOpenSession(v13, 2LL, v45);
      if ( started < 0 )
      {
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
        goto LABEL_44;
      }
      started = TcglibStartTransaction(v13, v45);
      if ( started < 0 )
      {
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibStartTransaction");
LABEL_43:
        TcglibCloseSession(v13, v45);
        goto LABEL_44;
      }
      LOBYTE(v28) = a4;
      started = TcglibSetBandLocationEx(v13, (unsigned int)v45, v11, v28, (__int64)v42, (__int64)&v38);
      if ( started < 0 )
      {
        v30 = "TcglibSetBandLocationEx";
      }
      else
      {
        started = TcglibSetBand(v13, (unsigned int)v45, v11, 1, 1, 1, 1, 0LL, 0LL);
        if ( started >= 0 )
          goto LABEL_51;
        v30 = "TcglibSetBand";
      }
      RtlStringCbCopyA(pszDest, 0x20uLL, v30);
LABEL_51:
      TcglibStopTransaction(v13, v45, (unsigned int)started, v29);
      if ( started >= 0 )
      {
        TcglibCloseSession(v13, v45);
        v31 = v37;
        memset_0(v37, 0, 0x40uLL);
        started = RaidGetTcgLockingObject(a1, v11, v44, pszDest);
        if ( started >= 0 )
          RaidFillTcgLockingInfo(v44, v31);
        goto LABEL_44;
      }
      goto LABEL_43;
    }
  }
LABEL_44:
  if ( v20 )
    ExFreePoolWithTag(v20, 0x43546152u);
  return (unsigned int)started;
}
