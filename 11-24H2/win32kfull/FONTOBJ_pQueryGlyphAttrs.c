/*
 * XREFs of FONTOBJ_pQueryGlyphAttrs @ 0x140308AD0
 * Callers:
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033A780 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B25CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1400B2D0C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

PFD_GLYPHATTR __stdcall FONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode)
{
  SIZE sizLogResPpi; // rax
  struct _FD_GLYPHATTR *v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( pfo && (sizLogResPpi = pfo[1].sizLogResPpi) != 0LL && *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3368LL) )
  {
    v7 = *(_QWORD *)&pfo[2].iUniq;
    v5 = *(struct _FD_GLYPHATTR **)(*(_QWORD *)(v7 + 96) + 3368LL);
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v8, (struct PFFOBJ *)&v7);
    if ( v5 )
      v5 = (struct _FD_GLYPHATTR *)((__int64 (__fastcall *)(FONTOBJ *, _QWORD))v5)(pfo, iMode);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v8);
  }
  else
  {
    v5 = 0LL;
  }
  v9 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  return v5;
}
