/*
 * XREFs of ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18010AE60
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18010B214 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18010B728 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18010B7DC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18010B828 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?HasContent@CVisual@@UEBA_NXZ @ 0x18010B850 (-HasContent@CVisual@@UEBA_NXZ.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18010B9B0 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x18010B9E0 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?HasContent@CSpriteVisual@@UEBA_NXZ @ 0x18010BB10 (-HasContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18010BB38 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18010BCA4 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        char a3)
{
  unsigned int v4; // edi
  bool (__fastcall *v7)(CVisual *__hidden); // rax
  bool HasContent; // al
  int v9; // eax
  _DWORD *v10; // rsi
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __m128 *v16; // rcx
  bool IsFacingUser; // al
  __int64 v18; // rdx
  int v19; // ecx
  bool v20; // r15
  _DWORD *v21; // rax
  __int64 v22; // r8
  int v23; // eax
  __int128 v24; // xmm0
  int v25; // eax
  __int128 v26; // xmm1
  int v27; // ecx
  __int128 v28; // xmm0
  char *v29; // rax
  char v30; // si
  int *v31; // rcx
  int v32; // eax
  int v33; // edi
  int v34; // eax
  __int64 v35; // r9
  unsigned int *v36; // r9
  __int64 v37; // r8
  int v38; // r10d
  int v39; // r11d
  int PolygonNoRef; // eax
  struct CPolygon *v41; // r14
  unsigned __int64 v42; // rcx
  struct CPolygon *v43; // rsi
  int v44; // eax
  CBspNode *v45; // rax
  int v46; // r9d
  unsigned int v48; // [rsp+20h] [rbp-59h]
  __int128 v49; // [rsp+60h] [rbp-19h] BYREF
  __int128 v50; // [rsp+70h] [rbp-9h]
  __int128 v51; // [rsp+80h] [rbp+7h]
  __int128 v52; // [rsp+90h] [rbp+17h]
  int v53; // [rsp+A0h] [rbp+27h]
  struct CPolygon *v54; // [rsp+E8h] [rbp+6Fh] BYREF

  v4 = 0;
  v7 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)a2 + 256LL);
  if ( v7 == CVisual::HasContent )
  {
    HasContent = CVisual::HasContent(a2);
  }
  else if ( v7 == CSpriteVisual::HasContent )
  {
    HasContent = CSpriteVisual::HasContent(a2);
  }
  else
  {
    HasContent = v7(a2);
  }
  if ( !HasContent && !a3 )
    return v4;
  v9 = *((_DWORD *)this + 14);
  v10 = &CMILMatrix::Identity;
  if ( v9 )
    v11 = (_OWORD *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v9 - 1));
  else
    v11 = &CMILMatrix::Identity;
  v12 = v11[1];
  v49 = *v11;
  v13 = v11[2];
  v50 = v12;
  v14 = v11[3];
  v53 = *((_DWORD *)v11 + 16);
  v15 = *((_DWORD *)this + 20);
  v51 = v13;
  v52 = v14;
  if ( v15 )
    v16 = (__m128 *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v15 - 1));
  else
    v16 = (__m128 *)&CMILMatrix::Identity;
  CMILMatrix::Multiply(v16, (const struct CMILMatrix *)&v49, (struct CMILMatrix *)&v49);
  IsFacingUser = CMILMatrix::IsFacingUser((CMILMatrix *)&v49);
  v19 = *((_DWORD *)this + 26);
  v20 = IsFacingUser;
  v21 = 0LL;
  if ( v19 )
    v21 = (_DWORD *)(*((_QWORD *)this + 12) + 4LL * (unsigned int)(v19 - 1));
  v22 = 1LL;
  if ( !v20 )
  {
    if ( *v21 == 1 && !a3 )
      return v4;
    if ( *v21 )
      LOBYTE(v22) = 0;
  }
  v23 = *((_DWORD *)this + 20);
  if ( v23 )
    v10 = (_DWORD *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v23 - 1));
  v24 = *(_OWORD *)v10;
  v25 = v10[16];
  v26 = *((_OWORD *)v10 + 1);
  v54 = 0LL;
  v27 = *((_DWORD *)this + 56);
  v49 = v24;
  v28 = *((_OWORD *)v10 + 2);
  v53 = v25;
  v29 = 0LL;
  v50 = v26;
  v51 = v28;
  v52 = *((_OWORD *)v10 + 3);
  if ( v27 )
    v29 = (char *)(*((_QWORD *)this + 27) + (unsigned int)(v27 - 1));
  v30 = *v29;
  v31 = 0LL;
  v32 = *((_DWORD *)this + 32);
  if ( v32 )
    v31 = (int *)(*((_QWORD *)this + 15) + 4LL * (unsigned int)(v32 - 1));
  v33 = *v31;
  v34 = *((_DWORD *)this + 62);
  v35 = 0LL;
  if ( v34 )
    v35 = *((_QWORD *)this + 30) + 4LL * (unsigned int)(v34 - 1);
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 192, v18, v22, v35);
  PolygonNoRef = CVisual::GetPolygonNoRef(a2, &v49, v37, *v36, v38, v39, v33, (_BYTE)v37, v30, a3, &v54);
  v41 = v54;
  v4 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v48 = 444;
LABEL_37:
    v46 = PolygonNoRef;
    goto LABEL_26;
  }
  v43 = *(struct CPolygon **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
  if ( v43 )
  {
LABEL_34:
    PolygonNoRef = CBspNode::PushPolygon(v43, v41, v20);
    v4 = PolygonNoRef;
    if ( PolygonNoRef >= 0 )
      goto LABEL_27;
    v48 = 460;
    goto LABEL_37;
  }
  v44 = *((_DWORD *)this + 2);
  if ( v44 )
    *((_DWORD *)this + 2) = v44 - 1;
  v45 = (CBspNode *)CBspNode::operator new(v42);
  if ( v45 )
  {
    v54 = CBspNode::CBspNode(v45, v20);
    v43 = v54;
    if ( v54 )
    {
      PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push((int)this);
      v4 = PolygonNoRef;
      if ( PolygonNoRef < 0 )
      {
        v48 = 457;
        goto LABEL_37;
      }
      goto LABEL_34;
    }
  }
  v4 = -2147024882;
  v46 = -2147024882;
  v48 = 455;
LABEL_26:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, v48, 0LL);
LABEL_27:
  if ( v41 )
    (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v41 + 8LL))(v41);
  if ( (v4 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x11Eu, 0LL);
  return v4;
}
