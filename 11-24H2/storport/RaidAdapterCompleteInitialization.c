/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x140037B0C
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaFreeRaidResources @ 0x140010D60 (RaFreeRaidResources.c)
 *     IsDmarEnabled @ 0x140011E00 (IsDmarEnabled.c)
 *     RaInitializeRaidResources @ 0x1400219E0 (RaInitializeRaidResources.c)
 *     StorGetActiveGatewayCountRequired @ 0x140021F74 (StorGetActiveGatewayCountRequired.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     RaMiniportIsFeatureSupported @ 0x140040214 (RaMiniportIsFeatureSupported.c)
 *     StorCreateSymbolicLink @ 0x14004D2B0 (StorCreateSymbolicLink.c)
 *     RaInitializePower @ 0x14005352C (RaInitializePower.c)
 *     McTemplateK0qzzuqqqqqqd_EtwWriteTransfer @ 0x14005864C (McTemplateK0qzzuqqqqqqd_EtwWriteTransfer.c)
 *     RaidAdapterEnableIoResourceAutoReclaim @ 0x14005A21C (RaidAdapterEnableIoResourceAutoReclaim.c)
 *     StorUpdateIoGatewayWaterMarks @ 0x140067C6C (StorUpdateIoGatewayWaterMarks.c)
 *     RaidQueryPciDeviceType @ 0x14008DB80 (RaidQueryPciDeviceType.c)
 *     StorAllocateGatewayLockHandleArray @ 0x1400A62A8 (StorAllocateGatewayLockHandleArray.c)
 *     StorCreateIoGateways @ 0x1400A6300 (StorCreateIoGateways.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaidInitializeDma @ 0x140183F38 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1401840CC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // esi
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rcx
  int IoGateways; // edi
  unsigned int ActiveGatewayCountRequired; // eax
  int v11; // r8d
  ULONG v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // r9
  unsigned int v15; // edx
  char v16; // al
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  const wchar_t *v22; // rdx
  const wchar_t *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v28; // [rsp+78h] [rbp-90h] BYREF
  ULONG v29; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  int v31; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  ULONG *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  char v37[16]; // [rsp+D8h] [rbp-30h] BYREF
  char *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  char v40[16]; // [rsp+F8h] [rbp-10h] BYREF
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int64 *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v29 = 0;
  v4 = 0;
  if ( v1 == 1314275652 )
  {
    v5 = a1 + 274;
  }
  else if ( v1 == 1094997074 )
  {
    v5 = a1 + 482;
  }
  else
  {
    v5 = 98LL;
  }
  v6 = 316LL;
  if ( v1 != 1314275652 )
    v6 = 524LL;
  v7 = ((*(_DWORD *)(v6 + a1) + 7) & 0xFFFFFFF8) + 1184;
  if ( *(_BYTE *)v5 == 1 )
  {
    v4 = (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x80u) != 0 ? 224 : 184;
    v7 += v4;
  }
  IoGateways = StorCreateIoGateways(a1);
  if ( IoGateways < 0 )
  {
    *(_DWORD *)(a1 + 6188) = 13;
    goto LABEL_44;
  }
  ActiveGatewayCountRequired = StorGetActiveGatewayCountRequired(a1, &v29);
  v12 = v29;
  v13 = ActiveGatewayCountRequired;
  if ( ActiveGatewayCountRequired > *(_DWORD *)(a1 + 972) )
  {
    if ( (byte_140171466 & 0x20) != 0 )
      McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
        v8,
        (unsigned int)&EventTooManyActiveGatewayRequired,
        v11,
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)(a1 + 4728),
        *(_QWORD *)(a1 + 4720),
        *(_BYTE *)(a1 + 4371));
    v13 = *(_DWORD *)(a1 + 972);
  }
  if ( !v13 )
    goto LABEL_43;
  do
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_DWORD *)(a1 + 588);
    v16 = *(_BYTE *)(a1 + 4370);
    v30 = 320LL * v2;
    IoGateways = RaInitializeRaidResources(*(_QWORD *)(a1 + 960) + v30, v15, v7, v14, v16, v4);
    if ( IoGateways < 0 )
      break;
    StorUpdateIoGatewayWaterMarks(*(_QWORD *)(a1 + 960) + v30);
    ++v2;
  }
  while ( v2 < v13 );
  if ( !v2 )
  {
LABEL_43:
    *(_DWORD *)(a1 + 6188) = 14;
    v2 = 0;
    if ( IoGateways >= 0 )
      goto LABEL_47;
    goto LABEL_44;
  }
  if ( v2 != v13 && (byte_140171466 & 0x20) != 0 )
    McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
      v8,
      (unsigned int)&EventInsufficientGatewayInitialized,
      v17,
      *(_DWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 4728),
      *(_QWORD *)(a1 + 4720),
      *(_BYTE *)(a1 + 4371));
  *(_DWORD *)(a1 + 968) = v2;
  *(_DWORD *)(a1 + 976) = (v2 + v12 - 1 - (v2 + v12 - 1) % v2) / v2;
  if ( v2 <= 1 )
  {
    v2 = 0;
  }
  else
  {
    RaidAdapterEnableIoResourceAutoReclaim(a1, 0LL);
    v2 = 0;
    if ( *(_QWORD *)(a1 + 4960) )
      StorAllocateGatewayLockHandleArray(a1);
  }
  if ( *(_BYTE *)(a1 + 4370) )
  {
    if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 880) )
    {
      IoGateways = RaidInitializeDma(v18, *(_QWORD *)(a1 + 32), a1 + 384);
      if ( IoGateways < 0 )
      {
        *(_DWORD *)(a1 + 6188) = 15;
        goto LABEL_44;
      }
    }
  }
  v19 = *(_QWORD *)(a1 + 8);
  v20 = *(_DWORD *)(a1 + 432);
  if ( v20 > *(_DWORD *)(v19 + 152) )
    *(_DWORD *)(v19 + 152) = v20;
  IoGateways = StorCreateSymbolicLink((PUNICODE_STRING)(a1 + 40));
  if ( IoGateways < 0 )
  {
    *(_DWORD *)(a1 + 6188) = 16;
LABEL_44:
    if ( *(_DWORD *)(a1 + 968) )
    {
      do
        RaFreeRaidResources(*(_QWORD *)(a1 + 960) + 320LL * v2++, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4370));
      while ( v2 < *(_DWORD *)(a1 + 968) );
      *(_DWORD *)(a1 + 968) = 0;
    }
    goto LABEL_47;
  }
  v21 = *(_QWORD *)(a1 + 608);
  *(_DWORD *)(a1 + 5780) = -1;
  if ( *(_DWORD *)(v21 + 4) == 5 && (int)RaidQueryPciDeviceType(*(_QWORD *)(a1 + 32), a1 + 5780) < 0 )
    *(_DWORD *)(a1 + 5780) = -2;
  RaInitializePower(a1);
  *(_DWORD *)(a1 + 344) = 1;
  *(_BYTE *)(a1 + 356) = 0;
  *(_QWORD *)(a1 + 348) = 1LL;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1 + 376, 14LL)
    && *(int *)(a1 + 604) < 0
    && !IsDmarEnabled(a1)
    && ForwardedIoEnabled )
  {
    *(_BYTE *)(a1 + 112) |= 2u;
  }
LABEL_47:
  if ( (unsigned int)dword_140170178 > 5 && (unsigned __int8)tlgKeywordOn(v8, 0x400000000000LL) )
  {
    v22 = *(const wchar_t **)(a1 + 4720);
    v33 = a1 + 5064;
    v29 = *(_DWORD *)(a1 + 56);
    v35 = &v29;
    v34 = 16LL;
    v36 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v37, v22);
    v23 = *(const wchar_t **)(a1 + 4728);
    v28 = *(_BYTE *)(a1 + 4276);
    v38 = &v28;
    v39 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v40, v23);
    v24 = *(unsigned int *)(a1 + 588);
    v41 = &v31;
    v31 = v24;
    v43 = &v30;
    v42 = 4LL;
    LODWORD(v30) = IoGateways;
    v44 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v24, (unsigned __int8 *)dword_14015E0DA, v25, v26, 9u, &v32);
  }
  return (unsigned int)IoGateways;
}
