/*
 * XREFs of ?_Buy_nonzero@?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18004867C
 * Callers:
 *     ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18018B4F0 (--0-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@UI@WindowsUdk@.c)
 *     ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@V?$initializer_list@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@AEBV?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@@Z @ 0x1801D8F20 (--0-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@U_ea_1801D8F20.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800486E0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::_Buy_nonzero(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<4>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 4 * a2;
  a1[2] = result;
  return result;
}
