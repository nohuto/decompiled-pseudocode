/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180056E00
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180055E2C (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180056DD0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x18014B260 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1803A6B84 (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046E408 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     GetColorFromColorString @ 0x18047138C (GetColorFromColorString.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1805775B4 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x180612D80 (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x180633C80 (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int64 v7; // rbx
  __int64 result; // rax
  size_t size_of; // rax
  char *v10; // rax
  size_t v11; // rbx
  char *v12; // rdi

  v3 = 0x7FFFFFFFFFFFFFFELL;
  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = (char *)7;
  if ( a3 > 7 )
  {
    if ( (a3 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v3 = a3 | 7;
      if ( (a3 | 7) < 0xA )
        v3 = 10LL;
    }
    size_of = std::_Get_size_of_n<2>(v3 + 1);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    a1[2] = (char *)a3;
    v11 = 2 * a3;
    *a1 = v10;
    a1[3] = (char *)v3;
    v12 = v10;
    memcpy_0(v10, a2, v11);
    result = 0LL;
    *(_WORD *)&v12[v11] = 0;
  }
  else
  {
    a1[2] = (char *)a3;
    v7 = 2 * a3;
    memcpy_0(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v7) = 0;
  }
  return result;
}
