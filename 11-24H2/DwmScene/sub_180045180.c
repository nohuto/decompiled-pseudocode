/*
 * XREFs of sub_180045180 @ 0x180045180
 * Callers:
 *     sub_180045DDC @ 0x180045DDC (sub_180045DDC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_180027B30 @ 0x180027B30 (sub_180027B30.c)
 *     sub_1800459D0 @ 0x1800459D0 (sub_1800459D0.c)
 *     sub_180045A5C @ 0x180045A5C (sub_180045A5C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180045180(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebp
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[72]; // [rsp+40h] [rbp-58h] BYREF
  char v15; // [rsp+88h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+8h] BYREF

  sub_180027B30(a1, (__int64)a2);
  v4 = *(_DWORD *)(*a2 + 244LL);
  v16 = v4;
  sub_18002633C((_QWORD *)(a1 + 128), (__int64)v13, &v16);
  v5 = unknown_libname_81(v12, a2);
  v7 = *v5;
  *v5 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v7;
  v8 = v5[1];
  v5[1] = *(_QWORD *)(v6 + 48);
  v9 = v12[1];
  *(_QWORD *)(v6 + 48) = v8;
  if ( v9 )
    sub_18001060C(v9);
  sub_180045A5C(a1, v14);
  v10 = v14;
  do
  {
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10, a2);
    v10 += 8;
  }
  while ( v10 != &v15 );
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 112) )
  {
    v16 = v4;
    *(_BYTE *)(*(_QWORD *)sub_1800276BC((__int64 *)(a1 + 80), (__int64)v13, &v16) + 32LL) = 1;
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
      return sub_1800459D0(a1, 0LL);
    result = *(_QWORD *)(a1 + 72);
    if ( (*(_BYTE *)(result + 768) & 8) != 0 )
      return sub_1800459D0(a1, 0LL);
  }
  return result;
}
