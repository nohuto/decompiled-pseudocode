/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0
 * Callers:
 *     vKillEudcRFONTs @ 0x1400FE4F4 (vKillEudcRFONTs.c)
 *     vKillRFONTList @ 0x140200E28 (vKillRFONTList.c)
 *     vRemoveAllInactiveRFONTs @ 0x14021F5CC (vRemoveAllInactiveRFONTs.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x14025A0F4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x14025AFF0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAU_LIST_ENTRY@@@Z @ 0x14030CCC0 (-vRestartKillEudcRFONTs@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x14030E130 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x14030E710 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B6C18 (--$FreeIsolatedType@V-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x14019DFE0 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1401B19A4 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1401BBA78 (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(RFONTOBJ *this, _QWORD *a2, struct PFFOBJ *a3, int a4)
{
  __int64 v6; // rdx
  __int64 SessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  void *v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v27; // [rsp+50h] [rbp+8h] BYREF
  HSEMAPHORE v28; // [rsp+58h] [rbp+10h] BYREF

  v6 = *(_QWORD *)this;
  v26 = *(__int64 **)(*(_QWORD *)this + 120LL);
  v27 = *(_QWORD **)(v6 + 96);
  if ( v27[378] && a4 )
    PDEVOBJ::DestroyFont((PDEVOBJ *)&v27, (struct _FONTOBJ *)v6);
  SessionState = W32GetSessionState((_DWORD)this, v6);
  SEMOBJ<18>::SEMOBJ<18>(&v28, *(_QWORD *)(SessionState + 96) + 4872LL);
  v9 = *(int *)(*(_QWORD *)this + 668LL);
  if ( (int)v9 > 0 )
    GrepCaptureLiveMemoryDump(400LL, 49LL, v9);
  if ( a2 )
  {
    v10 = *(_QWORD *)this + 672LL;
    v11 = *(_QWORD *)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
      goto LABEL_24;
    v12 = *(_QWORD **)(*(_QWORD *)this + 680LL);
    if ( *v12 != v10 )
      goto LABEL_24;
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(_QWORD *)this;
    v27 = a2;
    *(_QWORD *)(v13 + 672) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 680LL) = 0LL;
    if ( (a2[5] & 0x800000) != 0 )
      v14 = *(_DWORD *)(a2[439] + 1552LL);
    else
      v14 = *((_DWORD *)a2 + 388);
    PDEVOBJ::cInactive((PDEVOBJ *)&v27, v14 - 1);
  }
  if ( !a3 )
    goto LABEL_17;
  v15 = *(_QWORD *)this + 488LL;
  v16 = *(_QWORD *)v15;
  if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || (v17 = *(_QWORD **)(*(_QWORD *)this + 496LL), *v17 != v15) )
LABEL_24:
    __fastfail(3u);
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)(*(_QWORD *)this + 488LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 496LL) = 0LL;
LABEL_17:
  SEMOBJ<18>::vUnlock(&v28);
  PFEOBJ::vFreepfdg(&v26, v18, v19);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3, v20, v21);
  RFONTOBJ::vDeleteCache(this);
  v24 = *(void **)(*(_QWORD *)this + 696LL);
  if ( v24 )
    Win32FreePool(v24);
  v25 = *(_QWORD *)(*(_QWORD *)this + 856LL);
  if ( v25 )
    GreDeleteSemaphore(v25, v22, v23);
  GreDeleteSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL), v22, v23);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<237568,928>>(*(Gre::Base **)this);
  *(_QWORD *)this = 0LL;
}
