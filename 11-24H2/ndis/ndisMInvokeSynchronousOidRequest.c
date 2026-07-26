/*
 * XREFs of ndisMInvokeSynchronousOidRequest @ 0x1400C7BC4
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140003554 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeSynchronousOidRequest(ULONG_PTR a1, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 3760);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      0xAu,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      a1,
      *(_DWORD *)(BugCheckParameter3 + 32),
      BugCheckParameter3);
  v6 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v3 + 264))(*(_QWORD *)(a1 + 24), BugCheckParameter3);
  v7 = v6;
  if ( ((v6 - 255) & 0xFFFFFFFB) == 0 )
    ndisBugCheckEx(0x26uLL, a1, BugCheckParameter3, 0x103uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      a1,
      v9);
  }
  return v7;
}
