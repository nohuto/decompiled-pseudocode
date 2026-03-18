/*
 * XREFs of PnpDereferenceNotify @ 0x1409EED14
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     PnpNotifyHwProfileChange @ 0x140720684 (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x14073423C (PipKsrNotifyDrivers.c)
 *     PnpNotifyDeviceClassChange @ 0x1409EE72C (PnpNotifyDeviceClassChange.c)
 *     PnpProcessDeferredRegistrations @ 0x1409EE8CC (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID P)
{
  PVOID *v3; // rcx
  PVOID *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *(PVOID **)P;
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ObfDereferenceObject(*((PVOID *)P + 6));
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v5 = (void *)*((_QWORD *)P + 11);
      if ( v5 )
      {
        ObfDereferenceObject(v5);
        *((_QWORD *)P + 11) = 0LL;
      }
    }
    v6 = (void *)*((_QWORD *)P + 3);
    if ( v6 )
    {
      ZwClose(v6);
      *((_QWORD *)P + 3) = 0LL;
    }
    ExDeleteResourceLite(*((PERESOURCE *)P + 9));
    ExFreePoolWithTag(*((PVOID *)P + 9), 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
