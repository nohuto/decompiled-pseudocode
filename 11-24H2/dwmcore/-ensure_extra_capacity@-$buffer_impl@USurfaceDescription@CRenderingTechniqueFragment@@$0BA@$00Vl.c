/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800450CC
 * Callers:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180044F10 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1801D97DC (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1801D97DC.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  char *v2; // r14
  void *v3; // r15
  char *v5; // rcx
  char *v6; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  signed __int64 v11; // r8
  void *v12; // rbp
  bool v13; // zf
  char *v14; // rdx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v16; // rdx
  signed __int64 v17; // rax

  v5 = (char *)a1[2];
  v6 = (char *)a1[1];
  result = 0xAAAAAAAAAAAAAAABuLL * ((v5 - v6) >> 2);
  if ( result >= a2 )
    return result;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - (_BYTE *)*a1) >> 2);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v5 - (_BYTE *)*a1) >> 2);
  v10 = v8 + a2;
  if ( v8 + a2 >= v8 )
  {
    v16 = v9 >> 1;
    if ( v9 <= ~(v9 >> 1) && v16 + v9 >= v10 )
      v10 = v16 + v9;
    v2 = (char *)operator new[](saturated_mul(v10, 0xCuLL));
    v11 = (_BYTE *)a1[1] - (_BYTE *)*a1;
    v3 = 0LL;
    v17 = 0xAAAAAAAAAAAAAAABuLL * (v11 >> 2);
    if ( v17 >= 0 )
    {
      if ( v17 <= 0 || v8 >= v17 )
        goto LABEL_4;
    }
    else if ( !(0x5555555555555555LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2)) )
    {
      goto LABEL_4;
    }
    _invalid_parameter_noinfo_noreturn();
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_4:
  memmove_0(v2, *a1, v11);
  v12 = (void *)*a1;
  v13 = *a1 == a1 + 3;
  *a1 = v2;
  if ( v13 )
    v12 = v3;
  if ( v12 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v12);
  }
  v14 = (char *)*a1;
  result = 3 * v10;
  a1[1] = (char *)*a1 + 12 * v8;
  a1[2] = &v14[12 * v10];
  return result;
}
