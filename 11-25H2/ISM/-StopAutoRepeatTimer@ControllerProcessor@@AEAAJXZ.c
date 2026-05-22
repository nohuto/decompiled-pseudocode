/*
 * XREFs of ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006ED2C
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180089C60 (-OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180177F84 (--1ControllerProcessor@@MEAA@XZ.c)
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EEE4 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18006F0C8 (-clear@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::StopAutoRepeatTimer(ControllerProcessor *this)
{
  __int64 **v1; // rdi
  __int64 *i; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v1; i != (__int64 *)v1; i = (__int64 *)*i )
  {
    v5 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, *((_WORD *)i + 8), 0);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB76,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5,
        v7);
  }
  if ( *((_QWORD *)this + 13) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 96LL))(*((_QWORD *)this + 36));
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB7B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::clear((char *)this + 88);
  return 0LL;
}
