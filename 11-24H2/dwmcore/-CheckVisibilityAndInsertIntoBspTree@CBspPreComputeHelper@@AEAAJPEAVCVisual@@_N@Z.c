/*
 * XREFs of ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180169048
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180169E50 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18016A364 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18016A418 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18016A468 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?HasContent@CVisual@@UEBA_NXZ @ 0x18016A490 (-HasContent@CVisual@@UEBA_NXZ.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18016A5F0 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x18016A620 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?HasContent@CSpriteVisual@@UEBA_NXZ @ 0x18016A750 (-HasContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016A778 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18016A8E4 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        char a3)
{
  int v4; // edi
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
  int v18; // ecx
  bool v19; // r15
  _DWORD *v20; // rax
  int v21; // eax
  __int128 v22; // xmm0
  int v23; // eax
  __int128 v24; // xmm1
  int v25; // ecx
  __int128 v26; // xmm0
  char *v27; // rax
  char v28; // si
  int *v29; // rcx
  int v30; // eax
  int v31; // edi
  unsigned int *v32; // r9
  __int64 v33; // r8
  int v34; // r10d
  int v35; // r11d
  int PolygonNoRef; // eax
  struct CPolygon *v37; // r14
  unsigned __int64 v38; // rcx
  struct CPolygon *v39; // rsi
  int v40; // eax
  CBspNode *v41; // rax
  int v42; // r9d
  unsigned int v44; // [rsp+20h] [rbp-59h]
  __int128 v45; // [rsp+60h] [rbp-19h] BYREF
  __int128 v46; // [rsp+70h] [rbp-9h]
  __int128 v47; // [rsp+80h] [rbp+7h]
  __int128 v48; // [rsp+90h] [rbp+17h]
  int v49; // [rsp+A0h] [rbp+27h]
  struct CPolygon *v50; // [rsp+E8h] [rbp+6Fh] BYREF

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
  if ( HasContent || a3 )
  {
    v9 = *((_DWORD *)this + 14);
    v10 = &CMILMatrix::Identity;
    if ( v9 )
      v11 = (_OWORD *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v9 - 1));
    else
      v11 = &CMILMatrix::Identity;
    v12 = v11[1];
    v45 = *v11;
    v13 = v11[2];
    v46 = v12;
    v14 = v11[3];
    v49 = *((_DWORD *)v11 + 16);
    v15 = *((_DWORD *)this + 20);
    v47 = v13;
    v48 = v14;
    if ( v15 )
      v16 = (__m128 *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v15 - 1));
    else
      v16 = (__m128 *)&CMILMatrix::Identity;
    CMILMatrix::Multiply(v16, (const struct CMILMatrix *)&v45, (struct CMILMatrix *)&v45);
    IsFacingUser = CMILMatrix::IsFacingUser((CMILMatrix *)&v45);
    v18 = *((_DWORD *)this + 26);
    v19 = IsFacingUser;
    v20 = 0LL;
    if ( v18 )
      v20 = (_DWORD *)(*((_QWORD *)this + 12) + 4LL * (unsigned int)(v18 - 1));
    if ( v19 || *v20 != 1 || a3 )
    {
      v21 = *((_DWORD *)this + 20);
      if ( v21 )
        v10 = (_DWORD *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v21 - 1));
      v22 = *(_OWORD *)v10;
      v23 = v10[16];
      v24 = *((_OWORD *)v10 + 1);
      v50 = 0LL;
      v25 = *((_DWORD *)this + 56);
      v45 = v22;
      v26 = *((_OWORD *)v10 + 2);
      v49 = v23;
      v27 = 0LL;
      v46 = v24;
      v47 = v26;
      v48 = *((_OWORD *)v10 + 3);
      if ( v25 )
        v27 = (char *)(*((_QWORD *)this + 27) + (unsigned int)(v25 - 1));
      v28 = *v27;
      v29 = 0LL;
      v30 = *((_DWORD *)this + 32);
      if ( v30 )
        v29 = (int *)(*((_QWORD *)this + 15) + 4LL * (unsigned int)(v30 - 1));
      v31 = *v29;
      CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 192);
      PolygonNoRef = CVisual::GetPolygonNoRef(a2, &v45, v33, *v32, v34, v35, v31, (_BYTE)v33, v28, a3, &v50);
      v37 = v50;
      v4 = PolygonNoRef;
      if ( PolygonNoRef < 0 )
      {
        v44 = 444;
      }
      else
      {
        v39 = *(struct CPolygon **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
        if ( v39 )
          goto LABEL_32;
        v40 = *((_DWORD *)this + 2);
        if ( v40 )
          *((_DWORD *)this + 2) = v40 - 1;
        v41 = (CBspNode *)CBspNode::operator new(v38);
        if ( !v41 || (v50 = CBspNode::CBspNode(v41, v19), (v39 = v50) == 0LL) )
        {
          v4 = -2147024882;
          v42 = -2147024882;
          v44 = 455;
LABEL_24:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, v44, 0LL);
LABEL_25:
          if ( v37 )
            (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( v4 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x11Eu, 0LL);
          return (unsigned int)v4;
        }
        PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push((int)this);
        v4 = PolygonNoRef;
        if ( PolygonNoRef >= 0 )
        {
LABEL_32:
          PolygonNoRef = CBspNode::PushPolygon(v39, v37, v19);
          v4 = PolygonNoRef;
          if ( PolygonNoRef >= 0 )
            goto LABEL_25;
          v44 = 460;
        }
        else
        {
          v44 = 457;
        }
      }
      v42 = PolygonNoRef;
      goto LABEL_24;
    }
  }
  return (unsigned int)v4;
}
