/*
 * XREFs of ?GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C00C32F8
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C01194C0 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00C32AC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C00C363C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v10; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v11[64]; // [rsp+80h] [rbp+17h] BYREF
  int v12; // [rsp+E8h] [rbp+7Fh] BYREF
  int v13; // [rsp+ECh] [rbp+83h]

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    if ( (*(_DWORD *)(v7[0] + 36LL) & 0x10000) == 0 )
    {
      v13 = *(unsigned __int16 *)(v7[0] + 12LL);
      v12 = 24;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v9);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v7, 0) )
        v5 = ExtTextOutRect((struct XDCOBJ *)v7, a2, (const struct RFONTOBJ::Tag *)&v12);
      else
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)v7);
      v3 = v5;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
      if ( v10 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v10);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
      v4 = v7[0];
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v8);
  return v3;
}
