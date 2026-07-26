/*
 * XREFs of ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140088B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140086880 (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140088540 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1400BA720 (-ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BAAE4 (-ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisOidPostPMAddWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  int v5; // eax
  PVOID *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  PVOID *v13; // rdi
  void *v14; // rcx
  void *v15; // rcx
  void *OidContext; // rcx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      v13 = *(PVOID **)(v1 + 144);
      if ( v13 )
      {
        ExFreePoolWithTag(v13[3], 0);
        *(_DWORD *)(v1 + 32) = *(_DWORD *)v13;
        *(_QWORD *)(v1 + 40) = v13[1];
        *(_DWORD *)(v1 + 48) = *((_DWORD *)v13 + 4);
        ExFreePoolWithTag(v13, 0);
        *(_QWORD *)(v1 + 144) = 0LL;
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v14 = *(void **)(v1 + 160);
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
      }
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v15 = *(void **)(v1 + 160);
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
        }
      }
      if ( *(_QWORD *)a1 )
      {
        OidContext = v4->OidContext;
        v4->OidContext = 0LL;
        if ( OidContext )
          ExFreePoolWithTag(OidContext, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        if ( v4->MajorNdisVersion > 6u || v4->MajorNdisVersion == 6 && v4->MinorNdisVersion >= 0x14u )
        {
          ndisMiniportPostAddWOLPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
          if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqWmi )
          {
            ndisEnablePMParamForPattern(*(struct _NDIS_PM_WOL_PATTERN **)(v1 + 40), &v4->PMWmiParameters);
            ndisGetCombinedPMConfig(v4, &v4->PMCurrentParameters);
          }
        }
        else
        {
          ndisMiniportPostAddWakeUpPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
          v6 = *(PVOID **)(v1 + 144);
          ExFreePoolWithTag(v6[3], 0);
          *(_DWORD *)(v1 + 32) = *(_DWORD *)v6;
          *(_QWORD *)(v1 + 40) = v6[1];
          *(_DWORD *)(v1 + 48) = *((_DWORD *)v6 + 4);
          ExFreePoolWithTag(v6, 0);
          v7 = *(_DWORD *)(v1 + 152);
          *(_QWORD *)(v1 + 144) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = v7;
        }
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v8 = *(_QWORD *)(v1 + 40);
        v9 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v9 + 196) = *(_DWORD *)(v8 + 148);
        *(_DWORD *)(v9 + 40) = *(_DWORD *)(v8 + 148);
        *(_QWORD *)v9 = *(_QWORD *)(v3 + 504);
        *(_QWORD *)(v3 + 504) = v9;
      }
      v10 = *((_QWORD *)a1 + 1);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v11 = *(_QWORD *)(v1 + 40);
          v12 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v12 + 196) = *(_DWORD *)(v11 + 148);
          *(_DWORD *)(v12 + 40) = *(_DWORD *)(v11 + 148);
          *(_QWORD *)v12 = *(_QWORD *)(v10 + 712);
          *(_QWORD *)(v10 + 712) = v12;
        }
      }
    }
  }
}
