/*
 * XREFs of ?GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180091600
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::GetDesktopTree(
        struct _RTL_CRITICAL_SECTION *this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r15
  DWORD LowPart; // edi
  unsigned int v7; // r12d
  _QWORD *p_Type; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // et0
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LONG HighPart; // [rsp+5Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v3 = this + 9;
  *a3 = 0LL;
  LowPart = a2.LowPart;
  v7 = -2147023728;
  EnterCriticalSection(this + 9);
  p_Type = &this[10].DebugInfo->Type;
  v9 = *(_QWORD **)&this[10].LockCount;
  while ( p_Type != v9 )
  {
    v10 = *p_Type;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*p_Type + 184LL))(*p_Type) )
      break;
    v11 = *(_QWORD *)(v10 + 2632);
    if ( (_DWORD)v11 == LowPart )
    {
      v12 = HIDWORD(v11);
      if ( (_DWORD)v12 == HighPart )
      {
        v13 = _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
        if ( (v13 < 0) ^ __OFSUB__((_DWORD)v12, HighPart) | (v13 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v15);
        *a3 = (struct CDesktopTree *)v10;
        v7 = 0;
        break;
      }
    }
    ++p_Type;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
