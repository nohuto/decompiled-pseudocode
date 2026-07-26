/*
 * XREFs of ndisNsiGetInterfaceRodEnumObject @ 0x14016C5D0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14000CFD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000F620 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140011370 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x140003900 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ndisNsiCopyMemoryWithGlobalIfLock @ 0x140003A1C (ndisNsiCopyMemoryWithGlobalIfLock.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z @ 0x140159670 (-ndisIfGetFilterIfAlias@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x140159860 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // edx
  struct _NDIS_IF_BLOCK *v9; // rax
  char *v10; // r12
  int v11; // r8d
  unsigned int v12; // ebp
  unsigned int v13; // ebp
  char v14; // r9
  unsigned int v15; // r14d
  unsigned __int8 *p_ifOperStatusFlags; // rdx
  int v17; // esi
  struct _NDIS_IF_BLOCK *MiniportIfBlock; // r15
  unsigned int v19; // ebx
  int v20; // edi
  struct _NDIS_IF_BLOCK *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct _NDIS_IF_PROVIDER_BLOCK *ProviderHandle; // rax
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v27)(void *, _QWORD, unsigned int *, char *); // rax
  int v28; // esi
  unsigned int v29; // ecx
  int v30; // eax
  char v32; // [rsp+40h] [rbp-2A8h]
  struct _NDIS_IF_BLOCK *v34; // [rsp+48h] [rbp-2A0h]
  int v35; // [rsp+50h] [rbp-298h]
  unsigned int v36; // [rsp+54h] [rbp-294h] BYREF
  __int64 v37; // [rsp+58h] [rbp-290h]
  __int64 v38; // [rsp+60h] [rbp-288h]
  _OWORD v39[2]; // [rsp+68h] [rbp-280h] BYREF
  __int16 v40; // [rsp+88h] [rbp-260h]
  struct _IF_COUNTED_STRING_LH v41; // [rsp+90h] [rbp-258h] BYREF

  v4 = a3;
  v38 = a3;
  v5 = a2;
  v37 = a2;
  v7 = 0;
  memset(&v41, 0, sizeof(v41));
  v9 = (struct _NDIS_IF_BLOCK *)v5;
  if ( !v5 )
    v9 = (struct _NDIS_IF_BLOCK *)a1;
  v34 = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      22,
      10,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      v4);
  }
  v10 = *(char **)(v4 + 40);
  v11 = *(_DWORD *)(v4 + 48);
  v12 = *(_DWORD *)(v4 + 52);
  v40 = 0;
  v35 = v11;
  memset(v39, 0, sizeof(v39));
  if ( !v10 )
  {
    v13 = 0;
    goto LABEL_87;
  }
  v14 = 0;
  v32 = 0;
  if ( v11 <= 0 )
    goto LABEL_84;
  while ( !v14 )
  {
    v15 = 0;
    p_ifOperStatusFlags = 0LL;
    v17 = 0;
    MiniportIfBlock = 0LL;
    if ( v12 > 0x218 )
    {
      switch ( v12 )
      {
        case 0x21Cu:
          v19 = 4;
          MiniportIfBlock = ndisGetMiniportIfBlock(v34);
          v17 = 2;
          v20 = 544;
          p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->ifOperStatusFlags;
          goto LABEL_68;
        case 0x220u:
          v19 = 4;
          v20 = 548;
          v15 = 65798;
          goto LABEL_67;
        case 0x224u:
          v19 = 34;
          if ( *(_WORD *)(a1 + 524) == 71 && a4 )
          {
            v21 = v34;
            p_ifOperStatusFlags = (unsigned __int8 *)v39;
            v20 = 582;
          }
          else
          {
            v21 = v34;
            if ( *(_BYTE *)(a1 + 1393) )
            {
              v17 = 1;
              v20 = 582;
              p_ifOperStatusFlags = (unsigned __int8 *)&v34->ifPhysAddress;
            }
            else
            {
              v15 = 16843010;
              v20 = 582;
            }
          }
          goto LABEL_68;
        case 0x246u:
          v19 = 34;
          if ( *(_WORD *)(a1 + 524) == 71 && a4 )
          {
            v21 = v34;
            p_ifOperStatusFlags = (unsigned __int8 *)v39;
            v20 = 616;
          }
          else
          {
            v21 = v34;
            if ( *(_BYTE *)(a1 + 1393) )
            {
              v17 = 1;
              v20 = 616;
              p_ifOperStatusFlags = (unsigned __int8 *)&v34->PermanentPhysAddress;
            }
            else
            {
              v15 = 16843009;
              v20 = 616;
            }
          }
          goto LABEL_68;
        case 0x268u:
          v19 = 4;
          v20 = 624;
          v15 = 66184;
          goto LABEL_67;
        case 0x270u:
          v19 = 8;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v22 = *(_QWORD *)(v5 + 1408);
              v17 = 2;
              v20 = 632;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(v22 + 32) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->XmitLinkSpeed;
            }
            else
            {
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1200);
              v20 = 632;
              v17 = 2;
            }
          }
          else
          {
            v15 = 66180;
            v20 = 632;
          }
          goto LABEL_67;
        case 0x278u:
          v19 = 8;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v23 = *(_QWORD *)(v5 + 1408);
              v17 = 2;
              v20 = 640;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(v23 + 32) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->RcvLinkSpeed;
            }
            else
            {
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1208);
              v20 = 640;
              v17 = 2;
            }
          }
          else
          {
            v15 = 66181;
            v20 = 640;
          }
          goto LABEL_67;
        case 0x280u:
          v19 = 1;
          if ( *(_BYTE *)(a1 + 1393) )
          {
            if ( *(_BYTE *)(a1 + 1394) )
            {
              v17 = 2;
              v20 = 641;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(a1 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = &MiniportIfBlock->ifPromiscuousMode;
            }
            else
            {
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
              p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1216);
              v17 = 2;
              v20 = 641;
            }
          }
          else
          {
            v15 = 66176;
            v20 = 641;
          }
          goto LABEL_67;
        case 0x281u:
          v19 = 1;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1217);
          v20 = 642;
          MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
          v17 = 2;
          goto LABEL_67;
        case 0x282u:
          v19 = 1;
          p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 1218);
          v20 = 644;
          MiniportIfBlock = (struct _NDIS_IF_BLOCK *)a1;
          v17 = 2;
          goto LABEL_67;
        case 0x284u:
          v19 = 4;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v24 = *(_QWORD *)(v5 + 1408);
              v17 = 2;
              v20 = 648;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(v24 + 32) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->MediaConnectState;
            }
            else
            {
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1220);
              v20 = 648;
              v17 = 2;
            }
          }
          else
          {
            v15 = 66186;
            v20 = 648;
          }
          goto LABEL_67;
        case 0x288u:
          v19 = 4;
          if ( v5 )
          {
            if ( *(_BYTE *)(v5 + 1394) )
            {
              v17 = 2;
              MiniportIfBlock = *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)(*(_QWORD *)(v5 + 1408) + 32LL) + 4040LL);
              p_ifOperStatusFlags = (unsigned __int8 *)&MiniportIfBlock->MediaDuplexState;
            }
            else
            {
              MiniportIfBlock = (struct _NDIS_IF_BLOCK *)v5;
              p_ifOperStatusFlags = (unsigned __int8 *)(v5 + 1224);
              v17 = 2;
            }
          }
          else
          {
            v15 = 66188;
          }
          v20 = v12 + 4;
          v32 = 1;
          goto LABEL_67;
        default:
          goto LABEL_81;
      }
    }
    if ( v12 == 536 )
    {
      v19 = 4;
      v20 = 540;
      v15 = 66179;
    }
    else if ( v12 )
    {
      if ( v12 == 4 )
      {
        v19 = 16;
        p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 580);
        v20 = 20;
        v17 = 1;
      }
      else
      {
        if ( v12 != 20 )
          goto LABEL_81;
        v19 = 516;
        if ( *(_BYTE *)(a1 + 1393) )
        {
          if ( *(_BYTE *)(a1 + 1394) )
          {
            ndisIfGetFilterIfAlias(*(struct _NDIS_FILTER_BLOCK **)(a1 + 1408), &v41);
            v11 = v35;
            p_ifOperStatusFlags = (unsigned __int8 *)&v41;
          }
          else
          {
            p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 596);
            v17 = 1;
          }
          v20 = 536;
        }
        else
        {
          v15 = 66185;
          v20 = 536;
        }
      }
    }
    else
    {
      v19 = 4;
      p_ifOperStatusFlags = (unsigned __int8 *)(a1 + 576);
      v20 = 4;
      v17 = 1;
    }
LABEL_67:
    v21 = v34;
LABEL_68:
    if ( v11 < v19 )
    {
LABEL_81:
      v14 = 1;
      v32 = 1;
      goto LABEL_82;
    }
    if ( v15 )
    {
      ProviderHandle = v21->ProviderHandle;
      ProviderIfContext = v21->ProviderIfContext;
      v27 = (unsigned int (__fastcall *)(void *, _QWORD, unsigned int *, char *))*((_QWORD *)ProviderHandle + 7);
      v36 = v19;
      if ( v27(ProviderIfContext, v15, &v36, v10) )
      {
        memset(v10, 0, v19);
      }
      else if ( v36 < v19 )
      {
        memset(&v10[v36], 0, v19 - v36);
      }
    }
    else
    {
      if ( !p_ifOperStatusFlags )
        goto LABEL_81;
      v28 = v17 - 1;
      if ( v28 )
      {
        if ( v28 == 1 )
          ndisNsiCopyMemoryWithIfBlockLock(MiniportIfBlock, (unsigned __int8 *)v10, p_ifOperStatusFlags, v19);
        else
          memmove(v10, p_ifOperStatusFlags, v19);
      }
      else
      {
        ndisNsiCopyMemoryWithGlobalIfLock(v10, p_ifOperStatusFlags, v19);
      }
    }
    v14 = v32;
    v29 = v20 - v12;
    v12 = v20;
    v10 += v29;
    v11 = v35 - v29;
    v35 -= v29;
LABEL_82:
    v5 = v37;
    if ( v11 <= 0 )
      break;
  }
  v4 = v38;
LABEL_84:
  v13 = v12 - *(_DWORD *)(v4 + 52);
  v30 = -1073741811;
  if ( v13 )
    v30 = 0;
  v7 = v30;
LABEL_87:
  *(_DWORD *)(v4 + 48) = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      a1,
      v4,
      v7);
  return v7;
}
