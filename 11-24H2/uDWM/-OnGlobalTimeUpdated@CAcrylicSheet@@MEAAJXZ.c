/*
 * XREFs of ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ @ 0x180067F30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180067D50 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18006821C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800A2048 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAcrylicSheet::OnGlobalTimeUpdated(CAcrylicSheet *this)
{
  __int64 v2; // rdx
  _BYTE *v3; // rcx
  int *v4; // r8
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rdx
  int updated; // eax
  unsigned int v11; // ebx
  int *v12; // rdx
  _BYTE *v13; // rdx
  int v14[14]; // [rsp+20h] [rbp-39h] BYREF
  int *v15; // [rsp+58h] [rbp-1h]
  _BYTE v16[56]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE *v17; // [rsp+98h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  CVisual::SetDirtyFlags(this, 0x8000);
  v3 = 0LL;
  v17 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0;
  v6 = *((_QWORD *)this + 63);
  if ( v6 && *(_BYTE *)(v6 + 72) )
  {
    v5 = 1;
    std::function<void (void)>::operator=((__int64)v16, (__int64)this + 288);
    v3 = v17;
    v4 = v15;
  }
  v7 = *((_QWORD *)this + 61);
  if ( v7 && *(_BYTE *)(v7 + 72) )
  {
    std::function<void (void)>::operator=((__int64)v14, (__int64)this + 352);
  }
  else if ( !v5 )
  {
    goto LABEL_4;
  }
  updated = CAcrylicSheet::UpdateTransition(this);
  v11 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)updated,
      v14[0]);
    if ( v15 )
    {
      v12 = v14;
      LOBYTE(v12) = v15 != v14;
      (*(void (__fastcall **)(int *, int *))(*(_QWORD *)v15 + 32LL))(v15, v12);
      v15 = 0LL;
    }
    if ( v17 )
    {
      v13 = v16;
      LOBYTE(v13) = v17 != v16;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v13);
    }
    return v11;
  }
  v3 = v17;
  v4 = v15;
LABEL_4:
  if ( v3 )
  {
    std::_Func_class<void,>::operator()(v16);
    v3 = v17;
    v4 = v15;
  }
  if ( v4 )
  {
    std::_Func_class<void,>::operator()(v14);
    v3 = v17;
    v4 = v15;
  }
  if ( v4 )
  {
    LOBYTE(v2) = v4 != v14;
    (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v4 + 32LL))(v4, v2);
    v15 = 0LL;
    v3 = v17;
  }
  if ( v3 )
  {
    v8 = v16;
    LOBYTE(v8) = v3 != v16;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v3 + 32LL))(v3, v8);
  }
  return 0LL;
}
