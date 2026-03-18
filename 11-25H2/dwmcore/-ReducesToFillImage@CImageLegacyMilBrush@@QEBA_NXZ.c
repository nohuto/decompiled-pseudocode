/*
 * XREFs of ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x180205384
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CImageLegacyMilBrush::ReducesToFillImage(const __m128i *this)
{
  __int64 v1; // rax
  bool v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  char v6[64]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  v1 = this[12].m128i_i64[0];
  v2 = 0;
  if ( v1
    && *(float *)&this[4].m128i_i32[2] == 1.0
    && !this[6].m128i_i32[3]
    && this[6].m128i_i32[2] == 1
    && *(float *)_mm_loadu_si128(this + 7).m128i_i32 == 0.0
    && *(float *)&this[7].m128i_i32[1] == 0.0
    && *(float *)&this[7].m128i_i32[2] == 1.0
    && *(float *)&this[7].m128i_i32[3] == 1.0
    && this[9].m128i_i32[0] == 1
    && !this[5].m128i_i64[0]
    && !this[6].m128i_i64[0]
    && !this[5].m128i_i64[1]
    && !this[11].m128i_i64[1]
    && !this[11].m128i_i64[0] )
  {
    v3 = v1 + 72;
    v4 = *(_QWORD *)(v1 + 72);
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(v4 + 64))(v3, &v8) >= 0 )
    {
      v7 = 0;
      v2 = (*(unsigned __int8 (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, v6, 0LL) == 0;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v2;
}
