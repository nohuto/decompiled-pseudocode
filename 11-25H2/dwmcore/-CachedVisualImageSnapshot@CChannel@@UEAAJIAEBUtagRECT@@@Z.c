/*
 * XREFs of ?CachedVisualImageSnapshot@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x18021B060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CachedVisualImageSnapshot(CChannel *this, unsigned int a2, const struct tagRECT *a3)
{
  __int64 v3; // rsi
  __int128 v7; // xmm0
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v12[2]; // [rsp+24h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  CChannel::CheckHandle((__int64)this, a2, 18);
  v11 = 22;
  v12[0] = 0LL;
  v7 = (__int128)*a3;
  LODWORD(v12[0]) = a2;
  *(_OWORD *)((char *)v12 + 4) = v7;
  v8 = CChannel::SendCommand((struct CCommandBatch **)this, &v11, 0x18u);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_BYTE *)this + 192) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    return v9;
  }
}
