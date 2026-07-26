/*
 * XREFs of ndisNsiGetInterfaceRodInformation @ 0x1401770E0
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x1400037D0 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ndisNsiCopyMemoryWithGlobalIfLock @ 0x1400038EC (ndisNsiCopyMemoryWithGlobalIfLock.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qDqL @ 0x140078DE0 (WPP_RECORDER_SF_qDqL.c)
 *     WPP_RECORDER_SF_qLqL @ 0x14007C5D0 (WPP_RECORDER_SF_qLqL.c)
 *     Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline @ 0x1400D3D64 (Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x140165EB0 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodInformation(__int64 a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int v3; // r15d
  struct _NDIS_IF_BLOCK *v4; // rax
  __int64 v5; // r14
  char v6; // si
  char v7; // bp
  int v8; // edi
  struct _NDIS_IF_BLOCK *MiniportIfBlock; // rbx
  unsigned __int8 *v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // ecx
  struct _NDIS_IF_BLOCK *v14; // rsi
  int v15; // ebp
  unsigned int v16; // r12d
  unsigned int *p_ifOperStatusFlags; // r13
  int IsEnabledDeviceUsageNoInline; // eax
  struct _NDIS_IF_BLOCK *v19; // r14
  struct _NDIS_IF_BLOCK *v20; // rsi
  int v21; // r15d
  unsigned int v22; // ebp
  int v23; // esi
  __int64 v24; // r15
  bool v25; // zf
  signed int v26; // eax
  struct _NDIS_IF_BLOCK *v27; // r13
  unsigned __int8 *v28; // r14
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v30)(void *, _QWORD, unsigned int *, unsigned __int8 *); // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v38; // [rsp+20h] [rbp-98h]
  __int64 v39; // [rsp+40h] [rbp-78h]
  unsigned int v40; // [rsp+50h] [rbp-68h]
  int v41; // [rsp+54h] [rbp-64h]
  unsigned int v42; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int8 *v44; // [rsp+60h] [rbp-58h]
  struct _NDIS_IF_BLOCK *v45; // [rsp+68h] [rbp-50h]
  struct _NDIS_IF_BLOCK *v47; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v49; // [rsp+D8h] [rbp+20h]

  v47 = a2;
  v3 = 0;
  v4 = a2;
  v5 = a3;
  v6 = (char)a2;
  v7 = a1;
  if ( !a2 )
    v4 = (struct _NDIS_IF_BLOCK *)a1;
  v8 = 0;
  v45 = v4;
  MiniportIfBlock = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      a1,
      (char)a2,
      a3);
  v10 = *(unsigned __int8 **)(v5 + 40);
  v11 = *(_DWORD *)(v5 + 52);
  v12 = *(_DWORD *)(v5 + 48);
  v41 = v11;
  v43 = v12;
  v44 = v10;
  if ( !v10 )
  {
    v13 = 0;
    goto LABEL_128;
  }
  LOBYTE(a2) = 0;
  v40 = v12;
  v49 = 0;
  if ( v12 <= 0 )
    goto LABEL_125;
  while ( 1 )
  {
    v14 = MiniportIfBlock;
    v15 = v8;
    if ( (_BYTE)a2 )
      break;
    v16 = 0;
    p_ifOperStatusFlags = 0LL;
    IsEnabledDeviceUsageNoInline = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
    LODWORD(a2) = v41;
    MiniportIfBlock = 0LL;
    v8 = 0;
    if ( !IsEnabledDeviceUsageNoInline )
    {
      MiniportIfBlock = v14;
      v8 = v15;
    }
    v19 = MiniportIfBlock;
    v20 = MiniportIfBlock;
    v21 = v8;
    if ( v41 )
    {
      switch ( v41 )
      {
        case 0:
          goto LABEL_16;
        case 4:
          v22 = 4;
          MiniportIfBlock = ndisGetMiniportIfBlock(v45);
          v23 = 8;
          p_ifOperStatusFlags = &MiniportIfBlock->ifOperStatusFlags;
          v24 = a1;
          v25 = (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() == 0;
          v26 = v40;
          if ( v25 )
            MiniportIfBlock = v19;
          else
            v8 = 2;
          goto LABEL_97;
        case 8:
          v22 = 4;
          if ( v47 )
          {
            if ( v47->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v47->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v47;
            p_ifOperStatusFlags = (unsigned int *)&MiniportIfBlock->MediaConnectState;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
              v8 = 2;
            else
              MiniportIfBlock = v20;
            v23 = 12;
          }
          else
          {
            v16 = 66186;
            v23 = 12;
          }
          goto LABEL_96;
        case 12:
          v22 = 4;
          if ( v47 )
          {
            if ( v47->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v47->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v47;
            p_ifOperStatusFlags = (unsigned int *)&MiniportIfBlock->MediaDuplexState;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
              v8 = 2;
            else
              MiniportIfBlock = v20;
            v23 = 16;
          }
          else
          {
            v16 = 66188;
            v23 = 16;
          }
          goto LABEL_96;
        case 16:
          v22 = 4;
          v16 = 65798;
          v23 = 20;
          goto LABEL_96;
        case 20:
          v22 = 1;
          if ( *(_BYTE *)(a1 + 1393) )
          {
            if ( *(_BYTE *)(a1 + 1394) )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(a1 + 1408) + 32LL) + 4040LL);
            else
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
            p_ifOperStatusFlags = (unsigned int *)&MiniportIfBlock->ifPromiscuousMode;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
              v8 = 2;
            else
              MiniportIfBlock = v20;
            v23 = 21;
          }
          else
          {
            v16 = 66176;
            v23 = 21;
          }
          goto LABEL_96;
        case 21:
          v22 = 1;
          p_ifOperStatusFlags = (unsigned int *)(a1 + 1217);
          v23 = 24;
          v24 = a1;
          v25 = (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() == 0;
          v26 = v40;
          if ( !v25 )
          {
            v8 = 2;
            MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
          }
          goto LABEL_97;
        case 24:
          v22 = 8;
          if ( v47 )
          {
            if ( v47->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v47->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v47;
            p_ifOperStatusFlags = (unsigned int *)&MiniportIfBlock->XmitLinkSpeed;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
              v8 = 2;
            else
              MiniportIfBlock = v20;
            v23 = 32;
          }
          else
          {
            v16 = 66180;
            v23 = 32;
          }
          goto LABEL_96;
        case 32:
          v22 = 8;
          if ( v47 )
          {
            if ( v47->IsNdisFilter )
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&v47->Miniport->Reserved4.Length + 4040LL);
            else
              MiniportIfBlock = v47;
            p_ifOperStatusFlags = (unsigned int *)&MiniportIfBlock->RcvLinkSpeed;
            if ( (unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
              v8 = 2;
            else
              MiniportIfBlock = v20;
            v23 = 40;
          }
          else
          {
            v16 = 66181;
            v23 = 40;
          }
          goto LABEL_96;
        case 40:
          v22 = 8;
          v16 = 66177;
          v23 = 48;
          goto LABEL_96;
        case 48:
          v22 = 8;
          v16 = 66178;
          v23 = 56;
          goto LABEL_96;
        case 56:
          v22 = 8;
          v16 = 66182;
          v23 = 64;
          goto LABEL_96;
        case 64:
          v26 = v40;
          v24 = a1;
          if ( v40 >= 0x90 && *(_BYTE *)(a1 + 1393) )
          {
            v22 = 144;
            v16 = 131334;
            v23 = 208;
          }
          else
          {
            v22 = 8;
            v16 = 131611;
            v23 = 72;
          }
          goto LABEL_97;
        case 72:
          v22 = 8;
          v16 = 131332;
          v23 = 80;
          goto LABEL_96;
        case 80:
          v22 = 8;
          v16 = 131609;
          v23 = 88;
          goto LABEL_96;
        case 88:
          v22 = 8;
          v16 = 131592;
          v23 = 96;
          goto LABEL_96;
        case 96:
          v22 = 8;
          v16 = 131594;
          v23 = 104;
          goto LABEL_96;
        case 104:
          v22 = 8;
          v16 = 131596;
          v23 = 112;
          goto LABEL_96;
        case 112:
          v22 = 8;
          v16 = 131610;
          v23 = 120;
          goto LABEL_96;
        case 120:
          v22 = 8;
          v16 = 131586;
          v23 = 128;
          goto LABEL_96;
        case 128:
          v22 = 8;
          v23 = 136;
          v16 = 131588;
          goto LABEL_96;
        case 136:
          v22 = 8;
          v23 = 144;
          v16 = 131590;
          goto LABEL_96;
        case 144:
          v22 = 8;
          v23 = 152;
          v16 = 131331;
          goto LABEL_96;
        case 152:
          v22 = 8;
          v23 = 160;
          v16 = 131612;
          goto LABEL_96;
        case 160:
          v22 = 8;
          v23 = 168;
          v16 = 131591;
          goto LABEL_96;
        case 168:
          v22 = 8;
          v23 = 176;
          v16 = 131593;
          goto LABEL_96;
        case 176:
          v22 = 8;
          v23 = 184;
          v16 = 131595;
          goto LABEL_96;
        case 184:
          v22 = 8;
          v23 = 192;
          v16 = 131585;
          goto LABEL_96;
        case 192:
          v22 = 8;
          v23 = 200;
          v16 = 131587;
          goto LABEL_96;
        case 200:
          v22 = 8;
          v23 = 208;
          v16 = 131589;
          goto LABEL_96;
        case 208:
          v23 = 212;
          p_ifOperStatusFlags = (unsigned int *)(a1 + 576);
          break;
        case 212:
          v23 = v41 + 4;
          p_ifOperStatusFlags = &v45->SupportedStatistics;
          v49 = 1;
          break;
        default:
          goto LABEL_120;
      }
      v22 = 4;
      v8 = 1;
      if ( !(unsigned int)Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline() )
        v8 = v21;
    }
    else if ( v43 < 0xD8 || v47 )
    {
LABEL_16:
      v22 = 4;
      v16 = 66179;
      v23 = 4;
    }
    else
    {
      v22 = 216;
      v49 = 1;
      v23 = 216;
      v16 = 66183;
    }
LABEL_96:
    v26 = v40;
    v24 = a1;
LABEL_97:
    if ( v26 < (int)v22 )
    {
LABEL_120:
      v34 = v40;
      LOBYTE(a2) = 1;
      v11 = v41;
      v49 = 1;
      goto LABEL_121;
    }
    if ( !v16 )
    {
      if ( !p_ifOperStatusFlags )
        goto LABEL_120;
      v35 = Feature_NDPCyberEO2508__private_IsEnabledDeviceUsageNoInline();
      v28 = v44;
      if ( v35 )
      {
        if ( v8 == 1 )
        {
          ndisNsiCopyMemoryWithGlobalIfLock(v44, p_ifOperStatusFlags, v22);
        }
        else
        {
          if ( v8 != 2 )
            goto LABEL_114;
          ndisNsiCopyMemoryWithIfBlockLock(MiniportIfBlock, v44, (unsigned __int8 *)p_ifOperStatusFlags, v22);
        }
      }
      else
      {
LABEL_114:
        memmove(v44, p_ifOperStatusFlags, v22);
      }
LABEL_119:
      LODWORD(a2) = v49;
      v34 = v40 - (v23 - v41);
      v44 = &v28[v23 - v41];
      v11 = v23;
      v40 = v34;
      v41 = v23;
      goto LABEL_121;
    }
    v27 = v45;
    v28 = v44;
    ProviderIfContext = v45->ProviderIfContext;
    v30 = (unsigned int (__fastcall *)(void *, _QWORD, unsigned int *, unsigned __int8 *))*((_QWORD *)v45->ProviderHandle
                                                                                          + 7);
    v42 = v22;
    if ( v30(ProviderIfContext, v16, &v42, v44) )
    {
      memset(v28, 0, v22);
      goto LABEL_119;
    }
    if ( v42 < v22 )
      memset(&v28[v42], 0, v22 - v42);
    if ( v27->bNdisIsProvider )
      goto LABEL_119;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v39) = v22;
      WPP_RECORDER_SF_qDqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x10u,
        (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
        v24,
        v16,
        (char)v28,
        v39);
    }
    if ( v16 == 66183 && v22 >= 0xD8 && !*((_DWORD *)v28 + 52) )
      *((_DWORD *)v28 + 52) = *(_DWORD *)(v24 + 576);
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_119;
    WPP_RECORDER_SF_qLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v31, v32, v33, v38);
    LODWORD(a2) = v49;
    v34 = v40 - (v23 - v41);
    v44 = &v28[v23 - v41];
    v11 = v23;
    v40 = v34;
    v41 = v23;
LABEL_121:
    if ( v34 <= 0 )
      goto LABEL_124;
  }
  v11 = v41;
LABEL_124:
  v6 = (char)v47;
  v7 = a1;
  v5 = a3;
LABEL_125:
  v13 = v11 - *(_DWORD *)(v5 + 52);
  v36 = -1073741811;
  if ( v13 )
    v36 = 0;
  v3 = v36;
LABEL_128:
  *(_DWORD *)(v5 + 48) = v13;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v39) = v3;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      v7,
      v6,
      v5,
      v39);
  }
  return v3;
}
