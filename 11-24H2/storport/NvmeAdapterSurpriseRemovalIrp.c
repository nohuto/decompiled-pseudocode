/*
 * XREFs of NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     NvmeCallMiniportAdapterControl @ 0x140071694 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x140071734 (NvmeIsAdapterControlSupported.c)
 *     McTemplateK0qjzzusqhtd_EtwWriteTransfer @ 0x1400CC42C (McTemplateK0qjzzusqhtd_EtwWriteTransfer.c)
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400CD54C (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeAdapterDisableDeviceInterface @ 0x1400CF764 (NvmeAdapterDisableDeviceInterface.c)
 *     NvmeAdapterReleaseRemoveLockAndWait @ 0x1400D65A4 (NvmeAdapterReleaseRemoveLockAndWait.c)
 *     NvmeAdapterDisableNonPoFxMiniportInterface @ 0x14012E604 (NvmeAdapterDisableNonPoFxMiniportInterface.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     NvmeAdapterReleaseResources @ 0x14019B0CC (NvmeAdapterReleaseResources.c)
 */

NTSTATUS __fastcall NvmeAdapterSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  char v5; // r12
  int v6; // esi
  int v7; // r13d
  __int32 v8; // r14d
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  const char *v13; // r8
  int v14; // r9d
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rdx
  bool v17; // cf
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v22; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+71h] [rbp-8Fh] BYREF
  char v24; // [rsp+72h] [rbp-8Eh] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  GUID v28; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char v36[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  char v39[16]; // [rsp+110h] [rbp+10h] BYREF
  char *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  char *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]

  v2 = *(_QWORD *)(a1 + 400);
  v28 = 0LL;
  v4 = a1;
  v5 = 0;
  v6 = *(_DWORD *)(v2 + 184);
  v7 = 0;
  v8 = _InterlockedExchange((volatile __int32 *)(a1 + 84), 5);
  v9 = v6 & 0x40000000;
  if ( v9 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1136) + 968LL) |= 0x8000uLL;
    a1 = *(_QWORD *)(a1 + 1136);
    *(_BYTE *)(a1 + 1228) = 1;
  }
  if ( (unsigned int)(v8 - 5) > 1 )
  {
    NvmeAdapterDisableDeviceInterface(v4, (__int64)a2);
    NvmeAdapterDisableNonPoFxMiniportInterface(v4);
    if ( NvmeIsAdapterControlSupported(v4 + 168, 16) )
    {
      v7 = NvmeCallMiniportAdapterControl(v4 + 168);
      v5 = 1;
    }
    if ( v9 )
      NvmeAdapterCompleteAllRequestsForSurpriseRemove(v4);
    NvmeAdapterReleaseRemoveLockAndWait(v4);
    NvmeAdapterReleaseResources(v4, (__int64)a2, v10);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v28);
    if ( (byte_140171462 & 0x20) != 0 )
      McTemplateK0pd_EtwWriteTransfer(a1, &EventPnpRequestComplete, &v28, a2, a2->IoStatus.Status);
  }
  if ( (byte_14017146A & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(v4 + 1136);
    if ( v11 )
    {
      v13 = (const char *)&word_140150F48;
      v14 = *(_DWORD *)(v11 + 744);
      if ( *(_QWORD *)(v11 + 752) )
        v13 = *(const char **)(v11 + 752);
    }
    else
    {
      v13 = byte_140151064;
      LOBYTE(v14) = 0;
    }
    v12 = (*(_BYTE *)(v4 + 144) & 1) != 0 ? 20 : 17;
    McTemplateK0qjzzusqhtd_EtwWriteTransfer(
      v4 + 1032,
      v12,
      (__int64)v13,
      *(_DWORD *)(v4 + 56),
      v4 + 1032,
      *(const wchar_t **)(v4 + 1016),
      *(const wchar_t **)(v4 + 1024),
      v14,
      v13,
      v12,
      v8,
      v5,
      v7);
  }
  if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(a1, 0x400000000000LL) )
  {
    v15 = *(const wchar_t **)(v4 + 1016);
    v30 = &v27;
    v27 = 0x1000000LL;
    v32 = v4 + 1032;
    v25 = *(_DWORD *)(v4 + 56);
    v34 = &v25;
    v31 = 8LL;
    v33 = 16LL;
    v35 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v36, v15);
    v16 = *(const wchar_t **)(v4 + 1024);
    v17 = (*(_BYTE *)(v4 + 144) & 1) != 0;
    v38 = 1LL;
    v22 = v17 ? 20 : 17;
    v37 = &v22;
    tlgCreate1Sz_wchar_t((__int64)v39, v16);
    v23 = v8;
    v40 = &v23;
    v41 = 1LL;
    v42 = &v24;
    v44 = &v26;
    v24 = v5;
    v43 = 1LL;
    v26 = v7;
    v45 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v18, (unsigned __int8 *)dword_140163150, v19, v20, 0xBu, &v29);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(v4 + 24), a2);
}
