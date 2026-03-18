/*
 * XREFs of ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800FEF90
 * Callers:
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FEDF0 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1801C25F0 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@PEBVCVisual@@@Z @ 0x1802846F0 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 */

__int64 __fastcall COcclusionContext::FlushOcclusionRects(COcclusionContext *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rdi
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  __int64 v12; // rax
  char *v13; // r9
  int v14; // eax
  __int64 v15; // r14
  __int64 *v16; // rsi
  int v17; // r15d
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // xmm1_4
  int v21; // xmm0_4
  int v22; // xmm1_4
  const struct CMILMatrix *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // esi
  int v34; // r14d
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v38; // [rsp+38h] [rbp-D0h] BYREF
  int v39; // [rsp+40h] [rbp-C8h] BYREF
  int v40; // [rsp+48h] [rbp-C0h] BYREF
  int v41; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int128 *v43; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+78h] [rbp-90h]
  __int128 v46; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  __int64 *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  int *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  int *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  __int64 *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]

  v2 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    v4 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 165) - *((_QWORD *)this + 164)) >> 2);
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        v5 = *((_DWORD *)this + 427);
        v6 = (unsigned int)(v4 - 1);
        *((_DWORD *)this + 427) = v5 + 2;
        v7 = *((_QWORD *)this + 164) + 20 * v6;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          v8 = *(_DWORD *)(v7 + 12);
          v9 = *(_DWORD *)(v7 + 8);
          v48 = (unsigned __int64 *)&v38;
          LODWORD(v42) = v8;
          v10 = *(_DWORD *)(v7 + 4);
          v50 = (__int64 *)&v39;
          v52 = &v40;
          v54 = &v41;
          v56 = &v42;
          v58 = (unsigned __int64 *)&v43;
          v41 = v9;
          v11 = *(_DWORD *)v7;
          v40 = v10;
          v39 = v11;
          LODWORD(v43) = 0;
          v38 = v5;
          v49 = 4LL;
          v51 = 4LL;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            (const EVENT_DESCRIPTOR *)",",
            v3,
            7u,
            &v47);
        }
        if ( *(_BYTE *)(v7 + 16) )
          v12 = *((_QWORD *)this + 193);
        else
          v12 = 0LL;
        v13 = (char *)this + 1572;
        if ( !*((_BYTE *)this + 1564) )
          v13 = 0LL;
        v14 = CArrayBasedCoverageSet::Add((char *)this + 616, v7, v5, v13, v12);
        v2 = v14;
        if ( v14 < 0 )
          break;
        LODWORD(v4) = v6;
        if ( !(_DWORD)v6 )
          goto LABEL_30;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x35Bu, 0LL);
    }
  }
  else
  {
    v15 = (__int64)(*((_QWORD *)this + 142) - *((_QWORD *)this + 141)) >> 4;
    if ( (_DWORD)v15 )
    {
      v16 = (__int64 *)((char *)this + 616);
      while ( 1 )
      {
        v17 = *((_DWORD *)this + 427);
        v18 = v15 - 1;
        *((_DWORD *)this + 427) = v17 + 2;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          v19 = *((_QWORD *)this + 141);
          v38 = 0;
          LODWORD(v43) = v17;
          v49 = 4LL;
          v51 = 4LL;
          v20 = *(_DWORD *)(v19 + 16LL * v18 + 8);
          v39 = *(_DWORD *)(v19 + 16LL * v18 + 12);
          v21 = *(_DWORD *)(v19 + 16LL * v18 + 4);
          v40 = v20;
          v22 = *(_DWORD *)(v19 + 16LL * v18);
          v48 = (unsigned __int64 *)&v43;
          v41 = v21;
          v50 = &v42;
          v52 = &v41;
          v54 = &v40;
          v56 = (__int64 *)&v39;
          v58 = (unsigned __int64 *)&v38;
          LODWORD(v42) = v22;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            (const EVENT_DESCRIPTOR *)",",
            v3,
            7u,
            &v47);
        }
        v23 = (COcclusionContext *)((char *)this + 1572);
        if ( !*((_BYTE *)this + 1564) )
          v23 = 0LL;
        v24 = *((_QWORD *)this + 141);
        LODWORD(v45) = v17;
        v44 = 0LL;
        *((_QWORD *)&v45 + 1) = 0LL;
        v46 = *(_OWORD *)(v24 + 16LL * v18);
        CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)&v44, v23);
        v25 = *((unsigned int *)this + 160);
        v26 = v25 + 1;
        if ( (int)v25 + 1 < (unsigned int)v25 )
          break;
        v2 = 0;
        if ( v26 > *((_DWORD *)this + 159) )
        {
          v43 = &v44;
          v29 = DynArrayImpl<0>::Grow((__int64)this + 616, 0x30u, 1, 0, (unsigned __int64 *)&v43);
          v2 = v29;
          if ( v29 < 0 )
          {
            v33 = v29;
            v34 = v29;
            v35 = 192;
            goto LABEL_29;
          }
          v30 = *v16;
          v31 = (unsigned __int64)v43;
          v32 = (unsigned int)(48 * *((_DWORD *)this + 160));
          *(_OWORD *)(v32 + v30) = *v43;
          *(_OWORD *)(v32 + v30 + 16) = *(_OWORD *)(v31 + 16);
          *(_OWORD *)(v32 + v30 + 32) = *(_OWORD *)(v31 + 32);
          ++*((_DWORD *)this + 160);
        }
        else
        {
          v27 = 3 * v25;
          v28 = *v16;
          v27 *= 2LL;
          *(_OWORD *)(v28 + 8 * v27) = v44;
          *(_OWORD *)(v28 + 8 * v27 + 16) = v45;
          *(_OWORD *)(v28 + 8 * v27 + 32) = v46;
          *((_DWORD *)this + 160) = v26;
        }
        LODWORD(v15) = v15 - 1;
        if ( !(_DWORD)v15 )
          goto LABEL_30;
      }
      v33 = -2147024362;
      v35 = 181;
      v34 = -2147024362;
      v2 = -2147024362;
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, v35, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x27u, 0LL);
      v2 = v34;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x36Eu, 0LL);
    }
  }
LABEL_30:
  v36 = (__int64)(*((_QWORD *)this + 142) - *((_QWORD *)this + 141)) >> 4;
  if ( v36 )
    *((_QWORD *)this + 142) -= 16 * v36;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 165) - *((_QWORD *)this + 164)) >> 2) )
    *((_QWORD *)this + 165) -= 4 * ((__int64)(*((_QWORD *)this + 165) - *((_QWORD *)this + 164)) >> 2);
  return v2;
}
