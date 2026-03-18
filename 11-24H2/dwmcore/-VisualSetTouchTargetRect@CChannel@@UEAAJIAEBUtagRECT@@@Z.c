/*
 * XREFs of ?VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x1801E2AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualSetTouchTargetRect(CChannel *this, unsigned int a2, const struct tagRECT *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  __int64 v7; // r9
  __int64 i; // rax
  __int128 v9; // xmm0
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v13[2]; // [rsp+24h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  v5 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v7 = *((_QWORD *)this + 2) + 16LL * (unsigned int)(v5 - 1);
  if ( !(_DWORD)v5
    || v5 > (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4
    || !*(_DWORD *)v7
    || !*(_DWORD *)(v7 + 4) )
  {
LABEL_9:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA88,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v7);
  }
  for ( i = *(unsigned int *)(v7 + 4); ; LODWORD(i) = dword_180395B60[i] )
  {
    if ( (unsigned int)i >= 0xC2 )
      goto LABEL_9;
    if ( (_DWORD)i == 184 )
      break;
  }
  v12 = 415;
  v13[0] = 0LL;
  v9 = (__int128)*a3;
  LODWORD(v13[0]) = v5;
  *(_OWORD *)((char *)v13 + 4) = v9;
  v10 = CChannel::SendCommand((struct CCommandBatch **)this, &v12, 0x18u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v10;
}
