/*
 * XREFs of ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1802AB3CC
 * Callers:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180044BE4 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18012ECB8 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1801300E4 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ??0?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAA@PEBX_K@Z @ 0x1802AB2CC (--0-$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAA@PEBX_K@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802D2088 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildHeatMap(CPrimitiveGroup *this)
{
  unsigned int v2; // esi
  _QWORD *v3; // r14
  int v4; // eax
  void *v5; // rax
  _QWORD *v6; // r15
  int v7; // eax
  void *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 i; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  unsigned int v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h]
  unsigned int v22; // [rsp+40h] [rbp-18h]

  v2 = 0;
  CPrimitiveGroup::ReleaseHeatMap(this);
  if ( *((_QWORD *)this + 59) && *((_QWORD *)this + 61) )
  {
    v3 = (_QWORD *)((char *)this + 576);
    v4 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 120), (struct ID2D1PrivateCompositorBuffer **)this + 72);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x49Fu, 0LL);
    }
    else
    {
      v5 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 24LL))(*v3);
      memcpy_0(v5, *((const void **)this + 59), *((_QWORD *)this + 60));
      v6 = (_QWORD *)((char *)this + 584);
      v7 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 124), (struct ID2D1PrivateCompositorBuffer **)this + 73);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4A4u, 0LL);
      }
      else
      {
        v8 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 24LL))(*v6);
        memcpy_0(v8, *((const void **)this + 61), *((_QWORD *)this + 62));
        v9 = *((_QWORD *)this + 60);
        v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 24LL))(*v3);
        CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>(
          (__int64)&v20,
          v10,
          v9);
        for ( i = v20; ; i = v12 )
        {
          v12 = i + 144;
          if ( (int)i + 144 > v22 )
            break;
          v13 = v21 + i;
          *(_QWORD *)(v13 + 8) = 0xFFFFFFFFLL;
          *(_DWORD *)(v13 + 40) = -1;
          *(_DWORD *)(v13 + 56) = -1;
        }
        v14 = *((_QWORD *)this + 62);
        v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 24LL))(*v6);
        CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>(
          (__int64)&v20,
          v15,
          v14);
        v16 = v20;
        v17 = v21;
        while ( (int)v16 + 148 <= v22 )
        {
          v18 = *((_OWORD *)this + 35);
          *(_DWORD *)(v16 + v17 + 144) = -1;
          *(_OWORD *)(v16 + v17 + 48) = v18;
          v16 = (unsigned int)(v16 + 148);
        }
      }
    }
  }
  return v2;
}
