/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14009D684
 * Callers:
 *     xxxMNButtonUp @ 0x14009D560 (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1402BDEDC (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140046B4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     zzzStartFade @ 0x1401E29B8 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14026564C (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 */

__int64 __fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v15[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v10 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v10 = 294;
      a5 = **(_QWORD **)(**(_QWORD **)a2 + 40LL);
      goto LABEL_7;
    }
    v10 = 273;
    a5 = 0LL;
  }
  a4 = *(_DWORD *)(*(_QWORD *)a3 + 8LL);
LABEL_7:
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v11 = zzzMNFadeSelection(v15, a3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15, v12);
  if ( v11 )
    zzzStartFade();
  v13 = -1;
  if ( v10 != 274 )
    v13 = -3;
  xxxWindowEvent(0x8013u, *(struct tagWND **)(**(_QWORD **)a2 + 16LL), v13, a4, 0);
  return xxxMNCancel(a1, v10, a4, a5);
}
