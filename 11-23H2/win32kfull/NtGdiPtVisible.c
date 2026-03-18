/*
 * XREFs of NtGdiPtVisible @ 0x1C02A9890
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00BDAA4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct REGION *v11; // [rsp+38h] [rbp-69h] BYREF
  DC *v12[2]; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v14[24]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v15[32]; // [rsp+88h] [rbp-19h] BYREF
  _QWORD v16[2]; // [rsp+A8h] [rbp+7h] BYREF
  _BYTE v17[64]; // [rsp+B8h] [rbp+17h] BYREF
  struct _POINTL v18; // [rsp+120h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( !v12[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return 0xFFFFFFFFLL;
  }
  v6 = 1;
  if ( *((_WORD *)v12[0] + 6) == 1 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v16);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v12, 1);
    if ( (v15[24] & 1) != 0 )
    {
      v11 = XDCOBJ::prgnEffRao(v12);
      v18.x = a2;
      v18.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v12, -2147483132);
      EXFORMOBJ::bXform((EXFORMOBJ *)v14, &v18, 1LL);
      v7 = *((_DWORD *)v12[0] + 10) & 1LL;
      v18.x += *((_DWORD *)v12[0] + 2 * v7 + 254);
      v18.y += *((_DWORD *)v12[0] + 2 * v7 + 255);
      v6 = RGNOBJ::bInside((RGNOBJ *)&v11, &v18) == 2;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15, v8, v9, v10);
      if ( v16[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v16);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v17);
      if ( v12[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v12);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
      return v6;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  }
  else
  {
    TraceLoggingWriteUnsupportedGdiUsage(21, 0LL, *((unsigned __int16 *)v12[0] + 6), 6LL, 0LL);
    EngSetLastError(6u);
    v6 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v6;
}
