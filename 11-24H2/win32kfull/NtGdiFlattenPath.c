/*
 * XREFs of NtGdiFlattenPath @ 0x14021EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6058 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1400E61C0 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  ULONG v1; // ecx
  DC *v3[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v4[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v5; // [rsp+98h] [rbp-68h]

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( !v3[0] )
  {
    v1 = 6;
LABEL_3:
    EngSetLastError(v1);
    goto LABEL_10;
  }
  if ( !(unsigned int)DC::bInactive(v3[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v4, v3);
  if ( v5 && EPATHOBJ::bFlatten((EPATHOBJ *)v4) )
  {
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v4);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
    return 1LL;
  }
  EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v4);
LABEL_10:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return 0LL;
}
