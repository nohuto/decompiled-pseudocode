/*
 * XREFs of ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140280FF4
 * Callers:
 *     DpiFeatureStartDevice @ 0x1402470C8 (DpiFeatureStartDevice.c)
 *     DpiInitializeGlobalState @ 0x1404339E8 (DpiInitializeGlobalState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlUnicodeStringCatString @ 0x140093B68 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x140093C20 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140281284 (-DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z.c)
 *     EnsureCacheSize @ 0x1402818B0 (EnsureCacheSize.c)
 */

__int64 __fastcall DxgkCreateFeatureDatabase(
        PCUNICODE_STRING SourceString,
        const struct _DXGKDDI_FEATURE_INTERFACE *a2,
        char a3,
        __int64 a4,
        struct DXGK_FEATURE_DATABASE **a5)
{
  char v8; // si
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

  v8 = a4;
  v9 = operator new(0x358uLL, 0x44786746u, 256LL, a4);
  v10 = v9;
  if ( v9 )
  {
    memset((void *)(v9 + 8), 0, 0x350uLL);
    *(_QWORD *)v10 = 0LL;
    if ( a2 )
    {
      *(_OWORD *)(v10 + 792) = *(_OWORD *)a2;
      *(_OWORD *)(v10 + 808) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v10 + 824) = *((_OWORD *)a2 + 2);
    }
    v11 = 2 * v8;
    *(_QWORD *)(v10 + 840) = 0LL;
    v12 = 0;
    *(_DWORD *)(v10 + 848) = a3 & 3 | v11 & 2;
    while ( v12 < 0x10 )
    {
      v13 = v12;
      if ( *(_DWORD *)&asc_140132930[4 * v12] && !(unsigned __int8)EnsureCacheSize(v10, v12) )
      {
        WdLogSingleEntry1(6LL, v12);
        v14 = L"Failed to allocate initial database cache for category %u";
        WdLogGlobalForLineNumber = 1238;
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
      WdLogGlobalForLineNumber = 1268;
    }
    else
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ZwOpenKey((PHANDLE)(v10 + 784), 0x20019u, &ObjectAttributes);
    }
    *(_QWORD *)(v10 + 656) = v10 + 264;
    *(_QWORD *)(v10 + 664) = v10 + 492;
    *(_QWORD *)(v10 + 672) = v10 + 522;
    *(_QWORD *)(v10 + 680) = v10 + 540;
    result = 0LL;
    *a5 = (struct DXGK_FEATURE_DATABASE *)v10;
  }
  else
  {
    v10 = 0LL;
    WdLogSingleEntry0(6LL);
    v13 = 1207LL;
    v14 = L"Failed to allocate feature database";
    WdLogGlobalForLineNumber = 1207;
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    if ( v10 )
      DxgkDestroyFeatureDatabase((struct DXGK_FEATURE_DATABASE *)v10);
    return 3221225495LL;
  }
  return result;
}
