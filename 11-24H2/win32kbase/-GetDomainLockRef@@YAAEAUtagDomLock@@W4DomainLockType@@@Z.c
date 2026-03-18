/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140043D80
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140043C00 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x140043C98 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400477C0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140091FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400922FC (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401A9890 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetDomainLockRef(__int64 a1)
{
  int v1; // edi
  __int64 UserSessionState; // rax
  __int64 v3; // rbx

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v3 = UserSessionState + 42336;
  switch ( v1 )
  {
    case 0:
      return UserSessionState + 42336;
    case 1:
      return UserSessionState + 42344;
    case 2:
      return UserSessionState + 42464;
    case 4:
      return UserSessionState + 42352;
    case 3:
      return UserSessionState + 42360;
    case 5:
      return UserSessionState + 42368;
    case 8:
      return UserSessionState + 42376;
    case 9:
      return UserSessionState + 42384;
    case 11:
      return UserSessionState + 42408;
    case 10:
      return UserSessionState + 42392;
    case 13:
      return UserSessionState + 42416;
    case 12:
      return UserSessionState + 42432;
    case 14:
      return UserSessionState + 42400;
    case 15:
      return UserSessionState + 42440;
    case 16:
      return UserSessionState + 42448;
    case 17:
      return UserSessionState + 42456;
    case 6:
      return UserSessionState + 42472;
    case 7:
      return UserSessionState + 42480;
    case 18:
      return UserSessionState + 42488;
    case 19:
      return UserSessionState + 42496;
    case 20:
      return UserSessionState + 42504;
    case 21:
      return UserSessionState + 42512;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 274LL);
  return v3 + 88;
}
