/*
 * XREFs of ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x18018F400
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18018EDC0 (-Partition_DesktopCaptureBits@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18018F244 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::GetDesktopTree(
        struct _RTL_CRITICAL_SECTION *this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  DWORD LowPart; // edi
  unsigned int v6; // r14d
  _QWORD *p_Type; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // et0
  struct CDesktopTree **v13; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LONG HighPart; // [rsp+6Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v3 = this + 9;
  *a3 = 0LL;
  LowPart = a2.LowPart;
  v6 = -2147023728;
  EnterCriticalSection(this + 9);
  p_Type = &this[10].DebugInfo->Type;
  v8 = *(_QWORD **)&this[10].LockCount;
  while ( 1 )
  {
    if ( p_Type == v8
      || (v9 = *p_Type, !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*p_Type + 184LL))(*p_Type)) )
    {
      v13 = a3;
      goto LABEL_9;
    }
    v10 = *(_QWORD *)(v9 + 2632);
    if ( (_DWORD)v10 == LowPart )
    {
      v11 = HIDWORD(v10);
      if ( (_DWORD)v11 == HighPart )
        break;
    }
    ++p_Type;
  }
  v12 = _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
  if ( (v12 < 0) ^ __OFSUB__((_DWORD)v11, HighPart) | (v12 == 0) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v17);
  v13 = a3;
  v6 = 0;
  *a3 = (struct CDesktopTree *)v9;
LABEL_9:
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( (v6 & 0x80000000) == 0 )
    return v6;
  if ( __PAIR64__(HighPart, LowPart) != qword_1803FA8D0 )
    return v6;
  v15 = *(_QWORD *)this[15].OwningThread;
  if ( !v15 )
    return v6;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
  if ( !v16 )
    return v6;
  *v13 = (struct CDesktopTree *)v16;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v16 + 8));
  return 0LL;
}
