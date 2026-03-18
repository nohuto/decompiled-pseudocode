/*
 * XREFs of WPP_RECORDER_SF_qDqss @ 0x14002CD50
 * Callers:
 *     ACPIDevicePowerProcessPhase4 @ 0x140027B10 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIFanCompletePendingIrps @ 0x14002C90C (ACPIFanCompletePendingIrps.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1400334B4 (ACPIWakeCompleteRequestQueue.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1400B4EDC (ACPIBusIrpQueryTargetRelation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v15; // r14
  unsigned int v16; // ebp
  unsigned int v17; // r12d
  int v18; // eax
  unsigned __int8 v19; // cf
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  __int64 v26; // rax
  int v28; // [rsp+20h] [rbp-88h]

  v10 = (__int64)a9;
  v12 = (__int64)a10;
  v13 = -1LL;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = a2;
  v17 = a4;
  v18 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v19 = _bittest(&v18, (a3 - 1) & 0x1F);
  v20 = 5LL;
  if ( v19 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
  {
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
      v20 = v21 + 1;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    if ( a9 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a9[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a9;
    if ( !a9 )
      v25 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v17,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v25,
      v24,
      v22,
      v20,
      0LL);
  }
  if ( v12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_BYTE *)(v12 + v26) );
  }
  if ( v10 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(v10 + v13) );
  }
  LOWORD(v28) = v17;
  return WppAutoLogTrace(a1, v16, a3, a5, v28, &a6, 8LL, &a7);
}
