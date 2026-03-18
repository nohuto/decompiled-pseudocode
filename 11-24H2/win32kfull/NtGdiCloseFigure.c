/*
 * XREFs of NtGdiCloseFigure @ 0x1400E5F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6058 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  ULONG v1; // ecx
  _QWORD v3[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v4[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v5; // [rsp+98h] [rbp-68h]
  _BYTE v6[48]; // [rsp+E0h] [rbp-20h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( !v3[0] )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_4:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
    return 0LL;
  }
  if ( (*(_DWORD *)(v3[0] + 248LL) & 1) == 0 )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v4, (struct XDCOBJ *)v3);
  if ( !v5 || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v4) )
  {
    EngSetLastError(8u);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v4);
    goto LABEL_4;
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)v4);
  CAutoTGO::vUnguard((CAutoTGO *)v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return 1LL;
}
