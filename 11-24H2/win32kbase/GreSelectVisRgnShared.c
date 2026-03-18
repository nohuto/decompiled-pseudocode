/*
 * XREFs of GreSelectVisRgnShared @ 0x14000FDA0
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     NtUserGetDC @ 0x14016C9E0 (NtUserGetDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 */

__int64 __fastcall GreSelectVisRgnShared(HDC a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v5 = 0;
  if ( v7[0] )
    v5 = GreSelectVisRgnInternal(v7, a2, a3);
  DCOBJA::~DCOBJA((DCOBJA *)v7);
  return v5;
}
