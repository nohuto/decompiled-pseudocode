/*
 * XREFs of ?ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0520
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x14003D840 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x14003EA10 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14014B91C (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovCreateNicSwitch(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v3; // di
  __int128 *v4; // rax
  __int64 v5; // rdx
  char v6; // r9
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v7; // rcx
  int v8; // r9d
  bool v9; // zf
  unsigned __int8 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // r8d
  char v14[4]; // [rsp+48h] [rbp-90h]
  __int128 v15; // [rsp+50h] [rbp-88h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v16[2]; // [rsp+60h] [rbp-78h]
  __int64 v17; // [rsp+90h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 1;
  v4 = (__int128 *)ndisCaptureIovOidContext((__int64)&v17, a1);
  v15 = *v4;
  *(_OWORD *)v16 = v4[1];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x1Au,
      0xEu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v1);
  v6 = 0;
  if ( !(_BYTE)v15 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v16[1]) )
  {
    v9 = ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) == &ndisIntReqGeneric;
    goto LABEL_7;
  }
  if ( !v7 || v7->Header.Revision < 2u || v7->Header.Size < 0x74u || !v7->MaxNumSwitches || *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_8;
  *((_DWORD *)a1 + 10) = v8;
  if ( *(_DWORD *)(v1 + 48) >= 0x224u )
  {
    if ( *(_DWORD *)(v1 + 52) >= 0x224u )
    {
      v5 = *(_QWORD *)(v1 + 40);
      v11 = *(_BYTE *)(v5 + 1);
      if ( v11 && *(_DWORD *)(v5 + 12) == v8 && *(_DWORD *)(v5 + 8) == 1 && *(_DWORD *)(v5 + 532) <= v7->MaxNumVFs )
      {
        if ( v11 < 2u )
        {
          v9 = ndisIovHWvRSSSupported(v7) == 0;
LABEL_7:
          if ( !v9 )
          {
LABEL_8:
            *((_DWORD *)a1 + 10) = -1073741637;
            goto LABEL_9;
          }
LABEL_4:
          v3 = v6;
          goto LABEL_9;
        }
        if ( !ndisIovHWvRSSSupported(v7) )
        {
          if ( v13 != 1 )
            goto LABEL_8;
          goto LABEL_4;
        }
        if ( v13 && v13 <= *(_DWORD *)(v12 + 128) )
          goto LABEL_4;
      }
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *(_DWORD *)(v1 + 68) = 548;
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 548;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x1Au,
      0xFu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v3,
      *(_DWORD *)v14);
  }
  return v3;
}
