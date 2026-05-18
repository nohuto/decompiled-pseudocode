/*
 * XREFs of sub_180016018 @ 0x180016018
 * Callers:
 *     sub_180017BA0 @ 0x180017BA0 (sub_180017BA0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010254 @ 0x180010254 (sub_180010254.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_18001B0C4 @ 0x18001B0C4 (sub_18001B0C4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180016018(__int64 *a1, int *a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (_DWORD *)sub_18001B0C4(208LL);
  v7 = (__int64)v6;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &ISpectreLightNode::`vftable';
    v6[3] = 1;
    *(_QWORD *)v6 = off_1800EB6E0;
    if ( qword_1801C3430 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C3430 + 8LL))(qword_1801C3430);
    *(_QWORD *)v7 = off_1800EBA58;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 52) = 0LL;
    *(_QWORD *)(v7 + 60) = 0LL;
    *(_DWORD *)(v7 + 68) = 1065353216;
    *(_QWORD *)(v7 + 184) = 0LL;
    *(_QWORD *)(v7 + 192) = 0LL;
    *(_DWORD *)(v7 + 200) = 0;
    v10 = v7;
    v11 = 0LL;
    v8 = sub_180012658(v7, *a2, a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      sub_18000E854(&v10);
      v8 = 0;
    }
    else
    {
      sub_18000E854(&v10);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  sub_180010254(&v11);
  return (unsigned int)v8;
}
