/*
 * XREFs of NdisCoDeleteVc @ 0x1400D15A0
 * Callers:
 *     NdisMCmDeleteVc @ 0x1400D1EE0 (NdisMCmDeleteVc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1400523E0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D05C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLLqL @ 0x1400D226C (WPP_RECORDER_SF_qLLqL.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx
  KIRQL v4; // r13
  NDIS_STATUS v5; // edi
  _QWORD *v6; // rsi
  char *v7; // r14
  int v8; // edx
  __int64 v9; // rcx
  NTSTATUS v10; // ebp
  char *v11; // rsi
  NDIS_HANDLE *v12; // rdx
  NDIS_HANDLE *v13; // rcx
  __int64 v14; // rcx
  void (__fastcall *v15)(_QWORD); // rax
  NDIS_HANDLE *v16; // rdx
  NDIS_HANDLE *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // r8
  NDIS_HANDLE *v20; // rdx
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  PVOID WnodeEventItem; // [rsp+80h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), **((_DWORD **)NdisVcHandle + 1));
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v3 = (_DWORD *)*((_QWORD *)NdisVcHandle + 1);
  v4 = v2;
  if ( (*v3 & 3) != 0 )
  {
    v5 = 65539;
    goto LABEL_30;
  }
  if ( (*v3 & 4) != 0 )
  {
    v5 = -1073676286;
    goto LABEL_30;
  }
  *((_DWORD *)NdisVcHandle + 1) |= 0x80000000;
  if ( *((_DWORD *)NdisVcHandle + 22) && *((_QWORD *)NdisVcHandle + 27) )
    *v3 |= 8u;
  v6 = (char *)NdisVcHandle + 304;
  if ( *((_QWORD *)NdisVcHandle + 38) )
  {
    WnodeEventItem = 0LL;
    ndisSetupWmiNode(
      *((struct _NDIS_MINIPORT_BLOCK **)NdisVcHandle + 24),
      (const struct _UNICODE_STRING *)((char *)NdisVcHandle + 296),
      0,
      (__int128 *)&GUID_NDIS_NOTIFY_VC_REMOVAL,
      (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
    v7 = (char *)NdisVcHandle + 192;
    if ( WnodeEventItem )
    {
      v10 = IoWMIWriteEvent(WnodeEventItem);
      if ( v10 < 0 )
      {
        v11 = (char *)NdisVcHandle + 192;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            18,
            20,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
            v10);
          v11 = (char *)NdisVcHandle + 192;
        }
        if ( (byte_14011B101 & 0x10) != 0 )
        {
          McTemplateK0qqq_EtwWriteTransfer(
            v9,
            &IoWMIWriteEventFailed,
            (const GUID *)(*((_QWORD *)NdisVcHandle + 24) + 4008LL),
            v10,
            1,
            0);
          v7 = v11;
        }
        ExFreePoolWithTag(WnodeEventItem, 0);
        v6 = (char *)NdisVcHandle + 304;
      }
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)v7 + 1344LL));
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 40);
    if ( v12[1] != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    v13 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 41);
    if ( *v13 != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    *v13 = v12;
    v12[1] = v13;
    --*(_WORD *)(*(_QWORD *)v7 + 1384LL);
    ExFreePoolWithTag(*((PVOID *)NdisVcHandle + 38), 0);
    v14 = *(_QWORD *)v7;
    *((_DWORD *)NdisVcHandle + 74) = 0;
    *v6 = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 1344));
  }
  v15 = (void (__fastcall *)(_QWORD))*((_QWORD *)NdisVcHandle + 12);
  if ( v15 )
    v15(*((_QWORD *)NdisVcHandle + 13));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v16 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 4);
  if ( v16[1] != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  v17 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 5);
  if ( *v17 != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  *v17 = v16;
  v16[1] = v17;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v18 = *((_QWORD *)NdisVcHandle + 17);
  if ( v18 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 232));
    v19 = (_QWORD *)*((_QWORD *)NdisVcHandle + 19);
    if ( (NDIS_HANDLE)v19[1] == (char *)NdisVcHandle + 152 )
    {
      v20 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 20);
      if ( *v20 == (char *)NdisVcHandle + 152 )
      {
        *v20 = v19;
        v19[1] = v20;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 17) + 232LL));
        goto LABEL_29;
      }
    }
LABEL_35:
    __fastfail(3u);
  }
LABEL_29:
  v5 = 0;
LABEL_30:
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v4);
  if ( !v5 )
    ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle, v21, v22, v23);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      19,
      21,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      v5);
  }
  return v5;
}
