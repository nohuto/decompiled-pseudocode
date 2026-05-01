/*
 * XREFs of _lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___ @ 0x1806618B4
 * Callers:
 *     ?GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBI@Z @ 0x180663474 (-GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
        HKEY **a1,
        LPCWSTR *a2,
        DWORD *a3,
        void *a4)
{
  HKEY *v4; // rax
  LSTATUS result; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  pcbData = 0;
  result = RegGetValueW(*v4, 0LL, *a2, *a3, 0LL, 0LL, &pcbData);
  if ( pcbData - 1 <= 0x102 )
    return RegGetValueW(**a1, 0LL, *a2, *a3, 0LL, a4, &pcbData);
  return result;
}
