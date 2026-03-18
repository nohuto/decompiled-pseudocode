/*
 * XREFs of ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x180144430
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18023AFE8 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetRenderingEffectState(
        CD3DBatchExecutionContext *this,
        const struct CRenderingEffect *a2)
{
  int v4; // r15d
  unsigned int *v5; // r8
  __int64 (__fastcall *v6)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, unsigned int *); // rax
  int v7; // eax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  int v10; // edx
  int v11; // r8d
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v4 = 2;
  if ( *((_QWORD *)this + 5) && !*((_BYTE *)this + 72) )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 304LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 56LL))(
      *((_QWORD *)this + 2),
      2LL,
      1LL,
      &v15);
    v16 = *(_QWORD *)(*((_QWORD *)this + 3) + 592LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      1LL,
      1LL,
      &v16);
    *((_BYTE *)this + 72) = 1;
  }
  v5 = (unsigned int *)((char *)this + 60);
  v6 = *(__int64 (__fastcall **)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, unsigned int *))(*(_QWORD *)a2 + 32LL);
  if ( v6 == CCommonRenderingEffect::SetStateOnDevice )
  {
    v7 = CCommonRenderingEffect::SetStateOnDevice(a2, this, v5);
  }
  else if ( v6 == CBrushRenderingEffect::SetStateOnDevice )
  {
    v7 = CBrushRenderingEffect::SetStateOnDevice(a2, this, v5);
  }
  else
  {
    v7 = v6(a2, this, v5);
  }
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x188u, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v9 + 120) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 560LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 560LL),
        *(_QWORD *)(v9 + 112),
        0LL,
        0LL,
        v9 + 128,
        0,
        0);
      *(_BYTE *)(v9 + 120) = 0;
    }
    v10 = *((_DWORD *)this + 15);
    if ( v10 >= 0 )
    {
      HIDWORD(v15) = 0;
      v11 = v10 & 4;
      LOBYTE(v15) = v11 != 0;
      v16 = v11 != 0;
      *(_DWORD *)((char *)&v15 + 1) = (v10 & 8) != 0;
      v12 = (v10 & 1) == 0;
      BYTE2(v15) = (v10 & 2) != 0;
      v13 = 4LL;
      if ( !v12 )
        v4 = 4;
      HIDWORD(v15) = v4;
      HIDWORD(v16) = v4;
      if ( (v11 != 0) != *((_BYTE *)this + 64) || HIDWORD(v15) != *((_DWORD *)this + 17) )
      {
        if ( HIDWORD(v15) == 2 )
        {
          v13 = v11 != 0 ? 2 : 0;
        }
        else if ( HIDWORD(v15) == 4 )
        {
          v13 = 3LL;
          if ( !v11 )
            v13 = 1LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
          *((_QWORD *)this + 2),
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v13 + 1544));
        *((_QWORD *)this + 8) = v16;
        *((_BYTE *)this + 73) = 1;
      }
    }
  }
  return v8;
}
