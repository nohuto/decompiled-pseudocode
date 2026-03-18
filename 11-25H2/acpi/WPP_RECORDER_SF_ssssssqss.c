/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1400414FC
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400B78F0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ssssssqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbx
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v21; // r13
  bool v22; // zf
  const char *v23; // rdi
  __int64 v24; // rbx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // r11
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  const char *v35; // rcx
  int v36; // [rsp+20h] [rbp-E8h]

  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *(_BYTE *)(a14 + v27) );
    }
    if ( a13 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( *(_BYTE *)(a13 + v28) );
    }
    if ( a11 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( *(_BYTE *)(a11 + v29) );
    }
    if ( a10 )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( *(_BYTE *)(a10 + v30) );
    }
    if ( a9 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( *(_BYTE *)(a9 + v31) );
    }
    if ( a8 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *(_BYTE *)(a8 + v32) );
    }
    if ( a7 )
    {
      v33 = -1LL;
      do
        ++v33;
      while ( a7[v33] );
    }
    if ( a6 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( a6[v34] );
    }
    WORD1(v35) = WORD1(a6);
    if ( !a6 )
      v35 = "NULL";
    HIWORD(v36) = WORD1(v35);
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids);
  }
  if ( a14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(a14 + v15) );
  }
  if ( a13 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(a13 + v16) );
  }
  if ( a11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v17 + a11) );
  }
  if ( a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(a10 + v18) );
  }
  if ( a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(a9 + v19) );
  }
  if ( a8 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(a8 + v20) );
  }
  v21 = a7;
  v22 = a7 == 0LL;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v22 = a7 == 0LL;
  }
  if ( v22 )
    v21 = "NULL";
  v23 = a6;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
    v24 = v14 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  if ( !a6 )
    v23 = "NULL";
  LOWORD(v36) = 22;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids, v36, v23, v24, v21);
}
