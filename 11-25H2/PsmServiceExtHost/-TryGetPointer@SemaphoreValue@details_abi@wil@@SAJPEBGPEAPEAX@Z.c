/*
 * XREFs of ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800765D8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800747A0 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18007490C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180075E90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180076648 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetPointer(
        const unsigned __int16 *a1,
        void **a2,
        __int64 a3,
        bool *a4)
{
  int ValueInternal; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(a1, (bool)a2, &v11, a4);
  v7 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    *a2 = (void *)(4 * v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, 100LL, v6, (const char *)(unsigned int)ValueInternal);
    wil::details::in1diag3::Return_Hr(retaddr, 109LL, v8, (const char *)v7);
    return v7;
  }
}
