/*
 * XREFs of NtGdiBeginPath @ 0x1C02C0450
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rcx
  int v3; // eax
  DC *v4[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v5[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v6[8]; // [rsp+50h] [rbp-29h] BYREF
  struct HPATH__ **v7; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = v4[0];
  if ( !v4[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
  if ( *((_QWORD *)v4[0] + 25) )
  {
    v3 = *((_DWORD *)v4[0] + 62);
    if ( (v3 & 2) != 0 )
    {
      *((_DWORD *)v4[0] + 62) = v3 & 0xFFFFFFFD;
      v1 = v4[0];
    }
    *((_DWORD *)v1 + 62) &= ~1u;
    DC::hpath(v1, 0LL);
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
  if ( !v7 )
  {
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    goto LABEL_3;
  }
  DC::hpath(v4[0], *v7);
  *((_DWORD *)v4[0] + 62) |= 1u;
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
  return 1LL;
}
