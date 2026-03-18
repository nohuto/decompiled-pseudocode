/*
 * XREFs of ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x1402884A0
 * Callers:
 *     DpiFeatureStartDevice @ 0x14024DEF8 (DpiFeatureStartDevice.c)
 *     DpiInitializeGlobalState @ 0x1404359E8 (DpiInitializeGlobalState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlUnicodeStringCatString @ 0x14009611C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1400961D4 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288730 (-DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z.c)
 *     EnsureCacheSize @ 0x140288D5C (EnsureCacheSize.c)
 */

__int64 __fastcall DxgkCreateFeatureDatabase(
        PCUNICODE_STRING SourceString,
        const struct _DXGKDDI_FEATURE_INTERFACE *a2,
        char a3,
        char a4,
        struct DXGK_FEATURE_DATABASE **a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  char v11; // cl
  unsigned int v12; // esi
  __int64 v13; // rdi
  const wchar_t *v14; // r9
  NTSTRSAFE_PCWSTR v15; // rdx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  char v19; // [rsp+98h] [rbp-70h] BYREF

  v9 = operator new(0x398uLL, 0x44786746u, 256LL);
  v10 = v9;
  if ( v9 )
  {
    memset((void *)(v9 + 8), 0, 0x390uLL);
    *(_QWORD *)v10 = 0LL;
    if ( a2 )
    {
      *(_OWORD *)(v10 + 856) = *(_OWORD *)a2;
      *(_OWORD *)(v10 + 872) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v10 + 888) = *((_OWORD *)a2 + 2);
    }
    v11 = 2 * a4;
    *(_QWORD *)(v10 + 904) = 0LL;
    v12 = 0;
    *(_DWORD *)(v10 + 912) = a3 & 3 | v11 & 2;
    while ( v12 < 0x10 )
    {
      v13 = v12;
      if ( *(_DWORD *)&asc_1401353E0[2 * v12] && !(unsigned __int8)EnsureCacheSize(v10, v12) )
      {
        WdLogSingleEntry1(6LL, v12);
        v14 = L"Failed to allocate initial database cache for category %u";
        WdLogGlobalForLineNumber = 1253;
        goto LABEL_15;
      }
      ++v12;
    }
    *(_QWORD *)&DestinationString.Length = 34078720LL;
    DestinationString.Buffer = (wchar_t *)&v19;
    RtlUnicodeStringCopy(&DestinationString, SourceString);
    if ( RtlUnicodeStringCatString(&DestinationString, v15) < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1283;
    }
    else
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ZwOpenKey((PHANDLE)(v10 + 848), 0x20019u, &ObjectAttributes);
    }
    *(_QWORD *)(v10 + 720) = v10 + 264;
    *(_QWORD *)(v10 + 728) = v10 + 546;
    *(_QWORD *)(v10 + 736) = v10 + 588;
    *(_QWORD *)(v10 + 744) = v10 + 606;
    result = 0LL;
    *a5 = (struct DXGK_FEATURE_DATABASE *)v10;
  }
  else
  {
    v10 = 0LL;
    WdLogSingleEntry0(6LL);
    v13 = 1222LL;
    v14 = L"Failed to allocate feature database";
    WdLogGlobalForLineNumber = 1222;
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    if ( v10 )
      DxgkDestroyFeatureDatabase((struct DXGK_FEATURE_DATABASE *)v10);
    return 3221225495LL;
  }
  return result;
}
