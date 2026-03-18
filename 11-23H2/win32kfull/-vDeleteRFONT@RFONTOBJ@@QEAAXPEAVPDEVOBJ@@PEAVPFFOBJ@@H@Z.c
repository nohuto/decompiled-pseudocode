/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C007DDA8
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C006E81C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C007DD90 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     bUnloadEudcFont @ 0x1C0115BF4 (bUnloadEudcFont.c)
 *     vKillRFONTList @ 0x1C026AEE4 (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C026B090 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02B5E20 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02B6E40 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02B6F14 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C007E070 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C007E108 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C007E128 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C007E150 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C007E1B0 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C007E1D0 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007E20C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C007E25C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C007E2D4 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C007E370 (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CA424 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C013DF18 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v6; // rdx
  Gre::Base *v9; // rcx
  bool v10; // si
  const struct SEMOBJSHARED *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // eax
  PVOID pvConsumer; // rcx
  PVOID v16[2]; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *sizLogResPpi; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF
  char v19; // [rsp+A0h] [rbp+40h] BYREF

  v6 = *this;
  v16[0] = (*this)[1].pvProducer;
  sizLogResPpi = (struct RFONT *)v6[1].sizLogResPpi;
  if ( *((_QWORD *)sizLogResPpi + 376) && a4 )
    PDEVOBJ::DestroyFont((PDEVOBJ *)&sizLogResPpi, v6);
  v9 = *(Gre::Base **)&(*this)[1].ulStyleSize;
  if ( v9 )
  {
    v18 = *(_QWORD *)&(*this)[1].ulStyleSize;
    v10 = (*((_DWORD *)v9 + 10) & 1) != 0 && *((_DWORD *)v9 + 2);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi,
      *((_BYTE *)v9 + 40) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v19, (struct PDEVOBJ *)&v18);
    if ( v10 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v18 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(v18 + 48), 11LL);
    }
    if ( *(_QWORD *)(v18 + 3008) && a4 )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v18, *this);
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v18 + 48));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v19);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi);
  }
  v18 = *((_QWORD *)Gre::Base::Globals(v9) + 3);
  GreAcquireSemaphore(v18);
  if ( RFONTOBJ::bActive((RFONTOBJ *)this, v11) )
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 49LL, SHIDWORD((*this)[10].iTTUniq), 0LL, 0LL, 0LL, 0LL, 0);
  if ( a2 )
  {
    sizLogResPpi = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 1LL);
    PDEVOBJ::prfntInactive(a2, sizLogResPpi);
    v12 = PDEVOBJ::cInactive(a2);
    v13 = *(_QWORD *)a2;
    v14 = v12 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v13 + 3496) + 1528LL) = v14;
    else
      *(_DWORD *)(v13 + 1528) = v14;
  }
  if ( a3 )
  {
    sizLogResPpi = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 0LL);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = sizLogResPpi;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  PFEOBJ::vFreepfdg((PFEOBJ *)v16);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this);
  pvConsumer = (*this)[10].pvConsumer;
  if ( pvConsumer )
    Win32FreePool(pvConsumer);
  if ( (*this)[13].iTTUniq )
    ((void (*)(void))GreDeleteSemaphore)();
  GreDeleteSemaphore((*this)[7].pvProducer);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*this);
  *this = 0LL;
}
