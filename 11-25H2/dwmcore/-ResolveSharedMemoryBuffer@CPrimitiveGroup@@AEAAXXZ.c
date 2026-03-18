/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18012ECB8
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18012EA2C (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1802AB3CC (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x1802AB58C (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?TraceInvalidBatches@CPrimitiveGroup@@AEBAXPEBX_K@Z @ 0x1802AB9AC (-TraceInvalidBatches@CPrimitiveGroup@@AEBAXPEBX_K@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  CResource *v2; // rcx
  void (*v3)(void); // rax
  CResource *v4; // rcx
  void (*v5)(void); // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  CSharedSectionBase *v8; // rcx
  __m128i *v9; // rax
  CPrimitiveGroup *v10; // rcx
  unsigned __int64 v11; // r9
  __m128i *v12; // rsi
  __m128i v13; // xmm6
  __int64 v14; // xmm9_8
  __m128i v15; // xmm8
  __m128 v16; // xmm7
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r13
  __int32 v26; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v27; // [rsp+E8h] [rbp+10h]

  v2 = (CResource *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
    else
      v3();
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (CResource *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4);
    else
      v5();
    *((_QWORD *)this + 12) = 0LL;
  }
  v6 = *((unsigned int *)this + 101);
  v7 = *((unsigned int *)this + 100);
  v8 = (CSharedSectionBase *)*((_QWORD *)this + 49);
  *((_BYTE *)this + 104) = 0;
  v9 = (__m128i *)CSharedSectionBase::ResolveAllocation(v8, v6, v7);
  v12 = v9;
  if ( !v9 )
    goto LABEL_11;
  v13 = v9[1];
  v14 = v9[3].m128i_i64[0];
  v15 = *v9;
  v16 = (__m128)v9[2];
  v26 = v9[3].m128i_i32[2];
  v17 = HIDWORD(v9->m128i_i64[1]);
  v18 = HIDWORD(v13.m128i_i64[0]);
  v19 = HIDWORD(v9[1].m128i_i64[1]);
  v20 = (unsigned int)_mm_cvtsi128_si32(v13);
  v21 = v20 + 60;
  v27 = v20;
  v22 = v21 + v17;
  v23 = HIDWORD(v9->m128i_i64[1]);
  if ( v21 + v17 >= v21
    && v18 + v22 >= v22
    && v11 >= v18 + v22
    && (v24 = (unsigned int)v17 / 0x94, v25 = v24 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 8)), v25 >= v24)
    && ((_DWORD)v19 == -1 || (unsigned int)v17 >= 0x94 && (unsigned int)v19 <= (int)v17 - 148) )
  {
    CPrimitiveGroup::TraceInvalidBatches(v10, (char *)&v9[3].m128i_u64[1] + 4, v20);
    *((_QWORD *)this + 60) = v27;
    *(__m128i *)((char *)this + 408) = v15;
    *((_QWORD *)this + 61) = (char *)v12 + v21;
    *(__m128i *)((char *)this + 424) = v13;
    *((_QWORD *)this + 63) = (char *)v12 + v22;
    *(__m128 *)((char *)this + 440) = v16;
    *((_QWORD *)this + 59) = (char *)v12 + 60;
    *((_DWORD *)this + 135) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 4));
    *((_QWORD *)this + 57) = v14;
    *((_BYTE *)this + 544) = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 8)) != 0;
    *((_DWORD *)this + 131) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
    *((_QWORD *)this + 66) = v14;
    *((_DWORD *)this + 116) = v26;
    *((_QWORD *)this + 62) = v23;
    *((_QWORD *)this + 64) = v18;
    *((_DWORD *)this + 130) = v25;
    *((_DWORD *)this + 134) = v26;
  }
  else
  {
LABEL_11:
    CPrimitiveGroup::ClearPrimitiveContent(this);
  }
  if ( *((_BYTE *)this + 545) )
    CPrimitiveGroup::BuildHeatMap(this);
}
