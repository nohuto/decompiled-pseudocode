/*
 * XREFs of GreSetDIBColorTable @ 0x1C02D1410
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00C237C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00C249C (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00C32AC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C02A717C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ecx
  int v14; // ebx
  __int64 v16; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v18[40]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v19[32]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v20; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v21[64]; // [rsp+98h] [rbp+17h] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( v17[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v17);
    v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v17);
    if ( SURFACE::bDIBSection(v8) && (unsigned int)(*(_DWORD *)(v10 + 96) - 1) <= 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 152LL) |= 0xFu;
      v16 = *(_QWORD *)(v9 + 128);
      v13 = *(_DWORD *)(v16 + 28);
      if ( a2 < v13 )
      {
        v14 = *(_DWORD *)(v16 + 28);
        if ( a2 + a3 <= v13 )
          v14 = a2 + a3;
        v7 = v14 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v16, a4, a2, v7);
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19, v9, v11, v12);
    if ( v20 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v20);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
  return v7;
}
