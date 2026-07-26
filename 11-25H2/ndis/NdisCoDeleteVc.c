/*
 * XREFs of NdisCoDeleteVc @ 0x1400D8BE0
 * Callers:
 *     NdisMCmDeleteVc @ 0x1400D9520 (NdisMCmDeleteVc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140055140 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D7C00 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qLLqL @ 0x1400D98AC (WPP_RECORDER_SF_qLLqL.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx
  KIRQL v4; // r13
  NDIS_STATUS v5; // edi
  _QWORD *v6; // rsi
  char *v7; // r14
  __int64 v8; // rcx
  NTSTATUS v9; // ebp
  char *v10; // rsi
  NDIS_HANDLE *v11; // rdx
  NDIS_HANDLE *v12; // rcx
  __int64 v13; // rcx
  void (__fastcall *v14)(_QWORD); // rax
  NDIS_HANDLE *v15; // rdx
  NDIS_HANDLE *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  NDIS_HANDLE *v19; // rdx
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  __int64 v24; // [rsp+28h] [rbp-50h]
  PVOID WnodeEventItem; // [rsp+80h] [rbp+8h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v24) = HIDWORD(NdisVcHandle);
    WPP_RECORDER_SF_qLLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), **((_DWORD **)NdisVcHandle + 1));
  }
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
      v9 = IoWMIWriteEvent(WnodeEventItem);
      if ( v9 < 0 )
      {
        v10 = (char *)NdisVcHandle + 192;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = v9;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x12u,
            0x14u,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
            v24);
          v10 = (char *)NdisVcHandle + 192;
        }
        if ( (byte_140125101 & 0x10) != 0 )
        {
          McTemplateK0qqq_EtwWriteTransfer(
            v8,
            &IoWMIWriteEventFailed,
            (const GUID *)(*((_QWORD *)NdisVcHandle + 24) + 4008LL),
            v9,
            1,
            0);
          v7 = v10;
        }
        ExFreePoolWithTag(WnodeEventItem, 0);
        v6 = (char *)NdisVcHandle + 304;
      }
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)v7 + 1344LL));
    v11 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 40);
    if ( v11[1] != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 41);
    if ( *v12 != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    *v12 = v11;
    v11[1] = v12;
    --*(_WORD *)(*(_QWORD *)v7 + 1384LL);
    ExFreePoolWithTag(*((PVOID *)NdisVcHandle + 38), 0);
    v13 = *(_QWORD *)v7;
    *((_DWORD *)NdisVcHandle + 74) = 0;
    *v6 = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v13 + 1344));
  }
  v14 = (void (__fastcall *)(_QWORD))*((_QWORD *)NdisVcHandle + 12);
  if ( v14 )
    v14(*((_QWORD *)NdisVcHandle + 13));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v15 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 4);
  if ( v15[1] != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  v16 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 5);
  if ( *v16 != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  *v16 = v15;
  v15[1] = v16;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v17 = *((_QWORD *)NdisVcHandle + 17);
  if ( v17 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v17 + 232));
    v18 = (_QWORD *)*((_QWORD *)NdisVcHandle + 19);
    if ( (NDIS_HANDLE)v18[1] == (char *)NdisVcHandle + 152 )
    {
      v19 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 20);
      if ( *v19 == (char *)NdisVcHandle + 152 )
      {
        *v19 = v18;
        v18[1] = v19;
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
    ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle, v20, v21, v22);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v5;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x15u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      v24);
  }
  return v5;
}
