/*
 * XREFs of ndisNsiGetInterfaceRosEnumObject @ 0x14015A5C0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140004BD0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14000E590 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosEnumObject(struct _NDIS_IF_BLOCK *a1, struct _NDIS_IF_BLOCK *a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _NDIS_IF_BLOCK *v4; // rbp
  __int64 v5; // r13
  char v6; // bl
  char *v7; // r12
  unsigned int v8; // r14d
  int v9; // esi
  char v10; // r15
  unsigned int v11; // edi
  const void *p_InterfaceGuid; // rbx
  int v13; // ebp
  struct _NDIS_MINIPORT_BLOCK *v14; // rax
  struct _NDIS_MINIPORT_BLOCK *v15; // rdx
  signed __int32 InterlockedFlags; // eax
  signed __int32 v17; // ett
  __int16 v18; // bx
  bool v19; // cf
  struct _NDIS_IF_BLOCK *v20; // rbx
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  struct _NDIS_IF_BLOCK *v25; // [rsp+88h] [rbp+10h]

  v3 = 0;
  v4 = a2;
  v5 = a3;
  v6 = (char)a1;
  if ( !a2 )
    v4 = a1;
  v25 = v4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1,
      a3);
  v7 = *(char **)(v5 + 40);
  v8 = *(_DWORD *)(v5 + 52);
  v9 = *(_DWORD *)(v5 + 48);
  if ( v7 )
  {
    v10 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_33:
          v5 = a3;
          v3 = 0;
          v6 = (char)a1;
          break;
        }
        if ( v8 > 0x214 )
        {
          switch ( v8 )
          {
            case 0x218u:
              v11 = 16;
              p_InterfaceGuid = &a1->InterfaceGuid;
              v13 = 552;
              break;
            case 0x228u:
              v11 = 1;
              p_InterfaceGuid = &a1->ifConnectorPresent;
              v13 = 556;
              break;
            case 0x22Cu:
              v11 = 4;
              p_InterfaceGuid = &a1->ifFlags;
              v13 = 560;
              break;
            case 0x230u:
              p_InterfaceGuid = &v4->MediaType;
              v11 = 4;
              v14 = ndisIfReferenceMiniport(a1, 0x18u);
              v15 = v14;
              if ( v14 )
              {
                _m_prefetchw(&v14->InterlockedFlags);
                InterlockedFlags = v14->InterlockedFlags;
                do
                {
                  v17 = InterlockedFlags;
                  InterlockedFlags = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v15->InterlockedFlags,
                                       InterlockedFlags,
                                       InterlockedFlags);
                }
                while ( v17 != InterlockedFlags );
                v18 = InterlockedFlags;
                ndisIfDereferenceMiniport(a1, v15, 0x18u);
                v19 = (v18 & 0x100) != 0;
                v20 = a1;
                if ( !v19 )
                  v20 = v4;
                p_InterfaceGuid = &v20->MediaType;
              }
              v13 = 564;
              break;
            case 0x234u:
              p_InterfaceGuid = &v4->PhysicalMediumType;
              v11 = 4;
              v13 = 568;
              v10 = 1;
              break;
            default:
              goto LABEL_21;
          }
        }
        else if ( v8 == 532 )
        {
          p_InterfaceGuid = &v4->ConnectionType;
          v11 = 4;
          v13 = 536;
        }
        else if ( v8 )
        {
          switch ( v8 )
          {
            case 4u:
              v11 = 516;
              p_InterfaceGuid = &a1->ifDescr;
              v13 = 520;
              break;
            case 0x208u:
              v11 = 2;
              p_InterfaceGuid = &a1->ifType;
              v13 = 524;
              break;
            case 0x20Cu:
              p_InterfaceGuid = &v4->AccessType;
              v11 = 4;
              v13 = 528;
              break;
            case 0x210u:
              v11 = 4;
              p_InterfaceGuid = &a1->DirectionType;
              v13 = 532;
              break;
            default:
              goto LABEL_21;
          }
        }
        else
        {
          v11 = 4;
          p_InterfaceGuid = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v13 = 4;
        }
        if ( v9 >= v11 && p_InterfaceGuid )
        {
          memmove(v7, p_InterfaceGuid, v11);
          v21 = v13 - v8;
          v8 = v13;
          v7 += v21;
          v9 -= v21;
          goto LABEL_32;
        }
LABEL_21:
        v10 = 1;
LABEL_32:
        v4 = v25;
        if ( v9 <= 0 )
          goto LABEL_33;
      }
    }
    v22 = v8 - *(_DWORD *)(v5 + 52);
    *(_DWORD *)(v5 + 48) = v22;
    if ( !v22 )
      v3 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v5 + 48) = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      v6,
      v5,
      v3);
  return v3;
}
