/*
 * XREFs of ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x14013B680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLLS @ 0x1400A5228 (WPP_RECORDER_SF_qLLS.c)
 *     WPP_RECORDER_SF_qLLd @ 0x1400A53B8 (WPP_RECORDER_SF_qLLd.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisPDPIProviderControl(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v9; // edi
  int v10; // ebp
  const wchar_t *v12; // r10
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-38h]

  v9 = a3;
  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v12 = L" ";
    WPP_RECORDER_SF_qLLS(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v15, (char)a1, a2, a3, v12);
  }
  if ( v9 == 1 )
  {
    a2 = 1LL;
    if ( v10 != 1 || a4 || a5 || !a8 )
      v13 = -1073741811;
    else
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, void *, unsigned int, unsigned int *))(*((_QWORD *)a1 + 10) + 96LL))(
              *((_QWORD *)a1 + 9),
              1LL,
              1LL,
              0LL,
              0,
              a6,
              a7,
              a8);
  }
  else
  {
    v13 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x3Cu, v15);
  return v13;
}
