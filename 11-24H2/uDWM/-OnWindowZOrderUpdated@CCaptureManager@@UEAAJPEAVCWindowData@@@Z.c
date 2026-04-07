/*
 * XREFs of ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AFB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800B5650 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800B56F8 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::OnWindowZOrderUpdated(CCaptureManager *this, struct CWindowData *a2)
{
  __int64 **v3; // rdi
  __int64 **i; // rbx
  unsigned __int64 v5; // rcx
  __int64 *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 *v8; // r8
  __int64 v9; // rsi
  __int64 v10; // r14
  CBaseObject *v11; // rcx
  int v12; // eax
  int v13; // ebp
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rdx
  int v19[2]; // [rsp+20h] [rbp-48h] BYREF
  CBaseObject *v20[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v22; // [rsp+78h] [rbp+10h] BYREF
  char v23; // [rsp+80h] [rbp+18h] BYREF

  if ( *((_DWORD *)a2 + 115) )
  {
    v3 = (__int64 **)*((_QWORD *)this + 18);
    for ( i = (__int64 **)*v3; ; i = (__int64 **)*i )
    {
      if ( i == v3 )
        return 0LL;
      v5 = 0LL;
      v6 = i[11];
      v7 = ((char *)i[12] - (char *)v6) >> 4;
      if ( v7 )
      {
        v8 = i[11];
        while ( *v8 != *((_QWORD *)a2 + 5) || !*((_QWORD *)a2 + 55) )
        {
          ++v5;
          v8 += 2;
          if ( v5 >= v7 )
            goto LABEL_17;
        }
        if ( (v5 & 0x80000000) == 0LL )
        {
          v9 = (int)v5;
          v10 = 2LL * (int)v5;
          *(_QWORD *)v19 = v6[v10];
          v11 = (CBaseObject *)v6[v10 + 1];
          v20[0] = v11;
          if ( v11 )
            CMILRefCountBase::AddRef(v11);
          v12 = CContainerVisualProxy::RemoveChild((CContainerVisualProxy *)i[10], v11);
          v13 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x489,
              (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)(unsigned int)v12);
            v16 = v13;
            goto LABEL_22;
          }
          std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(i + 11, &v22, &i[11][v10]);
          std::vector<_DWMCaptureWindowInformation>::erase(i + 14, &v23, &i[14][4 * v9]);
          v15 = ((__int64 (__fastcall *)(__int64, __int64 **, int *, struct CWindowData *))CCaptureManager::_AddWindowToFilteredCapture)(
                  v14,
                  i + 3,
                  v19,
                  a2);
          v16 = v15;
          if ( v15 < 0 )
          {
            v17 = 1166LL;
            goto LABEL_20;
          }
          v15 = CCaptureControllerProxy::SetWindowInfos(
                  (CCaptureControllerProxy *)i[4],
                  (const struct _DWMCaptureWindowInformation *)i[14],
                  ((char *)i[15] - (char *)i[14]) >> 5);
          v16 = v15;
          if ( v15 < 0 )
          {
            v17 = 1169LL;
LABEL_20:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)(unsigned int)v15);
LABEL_22:
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v20);
            return v16;
          }
          Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v20);
        }
      }
LABEL_17:
      ;
    }
  }
  return 0LL;
}
