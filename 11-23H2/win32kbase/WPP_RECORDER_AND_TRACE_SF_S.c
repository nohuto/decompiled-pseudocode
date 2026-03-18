/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E0962
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C1E8C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C1EDC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C0180550 (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C019E6D0 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C019EFCC (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1BC4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_s(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rbx
  int v18; // [rsp+20h] [rbp-38h]

  v9 = a9;
  v10 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a9[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a9;
    if ( !a9 )
      v16 = "NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      a8,
      a7,
      v16,
      v15,
      0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v17 = v10 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    if ( !a9 )
      v9 = "NULL";
    LOWORD(v18) = a7;
    WppAutoLogTrace(a4, 4LL, a6, a8, v18, v9, v17, 0LL);
  }
}
