/*
 * XREFs of ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801B2690
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetWorldTransform(CDrawingContext *this, struct CMILMatrix *a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax

  v2 = *((_DWORD *)this + 74);
  if ( v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    v5 = *((_QWORD *)this + 36);
    *(_OWORD *)a2 = *(_OWORD *)(68 * v4 + v5);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(68 * v4 + v5 + 16);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(68 * v4 + v5 + 32);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(68 * v4 + v5 + 48);
    *((_DWORD *)a2 + 16) = *(_DWORD *)(68 * v4 + v5 + 64);
  }
  else
  {
    *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    v6 = *((unsigned __int8 *)a2 + 65);
    *((_BYTE *)a2 + 64) = -86;
    *((_BYTE *)a2 + 65) = v6 & 0xC0 | 0x29;
  }
}
