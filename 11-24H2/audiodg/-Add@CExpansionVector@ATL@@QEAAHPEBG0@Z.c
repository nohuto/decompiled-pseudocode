/*
 * XREFs of ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x1400894F0
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x1400899B0 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memcpy_s_1 @ 0x140053A40 (memcpy_s_1.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400593C4 (--_U@YAPEAX_K@Z.c)
 *     ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x140089440 (-Add@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x14008C400 (-ocslen@@YAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CExpansionVector::Add(
        ATL::CExpansionVector *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r15
  const unsigned __int16 *v4; // r14
  __int64 v5; // rax
  size_t v6; // rax
  void *v7; // r12
  __int64 v8; // r13
  errno_t v9; // ecx
  errno_t v10; // eax
  void *v11; // rdi
  void *v12; // rbx
  void *v14; // [rsp+20h] [rbp-68h] BYREF
  void *v15; // [rsp+28h] [rbp-60h] BYREF
  void *v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  rsize_t SourceSize; // [rsp+40h] [rbp-48h]
  unsigned int v26; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a2 || !a3 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  SourceSize = 2 * v5 + 2;
  v14 = 0LL;
  v6 = 2 * SourceSize;
  if ( !is_mul_ok(SourceSize, 2uLL) )
    v6 = -1LL;
  try
  {
    v7 = operator new[](v6);
    v14 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v7 = v14;
  }
  try
  {
    v11 = v7;
    v16 = v7;
    v26 = 1;
    v8 = 2LL * (int)(ocslen(v3) + 1);
    v17 = v8;
    v12 = operator new[](saturated_mul(v8, 2uLL));
    v15 = v12;
  }
  catch ( ... )
  {
    v26 = 1;
    v3 = a3;
    v4 = a2;
    v7 = v14;
    v11 = v16;
    v8 = v17;
    v12 = v15;
  }
  if ( v7
    && v12
    && (v9 = memcpy_s_1(v7, SourceSize, v4, SourceSize),
        ATL::AtlCrtErrorCheck(v9),
        v10 = memcpy_s_1(v12, v8, v3, v8),
        ATL::AtlCrtErrorCheck(v10),
        (unsigned int)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
                        (__int64)this,
                        &v14,
                        &v15)) )
  {
    v11 = 0LL;
    v12 = 0LL;
  }
  else
  {
    v26 = 0;
  }
  operator delete(v12);
  operator delete(v11);
  return v26;
}
