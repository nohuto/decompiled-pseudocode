/*
 * XREFs of NtGdiAbortPath @ 0x1C02C03A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rax
  int v3; // ecx
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = (DC *)v4[0];
  if ( v4[0] )
  {
    if ( *(_QWORD *)(v4[0] + 200LL) )
    {
      v3 = *(_DWORD *)(v4[0] + 248LL);
      if ( (v3 & 2) != 0 )
      {
        *(_DWORD *)(v4[0] + 248LL) = v3 & 0xFFFFFFFD;
        v1 = (DC *)v4[0];
      }
      *((_DWORD *)v1 + 62) &= ~1u;
      DC::hpath(v1, 0LL);
      v1 = (DC *)v4[0];
    }
    if ( v1 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
    return 1LL;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
}
