/*
 * XREFs of ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18027A928
 * Callers:
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18022C25C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x18027A688 (-CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

void __fastcall ClipPlaneIterator::GetMoreStandardClipPlanes(
        ClipPlaneIterator *this,
        struct D2D_VECTOR_4F *a2,
        unsigned int *a3)
{
  __int64 v3; // r9
  unsigned int v7; // r10d
  int v8; // r15d
  unsigned int v9; // edi
  unsigned int v10; // r8d
  unsigned int v11; // esi
  unsigned int v12; // r14d
  _DWORD *v13; // rcx
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  unsigned int v17; // ebp
  _QWORD *v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ecx
  _DWORD v21[2]; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v22[14]; // [rsp+28h] [rbp-80h]

  v3 = *((unsigned int *)this + 2);
  v7 = *((_DWORD *)this + 12) - v3;
  v8 = 1;
  v9 = v7;
  v10 = 3 - ((_DWORD)v3 != 0);
  if ( v10 < v7 )
    v9 = 3 - ((_DWORD)v3 != 0);
  if ( (unsigned int)v3 + v9 >= *((_DWORD *)this + 12) - 1 )
  {
    v8 = 0;
    v9 = *((_DWORD *)this + 12) - v3;
    if ( v10 + 1 < v7 )
      v9 = v10 + 1;
  }
  v11 = 0;
  v12 = v8 + ((_DWORD)v3 != 0) + v9;
  if ( (_DWORD)v3 )
  {
    v13 = (_DWORD *)*((_QWORD *)this + 3);
    v11 = 1;
    v14 = v13[1];
    v21[0] = *v13;
    v15 = v13[4 * v3];
    v21[1] = v14;
    v16 = v13[4 * v3 + 1];
    v22[0] = v15;
    v22[1] = v16;
  }
  v17 = 0;
  if ( v9 )
  {
    memcpy_0(&v21[4 * v11], (const void *)(*((_QWORD *)this + 3) + 16 * v3), 16LL * v9);
    do
    {
      ++v11;
      ++v17;
    }
    while ( v17 < v9 );
    LODWORD(v3) = *((_DWORD *)this + 2);
  }
  if ( v8 )
  {
    v18 = (_QWORD *)*((_QWORD *)this + 3);
    v19 = 2LL * v11;
    *(_QWORD *)&v22[2 * v19] = *v18;
    *(_QWORD *)&v21[2 * v19] = v18[2 * (unsigned int)v3 - 1 + 2 * v9];
  }
  ClipPlaneIterator::CalculateClipPlanesFromLineSegments(this, (struct ClipPlaneIterator::LineSegment *)v21, v12, a2);
  *a3 = v12;
  v20 = v9 + *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v20;
  if ( v20 >= *((_DWORD *)this + 12) )
    *((_DWORD *)this + 1) = 1;
}
