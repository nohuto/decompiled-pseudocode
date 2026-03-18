/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1400834A4
 * Callers:
 *     FxInitialize @ 0x14006BF58 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // bp
  int v3; // r14d
  void *Pool2; // rax
  void *v5; // rsi
  PVOID v6; // rbx
  char *v7; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( qword_1400C8030 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1400C8010);
    if ( dword_1400C8028 >= dword_1400C802C )
    {
      if ( dword_1400C802C > 0x23F )
        goto $Done_42;
      v3 = dword_1400C802C + 10;
      Pool2 = (void *)ExAllocatePool2(64LL, 56LL * (dword_1400C802C + 10), 1917089862LL);
      v5 = Pool2;
      if ( !Pool2 )
        goto $Done_42;
      v6 = qword_1400C8030;
      memmove(Pool2, qword_1400C8030, 56LL * dword_1400C802C);
      qword_1400C8030 = v5;
      dword_1400C802C = v3;
      ExFreePoolWithTag(v6, 0);
    }
    v7 = (char *)qword_1400C8030 + 56 * dword_1400C8028;
    *(_QWORD *)v7 = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *((_QWORD *)v7 + 1) = *(_QWORD *)&WdfBindInfo->Version.Major;
    *((_DWORD *)v7 + 4) = WdfBindInfo->Version.Build;
    *(_OWORD *)(v7 + 20) = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)(v7 + 36) = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v7[51] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = dword_1400C8028++;
$Done_42:
    KeReleaseSpinLock(&qword_1400C8010, v2);
  }
}
