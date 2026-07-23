/*
 * XREFs of MiPerformFixups @ 0x14093BA30
 * Callers:
 *     MiRevertRelocatedImagePfn @ 0x14093B22C (MiRevertRelocatedImagePfn.c)
 *     MiRevertRelocations @ 0x14093B628 (MiRevertRelocations.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiApplyStraddleFixups @ 0x14042A000 (MiApplyStraddleFixups.c)
 *     MiApplyDynamicRelocationFixups @ 0x14043A8FC (MiApplyDynamicRelocationFixups.c)
 *     MiIsRetpolineEnabled @ 0x14043F7B4 (MiIsRetpolineEnabled.c)
 *     MiApplyRawFixups @ 0x14093B3E8 (MiApplyRawFixups.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x14093BDC4 (RtlDoesRequireFunctionOverrideFixups.c)
 *     MiApplyCompressedFixups @ 0x14093BE20 (MiApplyCompressedFixups.c)
 *     RtlApplyFunctionOverrideFixups @ 0x14093BF84 (RtlApplyFunctionOverrideFixups.c)
 */

unsigned __int64 __fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        __int64 *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned __int64 result; // rax
  unsigned int v9; // esi
  ULONG_PTR v10; // r10
  __int64 v11; // r12
  __int64 v12; // rax
  __int128 *v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ebp
  char DoesRequireFunctionOverrideFixups; // al
  unsigned __int64 v19; // rbx
  unsigned __int16 *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  int v24; // ecx
  _DWORD *v25; // rcx
  unsigned __int8 v26; // r14
  char v27; // al
  int v28; // r9d
  int v29; // r14d
  __int128 v30; // xmm2
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // rcx
  __int64 v34; // rcx
  int SystemRegionType; // eax
  unsigned int v36; // ecx
  __int64 v37; // [rsp+30h] [rbp-88h]
  unsigned __int16 *v38; // [rsp+38h] [rbp-80h]
  __int64 v39; // [rsp+40h] [rbp-78h]
  __int128 v40; // [rsp+48h] [rbp-70h] BYREF
  __int64 v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-58h]
  __int128 v43; // [rsp+68h] [rbp-50h]
  __int64 v44; // [rsp+78h] [rbp-40h]
  __int128 *v45; // [rsp+C0h] [rbp+8h]
  char v47; // [rsp+E8h] [rbp+30h]

  result = BugCheckParameter2[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = a3;
  v10 = (ULONG_PTR)BugCheckParameter2;
  v11 = *(_QWORD *)(result + 32);
  if ( (a6 & 1) != 0 && a3 < *(_DWORD *)(v11 + 56) )
  {
    v12 = *BugCheckParameter2;
    v13 = *(__int128 **)(v11 + 88);
    v14 = a6 & 0xFFFFFFFE;
    v15 = *(_QWORD *)(v11 + 96);
    v39 = v12;
    v45 = v13;
    if ( a4 )
      v14 = a6;
    v37 = *(_QWORD *)(v11 + 96);
    v16 = v14 & 1;
    v17 = v9 << 12;
    while ( 1 )
    {
      v38 = 0LL;
      DoesRequireFunctionOverrideFixups = 0;
      v47 = 0;
      v19 = 0LL;
      v20 = 0LL;
      if ( v16 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * v9);
        DoesRequireFunctionOverrideFixups = 0;
        if ( v13 )
        {
          v20 = (unsigned __int16 *)*((_QWORD *)v13 + v9 + 8);
          v38 = v20;
        }
      }
      if ( v15 )
      {
        DoesRequireFunctionOverrideFixups = RtlDoesRequireFunctionOverrideFixups(v15, v9);
        v10 = (ULONG_PTR)BugCheckParameter2;
        v13 = v45;
        v15 = v37;
        v47 = DoesRequireFunctionOverrideFixups;
      }
      if ( v19 )
      {
        if ( v19 > 1 )
        {
          if ( *(_BYTE *)(v11 + 64) )
            MiApplyCompressedFixups(v10, BugCheckParameter3);
          else
            MiApplyRawFixups(v10, BugCheckParameter3, v19, a4);
        }
        if ( (v19 & 1) != 0 )
          MiApplyStraddleFixups(v11, (char *)BugCheckParameter3, v17, a4, a5, v14);
LABEL_18:
        v21 = *(_QWORD *)(v39 + 32);
        if ( (v14 & 4) != 0 )
        {
          v22 = a5;
          if ( (v14 & 8) == 0 )
            v22 = a4;
          v23 = v21 + v22;
        }
        else
        {
          v23 = *(_QWORD *)(v39 + 32);
          if ( (v14 & 8) != 0 )
            v23 = a4 + v21;
        }
        if ( v20 )
        {
          v29 = v14;
          v30 = v45[1];
          v31 = *((_QWORD *)v45 + 6);
          v40 = *v45;
          v32 = v45[2];
          v33 = v30;
          v44 = v31;
          if ( a5 )
            v33 = 0LL;
          v42 = *((_QWORD *)&v30 + 1);
          v41 = v33;
          v43 = v32;
          if ( !MiIsRetpolineEnabled() && !v34 )
            v29 = v14 | 8;
          SystemRegionType = MiGetSystemRegionType(v23);
          v36 = v29 | 8;
          if ( SystemRegionType == 11 )
            v36 = v29;
          MiApplyDynamicRelocationFixups(BugCheckParameter3, v17, (int)&v40, v38, v36);
        }
        if ( v47 )
        {
          v26 = 0;
          if ( v23 > 0x7FFFFFFEFFFFLL )
          {
            if ( (unsigned int)MiGetSystemRegionType(v23) == 11 )
            {
              v27 = 1;
            }
            else
            {
              v27 = 0;
              v26 = 1;
            }
          }
          else
          {
            v27 = 0;
          }
          v28 = v26;
          if ( (v14 & 0xC) != 0 )
            v28 = 1;
          RtlApplyFunctionOverrideFixups(v37, v9, BugCheckParameter3, v28, v27);
        }
        v16 = v14 & 1;
        if ( (v14 & 1) != 0 )
        {
          v24 = *(_DWORD *)(v11 + 60);
          if ( (v24 & 0xFFFFF000) == v17 )
          {
            v25 = (_DWORD *)(BugCheckParameter3 + (v24 & 0xFFF));
            if ( _bittest16((const signed __int16 *)(v39 + 12), 0xFu) )
              *v25 += a4;
            else
              *(_QWORD *)v25 += a4;
          }
          v16 = v14 & 1;
        }
        result = 4096LL;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v10 = (ULONG_PTR)BugCheckParameter2;
        v13 = v45;
        ++v9;
        v15 = v37;
        v17 += 4096;
      }
      else
      {
        if ( v20 || DoesRequireFunctionOverrideFixups )
          goto LABEL_18;
        result = 4096LL;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v16 = v14 & 1;
        ++v9;
        v17 += 4096;
      }
    }
  }
  return result;
}
