/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     RIMGetKbdExId @ 0x14013CBD8 (RIMGetKbdExId.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401ECBE0 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_S(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const wchar_t *a9)
{
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]

  v9 = a9;
  v10 = -1LL;
  v14 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    v15 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = 2 * v10 + 2;
      v15 = a9 == 0LL;
    }
    if ( v15 )
      v9 = L"NULL";
    LOWORD(v19) = a7;
    WppAutoLogTrace(a4, a5, a6, a8, v19, v9, v14, 0LL);
  }
}
