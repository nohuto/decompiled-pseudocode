/*
 * XREFs of WPP_SF_S @ 0x140004CD0
 * Callers:
 *     CiTaskDump @ 0x1400110F0 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a4 + 2 * v4) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_62da978b8000316eb1e6fce22b5cf66e_Traceguids);
}
