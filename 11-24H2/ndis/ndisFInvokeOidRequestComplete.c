/*
 * XREFs of ndisFInvokeOidRequestComplete @ 0x140047D40
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400DCFD0 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLO.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400DD0BC (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BL.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v5; // r14d
  __int64 result; // rax
  int v9; // r8d
  int v10; // eax
  char v11; // cl
  unsigned int v12; // eax
  unsigned __int64 i; // rax
  int v14; // ecx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0xAu,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      a1,
      v5,
      a2,
      a3);
  if ( (unsigned int)dword_14011A7B0 > 4
    && (qword_14011A7C0 & 0x400) != 0
    && (qword_14011A7C8 & 0x400) == qword_14011A7C8 )
  {
    v10 = *(_DWORD *)(a2 + 88) & 0x30000000;
    if ( v10 != 0x10000000 )
    {
      if ( v10 )
      {
        if ( v10 == 0x20000000 )
        {
LABEL_12:
          if ( *(_QWORD *)(a2 + 96) )
            TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_FILTER_BLOCK>(a1, a2);
          else
            TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_FILTER_BLOCK>(a1, a2);
        }
      }
      else
      {
        if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
        {
LABEL_10:
          v11 = 1;
          v12 = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x20000000;
        }
        else
        {
          if ( (ndisAzOidTelemetryFilter & 2) != 0 )
          {
            for ( i = 0LL; i < 0x40; i += 4LL )
            {
              v14 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + i);
              if ( !v14 )
                break;
              if ( v14 == *(_DWORD *)(a2 + 32) )
                goto LABEL_10;
            }
          }
          v11 = 0;
          v12 = *(_DWORD *)(a2 + 88) & 0xCFFFFFFF | 0x10000000;
        }
        *(_DWORD *)(a2 + 88) = v12;
        if ( v11 )
          goto LABEL_12;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 256))(*(_QWORD *)(a1 + 24), a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qDq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             v9,
             0xBu,
             (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
             a1,
             v5,
             a2);
  return result;
}
