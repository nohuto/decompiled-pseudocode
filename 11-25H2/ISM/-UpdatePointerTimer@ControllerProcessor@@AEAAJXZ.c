/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x18017B6B0
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180089A00 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017AD94 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::UpdatePointerTimer(ControllerProcessor *this)
{
  char v2; // di
  bool v3; // r14
  bool v4; // bp
  bool v5; // si
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1;
  if ( !*((_BYTE *)this + 212) )
  {
    v3 = COERCE_FLOAT(*((_DWORD *)this + 48) & _xmm) <= 0.23953247
      && COERCE_FLOAT(*((_DWORD *)this + 49) & _xmm) <= 0.23953247;
    v4 = COERCE_FLOAT(*((_DWORD *)this + 50) & _xmm) <= 0.26516724
      && COERCE_FLOAT(*((_DWORD *)this + 51) & _xmm) <= 0.26516724;
    v5 = COERCE_FLOAT(*((_DWORD *)this + 46) & _xmm) <= 0.1171875
      && COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) <= 0.1171875;
    if ( v4 && !*((_BYTE *)this + 420) && *((_DWORD *)this + 315) == 1 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v5 && ((*((_DWORD *)this + 315) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v3 && v4 && v5 )
      v2 = 0;
  }
  v6 = *((_QWORD *)this + 37);
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, &v12);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x811,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v7,
      v10);
  if ( v2 )
  {
    if ( !*((_DWORD *)this + 70) && !v12 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 37) + 80LL))(
             *((_QWORD *)this + 37),
             0LL,
             *((_QWORD *)this + 975));
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x817,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v8,
          v10);
    }
  }
  return 0LL;
}
