/*
 * XREFs of ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x1800F797C
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z @ 0x1800F7D60 (-CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z.c)
 * Callees:
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800584E8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x18015EE60 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     ?SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x18015F06C (-SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursor2::AttachCursorVisualToShellRoot(SystemCursor2 *this)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  char *v4; // rdi
  int v5; // ecx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  int v10; // eax
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-30h]
  char *v14; // [rsp+30h] [rbp-28h]
  char *v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  std::weak_ptr<SystemCursorService2>::lock((__int64)this + 56, &v12);
  v2 = v12;
  if ( v12 )
  {
    v3 = *(_QWORD *)(v12 + 24);
    v4 = (char *)operator new(0x38uLL);
    *(_OWORD *)v4 = 0LL;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<SystemCursors::SharedTargetWithHandle>::`vftable';
    v5 = *(_DWORD *)(v2 + 248);
    *((_QWORD *)v4 + 2) = v3;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = -1LL;
    *((_DWORD *)v4 + 12) = v5;
    v14 = v4 + 16;
    v15 = v4;
    v6 = SystemCursors::SharedTargetWithHandle::Initialize((SystemCursors::SharedTargetWithHandle *)(v4 + 16));
    if ( v6 < 0 )
    {
      v7 = 693LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)(unsigned int)v6);
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      return (unsigned int)v6;
    }
    v6 = SystemCursors::SharedTargetWithHandle::SetRoot(
           (SystemCursors::SharedTargetWithHandle *)(v4 + 16),
           *(struct Windows::UI::Composition::IVisual **)(*((_QWORD *)this + 21) + 16LL));
    if ( v6 < 0 )
    {
      v7 = 694LL;
      goto LABEL_4;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 64LL);
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v9 + 8) + 40LL))(
              v9 + 8,
              *(_QWORD *)this,
              *((_QWORD *)v4 + 5));
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x150,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v10);
        v7 = 699LL;
        goto LABEL_4;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    *((_QWORD *)this + 19) = v14;
    v11 = (std::_Ref_count_base *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = v4;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return 0LL;
}
