/*
 * XREFs of _lambda_9a93ee57caea2b3e2d042c02cff1fd50_::operator() @ 0x1801C174C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a93ee57caea2b3e2d042c02cff1fd50___::Run @ 0x18023A000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a93ee57caea2b3e2d042c02cff1fd50___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_9a93ee57caea2b3e2d042c02cff1fd50_::operator()(_BYTE *a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v7);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v8 = 0LL;
      v4 = *(_QWORD *)a1;
      v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)a1 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
      result = v5(v4, i, &GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07, &v8);
      if ( (int)result >= 0 )
        result = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 24LL))(v8, a1[8] != 0);
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  return result;
}
