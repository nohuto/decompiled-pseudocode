/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1401E93DC
 * Callers:
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_dqqS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        char a9,
        char a10,
        char a11,
        const wchar_t *a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rcx
  int v20; // [rsp+20h] [rbp-78h]

  v12 = (__int64)a12;
  v13 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a12;
    if ( !a12 )
      v19 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
      a7,
      &a9,
      4LL,
      &a10,
      8LL,
      &a11,
      8LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      do
        ++v13;
      while ( *(_WORD *)(v12 + 2 * v13) );
    }
    LOWORD(v20) = a7;
    WppAutoLogTrace(a4, 4LL, 1LL, &WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids, v20, &a9, 4LL, &a10);
  }
}
