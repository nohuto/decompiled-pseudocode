/*
 * XREFs of ?GetVerticesCore@CGeometry2DGroup@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180217550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVerticesCore(
        CGeometry2DGroup *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebp
  _QWORD *v8; // rdi
  _QWORD *v9; // r13
  __int64 v10; // rsi
  unsigned int v11; // r12d
  int v12; // eax

  v3 = *((_DWORD *)this + 10);
  v4 = 0;
  *((_DWORD *)this + 10) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 11);
    v9 = (_QWORD *)*((_QWORD *)this + 12);
    while ( v8 != v9 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 184LL))(*v8);
        v12 = (*(__int64 (__fastcall **)(__int64, struct MilVertexXYZDUV2 *, _QWORD))(*(_QWORD *)v10 + 224LL))(
                v10,
                a2,
                a3);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x195u, 0LL);
          break;
        }
        a2 = (struct MilVertexXYZDUV2 *)((char *)a2 + 32 * v11);
        a3 -= v11;
      }
      ++v8;
    }
  }
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (2 * (*((_DWORD *)this + 10) >> 1) - 2)) & 6;
  return v4;
}
