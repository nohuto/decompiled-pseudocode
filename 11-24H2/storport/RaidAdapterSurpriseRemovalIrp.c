/*
 * XREFs of RaidAdapterSurpriseRemovalIrp @ 0x1401BB518
 * Callers:
 *     RaidAdapterPnpIrp @ 0x140015724 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     RaidAdapterDisableDeviceInterface @ 0x14003DE00 (RaidAdapterDisableDeviceInterface.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidAdapterDisableMFNDInterface @ 0x14005A110 (RaidAdapterDisableMFNDInterface.c)
 *     RaidAdapterDisableNonPoFxMiniportInterface @ 0x14005A148 (RaidAdapterDisableNonPoFxMiniportInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x14005A1EC (RaidAdapterDisableRpmbInterface.c)
 *     RaidAdapterMarkChildrenMissing @ 0x14005C5F4 (RaidAdapterMarkChildrenMissing.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x14006646C (RaidReleaseAdapterRemoveLockAndWait.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 */

NTSTATUS __fastcall RaidAdapterSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // r13d
  int v3; // r12d
  char v4; // r15
  __int32 v7; // r14d
  __int64 v8; // rcx
  const wchar_t *v11; // rdx
  char v12; // cl
  const wchar_t *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  ULONG Status; // [rsp+20h] [rbp-B9h]
  char v18; // [rsp+30h] [rbp-A9h] BYREF
  char v19; // [rsp+31h] [rbp-A8h] BYREF
  char v20; // [rsp+32h] [rbp-A7h] BYREF
  int v21; // [rsp+34h] [rbp-A5h] BYREF
  int v22; // [rsp+38h] [rbp-A1h] BYREF
  GUID v23; // [rsp+40h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-89h] BYREF
  __int64 v25; // [rsp+70h] [rbp-69h]
  int v26; // [rsp+78h] [rbp-61h]
  int v27; // [rsp+7Ch] [rbp-5Dh]
  int *v28; // [rsp+80h] [rbp-59h]
  int v29; // [rsp+88h] [rbp-51h]
  int v30; // [rsp+8Ch] [rbp-4Dh]
  char v31[16]; // [rsp+90h] [rbp-49h] BYREF
  char *v32; // [rsp+A0h] [rbp-39h]
  int v33; // [rsp+A8h] [rbp-31h]
  int v34; // [rsp+ACh] [rbp-2Dh]
  char v35[16]; // [rsp+B0h] [rbp-29h] BYREF
  char *v36; // [rsp+C0h] [rbp-19h]
  int v37; // [rsp+C8h] [rbp-11h]
  int v38; // [rsp+CCh] [rbp-Dh]
  char *v39; // [rsp+D0h] [rbp-9h]
  int v40; // [rsp+D8h] [rbp-1h]
  int v41; // [rsp+DCh] [rbp+3h]
  int *v42; // [rsp+E0h] [rbp+7h]
  int v43; // [rsp+E8h] [rbp+Fh]
  int v44; // [rsp+ECh] [rbp+13h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v4 = 0;
  v7 = _InterlockedExchange((volatile __int32 *)(a1 + 88), 5);
  if ( (unsigned int)(v7 - 5) > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableMFNDInterface(a1);
    RaidAdapterDisableNonPoFxMiniportInterface((struct _UNICODE_STRING *)a1);
    RaidAdapterDisableRpmbInterface(a1);
    if ( RaidIsAdapterControlSupported(a1 + 376, 16) )
    {
      v3 = RaCallMiniportAdapterControl(a1 + 376);
      v4 = 1;
    }
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterMarkChildrenMissing(a1);
    RaidAdapterReleaseResources(a1, a2);
  }
  if ( StorEtwLoggingEnabled )
  {
    v23 = 0LL;
    IoGetActivityIdIrp(a2, &v23);
    if ( (byte_140171462 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v8, &EventPnpRequestComplete, &v23, a2, Status);
    }
  }
  if ( (unsigned int)dword_140170178 > 5
    && (qword_140170188 & 0x400000000000LL) != 0
    && (qword_140170190 & 0x400000000000LL) == qword_140170190 )
  {
    v11 = *(const wchar_t **)(a1 + 4720);
    v27 = 0;
    v30 = 0;
    v25 = a1 + 5064;
    v28 = &v21;
    v26 = 16;
    v21 = v2;
    v29 = 4;
    tlgCreate1Sz_wchar_t((__int64)v31, v11);
    v12 = *(_BYTE *)(a1 + 4276);
    v13 = *(const wchar_t **)(a1 + 4728);
    v34 = 0;
    v18 = v12;
    v32 = &v18;
    v33 = 1;
    tlgCreate1Sz_wchar_t((__int64)v35, v13);
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v36 = &v19;
    v39 = &v20;
    v42 = &v22;
    v19 = v7;
    v37 = 1;
    v20 = v4;
    v40 = 1;
    v22 = v3;
    v43 = v14;
    tlgWriteTransfer_EtwWriteTransfer(v15, (unsigned __int8 *)dword_14015DE19, v16, v14, 0xAu, &v24);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
