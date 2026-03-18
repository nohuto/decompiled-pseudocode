/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401B175C
 * Callers:
 *     xxxGetMenuItemRect @ 0x1401B15B8 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x14026A440 (xxxMenuItemFromPoint.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14006F050 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall GetMenuPwnd(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v2 = a2;
  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    if ( !a1 || (a2 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF, (_DWORD)a2 != 668) )
    {
      v5 = PtiCurrent(a1, a2);
      v9 = gSmartObjNullRef;
      v10 = *((_QWORD *)v5 + 209);
      *((_QWORD *)v5 + 209) = &v10;
      v6 = *(_QWORD *)(v2 + 16);
      if ( !v6 )
        v6 = **(_QWORD **)v2;
      v7 = MNGetPopupFromMenu(v6, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v9, v7);
      if ( *(_QWORD *)v9 )
        v3 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v9, v8);
    }
  }
  return v3;
}
