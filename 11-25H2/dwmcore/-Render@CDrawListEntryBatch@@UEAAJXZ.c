/*
 * XREFs of ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x180066460 (-ComputeOcclusion@CMegaRectCollection@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x180144370 (-HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 *     ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180144720 (-ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801658B0 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x18018D830 (-SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z.c)
 *     ?SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x18018DA40 (-SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x18018DA50 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18023AFE8 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  _OWORD *v7; // r14
  char v8; // al
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  volatile signed __int32 *v17; // rbx
  CRenderingBatchCommand **v18; // r12
  CDrawListEntryBatch *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  CRenderingBatchCommand *v22; // r14
  int v23; // ecx
  char v24; // al
  __int64 v25; // rdi
  __int64 v26; // rdi
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // r14
  __int64 (__fastcall *v29)(CMILRefCountImpl *); // rax
  signed __int32 v30; // eax
  __int64 (__fastcall *v31)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, unsigned int *); // rax
  int v32; // eax
  int v33; // r14d
  __int64 v34; // r14
  unsigned __int8 v35; // r9
  int v36; // eax
  __int64 v37; // r8
  CRenderingBatchCommand *v38; // r15
  unsigned int i; // r14d
  CBrushRenderingEffect *v40; // rcx
  int (__fastcall *v41)(__m128 *, struct CD3DBatchExecutionContext *, bool); // r9
  __m128 *v42; // rdi
  bool HasImageLightingEffect; // al
  int v44; // eax
  CRenderingBatchCommand *v45; // r14
  int (*v46)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, const struct CRenderingBatchCommand *); // rax
  bool v47; // al
  int v48; // eax
  __int64 v49; // rax
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rbx
  __int64 v54; // rcx
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rbx
  void *v60; // rcx
  _QWORD *v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rbx
  unsigned int v64; // eax
  __int64 v65; // rdx
  signed __int32 v66; // eax
  unsigned int v67; // r12d
  unsigned int v68; // r15d
  unsigned __int64 v69; // r14
  int v70; // ecx
  unsigned int v71; // eax
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
  __int64 result; // rax
  void *v77; // rcx
  _DWORD *v78; // rax
  __int64 v79; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v81; // rdx
  void (__fastcall *v82)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int8 v83; // r15
  void (__fastcall *v84)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v85; // rdi
  void (__fastcall *v86)(CD3DBatchExecutionContext *__hidden, const struct CGroupBatchCommand *); // rax
  int v87; // ecx
  CRenderingBatchCommand *v88; // r8
  __int64 v89; // rax
  int v90; // ecx
  int v91; // ecx
  struct CHwLightCollectionBuffer *v92; // rdx
  void (__fastcall *v93)(CD3DBatchExecutionContext *__hidden, struct CHwLightCollectionBuffer *); // rax
  int v94; // eax
  int v95; // r14d
  unsigned int v96; // eax
  int v97; // r14d
  unsigned int v98; // eax
  _OWORD *v99; // r15
  int v100; // [rsp+28h] [rbp-E0h]
  void **v101; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v102; // [rsp+50h] [rbp-B8h]
  __int64 v103; // [rsp+58h] [rbp-B0h]
  __int64 v104; // [rsp+60h] [rbp-A8h]
  __int64 v105; // [rsp+68h] [rbp-A0h]
  __int64 v106; // [rsp+70h] [rbp-98h]
  CRenderingBatchCommand *v107; // [rsp+78h] [rbp-90h]
  int v108; // [rsp+80h] [rbp-88h]
  unsigned int v109; // [rsp+84h] [rbp-84h] BYREF
  unsigned __int64 v110; // [rsp+88h] [rbp-80h]
  __int16 v111; // [rsp+90h] [rbp-78h]
  char v112; // [rsp+92h] [rbp-76h]
  __int64 v113; // [rsp+94h] [rbp-74h]
  __int128 v114; // [rsp+9Ch] [rbp-6Ch]
  char *v115; // [rsp+B0h] [rbp-58h]
  char *v116; // [rsp+B8h] [rbp-50h]
  char *v117; // [rsp+C0h] [rbp-48h]
  int v118; // [rsp+C8h] [rbp-40h]
  CDrawListEntryBatch *v119; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v120; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v122; // [rsp+F0h] [rbp-18h] BYREF
  void *retaddr; // [rsp+140h] [rbp+38h]
  unsigned __int64 lpMem; // [rsp+148h] [rbp+40h]
  void *lpMema; // [rsp+148h] [rbp+40h]
  unsigned __int64 v126; // [rsp+150h] [rbp+48h] BYREF
  unsigned __int64 v127; // [rsp+158h] [rbp+50h]
  __int64 v128; // [rsp+160h] [rbp+58h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v1 + 168) )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *(_QWORD *)(v1 + 168) = this;
  v102 = (_QWORD *)*((_QWORD *)this + 2);
  v101 = &CD3DBatchExecutionContext::`vftable';
  v3 = v102[70];
  v4 = *((_QWORD *)this + 15);
  ++dword_180406788;
  v104 = v4;
  v126 = 0xFFFFFFFF00000000uLL;
  v110 = 0xFFFFFFFF00000000uLL;
  v115 = (char *)this + 48;
  v116 = (char *)this + 80;
  v117 = (char *)this + 104;
  v103 = v3;
  LODWORD(v105) = 0;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 24;
  v109 = 0x80000000;
  v111 = 0;
  v112 = 2;
  v113 = 0LL;
  v114 = 0uLL;
  v118 = 0;
  if ( CCommonRegistryData::EnableMegaRects )
  {
    CMegaRectCollection::ComputeOcclusion((CDrawListEntryBatch *)((char *)this + 128));
    v3 = v103;
  }
  v5 = *((_QWORD *)this + 3);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v103 + 344LL))(v103, v102[269]);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v103 + 288LL))(v103, v102[270], 0LL);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v103 + 152LL))(v103, *(_QWORD *)(v104 + 72), 57LL);
  v6 = v104;
  v7 = (_OWORD *)(v5 + 16);
  if ( !v5 )
    v7 = 0LL;
  if ( v7 )
  {
    v99 = (_OWORD *)(v104 + 176);
    if ( memcmp_0(v7, (const void *)(v104 + 176), 0x50uLL) )
    {
      *(_BYTE *)(v104 + 120) = 1;
      *v99 = *v7;
      *(_OWORD *)(v6 + 192) = v7[1];
      *(_OWORD *)(v6 + 208) = v7[2];
      *(_OWORD *)(v6 + 224) = v7[3];
      *(_OWORD *)(v6 + 240) = v7[4];
    }
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  *(_BYTE *)(v6 + 256) = v8;
  v9 = *(_QWORD *)(v6 + 128) - *((_QWORD *)this + 8);
  if ( !v9 )
    v9 = *(_QWORD *)(v6 + 136) - *((_QWORD *)this + 9);
  if ( v9 )
  {
    *(_BYTE *)(v6 + 120) = 1;
    *(_OWORD *)(v6 + 128) = *((_OWORD *)this + 4);
  }
  v128 = *(_QWORD *)(v6 + 112);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v103 + 56LL))(v103, 0LL, 1LL, &v128);
  if ( *((_DWORD *)v117 + 2) == 1 )
  {
    v11 = v104;
    v12 = (_DWORD *)(v104 + 288);
    v13 = *((_DWORD *)v116 + 4);
    if ( v13 != *(_DWORD *)(v104 + 288) )
    {
      *v12 = v13;
      *(_BYTE *)(v11 + 280) = 1;
    }
    if ( *(_BYTE *)(v11 + 280) )
    {
      v100 = (int)v12;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v102[70] + 384LL))(
        v102[70],
        *(_QWORD *)(v11 + 272),
        0LL,
        0LL);
      *(_BYTE *)(v11 + 280) = 0;
    }
    v120 = *(_QWORD *)(v11 + 272);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v103 + 128LL))(v103, 2LL, 1LL, &v120);
  }
  v14 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v14 + 160) )
  {
    v15 = *(_QWORD *)(v14 + 24);
    v16 = 0;
    v17 = 0LL;
    v18 = (CRenderingBatchCommand **)(v15 + 8LL * *((unsigned int *)this + 10));
    v19 = (CDrawListEntryBatch *)(v15 + 8LL * *((unsigned int *)this + 11));
    v119 = v19;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = (unsigned __int64)&CD3DBatchExecutionContext::SetDrawMethod;
        v21 = CD3DBatchExecutionContext::SetBlendMode;
        if ( v18 == (CRenderingBatchCommand **)v19 )
        {
          if ( !v17 )
            goto LABEL_76;
LABEL_75:
          (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), unsigned __int64))(*(_QWORD *)v17 + 8LL))(
            v17,
            v10,
            v21,
            v20);
LABEL_76:
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xF4u, 0LL);
          }
          else
          {
LABEL_77:
            v53 = v104;
            LODWORD(v105) = v105 | 0x1000;
            if ( *(_QWORD *)(v104 + 40) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(*(_QWORD *)(v104 + 16)
                                                                                             + 560LL)
                                                                               + 120LL))(
                *(_QWORD *)(*(_QWORD *)(v104 + 16) + 560LL),
                *(_QWORD *)(v104 + 24),
                0LL,
                v20);
              *(_QWORD *)(v53 + 40) = 0LL;
              *(_DWORD *)(v53 + 48) = 0;
              if ( v112 )
              {
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v103 + 104LL))(
                  v103,
                  DWORD1(v114),
                  (unsigned int)v113);
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v53 + 64) + 560LL) + 120LL))(
                  *(_QWORD *)(*(_QWORD *)(v53 + 64) + 560LL),
                  *(_QWORD *)(v53 + 72),
                  0LL);
                *(_QWORD *)(v53 + 88) = 0LL;
                *(_DWORD *)(v53 + 96) = 0;
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v103 + 96LL))(
                  v103,
                  DWORD2(v114),
                  HIDWORD(v113),
                  0LL);
              }
              ++v118;
              *(_QWORD *)((char *)&v114 + 4) = 0LL;
              HIDWORD(v114) = 0;
            }
          }
          goto LABEL_81;
        }
        v22 = *v18;
        v23 = *(_DWORD *)*v18;
        if ( v23 == 1 )
          goto LABEL_22;
        v50 = v23 - 2;
        if ( v50 )
          break;
        v92 = (struct CHwLightCollectionBuffer *)*((_QWORD *)v22 + 1);
        v93 = (void (__fastcall *)(CD3DBatchExecutionContext *__hidden, struct CHwLightCollectionBuffer *))*v101;
        if ( *v101 == CD3DBatchExecutionContext::SetLights )
        {
          CD3DBatchExecutionContext::SetLights((CD3DBatchExecutionContext *)&v101, v92);
          v19 = v119;
          ++v18;
        }
        else
        {
          if ( v93 == CBatchOptimizer::SetLights )
            CBatchOptimizer::SetLights((CBatchOptimizer *)&v101, v92);
          else
            ((void (__fastcall *)(void ***, struct CHwLightCollectionBuffer *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), void *))v93)(
              &v101,
              v92,
              CD3DBatchExecutionContext::SetBlendMode,
              &CD3DBatchExecutionContext::SetDrawMethod);
          v19 = v119;
          ++v18;
        }
      }
      v51 = v50 - 1;
      if ( !v51 )
      {
        v81 = *((unsigned int *)v22 + 4);
        if ( (_DWORD)v81 != 24 )
        {
          v82 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v101[1];
          if ( (char *)v82 == (char *)CD3DBatchExecutionContext::SetBlendMode )
            CD3DBatchExecutionContext::SetBlendMode(
              &v101,
              v81,
              CD3DBatchExecutionContext::SetBlendMode,
              &CD3DBatchExecutionContext::SetDrawMethod);
          else
            v82(&v101, v81, CD3DBatchExecutionContext::SetBlendMode, &CD3DBatchExecutionContext::SetDrawMethod);
          v20 = (unsigned __int64)&CD3DBatchExecutionContext::SetDrawMethod;
        }
        v83 = *((_BYTE *)v22 + 20);
        if ( v83 != 2 )
        {
          v84 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v101[3];
          if ( (char *)v84 == (char *)&CD3DBatchExecutionContext::SetDrawMethod )
          {
            if ( v83 != v112 )
            {
              v85 = v104;
              LODWORD(v105) = v105 | 0x200;
              if ( *(_QWORD *)(v104 + 40) )
              {
                CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v104 + 16));
                if ( v112 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v103 + 104LL))(
                    v103,
                    DWORD1(v114),
                    (unsigned int)v113);
                }
                else
                {
                  CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v85 + 64));
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v103 + 96LL))(
                    v103,
                    DWORD2(v114),
                    HIDWORD(v113),
                    0LL);
                }
                ++v118;
                *(_QWORD *)((char *)&v114 + 4) = 0LL;
                HIDWORD(v114) = 0;
              }
              v112 = v83;
            }
          }
          else
          {
            v84(&v101, v83, v21, &CD3DBatchExecutionContext::SetDrawMethod);
          }
        }
        v86 = (void (__fastcall *)(CD3DBatchExecutionContext *__hidden, const struct CGroupBatchCommand *))v101[2];
        if ( v86 == CD3DBatchExecutionContext::SetStateGroup )
          v107 = v22;
        else
          ((void (__fastcall *)(void ***, CRenderingBatchCommand *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), unsigned __int64))v86)(
            &v101,
            v22,
            v21,
            v20);
        goto LABEL_24;
      }
      v52 = v51 - 1;
      if ( v52 )
      {
        if ( v52 != 1 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_22:
        v24 = CRenderingBatchCommand::ApplyRenderState(*v18, (struct IDrawListStateSink *)&v101);
        goto LABEL_23;
      }
      if ( **((_DWORD **)v22 + 12) )
        goto LABEL_22;
      v24 = 0;
LABEL_23:
      if ( !v24 )
        goto LABEL_65;
LABEL_24:
      v25 = v104;
      LODWORD(v105) = v105 | 0x80000000;
      if ( *(_QWORD *)(v104 + 40) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v104 + 16) + 560LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v104 + 16) + 560LL),
          *(_QWORD *)(v104 + 24),
          0LL);
        *(_QWORD *)(v25 + 40) = 0LL;
        *(_DWORD *)(v25 + 48) = 0;
        if ( v112 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v103 + 104LL))(
            v103,
            DWORD1(v114),
            (unsigned int)v113);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v25 + 64) + 560LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v25 + 64) + 560LL),
            *(_QWORD *)(v25 + 72),
            0LL);
          *(_QWORD *)(v25 + 88) = 0LL;
          *(_DWORD *)(v25 + 96) = 0;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v103 + 96LL))(
            v103,
            DWORD2(v114),
            HIDWORD(v113),
            0LL);
        }
        ++v118;
        *(_QWORD *)((char *)&v114 + 4) = 0LL;
        HIDWORD(v114) = 0;
      }
      if ( *(_DWORD *)v22 == 1 )
      {
        v26 = *((_QWORD *)v22 + 1);
        if ( *((_BYTE *)v22 + 92) )
          v27 = *(volatile signed __int32 **)(v26 + 80);
        else
          v27 = *(volatile signed __int32 **)(v26 + 24);
LABEL_31:
        v28 = v17;
        v17 = v27;
        if ( v27 )
        {
          v29 = **(__int64 (__fastcall ***)(CMILRefCountImpl *))v27;
          if ( v29 == CMILRefCountImpl::AddReference )
          {
            v30 = _InterlockedExchangeAdd(v27, 1u);
            if ( (v30 + 1 < 0) ^ __OFADD__(1, v30) | (v30 == -1) )
              wil::details::in1diag3::Log_Hr(
                (wil::details::in1diag3 *)retaddr,
                (void *)0x18,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v100);
          }
          else
          {
            v29((CMILRefCountImpl *)v27);
          }
        }
        goto LABEL_35;
      }
      if ( *(_DWORD *)v22 != 2 )
      {
        if ( *(_DWORD *)v22 == 3 )
        {
          v27 = (volatile signed __int32 *)*((_QWORD *)v22 + 1);
        }
        else
        {
          if ( (unsigned int)(*(_DWORD *)v22 - 4) > 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
          v89 = *((_QWORD *)v22 + 1);
          if ( *((_BYTE *)v22 + 92) )
            v27 = *(volatile signed __int32 **)(v89 + 80);
          else
            v27 = *(volatile signed __int32 **)(v89 + 24);
        }
        goto LABEL_31;
      }
      v28 = v17;
      v27 = 0LL;
      v17 = 0LL;
LABEL_35:
      if ( v28 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( v106 && !(_BYTE)v111 )
      {
        v121 = *(_QWORD *)(v104 + 304);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v103 + 56LL))(v103, 2LL, 1LL, &v121);
        v122 = *(_QWORD *)(v104 + 592);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v103 + 128LL))(v103, 1LL, 1LL, &v122);
        LOBYTE(v111) = 1;
      }
      v31 = *(__int64 (__fastcall **)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, unsigned int *))(*(_QWORD *)v27 + 32LL);
      if ( v31 == CCommonRenderingEffect::SetStateOnDevice )
      {
        v32 = CCommonRenderingEffect::SetStateOnDevice(
                (CCommonRenderingEffect *)v27,
                (struct CD3DBatchExecutionContext *)&v101,
                &v109);
      }
      else if ( v31 == CBrushRenderingEffect::SetStateOnDevice )
      {
        v32 = CBrushRenderingEffect::SetStateOnDevice(
                (CBrushRenderingEffect *)v27,
                (struct CD3DBatchExecutionContext *)&v101,
                &v109);
      }
      else
      {
        v32 = v31((CBrushRenderingEffect *)v27, (struct CD3DBatchExecutionContext *)&v101, &v109);
      }
      v33 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x188u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x12Fu, 0LL);
        v16 = 0;
      }
      else
      {
        v34 = v104;
        if ( *(_BYTE *)(v104 + 120) )
        {
          v100 = v104 + 128;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v102[70] + 384LL))(
            v102[70],
            *(_QWORD *)(v104 + 112),
            0LL,
            0LL);
          *(_BYTE *)(v34 + 120) = 0;
        }
        v10 = v109;
        if ( (v109 & 0x80000000) == 0 )
        {
          v35 = (v109 & 4) != 0;
          LODWORD(lpMem) = v35;
          v127 = v35;
          v36 = 2;
          if ( (v109 & 1) != 0 )
            v36 = 4;
          HIDWORD(lpMem) = v36;
          BYTE2(lpMem) = (v109 & 2) != 0;
          BYTE1(lpMem) = (v109 & 8) != 0;
          v10 = HIDWORD(lpMem);
          HIDWORD(v127) = v36;
          if ( v36 != HIDWORD(v110) || v35 != (_BYTE)v110 )
          {
            if ( v36 == 2 )
            {
              v37 = v35 != 0 ? 2 : 0;
            }
            else
            {
              v37 = 3LL;
              if ( !v35 )
                v37 = 1LL;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v103 + 136LL))(v103, v102[v37 + 193]);
            v110 = v127;
            HIBYTE(v111) = 1;
          }
        }
        v38 = v107;
        if ( v107 )
        {
          v16 = 0;
          for ( i = 0; i < *((_DWORD *)v38 + 6); ++i )
          {
            v40 = (CBrushRenderingEffect *)*((_QWORD *)v38 + 1);
            v41 = *(int (__fastcall **)(__m128 *, struct CD3DBatchExecutionContext *, bool))(*(_QWORD *)v40 + 40LL);
            v42 = (__m128 *)v18[i + 1];
            if ( (char *)v41 == (char *)CBrushRenderingEffect::EmitGeometry )
            {
              HasImageLightingEffect = CBrushRenderingEffect::HasImageLightingEffect(v40);
              v44 = CRenderingBatchCommand::EmitGeometry(
                      v42,
                      (struct CD3DBatchExecutionContext *)&v101,
                      HasImageLightingEffect);
            }
            else
            {
              v88 = v18[i + 1];
              if ( v41 == CRenderingBatchCommand::EmitGeometry )
                v44 = CRenderingBatchCommand::EmitGeometry(
                        (__m128 *)v40,
                        (struct CD3DBatchExecutionContext *)&v101,
                        (bool)v88);
              else
                v44 = (*(__int64 (__fastcall **)(CBrushRenderingEffect *, void ***, CRenderingBatchCommand *))(*(_QWORD *)v40 + 40LL))(
                        v40,
                        &v101,
                        v88);
            }
            v16 = v44;
            if ( v44 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x53u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x1B1u, 0LL);
              break;
            }
          }
        }
        else
        {
          v45 = *v18;
          v46 = *(int (**)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, const struct CRenderingBatchCommand *))(*(_QWORD *)v27 + 40LL);
          if ( v46 == CBrushRenderingEffect::EmitGeometry )
          {
            v47 = CBrushRenderingEffect::HasImageLightingEffect((CBrushRenderingEffect *)v27);
            v48 = CRenderingBatchCommand::EmitGeometry((__m128 *)v45, (struct CD3DBatchExecutionContext *)&v101, v47);
          }
          else
          {
            v48 = ((__int64 (__fastcall *)(volatile signed __int32 *, void ***, CRenderingBatchCommand *))v46)(
                    v27,
                    &v101,
                    *v18);
          }
          v16 = v48;
          if ( v48 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x1B6u, 0LL);
        }
      }
      if ( v107 )
      {
        v49 = *((unsigned int *)v107 + 6);
        ++dword_180406790;
        dword_180406794 += v49;
        v107 = 0LL;
        v18 += v49;
      }
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x160u, 0LL);
        goto LABEL_75;
      }
      LODWORD(v105) = 0;
LABEL_65:
      v19 = v119;
      ++v18;
    }
  }
  v94 = CDrawListEntryBatch::RenderLoop<0>(this, &v101);
  v16 = v94;
  if ( v94 >= 0 )
    goto LABEL_77;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v94, 0xF8u, 0LL);
LABEL_81:
  if ( v118 )
    dword_1804068A0 += v118;
  if ( *(_QWORD *)(v104 + 40) )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v104 + 16));
  if ( *(_QWORD *)(v104 + 88) )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v104 + 64));
  v54 = *((_QWORD *)this + 3);
  if ( v54 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), unsigned __int64))(*(_QWORD *)v54 + 8LL))(
      v54,
      v10,
      v21,
      v20);
  }
  v55 = *((_DWORD *)this + 10);
  v56 = *((_DWORD *)this + 11);
  if ( v55 != v56 )
    dword_18040678C += v56 - v55;
  dword_1804068AC += *((_DWORD *)this + 40);
  while ( 1 )
  {
    v57 = *((_QWORD *)this + 20);
    if ( !v57 )
      break;
    v58 = v57 - 1;
    *((_QWORD *)this + 20) = v58;
    if ( !v58 )
      *((_QWORD *)this + 19) = 0LL;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v59 = *((_QWORD *)this + 18);
    while ( v59 )
    {
      --v59;
      v60 = *(void **)(*((_QWORD *)this + 17) + 8 * v59);
      if ( v60 )
        operator delete(v60, 0x10uLL);
    }
    v61 = (_QWORD *)*((_QWORD *)this + 17);
    v62 = 8LL * *((_QWORD *)this + 18);
    if ( v62 >= 0x1000 )
    {
      v62 += 39LL;
      if ( (unsigned __int64)v61 - *(v61 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v61 = (_QWORD *)*(v61 - 1);
    }
    operator delete(v61, v62);
  }
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v63 = *((_QWORD *)this + 2);
  if ( *(CDrawListEntryBatch **)(v63 + 168) != this )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *(_QWORD *)(v63 + 168) = 0LL;
  v64 = *(_DWORD *)(v63 + 128);
  v119 = this;
  v65 = v64 + 1;
  if ( (unsigned int)v65 < v64 )
  {
    v95 = -2147024362;
    v96 = 181;
    LODWORD(v20) = -2147024362;
LABEL_184:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, v96, 0LL);
    ModuleFailFastForHRESULT(v95, retaddr);
  }
  if ( (unsigned int)v65 <= *(_DWORD *)(v63 + 124) )
  {
    *(_QWORD *)(*(_QWORD *)(v63 + 104) + 8LL * v64) = this;
    *(_DWORD *)(v63 + 128) = v65;
    goto LABEL_110;
  }
  v95 = DynArrayImpl<0>::AddMultipleAndSet(v63 + 104, 8, 1, &v119);
  v20 = (unsigned int)v95;
  if ( v95 < 0 )
  {
    v96 = 192;
    goto LABEL_184;
  }
LABEL_110:
  v66 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 1u);
  if ( (v66 + 1 < 0) ^ __OFADD__(1, v66) | (v66 == -1) )
    wil::details::in1diag3::Log_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v100);
  v67 = *((_DWORD *)this + 11);
  v68 = *((_DWORD *)this + 10);
  if ( v68 < v67 )
  {
    while ( 1 )
    {
      v69 = *(_QWORD *)(*(_QWORD *)(v63 + 24) + 8LL * v68);
      v70 = *(_DWORD *)v69;
      if ( *(_DWORD *)v69 )
      {
        if ( v70 == 4 )
        {
          v77 = *(void **)(v69 + 96);
          v78 = (_DWORD *)(v69 + 104);
          lpMema = v77;
          if ( (void *)(v69 + 104) != v77 )
          {
            if ( v77 )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, lpMema);
              v78 = (_DWORD *)(v69 + 104);
            }
            *(_QWORD *)(v69 + 96) = v78;
            *v78 = 0;
          }
          v79 = *(_QWORD *)(v69 + 8);
          if ( v79 )
            (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), unsigned __int64))(*(_QWORD *)v79 + 8LL))(
              v79,
              v65,
              v21,
              v20);
        }
        else
        {
          v87 = v70 - 1;
          if ( v87 )
          {
            v90 = v87 - 1;
            if ( v90 )
            {
              v91 = v90 - 1;
              if ( v91 )
              {
                if ( v91 != 2 )
                  ModuleFailFastForHRESULT(-2147418113, retaddr);
              }
            }
          }
          wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)(v69 + 8));
        }
      }
      *(_DWORD *)v69 = 0;
      v71 = *(_DWORD *)(v63 + 88);
      v126 = v69;
      v65 = v71 + 1;
      if ( (unsigned int)v65 < v71 )
        break;
      if ( (unsigned int)v65 > *(_DWORD *)(v63 + 84) )
      {
        v97 = DynArrayImpl<0>::AddMultipleAndSet(v63 + 64, 8, 1, &v126);
        if ( v97 < 0 )
        {
          v98 = 192;
LABEL_187:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v97, v98, 0LL);
          ModuleFailFastForHRESULT(v97, retaddr);
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v63 + 64) + 8LL * v71) = v69;
        *(_DWORD *)(v63 + 88) = v65;
      }
      if ( ++v68 >= v67 )
        goto LABEL_118;
    }
    v97 = -2147024362;
    v98 = 181;
    goto LABEL_187;
  }
LABEL_118:
  if ( (*(_DWORD *)(v63 + 176))-- == 1 )
  {
    v73 = *(_DWORD *)(v63 + 60);
    if ( v73 <= *(_DWORD *)(v63 + 48) - *(_DWORD *)(v63 + 56) )
      v73 = *(_DWORD *)(v63 + 48) - *(_DWORD *)(v63 + 56);
    *(_DWORD *)(v63 + 60) = v73;
    v74 = *(_DWORD *)(v63 + 100);
    if ( v74 <= *(_DWORD *)(v63 + 88) - *(_DWORD *)(v63 + 96) )
      v74 = *(_DWORD *)(v63 + 88) - *(_DWORD *)(v63 + 96);
    *(_DWORD *)(v63 + 100) = v74;
    v75 = *(_DWORD *)(v63 + 140);
    if ( v75 <= *(_DWORD *)(v63 + 128) - *(_DWORD *)(v63 + 136) )
      v75 = *(_DWORD *)(v63 + 128) - *(_DWORD *)(v63 + 136);
    *(_DWORD *)(v63 + 140) = v75;
    *(_DWORD *)(v63 + 48) = 0;
    *(_DWORD *)(v63 + 56) = 0;
  }
  result = (unsigned int)v16;
  *((_QWORD *)this + 5) = -1LL;
  return result;
}
