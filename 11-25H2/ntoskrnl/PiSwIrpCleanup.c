/*
 * XREFs of PiSwIrpCleanup @ 0x140724800
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x140AC02F0 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140424514 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A4A98 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405A4E64 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwFindSwDevice @ 0x1409A1B58 (PiSwFindSwDevice.c)
 *     PiSwCloseDescendants @ 0x140A822E4 (PiSwCloseDescendants.c)
 *     PiSwCloseDevice @ 0x140A8F2A4 (PiSwCloseDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rsi
  __int64 v5; // rax
  char v6; // di
  __int64 SwDevice; // rax
  const wchar_t *v8; // rbp
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  const wchar_t *v13; // r9
  const wchar_t *v14; // r8
  const wchar_t *v15; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpClose_Start,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
  PiSwLock();
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 112);
  v6 = 0;
  while ( 1 )
  {
    v8 = *(const wchar_t **)(v5 + 8);
    if ( wcsnicmp(v8, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v8);
    if ( !SwDevice )
      goto LABEL_12;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_13;
    v5 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v8);
  v9 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
  if ( v9 )
    ObfDereferenceObject(v9);
  else
LABEL_12:
    v6 = 1;
LABEL_13:
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 && _InterlockedExchange64((volatile __int64 *)(v10 + 104), 0LL) )
  {
    v3 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v6 )
  {
    PiSwCloseDescendants(a1 + 72, 0LL);
    PiSwCloseDevice(a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v6 && (*(_DWORD *)(a1 + 204) & 1) != 0 )
  {
    v11 = *(_WORD *)(a1 + 72) <= 2u ? 3221226078LL : (unsigned int)PiCMDeleteDeviceWorker(*(PCWSTR *)(a1 + 80));
    if ( (byte_140EEFA6C & 0x40) != 0 )
    {
      v13 = &word_140AD8570;
      v14 = &word_140AD8570;
      v15 = &word_140AD8570;
      if ( *(_QWORD *)(a1 + 80) )
        v14 = *(const wchar_t **)(a1 + 80);
      if ( *(_QWORD *)(a1 + 16) )
        v15 = *(const wchar_t **)(a1 + 16);
      if ( *(_QWORD *)(a1 + 8) )
        v13 = *(const wchar_t **)(a1 + 8);
      McTemplateK0zzzd_EtwWriteTransfer(
        v11,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_UninstallDevice,
        (__int64)v14,
        v13,
        v15,
        v14,
        v11);
    }
  }
  if ( v3 )
  {
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741536;
    IofCompleteRequest(v3, 0);
  }
  if ( (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v11,
      (__int64)KMPnPEvt_SwDevice_IrpClose_Stop,
      v12,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16),
      v6);
}
