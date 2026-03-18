/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1402BD900
 * Callers:
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 * Callees:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(_DWORD ***a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0LL);
  v2 = 0;
  v3 = **a1;
  if ( (*v3 & 0x20) != 0 )
  {
    v3 = **a1;
    if ( (*v3 & 0x4000) != 0 )
      goto LABEL_8;
    v4 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 3));
    if ( v4 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v8, *(_QWORD *)(v4 + 8));
      if ( *(_QWORD *)v8[0] )
      {
        UserSessionState = W32GetUserSessionState(v5, v3);
        if ( !InternalSetTimer(*((_QWORD *)**a1 + 2), 0xFFFFLL, *(_DWORD *)(UserSessionState + 66072), 0LL, 0, 16) )
        {
          v2 = -1;
          goto LABEL_9;
        }
        ***a1 |= 0x4000u;
        **(_DWORD **)v8[0] |= 0x1000u;
LABEL_8:
        v2 = 1;
      }
    }
  }
LABEL_9:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v8, (__int64)v3);
  return v2;
}
