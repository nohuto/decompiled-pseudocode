/*
 * XREFs of RaidSetTcgLockingObjectAuthKey @ 0x14008E3CC
 * Callers:
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x14007EE34 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1400837CC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibSetBandPin @ 0x14013CC20 (TcglibSetBandPin.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidSetTcgLockingObjectAuthKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        NTSTRSAFE_PSTR pszDest)
{
  int v11; // eax
  __int64 v12; // rdi
  int TcgLockingObject; // ebx
  _OWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  _OWORD v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  _BYTE v19[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+C8h] [rbp-38h]
  _OWORD v22[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+100h] [rbp+0h]

  v18 = 0;
  memset(v17, 0, sizeof(v17));
  memset_0(v19, 0, 0x50uLL);
  v16 = 0;
  v23 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v15, 0, sizeof(v15));
  memset(v22, 0, sizeof(v22));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 || (v12 = *(_QWORD *)(a1 + 3584)) == 0 || !*(_QWORD *)(a1 + 3592) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6056);
    if ( !v12 || !*(_QWORD *)(a1 + 6064) )
      return (unsigned int)-1073741637;
  }
  TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v19, pszDest);
  if ( TcgLockingObject >= 0 )
  {
    if ( v20 || v21 )
    {
      TcgLockingObject = RaidFillTcgAuthKey(v12, 0, a3, a4, (unsigned int *)v17, pszDest);
      if ( TcgLockingObject >= 0 )
      {
        TcgLockingObject = RaidFillTcgAuthKey(v12, 0, a5, a6, (unsigned int *)v15, pszDest);
        if ( TcgLockingObject >= 0 )
        {
          TcgLockingObject = TcglibOpenSession(v12, 2LL, v22);
          if ( TcgLockingObject >= 0 )
          {
            TcgLockingObject = TcglibSetBandPin(v12, (unsigned int)v22, a2, (unsigned int)v17, (__int64)v15);
            if ( TcgLockingObject < 0 )
              RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibSetBandPin");
            TcglibCloseSession(v12, v22);
          }
          else
          {
            RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)TcgLockingObject;
}
