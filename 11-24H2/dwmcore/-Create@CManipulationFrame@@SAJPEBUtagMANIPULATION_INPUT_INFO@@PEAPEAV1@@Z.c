/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x18018FA10
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18018F7D0 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x180146A68 (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATION_INPUT_INFO *a1,
        struct CManipulationFrame **a2)
{
  int v2; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  void *v7; // rax
  _DWORD *v8; // rbx
  int v9; // eax
  int v10; // ecx
  unsigned int i; // r9d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  unsigned int v18; // edi
  CEffectCompilationTask *v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 37);
  if ( !v2 || (v5 = 248LL * (unsigned int)(v2 - 1), v5 > 0xFFFFFFFF) || (v6 = v5 + 616, v6 < 0x268) )
    v6 = 0;
  v7 = DefaultHeap::AllocClear(v6);
  *a2 = 0LL;
  v8 = memset_0(v7, 0, 0x268uLL);
  if ( v8 )
  {
    v9 = *((_DWORD *)a1 + 37);
    v10 = *((_DWORD *)a1 + 42);
    v8[2] = 0;
    *(_QWORD *)v8 = &CManipulationFrame::`vftable';
    v8[4] = v9;
    v8[6] = v10;
    *((_OWORD *)v8 + 2) = *(_OWORD *)a1;
    *((_OWORD *)v8 + 3) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v8 + 4) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v8 + 5) = *((_OWORD *)a1 + 3);
    *((_OWORD *)v8 + 6) = *((_OWORD *)a1 + 4);
    *((_OWORD *)v8 + 7) = *((_OWORD *)a1 + 5);
    *((_OWORD *)v8 + 8) = *((_OWORD *)a1 + 6);
    *((_OWORD *)v8 + 9) = *((_OWORD *)a1 + 7);
    *((_OWORD *)v8 + 10) = *((_OWORD *)a1 + 8);
  }
  else
  {
    v8 = 0LL;
  }
  v20 = (CEffectCompilationTask *)v8;
  Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(&v20);
  if ( v8 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 37); LOBYTE(v8[v13 + 152]) &= ~1u )
    {
      v12 = i++;
      v13 = 62 * v12;
      v14 = 240 * v12;
      v15 = &v8[62 * v12 + 92];
      v16 = (_OWORD *)((char *)a1 + 240 * v12 + 160);
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      v15[5] = v16[5];
      v15[6] = v16[6];
      v15 += 8;
      v17 = v16[7];
      v16 += 8;
      *(v15 - 1) = v17;
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      v15[5] = v16[5];
      v15[6] = v16[6];
      *(_QWORD *)&v8[v13 + 98] = *(unsigned int *)((char *)a1 + v14 + 352);
    }
    Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(&v20);
    *a2 = (struct CManipulationFrame *)v8;
    v18 = 0;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Cu, 0LL);
  }
  return v18;
}
