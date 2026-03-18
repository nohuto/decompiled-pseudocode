/*
 * XREFs of xxxHiliteMenuItem @ 0x1402DFF5C
 * Callers:
 *     NtUserHiliteMenuItem @ 0x140298630 (NtUserHiliteMenuItem.c)
 * Callees:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14009D3C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1401B1824 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHiliteMenuItem(struct tagWND *a1, __int64 **a2, unsigned int a3, __int64 a4)
{
  char v4; // si
  signed int TopLevelMenuIndex; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 *v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((__int64)a2, a3);
  v8 = **a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded((__int64)a1, a2, v8, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, 0LL);
  xxxMNInvertItem(v11, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v11, v9);
  return 1LL;
}
