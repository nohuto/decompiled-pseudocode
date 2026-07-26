/*
 * XREFs of ?ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA440
 * Callers:
 *     ?ndisOidPostTaskOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA6A0 (-ndisOidPostTaskOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA37C (-ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA568 (-ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp-20h]
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_DWORD *)a1 + 10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAEu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3,
      *(_DWORD *)v8);
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( *(_QWORD *)a1 )
      ndisOidPostMiniportSetEncapsulation(a1);
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      v1 = *(_QWORD *)(v5 + 16);
      if ( !*((_DWORD *)a1 + 10) )
      {
        v6 = *(_QWORD *)(v1 + 4096);
        if ( v6 )
        {
          *(_OWORD *)(v6 + 916) = *(_OWORD *)(v6 + 944);
          *(_QWORD *)(v6 + 932) = *(_QWORD *)(v6 + 960);
          *(_DWORD *)(v6 + 940) = *(_DWORD *)(v6 + 968);
        }
      }
      ndisOidPostOpenSetEncapsulation(a1);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = v4;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAFu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3,
      v7);
  }
}
