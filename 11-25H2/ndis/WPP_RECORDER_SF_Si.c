/*
 * XREFs of WPP_RECORDER_SF_Si @ 0x14009EC18
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x140082F40 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x14016CD90 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x14016DE60 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Si(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rbp
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r9
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v12 = 10LL;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v14, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v17, v16, va, 8LL, 0LL);
  }
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = 2 * v7 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v6 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v20, v6, v12, va);
}
