/*
 * XREFs of ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800CA044
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800CAE58 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180033F68 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z @ 0x18006D15E (-SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800ADC6C (--$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 *     ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z @ 0x180105AB0 (-Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z.c)
 */

__int64 __fastcall CMagnifier::OnModifyWindowFilterList(CBaseObject **this, const struct MAGN_FILTERLIST *a2)
{
  CVisualGroupProxy **v2; // r13
  unsigned int v3; // r14d
  __int64 v4; // rbp
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct CVisualProxy *v22[26]; // [rsp+30h] [rbp-118h] BYREF

  v2 = this + 6;
  v3 = *(_DWORD *)a2 + *((_DWORD *)a2 + 1);
  v4 = 0LL;
  if ( !this[6] )
  {
    v7 = CCompositor::CreateProxy<CVisualGroupProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           this + 6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129198, 1LL, v7, 0xE0u);
      return v8;
    }
  }
  if ( !v3 )
    goto LABEL_30;
  v9 = this + 7;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *v9 != *((_QWORD *)a2 + 1) )
    {
      v10 = 0LL;
      do
      {
LABEL_9:
        if ( (unsigned int)v10 >= 0x19 )
          break;
        if ( *v9 != *((_QWORD *)a2 + v10 + 1) )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8));
          if ( v11 )
          {
            v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
            if ( v12 )
            {
              v13 = *(_QWORD *)(v12 + 440);
              if ( v13 )
              {
                v22[v4] = *(struct CVisualProxy **)(v13 + 16);
                v4 = (unsigned int)(v4 + 1);
              }
            }
          }
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *(_DWORD *)a2 );
      goto LABEL_16;
    }
LABEL_30:
    v20 = CMagnifierRenderTargetProxy::SetFilterList(this[3], 0LL);
    v8 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129198, 1LL, v20, 0xE6u);
    return v8;
  }
  v10 = 0LL;
  if ( *(_DWORD *)a2 )
    goto LABEL_9;
LABEL_16:
  if ( (unsigned int)v10 < v3 )
  {
    v14 = (_QWORD *)((char *)a2 + 8 * v10 + 8);
    while ( (unsigned int)v10 < 0x19 )
    {
      if ( *v9 != *v14 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8));
        if ( !v15 )
        {
          v8 = -2147023728;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129198, 1LL, -2147023728, 0x115u);
          return v8;
        }
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        if ( v16 )
        {
          v17 = *(_QWORD **)(v16 + 440);
          if ( v17 )
          {
            v22[v4] = *(struct CVisualProxy **)(CTopLevelWindow::GetRootVisualNoAddRef(v17, 0) + 16);
            v4 = (unsigned int)(v4 + 1);
          }
        }
      }
      LODWORD(v10) = v10 + 1;
      ++v14;
      if ( (unsigned int)v10 >= v3 )
        break;
    }
  }
  v18 = CVisualGroupProxy::Update(*v2, v22, v4);
  v8 = v18;
  if ( v18 >= 0 )
  {
    v19 = CMagnifierRenderTargetProxy::SetFilterList(this[3], *v2);
    v8 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129198, 1LL, v19, 0x129u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129198, 1LL, v18, 0x128u);
  }
  return v8;
}
