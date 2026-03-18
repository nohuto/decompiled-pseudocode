/*
 * XREFs of WPP_RECORDER_SF_qqqss @ 0x1400339DC
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032430 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIIsPowerNodeInTransition @ 0x140049AC0 (ACPIIsPowerNodeInTransition.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x140099818 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400B50A8 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400B529C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqqss(
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
  __int64 v21; // rax
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
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
      v23 = -1LL;
      do
        ++v23;
      while ( a10[v23] );
      v20 = v23 + 1;
    }
    v24 = a10;
    if ( !a10 )
      v24 = "NULL";
    if ( a9 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a9[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a9;
    if ( !a9 )
      v27 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v17,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v27,
      v26,
      v24,
      v20,
      0LL);
  }
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v12 + v21) );
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
