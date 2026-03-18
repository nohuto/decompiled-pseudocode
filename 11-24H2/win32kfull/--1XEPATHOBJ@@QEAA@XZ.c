/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiWidenPath @ 0x1400E4EA0 (NtGdiWidenPath.c)
 *     NtGdiGetPath @ 0x1400E5650 (NtGdiGetPath.c)
 *     NtGdiStrokePath @ 0x1400E5B80 (NtGdiStrokePath.c)
 *     NtGdiFillPath @ 0x1400E5E20 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1400E5F80 (NtGdiCloseFigure.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6058 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     NtGdiFlattenPath @ 0x14021EAC0 (NtGdiFlattenPath.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  CAutoTGO::vUnguard((XEPATHOBJ *)((char *)this + 80));
}
