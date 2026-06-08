/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140006F38
 * Callers:
 *     CpcInitRegisterAddresses @ 0x140026484 (CpcInitRegisterAddresses.c)
 *     AcpiParseLpiObject @ 0x14002B610 (AcpiParseLpiObject.c)
 *     Display_LPI @ 0x14002D490 (Display_LPI.c)
 *     ValidateAcpiCPC @ 0x1400302D4 (ValidateAcpiCPC.c)
 *     ValidateAcpiCStates @ 0x140030668 (ValidateAcpiCStates.c)
 *     ValidateAcpiThrottleStates @ 0x140030A04 (ValidateAcpiThrottleStates.c)
 *     ValidatePccEntry @ 0x140031CB4 (ValidatePccEntry.c)
 *     LpiEnumerateDependencies @ 0x14003D6A0 (LpiEnumerateDependencies.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  __int64 v12; // rbp
  unsigned int v13; // r14d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  const wchar_t *v17; // rcx
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-48h]

  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = 10LL;
  v13 = a2;
  v14 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v14, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
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
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10), 43LL, a5, a4, v17, v16, 0LL);
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
  return WppAutoLogTrace(a1, v13, a3, a5, v20, v6, v12, 0LL);
}
