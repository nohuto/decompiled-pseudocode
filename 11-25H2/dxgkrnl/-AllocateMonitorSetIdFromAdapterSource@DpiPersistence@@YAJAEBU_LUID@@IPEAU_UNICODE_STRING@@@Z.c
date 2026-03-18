/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x140368638
 * Callers:
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401C57BC (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401C58C0 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1403680C0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1403687B0 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x140369558 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::AllocateMonitorSetIdFromAdapterSource(
        struct _LUID *this,
        const struct _LUID *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  int v8; // eax
  struct _UNICODE_STRING *v9; // rdx
  __int64 v10; // rdi
  int appended; // eax
  bool *v13; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING v14; // [rsp+80h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  a3->Length = 0;
  v7 = operator new[](0x8002uLL, 0x63644356u, 256LL, (__int64)a4);
  a3->Buffer = (wchar_t *)v7;
  if ( v7 )
  {
    a3->MaximumLength = -32766;
    LOBYTE(v14.Length) = 0;
    v8 = DpiPersistence::CreateMonitorSetId(this, (const struct _LUID *)v5, (unsigned int)a3, &v14, v13);
    v10 = v8;
    if ( !LOBYTE(v14.Length) )
    {
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 546;
      }
      else
      {
        appended = DpiPersistence::SortMonitorSetIdAndAppendHash(a3, v9);
        v10 = appended;
        if ( appended >= 0 )
          return (unsigned int)v10;
        WdLogSingleEntry1(2LL, appended);
        WdLogGlobalForLineNumber = 556;
      }
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Unable to get Monitor ID String to write to registry (Status = 0x%I64x)",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v10;
    }
    return 3221225659LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, 32770LL);
    WdLogGlobalForLineNumber = 528;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to create o_pMonitorSetId->Buffer of size 0x%I64x",
      32770LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
