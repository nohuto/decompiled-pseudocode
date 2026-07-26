/*
 * XREFs of ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1401466A0
 * Callers:
 *     ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x140081030 (-ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall NdisPDPIQueryCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1, union _NDIS_PD_COUNTER_VALUE *a2)
{
  __int64 v2; // rsi
  union _NDIS_PD_COUNTER_VALUE *v3; // rdi
  int v5; // edx

  v2 = *((_QWORD *)a1 + 4);
  v3 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      29,
      46,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  }
  (*(void (__fastcall **)(_QWORD, union _NDIS_PD_COUNTER_VALUE *))(*(_QWORD *)(v2 + 80) + 56LL))(
    *((_QWORD *)a1 + 6),
    v3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      29,
      47,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  }
}
