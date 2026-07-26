/*
 * XREFs of NdisSetPollAffinity @ 0x1400D5AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisSetPollAffinity(__int64 a1, ULONG_PTR a2)
{
  char v5[4]; // [rsp+38h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v5 = *(unsigned __int8 *)(a2 + 2);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids,
      a1,
      *(_WORD *)a2,
      *(_DWORD *)v5);
  }
  if ( *(_BYTE *)(a2 + 3) )
    ndisBugCheckEx(0x34uLL, 2uLL, 2uLL, a2);
  return (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(a1 + 72))(*(_QWORD *)(a1 + 160), a2);
}
