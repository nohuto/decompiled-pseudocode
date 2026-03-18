/*
 * XREFs of NtGdiStrokePath @ 0x1400E5B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6058 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1400E61C0 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1400E624C (-vDestroy@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  ULONG v1; // ecx
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // ebx
  DC *v6[14]; // [rsp+30h] [rbp-D0h] BYREF
  int *v7[10]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v8[48]; // [rsp+F0h] [rbp-10h] BYREF
  struct _RECTFX v9; // [rsp+138h] [rbp+38h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( !v6[0] || (*((_DWORD *)v6[0] + 9) & 0x10000) != 0 )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_4:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v6[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(v3 + 976);
  if ( (*(_DWORD *)(v4 + 152) & 0x2000) != 0 )
    GreDCSelectPen(v3, *(_QWORD *)(v4 + 168));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v7, (struct XDCOBJ *)v6);
  if ( !v7[1] )
  {
    EngSetLastError(8u);
    DC::vDestroy(v6[0]);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
    goto LABEL_4;
  }
  DC::QuickInitXform(v6[0], &v9, 516LL);
  v5 = EPATHOBJ_bStrokeAndOrFill(v7, (struct _POINTL **)v6, (LINEATTRS *)((char *)v6[0] + 208), (XFORMOBJ *)&v9, 1u);
  DC::vDestroy(v6[0]);
  EPATHOBJ::vUnlock((EPATHOBJ *)v7);
  CAutoTGO::vUnguard((CAutoTGO *)v8);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v5;
}
