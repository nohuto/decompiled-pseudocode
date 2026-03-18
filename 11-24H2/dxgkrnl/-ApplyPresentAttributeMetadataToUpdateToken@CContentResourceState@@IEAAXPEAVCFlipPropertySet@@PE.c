/*
 * XREFs of ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x140047F38
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14004309C (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     ??$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo@@@Z @ 0x140048024 (--$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo.c)
 */

void __fastcall CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(
        CContentResourceState *this,
        struct CFlipPropertySet *a2,
        struct CFlipContentToken *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int i; // r9d
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rax
  _OWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( a2 )
  {
    CFlipPropertySetBase::FindProperty<PresentParametersInfo>(a2, &v11);
    if ( v11 )
      *(_OWORD *)((char *)a3 + 136) = *v11;
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 24);
    for ( i = 0; i < *(_DWORD *)(v5 + 12); ++i )
    {
      v8 = *(_QWORD *)(v5 + 16);
      v9 = 32LL * i;
      v10 = *(_QWORD *)(v9 + v8) - *(_QWORD *)&GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)(v9 + v8 + 8) - *(_QWORD *)GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data4;
      if ( !v10 && *(_DWORD *)(v9 + v8 + 16) == 72 )
      {
        if ( v6 )
        {
          *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)v6;
          *(_OWORD *)((char *)a3 + 168) = *(_OWORD *)(v6 + 16);
          *(_OWORD *)((char *)a3 + 184) = *(_OWORD *)(v6 + 32);
          *(_OWORD *)((char *)a3 + 200) = *(_OWORD *)(v6 + 48);
          *((_QWORD *)a3 + 27) = *(_QWORD *)(v6 + 64);
        }
        return;
      }
      v6 += *(unsigned int *)(v9 + v8 + 16);
    }
  }
}
