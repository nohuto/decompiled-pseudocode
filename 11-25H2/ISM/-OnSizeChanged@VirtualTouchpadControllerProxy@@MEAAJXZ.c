/*
 * XREFs of ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180133C00
 * Callers:
 *     ?OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180133880 (-OnConnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1801339F0 (-OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077490 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x180081520 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?value@?$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ @ 0x18009BF18 (-value@-$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x18009C0B0 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180132C34 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?RelativeRectToScreen@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1801342A0 (-RelativeRectToScreen@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUtagRECT@@@Z @ 0x180134828 (-ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Inter.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180199CF8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x180199D8C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019A004 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnSizeChanged(VirtualTouchpadControllerProxy *this)
{
  BamoAnimationTargetClientProxy *v1; // rdi
  const struct Windows::UI::Internal::Input::GestureAnimationData *Data; // rax
  __int64 v4; // xmm0_8
  LONG v5; // xmm7_4
  LONG v6; // xmm6_4
  __int64 v7; // rax
  float *v8; // rax
  float v9; // xmm1_4
  LONG v10; // ecx
  float v11; // xmm1_4
  bool TouchEnabled; // al
  struct tagRECT v13; // xmm6
  VirtualTouchpadContextProvider *Instance; // rax
  int v15; // edi
  __int64 v16; // rdx
  VirtualTouchpadContextProvider *v18; // rax
  bool v19; // zf
  struct tagRECT v20; // [rsp+28h] [rbp-19h] BYREF
  struct tagRECT v21; // [rsp+38h] [rbp-9h] BYREF
  _BYTE v22[24]; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v1 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  if ( BamoMagnifierControllerProxy::GetGesturesEnabled((VirtualTouchpadControllerProxy *)((char *)this + 8))
    && *((_BYTE *)this + 208) )
  {
    Data = BamoAnimationTargetClientProxy::GetData(v1);
    v4 = *((_QWORD *)Data + 2);
    *(_OWORD *)v22 = *(_OWORD *)Data;
    *(float *)&v5 = *(double *)v22;
    *(float *)&v6 = _mm_unpackhi_pd(*(__m128d *)v22, *(__m128d *)v22).m128d_f64[0];
    *(_QWORD *)&v22[16] = v4;
    v7 = std::optional<tagINPUT_TRANSFORM>::value((__int64)this + 144);
    v21.left = 0;
    v21.top = 0;
    v21.right = v5;
    v21.bottom = v6;
    v20 = v21;
    v8 = (float *)CInputTransform::RelativeRectToScreen(v23, &v20, v7);
    v9 = v8[1];
    *(float *)&v4 = *v8 + v8[2];
    v21.left = (int)*v8;
    v10 = (int)v9;
    v11 = v9 + v8[3];
    v21.top = v10;
    v21.right = (int)*(float *)&v4;
    v21.bottom = (int)v11;
    InputTraceLogging::VirtualTouchpad::ServerSizeChanged(
      this,
      (const struct Windows::UI::Internal::Input::VirtualTouchpadSize *)v22,
      &v21);
    *(_QWORD *)&v20.left = *(_QWORD *)&v22[16];
    LOBYTE(v20.right) = 1;
    *(struct tagRECT *)((char *)this + 232) = v20;
    if ( *((_BYTE *)this + 240) && *((double *)this + 29) == 0.0 )
      *((_BYTE *)this + 240) = 0;
    TouchEnabled = BamoShellGesturesClientProxy::GetTouchEnabled(v1);
    v13 = v21;
    if ( TouchEnabled )
    {
      if ( *((_BYTE *)this + 228) )
      {
        Instance = VirtualTouchpadContextProvider::GetInstance();
        *(_QWORD *)v22 = this;
        *(struct tagRECT *)&v22[8] = v13;
        v15 = VirtualTouchpadContextProvider::OnTouchpadUpdated(Instance, (const struct VirtualTouchpadRect *)v22);
        if ( v15 < 0 )
        {
          v16 = 339LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpa"
                     "dcontroller\\server\\virtualtouchpadcontrollerproxy.cpp",
            (const char *)(unsigned int)v15);
          return (unsigned int)v15;
        }
      }
      else
      {
        v18 = VirtualTouchpadContextProvider::GetInstance();
        *(_QWORD *)v22 = this;
        *(struct tagRECT *)&v22[8] = v13;
        v15 = VirtualTouchpadContextProvider::OnTouchpadAdded(v18, (const struct VirtualTouchpadRect *)v22);
        if ( v15 < 0 )
        {
          v16 = 348LL;
          goto LABEL_10;
        }
      }
    }
    v19 = *((_BYTE *)this + 228) == 0;
    *(struct tagRECT *)((char *)this + 212) = v13;
    if ( v19 )
      *((_BYTE *)this + 228) = 1;
    VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  }
  return 0LL;
}
