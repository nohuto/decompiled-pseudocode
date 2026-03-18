/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180014D94
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180015570 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000C5A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000DA20 (-GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x18000EB50 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18000F990 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180012614 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180017D30 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180080E40 (-GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18028CAFC (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  char v7; // al
  CPathData *v8; // r14
  struct CResource *v9; // rax
  CPropertySet *v10; // rcx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(CVisual *, int, struct CExpressionValue *); // rax
  int Property; // eax
  const struct SubchannelMaskInfo *v14; // r8
  __int64 v15; // r10
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int128 *v19; // rdx
  unsigned int v20; // eax
  __int64 (__fastcall *v21)(CPathData *); // rax
  CPathData *v22; // rcx
  __int64 (__fastcall *v23)(CPathData *); // rax
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  int v31; // edx
  __int64 v32; // r8
  __int64 v33; // r10
  unsigned int v34; // eax
  unsigned int v35; // r9d
  unsigned int ChannelCallbackId; // eax
  __int16 v37; // [rsp+20h] [rbp-E0h]
  unsigned int v38; // [rsp+20h] [rbp-E0h]
  void *v39; // [rsp+28h] [rbp-D8h]
  int v40; // [rsp+30h] [rbp-D0h]
  double v41; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+40h] [rbp-C0h]
  __int128 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  _OWORD v46[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-30h]
  __int128 v49; // [rsp+E0h] [rbp-20h]
  __int128 v50; // [rsp+F0h] [rbp-10h]
  CPathData *v51; // [rsp+100h] [rbp+0h] BYREF
  int v52; // [rsp+108h] [rbp+8h]
  _DWORD v53[16]; // [rsp+110h] [rbp+10h] BYREF
  CPathData *v54; // [rsp+150h] [rbp+50h]
  int v55; // [rsp+158h] [rbp+58h]

  v4 = 0;
  memset_0(v53, 0, sizeof(v53));
  v54 = 0LL;
  v55 = 0;
  v5 = 9LL;
  if ( a2 == 1 )
  {
    v5 = 8LL;
    goto LABEL_3;
  }
  if ( a2 == 2 )
LABEL_3:
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 80LL))(a1, v5, a1);
  v6 = *(_QWORD *)(a1 + 56);
  if ( !v6 || !*(_DWORD *)(v6 + 108) || (v7 = 1, !*(_DWORD *)(a1 + 72)) )
    v7 = 0;
  if ( v7 )
  {
    memset_0(&v47, 0, 0x40uLL);
    v51 = 0LL;
    v52 = 0;
    v8 = 0LL;
    if ( (a2 != 8 || (*(_BYTE *)(a1 + 224) & 2) != 0 && CExpressionValue::HasValue((CExpressionValue *)(a1 + 80)))
      && a2 != 16 )
    {
      v9 = CBaseExpression::ResolveTargetNoRef((CBaseExpression *)a1);
      v10 = v9;
      if ( v9 )
      {
        v11 = *(unsigned int *)(a1 + 188);
        v12 = *(__int64 (__fastcall **)(CVisual *, int, struct CExpressionValue *))(*(_QWORD *)v9 + 136LL);
        if ( (char *)v12 == (char *)CPropertySet::GetProperty )
        {
          Property = CPropertySet::GetProperty(v10, v11, (struct CExpressionValue *)v53);
        }
        else if ( v12 == CVisual::GetProperty )
        {
          Property = CVisual::GetProperty(v10, v11, (struct CExpressionValue *)v53);
        }
        else if ( (char *)v12 == (char *)CColorBrush::GetProperty )
        {
          Property = CColorBrush::GetProperty(v10, v11, (struct CExpressionValue *)v53);
        }
        else
        {
          Property = v12(v10, v11, (struct CExpressionValue *)v53);
        }
        if ( Property >= 0 )
        {
          v14 = *(const struct SubchannelMaskInfo **)(a1 + 200);
          if ( v14 )
          {
            v26 = CBaseExpression::MergeValueWithMask(
                    (const struct CExpressionValue *)v53,
                    (const struct CExpressionValue *)(a1 + 80),
                    v14,
                    (struct CExpressionValue *)&v47);
            v4 = v26;
            if ( v26 < 0 )
            {
              v25 = v26;
              v38 = 1496;
              goto LABEL_53;
            }
          }
          else
          {
            if ( *(_DWORD *)(a1 + 160) == 11 )
              goto LABEL_17;
            CExpressionValue::CopyFrom((CExpressionValue *)&v47, (const struct CExpressionValue *)(a1 + 80));
          }
          v8 = v51;
LABEL_17:
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6392LL) + 72LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6392LL),
                  0LL);
          if ( !v15 )
          {
LABEL_31:
            v4 = 0;
            if ( v8 )
            {
              v21 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v8 + 16LL);
              if ( v21 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
                CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v8);
              else
                v21(v8);
            }
            goto LABEL_34;
          }
          if ( v55 > 69 )
          {
            if ( v55 != 70 )
            {
              if ( v55 != 71 )
              {
                if ( v55 == 104 )
                {
                  *(_QWORD *)&v43 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  *((_QWORD *)&v43 + 1) = *(unsigned int *)(a1 + 72);
                  v41 = COERCE_DOUBLE(&v44);
                  v40 = a2;
                  v39 = &unk_18032BEF6;
                  v37 = 7;
                  v44 = v47;
                  v45 = v48;
                  goto LABEL_28;
                }
                if ( v55 == 265 )
                {
                  *(_QWORD *)&v43 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  *((_QWORD *)&v43 + 1) = *(unsigned int *)(a1 + 72);
                  v41 = COERCE_DOUBLE(v46);
                  v40 = a2;
                  v46[0] = v47;
                  v46[1] = v48;
                  v39 = &unk_18032BEFC;
                  v37 = 8;
                  v46[2] = v49;
                  v46[3] = v50;
                  goto LABEL_28;
                }
LABEL_79:
                v4 = -2147024809;
                v38 = 1638;
                goto LABEL_43;
              }
              ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
              v43 = v47;
              v41 = COERCE_DOUBLE(&v43);
              v40 = a2;
              *(_QWORD *)&v44 = ChannelCallbackId;
              v39 = &unk_18032BEF0;
              v37 = 6;
              *((_QWORD *)&v44 + 1) = *(unsigned int *)(a1 + 72);
LABEL_69:
              v19 = &v44;
              goto LABEL_29;
            }
            *(_QWORD *)&v44 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
            *((_QWORD *)&v44 + 1) = *(unsigned int *)(a1 + 72);
            v41 = COERCE_DOUBLE(&v43);
            v40 = a2;
            v39 = &unk_18032BEEA;
            v37 = 5;
          }
          else
          {
            if ( v55 != 69 )
            {
              switch ( v55 )
              {
                case 11:
                  v27 = *(_QWORD *)(a1 + 144);
                  v28 = *(_QWORD *)(v27 + 16);
                  v29 = *(_QWORD *)(v27 + 24) - v28;
                  if ( v29 == -1 || !v28 && v29 )
                  {
                    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                    __debugbreak();
                  }
                  v30 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  *((_QWORD *)&v43 + 1) = *(unsigned int *)(a1 + 72);
                  *(_QWORD *)&v43 = v30;
                  v20 = CoreUICallSend(v33, &v43, 2LL, 0LL, 9, &unk_18032BF02, a2, v32, v31);
LABEL_30:
                  v4 = v20;
                  if ( (int)(v20 + 0x80000000) >= 0 && v20 != -2018375675 )
                  {
                    v38 = 1645;
LABEL_43:
                    v25 = v4;
LABEL_53:
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v38, 0LL);
                    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v51);
                    goto LABEL_34;
                  }
                  goto LABEL_31;
                case 17:
                  v34 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  *((_QWORD *)&v43 + 1) = *(unsigned int *)(a1 + 72);
                  LODWORD(v41) = (unsigned __int8)v47;
                  v40 = a2;
                  v39 = &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_R2zrAyFwjWqsppRzeRelrl6I2ZE;
                  v37 = 0;
                  *(_QWORD *)&v43 = v34;
                  goto LABEL_28;
                case 18:
                  v17 = *(_QWORD *)(a1 + 56);
                  if ( v17 )
                    v18 = *(_DWORD *)(v17 + 108);
                  else
                    v18 = 0;
                  *(_QWORD *)&v43 = v18;
                  *((_QWORD *)&v43 + 1) = *(unsigned int *)(a1 + 72);
                  v41 = *(float *)&v47;
                  v40 = a2;
                  v39 = &unk_18032BED4;
                  v37 = 1;
                  goto LABEL_28;
                case 35:
                  *(_QWORD *)&v44 = v47;
                  v16 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  *((_QWORD *)&v43 + 1) = *(unsigned int *)(a1 + 72);
                  v41 = COERCE_DOUBLE(&v44);
                  v40 = a2;
                  v39 = &unk_18032BED8;
                  v37 = 2;
                  *(_QWORD *)&v43 = v16;
LABEL_28:
                  v19 = &v43;
LABEL_29:
                  v20 = CoreUICallSend(v15, v19, 2LL, 0LL, v37, v39, v40, *(_QWORD *)&v41, v42);
                  goto LABEL_30;
                case 52:
                  *(_QWORD *)&v43 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
                  *((_QWORD *)&v43 + 1) = *(unsigned int *)(a1 + 72);
                  v41 = COERCE_DOUBLE(&v44);
                  v40 = a2;
                  v39 = &unk_18032BEDE;
                  v37 = 3;
                  *(_QWORD *)&v44 = v47;
                  DWORD2(v44) = DWORD2(v47);
                  goto LABEL_28;
              }
              goto LABEL_79;
            }
            *(_QWORD *)&v44 = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
            *((_QWORD *)&v44 + 1) = *(unsigned int *)(a1 + 72);
            v41 = COERCE_DOUBLE(&v43);
            v40 = a2;
            v39 = &unk_18032BEE4;
            v37 = 4;
          }
          v43 = v47;
          goto LABEL_69;
        }
        v35 = 1287;
      }
      else
      {
        Property = -2147024782;
        v35 = 1284;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180313D18, 2u, Property, v35, 0LL);
    }
    v53[0] = 0;
    LODWORD(v47) = 0;
    a2 = 16;
    v55 = 18;
    v52 = 18;
    goto LABEL_17;
  }
LABEL_34:
  v22 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    v23 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v22 + 16LL);
    if ( v23 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v22);
    else
      ((void (__fastcall *)(CPathData *, __int64 (__fastcall *)(CPathData *)))v23)(
        v22,
        CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release);
  }
  return v4;
}
