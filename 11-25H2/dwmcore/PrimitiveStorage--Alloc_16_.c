/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x180047690
 * Callers:
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180045A90 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180047290 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x180192810 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@V?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@VCDrawListPrimitive4@@@@SAPEAX_K@Z @ 0x1800459A4 (-Alloc@-$CThreadLocalObjectCache@V-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorag.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x1801277B8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 */

char *__fastcall PrimitiveStorage::Alloc_16_(unsigned int *a1)
{
  unsigned int v1; // edx
  HANDLE v3; // rax
  char *result; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  int v9; // ecx
  int v10; // r8d
  int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  HANDLE ProcessHeap; // rax
  char *v16; // rax
  char *v17; // r11
  __int64 v18; // r10
  unsigned __int64 v19; // r9
  int v20; // ecx
  int v21; // r8d
  int v22; // ecx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdx
  struct CObjectCache *ObjectCache; // rax
  char *v26; // r11
  int v27; // edx
  __int64 v28; // r10
  unsigned __int64 v29; // r9
  int v30; // ecx
  int v31; // r8d
  int v32; // ecx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    v6 = a1[2];
    if ( v6 == 2 )
    {
      if ( v1 <= 4 && a1[3] <= 6 )
      {
        result = (char *)CThreadLocalObjectCache<PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>,CDrawListPrimitive4>::Alloc();
        if ( result )
        {
          v7 = *a1;
          v8 = (unsigned __int64)&result[(((((_BYTE)result + 88) & 0xF) + 15) & 0x10)
                                       - (unsigned __int64)(((_BYTE)result + 88) & 0xF)
                                       + 88];
          v9 = a1[2] + 2;
          v10 = v9 * *a1;
          v11 = a1[1] * v9;
          *(_OWORD *)(result + 8) = *(_OWORD *)a1;
          *((_QWORD *)result + 3) = v8;
          v12 = v8 + (unsigned int)(8 * v10);
          *((_QWORD *)result + 4) = v12;
          v13 = v12 + (unsigned int)(8 * v11);
          *((_QWORD *)result + 5) = v13;
          *((_QWORD *)result + 6) = v13 + 8 * v7;
          *(_QWORD *)result = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
          return result;
        }
        return 0LL;
      }
      if ( v1 <= 8 && a1[3] <= 0x1E )
      {
        ObjectCache = CThreadContext::GetObjectCache((struct CDrawListPrimitive8 *)a1);
        v26 = 0LL;
        v27 = *((_DWORD *)ObjectCache + 1);
        if ( v27 )
        {
          v26 = (char *)*((_QWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v26;
          *((_DWORD *)ObjectCache + 1) = v27 - 1;
        }
        if ( v26 || (v26 = (char *)MIDL_user_allocate(0x2E8uLL)) != 0LL )
        {
          v28 = *a1;
          v29 = (unsigned __int64)&v26[(((((_BYTE)v26 + 88) & 0xF) + 15) & 0x10)
                                     - (unsigned __int64)(((_BYTE)v26 + 88) & 0xF)
                                     + 88];
          v30 = a1[2] + 2;
          v31 = v30 * *a1;
          v32 = a1[1] * v30;
          *(_OWORD *)(v26 + 8) = *(_OWORD *)a1;
          *((_QWORD *)v26 + 3) = v29;
          v33 = v29 + (unsigned int)(8 * v31);
          *((_QWORD *)v26 + 4) = v33;
          v34 = v33 + (unsigned int)(8 * v32);
          *((_QWORD *)v26 + 5) = v34;
          *((_QWORD *)v26 + 6) = v34 + 8 * v28;
          *(_QWORD *)v26 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
          return v26;
        }
        return 0LL;
      }
    }
    v14 = 2 * (a1[3] + 4 * (v1 + (v6 + 2) * (v1 + a1[1]))) + 15;
    ProcessHeap = GetProcessHeap();
    v16 = (char *)HeapAlloc(ProcessHeap, 0, v14 + 88);
    v17 = v16;
    if ( v16 )
    {
      v18 = *a1;
      v19 = (unsigned __int64)&v16[(((((_BYTE)v16 + 88) & 0xF) + 15) & 0x10)
                                 - (unsigned __int64)(((_BYTE)v16 + 88) & 0xF)
                                 + 88];
      v20 = a1[2] + 2;
      v21 = v20 * *a1;
      v22 = a1[1] * v20;
      *(_OWORD *)(v16 + 8) = *(_OWORD *)a1;
      *((_QWORD *)v16 + 3) = v19;
      v23 = v19 + (unsigned int)(8 * v21);
      *((_QWORD *)v16 + 4) = v23;
      v24 = v23 + (unsigned int)(8 * v22);
      *((_QWORD *)v16 + 5) = v24;
      *((_QWORD *)v16 + 6) = v24 + 8 * v18;
      *(_QWORD *)v16 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
      return v17;
    }
    return 0LL;
  }
  v3 = GetProcessHeap();
  result = (char *)HeapAlloc(v3, 0, 0x58uLL);
  if ( result )
  {
    v5 = a1[2];
    *((_QWORD *)result + 1) = 0LL;
    *((_DWORD *)result + 4) = v5;
    *((_DWORD *)result + 5) = 0;
    *(_OWORD *)(result + 24) = 0LL;
    *(_QWORD *)result = &CDrawListPrimitive0::`vftable';
    *(_OWORD *)(result + 40) = 0LL;
  }
  return result;
}
