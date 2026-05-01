/*
 * XREFs of ?_HasListenerID@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@AEAA_NPEAX@Z @ 0x1804B6BCC
 * Callers:
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb___ @ 0x1804B49E4 (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_s.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::_HasListenerID(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi

  v2 = *(_QWORD **)(a1 + 24);
  v4 = &v2[*(_QWORD *)(a1 + 32)];
  while ( v2 != v4 )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 32LL))(*v2) == a2 )
      return 1;
    ++v2;
  }
  return 0;
}
