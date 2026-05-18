/*
 * XREFs of sub_180041D50 @ 0x180041D50
 * Callers:
 *     sub_180041CD8 @ 0x180041CD8 (sub_180041CD8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180040A94 @ 0x180040A94 (sub_180040A94.c)
 *     sub_180040C1C @ 0x180040C1C (sub_180040C1C.c)
 *     sub_180069C8C @ 0x180069C8C (sub_180069C8C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180041D50(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int128 v16; // [rsp+50h] [rbp-10h]
  __int16 v17; // [rsp+98h] [rbp+38h] BYREF

  v17 = a2;
  *(_DWORD *)(*(_QWORD *)sub_180040C1C((__int64 *)(a1 + 200), (__int64)&v14, &v17) + 32LL) = 1;
  v7 = (_QWORD *)sub_180011D64(a1 + 96, &v14);
  v8 = sub_18001B1F8(56LL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler>::`vftable';
    sub_180040A94(v8 + 16, v7);
  }
  else
  {
    v9 = 0LL;
  }
  v11[0] = v9 + 16;
  v11[1] = v9;
  v16 = 0LL;
  result = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64, _QWORD *))sub_180069C8C)(a4, v12, a3, v11);
  if ( v13 )
    result = sub_18001060C(v13);
  if ( v15 )
    return sub_18001060C(v15);
  return result;
}
