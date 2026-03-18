/*
 * XREFs of ?VisualSetContent@CChannel@@UEAAJII@Z @ 0x18012F600
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualSetContent(CChannel *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  const char *v8; // r9
  __int64 i; // rax
  unsigned int v10; // ebx
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  v5 = a3;
  v6 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v7 = *((_QWORD *)this + 2);
  v8 = (const char *)(2LL * (unsigned int)(v6 - 1));
  if ( !(_DWORD)v6
    || v6 > (*((_QWORD *)this + 3) - v7) >> 4
    || !*(_DWORD *)(v7 + 16LL * (unsigned int)(v6 - 1))
    || !*(_DWORD *)(v7 + 16LL * (unsigned int)(v6 - 1) + 4) )
  {
LABEL_9:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA88,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v8);
  }
  for ( i = *(unsigned int *)(v7 + 16LL * (unsigned int)(v6 - 1) + 4); ; LODWORD(i) = dword_180395B60[i] )
  {
    if ( (unsigned int)i >= 0xC2 )
      goto LABEL_9;
    if ( (_DWORD)i == 184 )
      break;
  }
  if ( (_DWORD)v5
    && (v5 > (*((_QWORD *)this + 3) - v7) >> 4
     || !*(_DWORD *)(v7 + 16LL * (unsigned int)(v5 - 1))
     || !*(_DWORD *)(v7 + 16LL * (unsigned int)(v5 - 1) + 4)) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA88,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v8);
  }
  v12[0] = 398;
  v12[1] = v6;
  v12[2] = v5;
  v10 = CChannel::SendCommand(this, v12, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v10;
}
