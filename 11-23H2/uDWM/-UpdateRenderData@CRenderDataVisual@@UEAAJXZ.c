/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800179C0
 * Callers:
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800C7000 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x1800397E0 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(CRenderDataVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  void (__fastcall *v9)(CRenderDataVisual *, _QWORD); // rax
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( *((_QWORD *)this + 31) )
    goto LABEL_6;
  v2 = CCompositor::CreateProxy<CRenderDataProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         (char *)this + 248);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x67u, 0LL);
    goto LABEL_10;
  }
  v4 = *((_QWORD *)this + 31);
  v5 = v4 ? *(unsigned int *)(*(_QWORD *)(v4 + 16) + 24LL) : 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 376LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         v5);
  v3 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v7 = *((int *)this + 70);
    if ( (int)v7 > 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 6)
                                                                       + 24LL)
                                                         + 120LL))(
              *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL),
              &v15);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x71u, 0LL);
      }
      else
      {
        v12 = 0LL;
        while ( 1 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)this + 32) + 8 * v12);
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, CRenderDataVisual *))(*(_QWORD *)v13 + 8LL))(
                  v13,
                  v15,
                  this);
          v3 = v14;
          if ( v14 < 0 )
            break;
          if ( ++v12 >= v7 )
            goto LABEL_7;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x75u, 0LL);
      }
    }
    else
    {
LABEL_7:
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL)
                                                                            + 16LL)
                                                              + 272LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL) + 16LL),
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL) + 24LL),
             v15);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x7Cu, 0LL);
      }
      else
      {
        v9 = *(void (__fastcall **)(CRenderDataVisual *, _QWORD))(*(_QWORD *)this + 40LL);
        if ( (int)v7 > 0 )
          v9(this, *((_QWORD *)this + 31));
        else
          v9(this, 0LL);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x68u, 0LL);
  }
LABEL_10:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v3;
}
