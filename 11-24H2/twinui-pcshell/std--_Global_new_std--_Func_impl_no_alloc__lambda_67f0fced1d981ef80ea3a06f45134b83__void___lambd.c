/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83__const_&_ @ 0x18066C2AC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_::_Copy @ 0x18066F780 (std--_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_--_Copy.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CA838 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A5014 (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c____::_2_::_Guard_type::__Guard_type @ 0x1805CB578 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lamb.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void___lambda_67f0fced1d981ef80ea3a06f45134b83__const___(
        __int64 a1)
{
  __int64 *v2; // rsi
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h]

  v2 = (__int64 *)operator new(0x40uLL);
  v4 = v2;
  *v2 = (__int64)&off_18075B9F8;
  v5 = v2 + 1;
  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(v2 + 1, (_QWORD *)a1);
  v2[3] = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v2 + 3);
  v2[4] = *(_QWORD *)(a1 + 24);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v2 + 4);
  winrt::hstring::hstring((winrt::hstring *)(v2 + 5), (const struct winrt::hstring *)(a1 + 32));
  winrt::hstring::hstring((winrt::hstring *)(v2 + 6), (const struct winrt::hstring *)(a1 + 40));
  *((_DWORD *)v2 + 14) = *(_DWORD *)(a1 + 48);
  *((_BYTE *)v2 + 60) = *(_BYTE *)(a1 + 52);
  v4 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c____::_2_::_Guard_type::__Guard_type((void **)&v4);
  return v2;
}
