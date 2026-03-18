/*
 * XREFs of ?GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D6D24
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C02C3930 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00C32AC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010C7E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r15
  int **v12; // rsi
  int v13; // edi
  char *v14; // rcx
  _DWORD v16[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v19[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[64]; // [rsp+D0h] [rbp-30h] BYREF
  char v22; // [rsp+110h] [rbp+10h] BYREF

  v5 = a3;
  v7 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] || (*(_DWORD *)(v17[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v7 = 0;
  }
  else
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19);
    v16[1] = *(unsigned __int16 *)(v17[0] + 12LL);
    v16[0] = 22;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v17, 0) )
    {
      v11 = a2 + 56 * v5;
      if ( a2 < v11 )
      {
        v12 = (int **)(a2 + 48);
        while ( 1 )
        {
          v13 = *((_DWORD *)v12 - 10);
          v14 = &v22;
          if ( ((30 * v13 + 7) & 0xFFFFFFF8) > 0xC0 )
            v14 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)v17,
                                *((_DWORD *)v12 - 12),
                                *((_DWORD *)v12 - 11),
                                *((_DWORD *)v12 - 6),
                                (struct tagRECT *)((char *)v12 - 20),
                                (unsigned __int16 *)*(v12 - 4),
                                v13,
                                *v12,
                                *(unsigned __int8 *)(*(_QWORD *)(v17[0] + 976LL) + 213LL),
                                v14,
                                a4,
                                (const struct RFONTOBJ::Tag *)v16) )
            break;
          v12 += 7;
          if ( (unsigned __int64)(v12 - 6) >= v11 )
            goto LABEL_13;
        }
        v7 = 0;
      }
    }
    else
    {
      v7 = XDCOBJ::bFullScreen((XDCOBJ *)v17);
    }
LABEL_13:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19, v8, v9, v10);
    if ( v20 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v20);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
  }
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
  return v7;
}
