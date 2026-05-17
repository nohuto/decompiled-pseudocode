/*
 * XREFs of bsearch @ 0x180123D40
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800092B0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpFindUnicodeStringInSection @ 0x18005E010 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x18005E750 (RtlpLocateActivationContextSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x18005EAD0 (RtlFindActivationContextSectionGuid.c)
 *     RtlQueryProtectedPolicy @ 0x1800F4900 (RtlQueryProtectedPolicy.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 *     RtlCompareExchangePropertyStore @ 0x180143020 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x180143310 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180143480 (RtlRemovePropertyStore.c)
 * Callees:
 *     _invalid_parameter @ 0x180120778 (_invalid_parameter.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x180172010 (_guard_check_icall$thunk$15021643654165956172.c)
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
