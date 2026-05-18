/*
 * XREFs of sub_18001C188 @ 0x18001C188
 * Callers:
 *     sub_18001BDEC @ 0x18001BDEC (sub_18001BDEC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_18001BCFC @ 0x18001BCFC (sub_18001BCFC.c)
 *     sub_18001C46C @ 0x18001C46C (sub_18001C46C.c)
 *     sub_18001C4F8 @ 0x18001C4F8 (sub_18001C4F8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001C188(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // r10d
  __int64 v12; // rcx
  __int64 *v13; // rdi
  struct _Mtx_internal_imp_t *v15; // [rsp+20h] [rbp-58h]
  _BYTE v16[16]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)a1 = dword_1801B9038;
  v6 = (unsigned int)dword_1801B9038;
  *(_DWORD *)(a1 + 4) = dword_1801B9058;
  v7 = (unsigned int)dword_1801B9058;
  *(_DWORD *)(a1 + 8) = dword_1801B9078;
  v8 = (unsigned int)dword_1801B9078;
  v9 = HIBYTE(a3) & 0xF;
  if ( (a3 & 0xF000000) == 0 )
    v9 = (unsigned int)v6;
  *(_DWORD *)a1 = v9;
  v10 = HIWORD(a3) & 0xF;
  if ( !v10 )
    v10 = v7;
  if ( v10 <= (unsigned int)v9 )
    v9 = v10;
  *(_DWORD *)(a1 + 4) = v9;
  v11 = (a3 >> 8) & 0xF;
  if ( !v11 )
    v11 = v8;
  *(_DWORD *)(a1 + 8) = v11;
  *(_DWORD *)(a1 + 12) = 6;
  v15 = (struct _Mtx_internal_imp_t *)sub_18001C4F8(v6, v9, v7, v8);
  sub_180011C30((__int64)v15);
  v13 = (__int64 *)sub_18001C46C(v12);
  std::string::string(v17, a2);
  *(_QWORD *)(*(_QWORD *)sub_18001BCFC(v13, (__int64)v16, (__int64)v17) + 64LL) = a1;
  sub_180011B5C((__int64)v17);
  Mtx_unlock(v15);
  return a1;
}
