/*
 * XREFs of ndisNsiGetInterfaceRodEnumObject @ 0x1401768B0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140004BD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x1400037D0 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ndisNsiCopyMemoryWithGlobalIfLock @ 0x1400038EC (ndisNsiCopyMemoryWithGlobalIfLock.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline @ 0x1400D3D64 (Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z @ 0x140165CC0 (-ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x140165EB0 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(__int64 a1, struct _NDIS_IF_BLOCK *a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  struct _NDIS_IF_BLOCK *v6; // rsi
  unsigned int v7; // r12d
  bool v8; // zf
  struct _NDIS_IF_BLOCK *v9; // rax
  int v10; // ebx
  struct _NDIS_IF_BLOCK *MiniportIfBlock; // rdi
  unsigned int v12; // edx
  int v13; // r13d
  unsigned int v14; // edx
  char v15; // al
  struct _NDIS_IF_BLOCK *v16; // rsi
  int v17; // ebp
  _IF_PHYSICAL_ADDRESS_LH *p_ifOperStatusFlags; // r15
  struct _NDIS_IF_BLOCK *v19; // r14
  struct _NDIS_IF_BLOCK *v20; // r13
  int v21; // r12d
  unsigned int v22; // esi
  unsigned int v23; // ecx
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v28; // eax
  int v29; // eax
  struct _NDIS_IF_BLOCK *v30; // r13
  int v31; // eax
  int v32; // r13d
  unsigned __int8 *v33; // r14
  __int64 v34; // rdx
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v36)(void *, __int64, unsigned int *, unsigned __int8 *); // rax
  unsigned int v37; // ecx
  unsigned __int8 *v38; // r14
  int v39; // eax
  char v41; // [rsp+40h] [rbp-2C8h]
  unsigned int v43; // [rsp+4Ch] [rbp-2BCh]
  signed int v44; // [rsp+50h] [rbp-2B8h]
  unsigned __int8 *v46; // [rsp+60h] [rbp-2A8h]
  unsigned int v47; // [rsp+68h] [rbp-2A0h] BYREF
  struct _NDIS_IF_BLOCK *v48; // [rsp+70h] [rbp-298h]
  struct _NDIS_IF_BLOCK *v49; // [rsp+78h] [rbp-290h]
  __int64 v50; // [rsp+80h] [rbp-288h]
  _OWORD v51[2]; // [rsp+88h] [rbp-280h] BYREF
  __int16 v52; // [rsp+A8h] [rbp-260h]
  struct _IF_COUNTED_STRING_LH Src; // [rsp+B0h] [rbp-258h] BYREF

  v4 = a3;
  v50 = a3;
  v48 = a2;
  v6 = (struct _NDIS_IF_BLOCK *)a1;
  v7 = 0;
  memset(&Src, 0, sizeof(Src));
  v8 = a2 == 0LL;
  v9 = a2;
  v10 = 0;
  MiniportIfBlock = 0LL;
  if ( v8 )
    v9 = v6;
  v49 = v9;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)v6,
      v4);
  v12 = *(_DWORD *)(v4 + 52);
  v13 = *(_DWORD *)(v4 + 48);
  v52 = 0;
  v43 = v12;
  v44 = v13;
  v46 = *(unsigned __int8 **)(v4 + 40);
  memset(v51, 0, sizeof(v51));
  if ( !v46 )
  {
    v14 = 0;
    goto LABEL_117;
  }
  v15 = 0;
  v41 = 0;
  if ( v13 <= 0 )
    goto LABEL_114;
  do
  {
    v16 = MiniportIfBlock;
    v17 = v10;
    if ( v15 )
      break;
    p_ifOperStatusFlags = 0LL;
    v10 = 0;
    MiniportIfBlock = 0LL;
    if ( !(unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
    {
      v10 = v17;
      MiniportIfBlock = v16;
    }
    v19 = MiniportIfBlock;
    v20 = MiniportIfBlock;
    v21 = v10;
    if ( v43 > 0x218 )
    {
      switch ( v43 )
      {
        case 0x21Cu:
          v22 = 4;
          MiniportIfBlock = ndisGetMiniportIfBlock(v49);
          v24 = 544;
          p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)&MiniportIfBlock->ifOperStatusFlags;
          IsEnabledDeviceUsageNoInline = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
          v23 = 0;
          if ( IsEnabledDeviceUsageNoInline )
            v10 = 2;
          else
            MiniportIfBlock = v19;
          goto LABEL_96;
        case 0x220u:
          v22 = 4;
          v23 = 65798;
          v24 = 548;
          goto LABEL_96;
        case 0x224u:
          v22 = 34;
          if ( *(_WORD *)(a1 + 524) == 71 && a4 )
          {
            v23 = 0;
            p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)v51;
            v24 = 582;
          }
          else if ( *(_BYTE *)(a1 + 1393) )
          {
            p_ifOperStatusFlags = &v49->ifPhysAddress;
            v28 = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
            v23 = 0;
            v10 = 1;
            v24 = 582;
            if ( !v28 )
              v10 = v21;
          }
          else
          {
            v23 = 16843010;
            v24 = 582;
          }
          goto LABEL_96;
        case 0x246u:
          v22 = 34;
          if ( *(_WORD *)(a1 + 524) == 71 && a4 )
          {
            v23 = 0;
            p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)v51;
            v24 = 616;
          }
          else if ( *(_BYTE *)(a1 + 1393) )
          {
            p_ifOperStatusFlags = &v49->PermanentPhysAddress;
            v29 = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
            v23 = 0;
            v10 = 1;
            v24 = 616;
            if ( !v29 )
              v10 = v21;
          }
          else
          {
            v23 = 16843009;
            v24 = 616;
          }
          goto LABEL_96;
        case 0x268u:
          v22 = 4;
          v23 = 66184;
          v24 = 624;
          goto LABEL_96;
        case 0x270u:
          v22 = 8;
          if ( v48 )
          {
            if ( v48->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v48->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v48;
            p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)&MiniportIfBlock->XmitLinkSpeed;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
            {
              v23 = 0;
              v10 = 2;
              v24 = 632;
            }
            else
            {
              v23 = 0;
              v24 = 632;
              MiniportIfBlock = v20;
            }
          }
          else
          {
            v23 = 66180;
            v24 = 632;
          }
          goto LABEL_96;
        case 0x278u:
          v22 = 8;
          if ( v48 )
          {
            if ( v48->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v48->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v48;
            p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)&MiniportIfBlock->RcvLinkSpeed;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
            {
              v23 = 0;
              v10 = 2;
              v24 = 640;
            }
            else
            {
              v23 = 0;
              v24 = 640;
              MiniportIfBlock = v20;
            }
          }
          else
          {
            v23 = 66181;
            v24 = 640;
          }
          goto LABEL_96;
        case 0x280u:
          v22 = 1;
          if ( *(_BYTE *)(a1 + 1393) )
          {
            if ( *(_BYTE *)(a1 + 1394) )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(a1 + 1408) + 32LL) + 4040LL);
            else
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
            p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)&MiniportIfBlock->ifPromiscuousMode;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
            {
              v23 = 0;
              v10 = 2;
              v24 = 641;
            }
            else
            {
              v23 = 0;
              v24 = 641;
              MiniportIfBlock = v20;
            }
          }
          else
          {
            v23 = 66176;
            v24 = 641;
          }
          goto LABEL_96;
        case 0x281u:
          v30 = (struct _NDIS_IF_BLOCK *)a1;
          v24 = 642;
          p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)(a1 + 1217);
          break;
        case 0x282u:
          v30 = (struct _NDIS_IF_BLOCK *)a1;
          v24 = 644;
          p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)(a1 + 1218);
          break;
        case 0x284u:
          v22 = 4;
          if ( v48 )
          {
            if ( v48->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v48->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v48;
            p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)&MiniportIfBlock->MediaConnectState;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
            {
              v23 = 0;
              v10 = 2;
              v24 = 648;
            }
            else
            {
              v23 = 0;
              v24 = 648;
              MiniportIfBlock = v20;
            }
          }
          else
          {
            v23 = 66186;
            v24 = 648;
          }
          goto LABEL_96;
        case 0x288u:
          v22 = 4;
          if ( v48 )
          {
            if ( v48->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v48->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v48;
            p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)&MiniportIfBlock->MediaDuplexState;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
            {
              v23 = 0;
              v10 = 2;
            }
            else
            {
              v23 = 0;
              MiniportIfBlock = v20;
            }
          }
          else
          {
            v23 = 66188;
          }
          v24 = v43 + 4;
          v41 = 1;
          goto LABEL_96;
        default:
          goto LABEL_110;
      }
      v22 = 1;
      v31 = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
      v23 = 0;
      if ( v31 )
      {
        v10 = 2;
        MiniportIfBlock = v30;
      }
    }
    else if ( v43 == 536 )
    {
      v22 = 4;
      v23 = 66179;
      v24 = 540;
    }
    else
    {
      if ( v43 )
      {
        if ( v43 != 4 )
        {
          if ( v43 != 20 )
          {
LABEL_110:
            v32 = v44;
LABEL_111:
            v12 = v43;
            v15 = 1;
            v41 = 1;
            continue;
          }
          v22 = 516;
          if ( *(_BYTE *)(a1 + 1393) )
          {
            if ( *(_BYTE *)(a1 + 1394) )
            {
              ndisIfGetFilterIfAlias(*(struct _NDIS_FILTER_BLOCK **)(a1 + 1408), &Src);
              v23 = 0;
              p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)&Src;
              v24 = 536;
            }
            else
            {
              p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)(a1 + 596);
              v25 = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
              v23 = 0;
              v10 = 1;
              v24 = 536;
              if ( !v25 )
                v10 = v21;
            }
          }
          else
          {
            v24 = 536;
            v23 = 66185;
          }
          goto LABEL_96;
        }
        v22 = 16;
        p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)(a1 + 580);
        v24 = 20;
      }
      else
      {
        v22 = 4;
        p_ifOperStatusFlags = (_IF_PHYSICAL_ADDRESS_LH *)(a1 + 576);
        v24 = 4;
      }
      v26 = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
      v23 = 0;
      v10 = 1;
      if ( !v26 )
        v10 = v21;
    }
LABEL_96:
    v32 = v44;
    if ( v44 < (int)v22 )
      goto LABEL_111;
    if ( v23 )
    {
      v33 = v46;
      v34 = v23;
      ProviderIfContext = v49->ProviderIfContext;
      v36 = (unsigned int (__fastcall *)(void *, __int64, unsigned int *, unsigned __int8 *))*((_QWORD *)v49->ProviderHandle
                                                                                             + 7);
      v47 = v22;
      if ( v36(ProviderIfContext, v34, &v47, v46) )
      {
        memset(v46, 0, v22);
      }
      else if ( v47 < v22 )
      {
        memset(&v46[v47], 0, v22 - v47);
      }
      goto LABEL_109;
    }
    if ( !p_ifOperStatusFlags )
      goto LABEL_111;
    v33 = v46;
    if ( !(unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_104;
    if ( v10 == 1 )
    {
      ndisNsiCopyMemoryWithGlobalIfLock(v46, p_ifOperStatusFlags, v22);
      goto LABEL_109;
    }
    if ( v10 == 2 )
      ndisNsiCopyMemoryWithIfBlockLock(MiniportIfBlock, v46, (unsigned __int8 *)p_ifOperStatusFlags, v22);
    else
LABEL_104:
      memmove(v46, p_ifOperStatusFlags, v22);
LABEL_109:
    v12 = v24;
    v37 = v24 - v43;
    v38 = &v33[v24 - v43];
    v43 = v24;
    v15 = v41;
    v32 = v44 - v37;
    v44 -= v37;
    v46 = v38;
  }
  while ( v32 > 0 );
  LOBYTE(v6) = a1;
  v4 = v50;
LABEL_114:
  v14 = v12 - *(_DWORD *)(v4 + 52);
  v39 = -1073741811;
  if ( v14 )
    v39 = 0;
  v7 = v39;
LABEL_117:
  *(_DWORD *)(v4 + 48) = v14;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)v6,
      v4,
      v7);
  return v7;
}
