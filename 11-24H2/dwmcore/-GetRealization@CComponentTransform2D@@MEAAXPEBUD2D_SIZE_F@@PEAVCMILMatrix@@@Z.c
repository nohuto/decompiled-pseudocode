/*
 * XREFs of ?GetRealization@CComponentTransform2D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180294D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  FLOAT height; // xmm1_4
  __int64 v5; // rax
  int v6; // xmm0_4
  int v7; // xmm1_4
  char v8; // al
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]

  v13 = 0LL;
  if ( a2 )
  {
    height = a2->height;
    *(FLOAT *)&v13 = a2->width;
    *((FLOAT *)&v13 + 1) = height;
  }
  v15 = 0LL;
  v5 = *(_QWORD *)this;
  v14 = 0LL;
  (*(void (__fastcall **)(CComponentTransform2D *, __int64 *, __int128 *))(v5 + 208))(this, &v13, &v14);
  *((_DWORD *)a3 + 16) = 0;
  v6 = v14;
  v7 = DWORD1(v14);
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 6) = 0;
  *((_DWORD *)a3 + 7) = 0;
  *((_DWORD *)a3 + 8) = 0;
  *((_DWORD *)a3 + 9) = 0;
  *((_DWORD *)a3 + 11) = 0;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 10) = 1065353216;
  *((_DWORD *)a3 + 15) = 1065353216;
  v8 = *((_BYTE *)a3 + 65);
  *(_DWORD *)a3 = v6;
  v9 = DWORD2(v14);
  *((_DWORD *)a3 + 1) = v7;
  v10 = HIDWORD(v14);
  *((_DWORD *)a3 + 4) = v9;
  v11 = v15;
  *((_DWORD *)a3 + 5) = v10;
  v12 = HIDWORD(v15);
  *((_BYTE *)a3 + 65) = v8 & 0xC3 | 0x28;
  *((_DWORD *)a3 + 12) = v11;
  *((_DWORD *)a3 + 13) = v12;
  *((_BYTE *)a3 + 64) = 8;
}
