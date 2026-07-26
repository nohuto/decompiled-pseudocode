/*
 * XREFs of ndisNsiGetInterfaceRosInformation @ 0x1401513A0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000F620 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140011370 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140010D00 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140014380 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosInformation(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rdi
  struct _NDIS_IF_BLOCK *v5; // r12
  char *v6; // r15
  unsigned int v7; // esi
  int v8; // ebx
  char v9; // al
  unsigned int v10; // ebp
  const void *p_ifType; // rdi
  unsigned int v12; // r14d
  int v13; // r12d
  struct _NDIS_IF_BLOCK *v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned __int8 bNdisIsProvider; // al
  struct _NDIS_MINIPORT_BLOCK *v19; // rax
  struct _NDIS_MINIPORT_BLOCK *v20; // rdx
  signed __int32 InterlockedFlags; // eax
  signed __int32 v22; // ett
  __int16 v23; // di
  bool v24; // cf
  struct _NDIS_IF_BLOCK *v25; // rdi
  struct _NDIS_IF_PROVIDER_BLOCK *ProviderHandle; // rax
  void *ProviderIfContext; // rcx
  unsigned int (__fastcall *v28)(void *, _QWORD, unsigned int *, char *); // rax
  unsigned int v29; // [rsp+40h] [rbp-58h] BYREF
  struct _NDIS_IF_BLOCK *v30; // [rsp+48h] [rbp-50h]
  struct _NDIS_IF_BLOCK *v32; // [rsp+A8h] [rbp+10h]
  char v34; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = a3;
  v5 = a1;
  if ( !a2 )
    a2 = a1;
  v32 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      22,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1,
      a3);
    a2 = v32;
  }
  v6 = *(char **)(v4 + 40);
  v7 = *(_DWORD *)(v4 + 52);
  v8 = *(_DWORD *)(v4 + 48);
  if ( v6 )
  {
    v9 = 0;
    v34 = 0;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        if ( v9 )
        {
LABEL_24:
          v4 = a3;
          break;
        }
        v10 = 0;
        if ( v7 <= 0x208 )
        {
          if ( v7 == 520 )
          {
            p_ifType = &v5->ifType;
            v12 = 2;
            v13 = 524;
          }
          else if ( v7 )
          {
            if ( v7 != 4 )
              goto LABEL_14;
            v12 = 516;
            p_ifType = &v5->ifDescr;
            v13 = 520;
          }
          else
          {
            v12 = 4;
            p_ifType = &v5->_NDIS_NSI_INTERFACE_ENUM_ROS;
            v13 = 4;
          }
        }
        else
        {
          switch ( v7 )
          {
            case 0x20Cu:
              p_ifType = &a2->AccessType;
              v13 = 528;
              break;
            case 0x210u:
              p_ifType = &v5->DirectionType;
              v13 = 532;
              break;
            case 0x214u:
              p_ifType = &a2->ConnectionType;
              v13 = 536;
              break;
            case 0x218u:
              p_ifType = &v5->InterfaceGuid;
              v12 = 16;
              v13 = 552;
              goto LABEL_17;
            case 0x228u:
              p_ifType = &v5->ifConnectorPresent;
              v12 = 1;
              v13 = 554;
              goto LABEL_17;
            case 0x22Au:
              bNdisIsProvider = v5->bNdisIsProvider;
              p_ifType = &a2->PermanentPhysAddress;
              v12 = 34;
              v13 = 588;
              if ( !bNdisIsProvider )
              {
                p_ifType = 0LL;
                v10 = 16843009;
              }
              goto LABEL_17;
            case 0x24Cu:
              p_ifType = &v5->ifFlags;
              v13 = 592;
              break;
            case 0x250u:
              v30 = a2;
              p_ifType = &a2->MediaType;
              v12 = 4;
              v19 = ndisIfReferenceMiniport(v5, 0x18u);
              v20 = v19;
              if ( v19 )
              {
                _m_prefetchw(&v19->InterlockedFlags);
                InterlockedFlags = v19->InterlockedFlags;
                do
                {
                  v22 = InterlockedFlags;
                  InterlockedFlags = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v20->InterlockedFlags,
                                       InterlockedFlags,
                                       InterlockedFlags);
                }
                while ( v22 != InterlockedFlags );
                v23 = InterlockedFlags;
                ndisIfDereferenceMiniport(v5, v20, 0x18u);
                v24 = (v23 & 0x100) != 0;
                v25 = v5;
                if ( !v24 )
                  v25 = v32;
                p_ifType = &v25->MediaType;
              }
              v14 = v30;
              v13 = 596;
              goto LABEL_18;
            case 0x254u:
              p_ifType = &a2->PhysicalMediumType;
              v34 = 1;
              v13 = v7 + 4;
              break;
            default:
              goto LABEL_14;
          }
          v12 = 4;
        }
LABEL_17:
        v14 = a2;
LABEL_18:
        if ( v8 >= v12 )
        {
          if ( v10 )
          {
            ProviderHandle = v14->ProviderHandle;
            ProviderIfContext = v14->ProviderIfContext;
            v28 = (unsigned int (__fastcall *)(void *, _QWORD, unsigned int *, char *))*((_QWORD *)ProviderHandle + 7);
            v29 = v12;
            if ( v28(ProviderIfContext, v10, &v29, v6) )
            {
              memset(v6, 0, v12);
            }
            else if ( v29 < v12 )
            {
              memset(&v6[v29], 0, v12 - v29);
            }
            goto LABEL_22;
          }
          if ( p_ifType )
          {
            memmove(v6, p_ifType, v12);
LABEL_22:
            v15 = v13 - v7;
            v7 = v13;
            v6 += v15;
            v9 = v34;
            v8 -= v15;
            goto LABEL_23;
          }
        }
LABEL_14:
        v9 = 1;
        v34 = 1;
LABEL_23:
        a2 = v32;
        v5 = a1;
        if ( v8 <= 0 )
          goto LABEL_24;
      }
    }
    v16 = v7 - *(_DWORD *)(v4 + 52);
    *(_DWORD *)(v4 + 48) = v16;
    if ( !v16 )
      v3 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x17u,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)v5,
      v4,
      v3);
  return v3;
}
