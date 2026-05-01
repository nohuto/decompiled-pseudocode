/*
 * XREFs of ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1803B575C
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1803B71EC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1803B7C0C (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1803B8168 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1802CE230 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 */

HLOCAL __fastcall wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>(
        __int64 a1)
{
  HLOCAL result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
             *(HLOCAL **)a1,
             *(void **)(a1 + 8));
  return result;
}
