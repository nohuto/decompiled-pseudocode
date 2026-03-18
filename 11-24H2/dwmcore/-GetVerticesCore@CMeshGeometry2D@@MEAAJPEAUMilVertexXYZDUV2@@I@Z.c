/*
 * XREFs of ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x1801F9860
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMeshGeometry2D::GetVerticesCore(
        CMeshGeometry2D *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r10
  _DWORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  int v13; // ecx
  int v14; // edx

  v4 = 0;
  v5 = (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 2);
  if ( v6 >= v5 )
    LODWORD(v6) = v5;
  if ( a3 < (unsigned int)v6 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xA7u, 0LL);
  }
  else if ( (_DWORD)v6 )
  {
    v7 = 0LL;
    v8 = (unsigned int)v6;
    v9 = 0LL;
    v10 = (_DWORD *)((char *)a2 + 16);
    do
    {
      v11 = *((_QWORD *)this + 12);
      v12 = *(_QWORD *)(v11 + v9);
      v9 += 12LL;
      *((_QWORD *)v10 - 2) = v12;
      *(v10 - 2) = *(_DWORD *)(v11 + v9 - 4);
      *(v10 - 1) = (unsigned __int8)*((_DWORD *)this + 22) | (((unsigned __int8)*((_DWORD *)this + 22) | ((unsigned __int8)*((_DWORD *)this + 22) << 8)) << 8) | _byteswap_ulong((unsigned __int8)*((_DWORD *)this + 22));
      v13 = *(_DWORD *)(v7 + *((_QWORD *)this + 15));
      v7 += 8LL;
      *v10 = v13;
      v10 += 8;
      v14 = *(_DWORD *)(*((_QWORD *)this + 15) + v7 - 4);
      *(v10 - 6) = 0;
      *(v10 - 5) = 0;
      *(v10 - 7) = v14;
      --v8;
    }
    while ( v8 );
  }
  return v4;
}
