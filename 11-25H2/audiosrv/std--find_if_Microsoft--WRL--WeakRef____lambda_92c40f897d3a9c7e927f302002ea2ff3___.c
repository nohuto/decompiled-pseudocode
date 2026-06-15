/*
 * XREFs of std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x180022FF8
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x1800231EC (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002307C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // di
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1; i != a2; i += 8LL )
  {
    v8 = 0LL;
    v4 = Microsoft::WRL::WeakRef::As<IInspectable>(i, &v8);
    v5 = v8;
    v6 = v4 < 0 || !v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v6 )
      break;
  }
  return i;
}
