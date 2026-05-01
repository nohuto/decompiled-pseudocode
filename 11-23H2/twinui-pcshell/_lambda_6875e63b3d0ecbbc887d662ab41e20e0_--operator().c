/*
 * XREFs of _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180682F00
 * Callers:
 *     std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1806816F4 (std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d66.c)
 *     std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1806817C0 (std--_Med3_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 *     std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681890 (std--_Partition_by_median_guess_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0.c)
 *     std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681A6C (std--_Pop_heap_hole_by_index_winrt--com_ptr_IApplicationView____winrt--com_ptr_IApplicationView_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(FILETIME a1, _QWORD *a2, _QWORD *a3)
{
  FILETIME FileTime2; // [rsp+30h] [rbp+8h] BYREF
  FILETIME FileTime1; // [rsp+38h] [rbp+10h] BYREF

  FileTime2 = a1;
  return (*(int (__fastcall **)(_QWORD, FILETIME *))(*(_QWORD *)*a2 + 480LL))(*a2, &FileTime1) < 0
      || (*(int (__fastcall **)(_QWORD, FILETIME *))(*(_QWORD *)*a3 + 480LL))(*a3, &FileTime2) < 0
      || CompareFileTime(&FileTime1, &FileTime2) == 1;
}
