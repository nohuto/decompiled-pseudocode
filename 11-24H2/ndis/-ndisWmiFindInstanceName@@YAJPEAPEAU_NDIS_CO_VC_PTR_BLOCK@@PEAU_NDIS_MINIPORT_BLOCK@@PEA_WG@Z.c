/*
 * XREFs of ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x140031460
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x140030A20 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x140073BD0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWmiFindInstanceName(
        struct _NDIS_CO_VC_PTR_BLOCK **a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        wchar_t *a3,
        unsigned __int16 a4)
{
  int v4; // ebx
  char v5; // di
  int v7; // edx
  __int64 result; // rax
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *i; // r14
  int v11; // edx
  UNICODE_STRING String2; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  String2.Buffer = a3;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = (char)a2;
  *a1 = 0LL;
  String2.MaximumLength = a4;
  String2.Length = a4;
  if ( a4 >= 0x30u && a3 && a3[5] == 58 )
  {
    p_WmiEnabledVcs = &a2->WmiEnabledVcs;
    for ( i = a2->WmiEnabledVcs.Flink; i != p_WmiEnabledVcs; i = i->Flink )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&i[-2].Blink, &String2, 1u) )
      {
        if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20]) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11,
              18,
              10,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              v5);
          }
          v4 = -1073741823;
        }
        result = (unsigned int)v4;
        if ( v4 >= 0 )
          *a1 = (struct _NDIS_CO_VC_PTR_BLOCK *)&i[-20];
        return result;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)a2,
        0x12u,
        0xBu,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        v5,
        &String2.Length);
    return 3221226134LL;
  }
  else if ( RtlEqualUnicodeString(a2->pAdapterInstanceName, &String2, 1u) )
  {
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        18,
        12,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        v5);
    }
    return 3221226134LL;
  }
}
