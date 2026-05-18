/*
 * XREFs of sub_18002B380 @ 0x18002B380
 * Callers:
 *     sub_1800BE920 @ 0x1800BE920 (sub_1800BE920.c)
 * Callees:
 *     _o_ceilf @ 0x18000C41C (_o_ceilf.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002A748 @ 0x18002A748 (sub_18002A748.c)
 *     sub_18002B298 @ 0x18002B298 (sub_18002B298.c)
 *     sub_18006BF10 @ 0x18006BF10 (sub_18006BF10.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002B380(float *a1, float a2, float a3, float a4, float a5)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // edi
  int v10; // r15d
  int v11; // ebx
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-41h] BYREF
  volatile signed __int32 *v16; // [rsp+30h] [rbp-39h]
  __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+40h] [rbp-29h]
  _DWORD v19[24]; // [rsp+48h] [rbp-21h] BYREF

  v6 = (*(__int64 (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 376LL))(a1, &v15);
  result = sub_180011C04(v6, &v17);
  if ( v16 )
    result = sub_180010644(v16);
  v8 = v17;
  if ( v17 )
  {
    v9 = *((_DWORD *)a1 + 41);
    v10 = *((_DWORD *)a1 + 42);
    o_ceilf();
    v11 = (int)(float)(a2 * a4);
    o_ceilf();
    v12 = (int)(float)(a3 * a5);
    if ( v11 < 1 )
      v11 = 1;
    *((_DWORD *)a1 + 41) = v11;
    if ( v12 < 1 )
      v12 = 1;
    *((_DWORD *)a1 + 42) = v12;
    if ( v9 != v11 || v10 != v12 )
      *((_DWORD *)a1 + 50) = 3;
    a1[46] = a4;
    a1[47] = a5;
    a1[44] = a2;
    a1[45] = a3;
    result = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 280LL))(a1);
    if ( (_BYTE)result )
    {
      *(float *)v19 = a1[41];
      *(float *)&v19[1] = a1[42];
      v19[2] = (*(__int64 (__fastcall **)(float *, _QWORD))(*(_QWORD *)a1 + 264LL))(a1, 0LL);
      v19[3] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 1LL);
      v19[4] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
      v19[5] = 0;
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 152LL))(a1);
      sub_18006BF10(*v13, v8, v19);
      sub_18002B298((__int64)a1);
      unknown_libname_81(&v15, (_QWORD *)(*v13 + 456LL));
      v14 = *(_QWORD *)(v15 + 136);
      if ( v14 )
        result = sub_18002A748(v14, *(_DWORD *)(v8 + 244));
      else
        result = 0LL;
      *((_DWORD *)a1 + 43) = result;
      if ( v16 )
        result = sub_18001060C((__int64)v16);
    }
    else
    {
      *((_DWORD *)a1 + 43) = 1;
    }
  }
  if ( v18 )
    return sub_18001060C(v18);
  return result;
}
