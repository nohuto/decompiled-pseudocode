/*
 * XREFs of ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800B4188 (-_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800B5650 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800B56F8 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 */

__int64 __fastcall CCaptureManager::OnWindowClosed(CCaptureManager *this, struct CWindowData *a2)
{
  __int64 ***v4; // rdi
  __int64 **i; // rbx
  unsigned __int64 v6; // rcx
  __int64 *v7; // r8
  unsigned __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r12
  int v12; // eax
  unsigned int v13; // r14d
  int v14; // eax
  unsigned int v15; // esi
  CBaseObject ***v17; // rdi
  CBaseObject **j; // rbx
  CBaseObject *v19; // rdx
  __int64 v20; // rdx
  int updated; // ebx
  __int64 v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v24; // [rsp+68h] [rbp+10h] BYREF
  char v25; // [rsp+70h] [rbp+18h] BYREF

  if ( *((_DWORD *)a2 + 115) )
  {
    v4 = (__int64 ***)*((_QWORD *)this + 18);
    for ( i = *v4; i != (__int64 **)v4; i = (__int64 **)*i )
    {
      v6 = 0LL;
      v7 = i[11];
      v8 = ((char *)i[12] - (char *)v7) >> 4;
      if ( v8 )
      {
        v9 = i[11];
        while ( *v9 != *((_QWORD *)a2 + 5) )
        {
          ++v6;
          v9 += 2;
          if ( v6 >= v8 )
            goto LABEL_12;
        }
        if ( (v6 & 0x80000000) == 0LL )
        {
          v10 = (int)v6;
          v11 = 2LL * (int)v6;
          v12 = CContainerVisualProxy::RemoveChild((CContainerVisualProxy *)i[10], (struct CVisualProxy *)v7[v11 + 1]);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x44E,
              (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)(unsigned int)v12);
            return v13;
          }
          std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(i + 11, &v24, &i[11][v11]);
          std::vector<_DWMCaptureWindowInformation>::erase(i + 14, &v25, &i[14][4 * v10]);
          --*((_DWORD *)a2 + 115);
          v14 = CCaptureControllerProxy::SetWindowInfos(
                  (CCaptureControllerProxy *)i[4],
                  (const struct _DWMCaptureWindowInformation *)i[14],
                  ((char *)i[15] - (char *)i[14]) >> 5);
          v15 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x454,
              (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)(unsigned int)v14);
            return v15;
          }
        }
      }
LABEL_12:
      ;
    }
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl)
    && *((_DWORD *)a2 + 114) )
  {
    v17 = (CBaseObject ***)*((_QWORD *)this + 2);
    for ( j = *v17; j != (CBaseObject **)v17; j = (CBaseObject **)*j )
    {
      v19 = j[6];
      if ( v19 )
      {
        if ( *((_QWORD *)v19 + 2) == *((_QWORD *)a2 + 5) )
          Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(j + 6);
      }
    }
    v20 = *((_QWORD *)a2 + 82);
    if ( v20 )
    {
      updated = CCaptureManager::UpdateProxyWindowForCapture(this, *(HWND *)(v20 + 40), 0LL, *((HWND *)a2 + 5));
      if ( updated < 0 )
      {
        v22 = 1129LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
    }
  }
  updated = CCaptureManager::_RemoveSecondaryWindowFromWindowCaptures(this, a2);
  if ( updated < 0 )
  {
    v22 = 1134LL;
    goto LABEL_26;
  }
  return 0LL;
}
