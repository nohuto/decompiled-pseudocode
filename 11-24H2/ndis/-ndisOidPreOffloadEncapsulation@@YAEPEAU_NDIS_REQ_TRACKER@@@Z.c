/*
 * XREFs of ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003D050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisOidPreSetOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14008CB40 (-ndisOidPreSetOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBDC4 (-ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

__int64 __fastcall ndisOidPreOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  unsigned __int8 OffloadEncapsulation; // al
  unsigned __int8 v7; // di
  char v9[4]; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      170,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v4,
      *((_QWORD *)a1 + 4));
  *((_DWORD *)a1 + 10) = -1073741637;
  v5 = *(_DWORD *)(v3 + 4);
  if ( v5 == 1 )
  {
    OffloadEncapsulation = ndisOidPreSetOffloadEncapsulation(a1);
LABEL_5:
    v7 = OffloadEncapsulation;
    goto LABEL_6;
  }
  if ( !v5 || v5 == 2 )
  {
    OffloadEncapsulation = ndisOidPreQueryOffloadEncapsulation(a1);
    goto LABEL_5;
  }
  v7 = 1;
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xABu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v4,
      v7,
      *(_DWORD *)v9);
  }
  return v7;
}
