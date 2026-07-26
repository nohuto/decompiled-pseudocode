/*
 * XREFs of WPP_RECORDER_SF_qdSS @ 0x1400AD994
 * Callers:
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x140145DC0 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-68h]

  v9 = (__int64)a8;
  v10 = (__int64)a9;
  v11 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a9;
    if ( !a9 )
      v15 = L"NULL";
    if ( a8 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a8[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a8;
    if ( !a8 )
      v18 = L"NULL";
    ndisWppFastTraceMessage(
      &WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      0x2Au,
      &a6,
      8LL,
      &a7,
      4LL,
      v18,
      v17,
      v15,
      v14,
      0LL);
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v10 + 2 * v19) );
  }
  if ( v9 )
  {
    do
      ++v11;
    while ( *(_WORD *)(v9 + 2 * v11) );
  }
  LOWORD(v21) = 42;
  return WppAutoLogTrace(a1, 4LL, 29LL, &WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids, v21, &a6, 8LL, &a7);
}
