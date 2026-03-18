/*
 * XREFs of GreGetDCOrgEx @ 0x14000F3C0
 * Callers:
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, struct _POINTL *a2, _OWORD *a3)
{
  unsigned int DCPoint; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  if ( v8[0] )
  {
    *a3 = *(_OWORD *)(v8[0] + 1032LL);
    DCPoint = GreGetDCPoint(a1, 0x20u, a2);
  }
  else
  {
    DCPoint = 0;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v8);
  return DCPoint;
}
