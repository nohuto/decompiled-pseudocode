/*
 * XREFs of ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA568
 * Callers:
 *     ?ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA440 (-ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisOidPostOpenSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xACu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      *(_QWORD *)(v3 + 16),
      v1,
      v3);
  v4 = *(_QWORD *)(v3 + 696);
  v5 = 0;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 64) )
    {
      if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v1 + 52) == *(_DWORD *)(v1 + 48) )
        *(_DWORD *)(v1 + 52) = *(_DWORD *)(v4 + 80);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)(v4 + 64);
      v6 = *(_QWORD *)(v4 + 72);
      *(_DWORD *)(v4 + 64) = 0;
      *(_QWORD *)(v1 + 40) = v6;
      LODWORD(v6) = *(_DWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_DWORD *)(v1 + 48) = v6;
      *(_DWORD *)(v4 + 80) = 0;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v4 = *(_OWORD *)v7;
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(v7 + 16);
      *(_DWORD *)(v4 + 24) = *(_DWORD *)(v7 + 24);
      *(_BYTE *)(v4 + 28) = 1;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      173,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v1);
  }
}
