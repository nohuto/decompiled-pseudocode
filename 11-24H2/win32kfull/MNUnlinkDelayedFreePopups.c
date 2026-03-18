/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1402B40A0
 * Callers:
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, a1);
  while ( *(_QWORD *)v5[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v6, *(_QWORD *)(*(_QWORD *)v5[0] + 72LL));
    **(_DWORD **)v5[0] &= ~0x10000u;
    if ( *(_QWORD *)v5[0] != a1 )
      **(_DWORD **)v5[0] &= ~0x20000000u;
    *(_QWORD *)(*(_QWORD *)v5[0] + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v5[0] + 64LL) = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v5, *(_QWORD *)v6[0]);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v5, v2);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v6, v3);
}
