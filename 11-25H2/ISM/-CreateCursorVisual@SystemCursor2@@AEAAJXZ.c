/*
 * XREFs of ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800F8030
 * Callers:
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800F816C (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 * Callees:
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800584E8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058550 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009A46C (--$-4U-$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@-$unique_ptr@VHardwareCur.c)
 *     ??1?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x18009BED8 (--1-$unique_ptr@VHardwareCursorVisual@SystemCursors@@U-$default_delete@VHardwareCursorVisual@Sys.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@QEBAXPEAVHardwareCursorVisual@SystemCursors@@@Z @ 0x1800F75AC (--R-$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@QEBAXPEAVHardwareCursorVisual@Sys.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursor2::CreateCursorVisual(SystemCursor2 *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  SystemCursors::HardwareCursorVisual *v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-20h]
  std::_Ref_count_base *v13[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  std::weak_ptr<SystemCursorService2>::lock((__int64)this + 56, &v11);
  v3 = v11;
  if ( !v11 )
    goto LABEL_10;
  v4 = (SystemCursors::HardwareCursorVisual *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v4 )
    std::default_delete<SystemCursors::HardwareCursorVisual>::operator()(v2, v4);
  *(_OWORD *)v13 = 0LL;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    (_QWORD *)this + 19,
    (__int64 *)v13);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = operator new(0x40uLL);
  v15 = v6;
  v7 = *(_QWORD *)this;
  v6[1] = v5;
  v6[2] = 0LL;
  v6[3] = 0LL;
  *((_WORD *)v6 + 16) = 257;
  *v6 = &SystemCursors::HardwareCursorVisual::`vftable';
  v6[5] = 0LL;
  v6[6] = v7;
  *((_BYTE *)v6 + 56) = 1;
  *((_BYTE *)v6 + 33) = 1;
  v15 = v6;
  std::unique_ptr<SystemCursors::HardwareCursorVisual>::operator=<std::default_delete<SystemCursors::HardwareCursorVisual>,0>(
    (__int64 *)this + 21,
    (__int64 *)&v15);
  std::unique_ptr<SystemCursors::HardwareCursorVisual>::~unique_ptr<SystemCursors::HardwareCursorVisual>(&v15);
  v8 = (***((__int64 (__fastcall ****)(_QWORD))this + 21))(*((_QWORD *)this + 21));
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x294,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)v8);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    return v9;
  }
  else
  {
LABEL_10:
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    return 0LL;
  }
}
