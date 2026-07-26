/*
 * XREFs of WPP_RECORDER_SF_qZL @ 0x140056920
 * Callers:
 *     NdisQueryAdapterInstanceName @ 0x1400567D0 (NdisQueryAdapterInstanceName.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x140099260 (NdisIMCancelInitializeDeviceInstance.c)
 *     NdisRegisterProtocol @ 0x1400B8C40 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400B9070 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZL(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rbx
  const wchar_t *v8; // rbp
  unsigned __int64 v11; // r11
  int v13; // eax
  __int64 v14; // rcx
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rax
  int v18; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a7;
  v8 = L"NULL";
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) < 4u )
    goto LABEL_9;
  if ( !a7 )
  {
    v14 = 8LL;
    goto LABEL_16;
  }
  v14 = *a7;
  if ( !*a7 )
  {
LABEL_16:
    v15 = L"NULL";
    goto LABEL_6;
  }
  v15 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_6:
  v16 = a7;
  if ( !a7 )
    v16 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 8LL, v16, 2LL, v15, v14, va, 4LL, 0LL);
LABEL_9:
  if ( v7 && *v7 )
    v8 = (const wchar_t *)*((_QWORD *)v7 + 1);
  if ( !v7 )
    v7 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v18, &a6, 8LL, v7, 2LL, v8);
}
