/*
 * XREFs of sub_18007CCF4 @ 0x18007CCF4
 * Callers:
 *     sub_18007CC7C @ 0x18007CC7C (sub_18007CC7C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011050 @ 0x180011050 (sub_180011050.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18007CCF4(__int64 *a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  struct _Mtx_internal_imp_t *v13; // [rsp+88h] [rbp+20h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v13 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  sub_180011B30((__int64)(a1 + 2));
  v11 = _std_type_info_hash(&qword_1801B9B48);
  sub_180011AC0(a1, (__int64)&v12, &v11);
  if ( v12 == *a1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011050(v12 + 40, (__int64)&v9);
    v5 = _RTDynamicCast(
           v9,
           0LL,
           &Spectre::Engine::RendererResource `RTTI Type Descriptor',
           &Spectre::Engine::DeviceShaderPipeline `RTTI Type Descriptor',
           0);
    v6 = v10;
    if ( v5 )
    {
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v4 = v13;
        v6 = v10;
      }
      v7 = v6;
    }
    else
    {
      v5 = 0LL;
      v7 = 0LL;
    }
    *a2 = v5;
    a2[1] = v7;
    if ( v6 )
      sub_18001050C(v6);
  }
  Mtx_unlock(v4);
  return a2;
}
