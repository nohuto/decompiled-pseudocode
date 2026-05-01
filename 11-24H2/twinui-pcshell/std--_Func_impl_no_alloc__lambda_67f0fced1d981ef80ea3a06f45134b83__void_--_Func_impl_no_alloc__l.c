/*
 * XREFs of std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83__0_ @ 0x18066C028
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83___ @ 0x18066C364 (std--_Global_new_std--_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__ea_18066C364.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CA838 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83__0_(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  *a1 = &off_18075B9F8;
  v4 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = *(_QWORD *)a2;
  a1[2] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = a1 + 3;
  *v5 = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v5);
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v4[3] = v6;
  v7 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v4[4] = v7;
  winrt::hstring::hstring((winrt::hstring *)(v4 + 5), (const struct winrt::hstring *)(a2 + 40));
  *((_DWORD *)v4 + 12) = *(_DWORD *)(a2 + 48);
  *((_BYTE *)v4 + 52) = *(_BYTE *)(a2 + 52);
  return a1;
}
