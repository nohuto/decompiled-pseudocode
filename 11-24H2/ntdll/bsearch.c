/*
 * XREFs of bsearch @ 0x180121F70
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180035CB0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpFindUnicodeStringInSection @ 0x180073BF0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x180074330 (RtlpLocateActivationContextSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800746B0 (RtlFindActivationContextSectionGuid.c)
 *     RtlQueryProtectedPolicy @ 0x1800EF520 (RtlQueryProtectedPolicy.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     RtlCompareExchangePropertyStore @ 0x1801413D0 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x1801416C0 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180141830 (RtlRemovePropertyStore.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x180171010 (_guard_check_icall$thunk$15021643654165956172.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  size_t v6; // rsi
  char *v7; // rdi
  char *v8; // rbx
  size_t v10; // rbp
  bool v11; // zf
  char *v12; // r14
  int v13; // eax

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v8 <= v7 )
    {
      v10 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))CompareFunction)(Key, v8) )
          return 0LL;
        return v8;
      }
      v11 = (v6 & 1) == 0;
      v6 = v10 - 1;
      if ( !v11 )
        v6 = v10;
      v12 = &v8[SizeOfElements * v6];
      v13 = ((__int64 (__fastcall *)(const void *, char *))CompareFunction)(Key, v12);
      if ( !v13 )
        return &v8[SizeOfElements * v6];
      if ( v13 >= 0 )
      {
        v8 = &v12[SizeOfElements];
        v6 = v10;
      }
      else
      {
        v7 = &v12[-SizeOfElements];
      }
    }
  }
  else
  {
    invalid_parameter();
  }
  return 0LL;
}
