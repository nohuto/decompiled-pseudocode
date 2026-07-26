/*
 * XREFs of ndisNsiGetInterfaceRodInformation @ 0x14016CC70
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000F620 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140011370 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x140003900 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ndisNsiCopyMemoryWithGlobalIfLock @ 0x140003A1C (ndisNsiCopyMemoryWithGlobalIfLock.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qDqL @ 0x14005D980 (WPP_RECORDER_SF_qDqL.c)
 *     WPP_RECORDER_SF_qLqL @ 0x140060B00 (WPP_RECORDER_SF_qLqL.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x140159860 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  struct _NDIS_IF_BLOCK *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  _DWORD *v8; // r14
  int v9; // eax
  int v10; // r12d
  int v11; // r12d
  char v12; // r9
  int v13; // r8d
  unsigned int v14; // esi
  unsigned __int8 *p_ifOperStatusFlags; // r11
  struct _NDIS_IF_BLOCK *MiniportIfBlock; // r10
  struct _NDIS_IF_BLOCK *v17; // rcx
  unsigned int v18; // edi
  int v19; // ebx
  struct _NDIS_IF_PROVIDER_BLOCK *ProviderHandle; // rax
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v22)(void *, _QWORD, unsigned int *, _DWORD *); // rax
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  int v29; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+40h] [rbp-58h]
  unsigned int v31; // [rsp+50h] [rbp-48h] BYREF
  int v32; // [rsp+54h] [rbp-44h]
  struct _NDIS_IF_BLOCK *v33; // [rsp+58h] [rbp-40h]
  char v34; // [rsp+A8h] [rbp+10h]
  int v36; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = (struct _NDIS_IF_BLOCK *)a2;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    v4 = (struct _NDIS_IF_BLOCK *)a1;
  v33 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      a2,
      a3);
  v8 = *(_DWORD **)(v5 + 40);
  v9 = *(_DWORD *)(v5 + 48);
  v10 = *(_DWORD *)(v5 + 52);
  v32 = v9;
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_98;
  }
  v12 = 0;
  v36 = v9;
  v34 = 0;
  v13 = v9;
  if ( v9 <= 0 )
    goto LABEL_95;
  while ( !v12 )
  {
    v14 = 0;
    p_ifOperStatusFlags = 0LL;
    LODWORD(a2) = 0;
    MiniportIfBlock = 0LL;
    if ( v10 )
    {
      switch ( v10 )
      {
        case 0:
          goto LABEL_14;
        case 4:
          v18 = 4;
          MiniportIfBlock = ndisGetMiniportIfBlock(v33);
          v19 = 8;
          LODWORD(a2) = 2;
          p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->ifOperStatusFlags;
          goto LABEL_70;
        case 8:
          v18 = 4;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v19 = 12;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->MediaConnectState;
            }
            else
            {
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1220);
              LODWORD(a2) = 2;
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v6;
              v19 = 12;
            }
          }
          else
          {
            v17 = v33;
            v14 = 66186;
            v19 = 12;
          }
          goto LABEL_70;
        case 12:
          v18 = 4;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v19 = 16;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->MediaDuplexState;
            }
            else
            {
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1224);
              LODWORD(a2) = 2;
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v6;
              v19 = 16;
            }
          }
          else
          {
            v17 = v33;
            v14 = 66188;
            v19 = 16;
          }
          goto LABEL_70;
        case 16:
          v17 = v33;
          v18 = 4;
          v14 = 65798;
          v19 = 20;
          goto LABEL_70;
        case 20:
          v18 = 1;
          if ( *(_BYTE *)(a1 + 1393) )
          {
            if ( *(_BYTE *)(a1 + 1394) )
            {
              LODWORD(a2) = 2;
              v19 = 21;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(a1 + 1408) + 32LL) + 4040LL);
              v17 = v33;
              p_ifOperStatusFlags = &MiniportIfBlock->ifPromiscuousMode;
            }
            else
            {
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1216);
              LODWORD(a2) = 2;
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
              v19 = 21;
            }
          }
          else
          {
            v17 = v33;
            v14 = 66176;
            v19 = 21;
          }
          goto LABEL_70;
        case 21:
          v17 = v33;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1217);
          v18 = 1;
          MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
          v19 = 24;
          LODWORD(a2) = 2;
          goto LABEL_70;
        case 24:
          v18 = 8;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v19 = 32;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->XmitLinkSpeed;
            }
            else
            {
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1200);
              LODWORD(a2) = 2;
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v6;
              v19 = 32;
            }
          }
          else
          {
            v17 = v33;
            v14 = 66180;
            v19 = 32;
          }
          goto LABEL_70;
        case 32:
          v18 = 8;
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 1394) )
            {
              LODWORD(a2) = 2;
              v19 = 40;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v6 + 1408) + 32LL) + 4040LL);
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->RcvLinkSpeed;
            }
            else
            {
              v17 = v33;
              p_ifOperStatusFlags = (unsigned __int8 *)(v6 + 1208);
              LODWORD(a2) = 2;
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v6;
              v19 = 40;
            }
          }
          else
          {
            v17 = v33;
            v14 = 66181;
            v19 = 40;
          }
          goto LABEL_70;
        case 40:
          v17 = v33;
          v18 = 8;
          v14 = 66177;
          v19 = 48;
          goto LABEL_70;
        case 48:
          v17 = v33;
          v18 = 8;
          v14 = 66178;
          v19 = 56;
          goto LABEL_70;
        case 56:
          v17 = v33;
          v18 = 8;
          v14 = 66182;
          v19 = 64;
          goto LABEL_70;
        case 64:
          if ( (unsigned int)v13 >= 0x90 && *(_BYTE *)(a1 + 1393) )
          {
            v17 = v33;
            v18 = 144;
            v14 = 131334;
            v19 = 208;
          }
          else
          {
            v17 = v33;
            v18 = 8;
            v14 = 131611;
            v19 = 72;
          }
          goto LABEL_70;
        case 72:
          v17 = v33;
          v18 = 8;
          v14 = 131332;
          v19 = 80;
          goto LABEL_70;
        case 80:
          v17 = v33;
          v18 = 8;
          v14 = 131609;
          v19 = 88;
          goto LABEL_70;
        case 88:
          v17 = v33;
          v18 = 8;
          v14 = 131592;
          v19 = 96;
          goto LABEL_70;
        case 96:
          v17 = v33;
          v18 = 8;
          v14 = 131594;
          v19 = 104;
          goto LABEL_70;
        case 104:
          v17 = v33;
          v18 = 8;
          v14 = 131596;
          v19 = 112;
          goto LABEL_70;
        case 112:
          v17 = v33;
          v18 = 8;
          v14 = 131610;
          v19 = 120;
          goto LABEL_70;
        case 120:
          v17 = v33;
          v18 = 8;
          v14 = 131586;
          v19 = 128;
          goto LABEL_70;
        case 128:
          v17 = v33;
          v18 = 8;
          v14 = 131588;
          v19 = 136;
          goto LABEL_70;
        case 136:
          v17 = v33;
          v18 = 8;
          v14 = 131590;
          v19 = 144;
          goto LABEL_70;
        case 144:
          v17 = v33;
          v18 = 8;
          v14 = 131331;
          v19 = 152;
          goto LABEL_70;
        case 152:
          v17 = v33;
          v18 = 8;
          v14 = 131612;
          v19 = 160;
          goto LABEL_70;
        case 160:
          v17 = v33;
          v18 = 8;
          v14 = 131591;
          v19 = 168;
          goto LABEL_70;
        case 168:
          v17 = v33;
          v18 = 8;
          v14 = 131593;
          v19 = 176;
          goto LABEL_70;
        case 176:
          v17 = v33;
          v18 = 8;
          v14 = 131595;
          v19 = 184;
          goto LABEL_70;
        case 184:
          v17 = v33;
          v18 = 8;
          v14 = 131585;
          v19 = 192;
          goto LABEL_70;
        case 192:
          v17 = v33;
          v18 = 8;
          v14 = 131587;
          v19 = 200;
          goto LABEL_70;
        case 200:
          v17 = v33;
          v18 = 8;
          v14 = 131589;
          v19 = 208;
          goto LABEL_70;
        case 208:
          v17 = v33;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 576);
          v18 = 4;
          v19 = 212;
          LODWORD(a2) = 1;
          goto LABEL_70;
        case 212:
          v17 = v33;
          v18 = 4;
          v19 = 216;
          p_ifOperStatusFlags = (unsigned __int8 *)&v33->SupportedStatistics;
          LODWORD(a2) = 1;
          goto LABEL_69;
        default:
          goto LABEL_92;
      }
    }
    if ( (unsigned int)v9 < 0xD8 || v6 )
    {
LABEL_14:
      v17 = v33;
      v18 = 4;
      v19 = 4;
      v14 = 66179;
    }
    else
    {
      v17 = v33;
      v18 = 216;
      v19 = 216;
      v14 = 66183;
LABEL_69:
      v34 = 1;
    }
LABEL_70:
    if ( v13 < (int)v18 )
    {
LABEL_92:
      v12 = 1;
      v34 = 1;
      goto LABEL_93;
    }
    if ( v14 )
    {
      ProviderHandle = v17->ProviderHandle;
      ProviderIfContext = v17->ProviderIfContext;
      v22 = (unsigned int (__fastcall *)(void *, _QWORD, unsigned int *, _DWORD *))*((_QWORD *)ProviderHandle + 7);
      v31 = v18;
      if ( v22(ProviderIfContext, v14, &v31, v8) )
      {
        memset(v8, 0, v18);
      }
      else
      {
        if ( v31 < v18 )
          memset((char *)v8 + v31, 0, v18 - v31);
        if ( !v33->bNdisIsProvider )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = v18;
            WPP_RECORDER_SF_qDqL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x16u,
              0x10u,
              (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
              a1,
              v14,
              (char)v8,
              v30);
          }
          if ( v14 == 66183 && v18 >= 0xD8 && !v8[52] )
            v8[52] = *(_DWORD *)(a1 + 576);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, v23, v24, v29);
        }
      }
    }
    else
    {
      if ( !p_ifOperStatusFlags )
        goto LABEL_92;
      v25 = a2 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
          ndisNsiCopyMemoryWithIfBlockLock(MiniportIfBlock, (unsigned __int8 *)v8, p_ifOperStatusFlags, v18);
        else
          memmove(v8, p_ifOperStatusFlags, v18);
      }
      else
      {
        ndisNsiCopyMemoryWithGlobalIfLock(v8, p_ifOperStatusFlags, v18);
      }
    }
    v12 = v34;
    v26 = v19 - v10;
    v10 = v19;
    v8 = (_DWORD *)((char *)v8 + v26);
    v13 = v36 - v26;
    v36 -= v26;
LABEL_93:
    v9 = v32;
    if ( v13 <= 0 )
      break;
  }
  v5 = a3;
LABEL_95:
  v11 = v10 - *(_DWORD *)(v5 + 52);
  v27 = -1073741811;
  if ( v11 )
    v27 = 0;
  v3 = v27;
LABEL_98:
  *(_DWORD *)(v5 + 48) = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v30) = v3;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      v6,
      v5,
      v30);
  }
  return v3;
}
