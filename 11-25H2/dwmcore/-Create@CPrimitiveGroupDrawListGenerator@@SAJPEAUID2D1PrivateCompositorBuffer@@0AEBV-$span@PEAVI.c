/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x180045294
 * Callers:
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1802AB5E8 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x180045584 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800455B4 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180129678 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        struct ID2D1PrivateCompositorBuffer *a1,
        __int64 a2,
        _OWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        CPrimitiveGroupDrawListGenerator **a6)
{
  CPrimitiveGroupDrawListGenerator *v7; // rbx
  HANDLE ProcessHeap; // rax
  CCommandBuffer *v12; // rax
  CCommandBuffer *v13; // rdi
  HANDLE v14; // rax
  CPrimitiveBuffer *v15; // rax
  CPrimitiveBuffer *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // r14d
  unsigned int v19; // edx
  int v21; // eax
  unsigned int v22; // eax
  void *v23; // rax
  unsigned int v24; // ebx
  const void *v25; // rax
  HANDLE v26; // rax
  CPrimitiveGroupDrawListGenerator *v27; // rax
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-48h]

  v7 = 0LL;
  ProcessHeap = GetProcessHeap();
  v12 = (CCommandBuffer *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *((_DWORD *)v12 + 2) = 0;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = GetProcessHeap();
  v15 = (CPrimitiveBuffer *)HeapAlloc(v14, 0, 0x10uLL);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = 0LL;
    *((_DWORD *)v15 + 2) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA1u, 0LL);
    v18 = -2147024882;
    if ( !v16 )
      return v18;
LABEL_7:
    CPrimitiveBuffer::`scalar deleting destructor'(v16, v17);
    if ( !v13 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v16 )
  {
    v21 = CCommandBuffer::Initialize(v13, a1);
    v18 = v21;
    if ( v21 >= 0 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
      *((_DWORD *)v16 + 2) = v22;
      v23 = operator new[](v22);
      *(_QWORD *)v16 = v23;
      if ( v23 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
        v25 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
        memcpy_0(*(void **)v16, v25, v24);
        v26 = GetProcessHeap();
        v27 = (CPrimitiveGroupDrawListGenerator *)HeapAlloc(v26, 0, 0x68uLL);
        v7 = v27;
        if ( v27 )
        {
          *((_DWORD *)v27 + 2) = 0;
          *((_QWORD *)v27 + 2) = v13;
          *(_QWORD *)v27 = &CPrimitiveGroupDrawListGenerator::`vftable';
          *((_QWORD *)v27 + 3) = v16;
          *((_OWORD *)v27 + 2) = *a3;
          *((_OWORD *)v27 + 3) = *a4;
          *((_OWORD *)v27 + 4) = *a5;
          *((_QWORD *)v27 + 10) = 0LL;
          *((_QWORD *)v27 + 11) = 0LL;
          *((_QWORD *)v27 + 12) = 0LL;
          ++dword_18040688C;
          (**(void (__fastcall ***)(LPVOID))v27)(v27);
          v21 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(v7);
          v18 = v21;
          if ( v21 >= 0 )
          {
            *a6 = v7;
            return v18;
          }
          v29 = 174;
          goto LABEL_23;
        }
        v7 = 0LL;
        v29 = 173;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x69u, 0LL);
        v29 = 166;
      }
      v18 = -2147024882;
      v28 = -2147024882;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v29, 0LL);
      goto LABEL_7;
    }
    v29 = 164;
LABEL_23:
    v28 = v21;
    goto LABEL_21;
  }
  v18 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA2u, 0LL);
LABEL_8:
  CPrimitiveBuffer::`scalar deleting destructor'(v13, v19);
LABEL_9:
  if ( v7 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v7 + 8LL))(v7);
  return v18;
}
