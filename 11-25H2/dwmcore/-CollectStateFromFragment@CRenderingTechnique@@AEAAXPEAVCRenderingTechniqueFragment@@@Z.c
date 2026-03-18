/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18006DE5C
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006DC54 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18006E408 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        CRenderingTechnique *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int i; // ebp
  __int64 v11; // r9
  int v12; // r10d
  const struct CBrushRenderingGraph *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // xmm0_8
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  char *v23; // rax
  __int64 v24; // [rsp+20h] [rbp-18h] BYREF
  int v25; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = 0;
  v6 = (*((_QWORD *)a2 + 5) - v3) >> 4;
  if ( (_DWORD)v6 )
  {
    v7 = (_QWORD *)(v3 + 8);
    v8 = (unsigned int)v6;
    do
    {
      v9 = *v7 == 0LL;
      v7 += 2;
      if ( v9 )
        ++v4;
      --v8;
    }
    while ( v8 );
  }
  for ( i = 0; i < v4; ++i )
  {
    v11 = *((_QWORD *)a2 + 4);
    v12 = 0;
    LODWORD(v13) = i;
    v14 = *((_QWORD *)a2 + 5) - v11;
    v24 = 0LL;
    v15 = v14 >> 4;
    v16 = 0;
    v25 = 0;
    while ( v16 < (unsigned int)v15 )
    {
      if ( !*(_QWORD *)(v11 + 16LL * v16 + 8) )
      {
        v17 = (int)v13;
        v13 = (const struct CBrushRenderingGraph *)(unsigned int)((_DWORD)v13 - 1);
        if ( !v17 )
        {
          CRenderingTechniqueFragment::GetSurfaceDescription(
            a2,
            v13,
            v16,
            (struct CRenderingTechniqueFragment::SurfaceDescription *)&v24);
          v12 = v25;
          break;
        }
      }
      ++v16;
    }
    if ( BYTE4(v24) )
      goto LABEL_13;
    v21 = *((_DWORD *)this + 65);
    v22 = 0;
    if ( v21 )
    {
      v23 = (char *)this + 88;
      do
      {
        if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) && !*(v23 - 4) && (_BYTE)v12 == *v23 && BYTE1(v25) == v23[1] )
          break;
        ++v22;
        v23 += 44;
      }
      while ( v22 < v21 );
    }
    if ( v22 >= v21 )
    {
LABEL_13:
      v18 = v24;
      v19 = 44LL * (unsigned int)(*((_DWORD *)this + 65))++;
      *(_QWORD *)((char *)this + v19 + 80) = v18;
      *(_DWORD *)((char *)this + v19 + 88) = v12;
    }
    else
    {
      *((_WORD *)this + 22 * v22 + 45) |= HIWORD(v25);
    }
  }
  *((_DWORD *)this + 66) |= *((_DWORD *)a2 + 7);
  v20 = *((_DWORD *)a2 + 5);
  if ( (v20 & 0xF) != 0 )
    v20 = v20 - (*((_DWORD *)a2 + 5) & 0xF) + 16;
  *((_DWORD *)this + 64) += v20;
}
