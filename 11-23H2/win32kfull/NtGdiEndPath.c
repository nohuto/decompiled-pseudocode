/*
 * XREFs of NtGdiEndPath @ 0x1C02C0630
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  ULONG v1; // ecx
  int v3; // eax
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( !v4[0] )
  {
    v1 = 6;
LABEL_3:
    EngSetLastError(v1);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
  v3 = *(_DWORD *)(v4[0] + 248LL);
  if ( (v3 & 1) == 0 )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  *(_DWORD *)(v4[0] + 248LL) = v3 & 0xFFFFFFFE;
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
  return 1LL;
}
