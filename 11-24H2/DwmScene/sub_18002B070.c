/*
 * XREFs of sub_18002B070 @ 0x18002B070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001F10C @ 0x18001F10C (sub_18001F10C.c)
 *     sub_18002A470 @ 0x18002A470 (sub_18002A470.c)
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     sub_18006D3D0 @ 0x18006D3D0 (sub_18006D3D0.c)
 *     sub_180096188 @ 0x180096188 (sub_180096188.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002B070(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *v8; // r15
  _QWORD *v9; // rcx
  char v10; // di
  bool v11; // bp
  char v12; // r14
  char v13; // r12
  char v14; // r15
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-40h]
  __int64 v21[4]; // [rsp+40h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 376LL))(a1, &v19);
  result = sub_180011C04(v4, &v17);
  if ( v20 )
    result = sub_180010644(v20);
  v6 = v17;
  if ( v17 )
  {
    v7 = sub_180032500(*(_QWORD *)(v17 + 3648), a2);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 184LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 5LL);
    if ( (_BYTE)result )
    {
      v9 = (_QWORD *)a1[42];
      v10 = 1;
      v11 = v9 && (unsigned __int8)sub_18001F10C(v9);
      v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C5678, 0LL);
      result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C5698, 0LL);
      *(_BYTE *)(*v8 + 184LL) = v12;
      if ( (_BYTE)result || v11 || *((_BYTE *)a1 + 352) )
        v10 = 0;
      *(_BYTE *)(*v8 + 185LL) = v10;
      if ( v12 )
      {
        sub_180096188(*v8);
        v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C5778, 0LL);
        v14 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C5798, 0LL);
        v15 = sub_18002A470(a1, v21);
        v16 = a1 + 46;
        if ( a1 + 46 != v15 )
        {
          sub_18002B6D4(a1 + 46);
          *v16 = *v15;
          a1[47] = v15[1];
          a1[48] = v15[2];
          *v15 = 0LL;
          v15[1] = 0LL;
          v15[2] = 0LL;
        }
        result = sub_18002B6D4(v21);
        if ( v13 )
        {
          if ( v14 )
          {
            result = a1[47];
            if ( result != *v16 )
              sub_180032C28();
          }
          else
          {
            result = sub_18006D3D0(a1[51], a1 + 46);
          }
        }
        if ( v11 )
          result = sub_18002A92C((__int64)a1);
      }
    }
  }
  if ( v18 )
    return sub_18001060C(v18);
  return result;
}
