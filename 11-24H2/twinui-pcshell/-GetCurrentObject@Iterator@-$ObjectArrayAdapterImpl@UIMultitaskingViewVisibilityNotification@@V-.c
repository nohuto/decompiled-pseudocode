/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180186F28
 * Callers:
 *     _lambda_5dc897b16d2ec62a0cb4f80858627a7d_::operator() @ 0x180186DE8 (_lambda_5dc897b16d2ec62a0cb4f80858627a7d_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v2; // r14
  __int64 v3; // rcx
  unsigned int *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)(a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (unsigned int *)*((_QWORD *)a1 + 2);
  result = v4[2];
  if ( *a1 < (unsigned int)result )
  {
    do
    {
      v6 = *(_QWORD *)v4;
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v4 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
      result = v7(v6, *a1, &GUID_c59a7a3c_0676_4526_8192_5d0bf9b89b95, v2);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result);
      result = ++*a1;
      v4 = (unsigned int *)*((_QWORD *)a1 + 2);
    }
    while ( (unsigned int)result < v4[2] );
  }
  return result;
}
