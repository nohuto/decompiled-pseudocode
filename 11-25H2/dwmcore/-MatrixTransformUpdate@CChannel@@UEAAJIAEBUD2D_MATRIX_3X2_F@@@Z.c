/*
 * XREFs of ?MatrixTransformUpdate@CChannel@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180201DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::MatrixTransformUpdate(CChannel *this, unsigned int a2, const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  __int64 v7; // r9
  __int64 i; // rax
  __int64 v9; // xmm1_8
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v14[20]; // [rsp+24h] [rbp-24h]
  __int64 v15; // [rsp+38h] [rbp-10h]
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
  for ( i = *(unsigned int *)(v7 + 4); ; LODWORD(i) = dword_1803A0BA0[i] )
  {
    if ( (unsigned int)i >= 0xC0 )
      goto LABEL_9;
    if ( (_DWORD)i == 108 )
      break;
  }
  v9 = *(_QWORD *)&a3->m[2][0];
  v13 = 452;
  *(_OWORD *)v14 = 0LL;
  v10 = *(_OWORD *)&a3->m11;
  *(_DWORD *)v14 = v5;
  v15 = v9;
  *(_OWORD *)&v14[4] = v10;
  v11 = CChannel::SendCommand((struct CCommandBatch **)this, &v13, 0x20u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v11;
}
