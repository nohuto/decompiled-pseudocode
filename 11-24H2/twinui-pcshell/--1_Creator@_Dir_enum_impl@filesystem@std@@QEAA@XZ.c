/*
 * XREFs of ??1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x1802CD584
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$0 @ 0x1806DAFE9 (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_impl__--_1_--d.c)
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x1802D421C (__std_fs_directory_iterator_close.c)
 */

void __fastcall std::filesystem::_Dir_enum_impl::_Creator::~_Creator(std::filesystem::_Dir_enum_impl::_Creator *this)
{
  _std_fs_directory_iterator_close(*((_QWORD *)this + 4));
  std::wstring::_Tidy_deallocate((void **)this);
}
