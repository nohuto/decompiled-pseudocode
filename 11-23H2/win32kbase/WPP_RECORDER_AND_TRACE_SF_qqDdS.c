/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1C0073158
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qqDdS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        const wchar_t *a13)
{
  __int64 v13; // rbx
  __int64 v14; // rdi
  struct RECORDER_LOG__ *v15; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  const wchar_t *v20; // rax
  int v21; // [rsp+20h] [rbp-88h]

  v13 = (__int64)a13;
  v14 = -1LL;
  v15 = gRimLog;
  if ( a2 )
  {
    if ( a13 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a13[v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v19 = 10LL;
    }
    v20 = a13;
    if ( !a13 )
      v20 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      71LL,
      &a9,
      8LL,
      &a10,
      8LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v20,
      v19,
      0LL);
  }
  if ( a3 )
  {
    if ( v13 )
    {
      do
        ++v14;
      while ( *(_WORD *)(v13 + 2 * v14) );
    }
    LOWORD(v21) = 71;
    WppAutoLogTrace(v15, 4LL, 1LL, &WPP_f9e9c6706b933e49bdb016a372583459_Traceguids, v21, &a9, 8LL, &a10, 8LL, &a11);
  }
}
