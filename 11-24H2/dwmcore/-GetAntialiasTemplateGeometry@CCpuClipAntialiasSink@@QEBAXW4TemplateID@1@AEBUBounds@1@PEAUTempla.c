/*
 * XREFs of ?GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTemplateGeometryDesc@1@@Z @ 0x1801BE9D0
 * Callers:
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180289180 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // rdi
  __int64 v8; // r8
  float v9; // xmm0_4
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // si
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 result; // rax
  int v17; // ecx
  float Y; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(float *)(a3 + 4);
  v6 = *(float *)(a3 + 8);
  if ( v6 <= v4 )
  {
    result = 0LL;
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 40) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8LL * a2 + 40);
    Y = 0.0;
    v9 = modff(v6, &Y);
    v10 = (int)Y - 1;
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.000081380211 )
      v10 = (int)Y;
    v11 = 2 * (int)v4;
    v12 = v10 - (unsigned __int16)(int)v4 + 1;
    v13 = v11;
    v14 = 2 * v12 + 2;
    v15 = *(_QWORD *)(v7 + 40) + 8LL * v11;
    if ( !v15 && 2 * v12 != -2 )
      goto LABEL_6;
    *(_QWORD *)a4 = v14;
    *(_QWORD *)(a4 + 8) = v15;
    v15 = (unsigned int)(8 * *(_DWORD *)(v7 + 16) + 16);
    *(_QWORD *)(a4 + 16) = *(_QWORD *)(v7 + 24) + (int)(v15 * v11);
    *(_DWORD *)(a4 + 24) = v15;
    *(_DWORD *)(a4 + 28) = v14;
    v17 = 8 * *(_DWORD *)(v7 + 16) + 16;
    v8 = v17 * (unsigned int)v11;
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(v7 + 32) + (int)v8;
    *(_DWORD *)(a4 + 40) = v17;
    result = 6 * v12;
    *(_DWORD *)(a4 + 44) = v14;
    v13 = *(_QWORD *)(v7 + 48);
    if ( !v13 )
    {
      if ( result )
      {
LABEL_6:
        ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v13,
          v15,
          v8,
          v14);
        __debugbreak();
      }
    }
    *(_QWORD *)(a4 + 48) = result;
    *(_QWORD *)(a4 + 56) = v13;
  }
  return result;
}
