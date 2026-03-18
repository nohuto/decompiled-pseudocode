/*
 * XREFs of ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C00C8350
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C007C038 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C007C158 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C007C6F0 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     FreeFileView @ 0x1C00C5AB8 (FreeFileView.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00C5B58 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C00C8200 (UmfdLoadFontFile.c)
 *     GreMakeFontDir @ 0x1C02D5048 (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

AutoExclusiveUmfdLookupLock *__fastcall AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock(
        AutoExclusiveUmfdLookupLock *this)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  *(_QWORD *)this = v2 + 23464;
  if ( v2 != -23464 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
