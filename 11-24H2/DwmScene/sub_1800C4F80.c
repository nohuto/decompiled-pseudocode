/*
 * XREFs of sub_1800C4F80 @ 0x1800C4F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180050A58 @ 0x180050A58 (sub_180050A58.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C4F80(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // edi
  int v12; // edi
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF

  v15 = 0LL;
  if ( *a3 )
  {
    sub_180050A58(*a3, &v13, *(_DWORD *)(a1 + 88));
    v7 = _RTDynamicCast(
           v13,
           0LL,
           &Spectre::Engine::DeviceSampler `RTTI Type Descriptor',
           &Spectre::Engine::D3D11::SamplerD3D11 `RTTI Type Descriptor',
           0);
    v8 = v14;
    if ( v7 )
    {
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v8 = v14;
      }
      v9 = v8;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = *(_QWORD *)(v7 + 184);
    v13 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v15 = v10;
    sub_18000E954(&v13);
    if ( v9 )
      sub_18001060C(v9);
    if ( v8 )
      sub_18001060C(v8);
  }
  v11 = a2 - 1;
  if ( v11 )
  {
    v12 = v11 - 3;
    if ( v12 )
    {
      if ( v12 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 80LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v15);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 256LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v15);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 208LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v15);
  }
}
