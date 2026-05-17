/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x180077CA8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180078828 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrResGetRCConfig @ 0x1800795B0 (LdrResGetRCConfig.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        int a5,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  bool v15; // al
  int RCConfig; // eax
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) != 0 )
  {
    RCConfig = LdrResGetRCConfig(a1, 0, (unsigned int)&v17, 4096, 1);
    if ( RCConfig >= 0 )
    {
      if ( (int)LdrResGetRCConfig(a2, 0, (unsigned int)&v18, 4096, 0) < 0 )
        return 0;
      v10 = v17;
      v11 = v18;
      goto LABEL_5;
    }
    if ( RCConfig != -1073741686 )
      return 0;
    return (a5 & 0x1000000) != 0;
  }
  v10 = LdrpGetRcConfig(a1, a2, 0, 1);
  if ( !v10 )
    return (a5 & 0x1000000) != 0;
  v11 = LdrpGetRcConfig(a2, v9, 0, 0);
  if ( !v11 )
    return 0;
LABEL_5:
  if ( a6 == 2 )
  {
    v14 = *(_QWORD *)(v10 + 28) - *(_QWORD *)(v11 + 28);
    if ( !v14 )
      v14 = *(_QWORD *)(v10 + 36) - *(_QWORD *)(v11 + 36);
    v15 = v14 == 0;
    if ( a3 )
    {
      if ( !v15 )
      {
        LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3);
        return 0;
      }
    }
    else if ( !v15 )
    {
      return 0;
    }
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 44) - *(_QWORD *)(v11 + 44);
    if ( !v12 )
      v12 = *(_QWORD *)(v10 + 52) - *(_QWORD *)(v11 + 52);
    if ( v12 )
      return 0;
  }
  if ( (a5 & 0x1000000) == 0 )
  {
    if ( a4 )
      return wcsicmp(a4, (const wchar_t *)(v11 + *(unsigned int *)(v11 + 116))) == 0;
    return 0;
  }
  return 1;
}
