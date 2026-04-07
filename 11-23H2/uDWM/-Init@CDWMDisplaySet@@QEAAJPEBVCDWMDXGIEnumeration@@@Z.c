/*
 * XREFs of ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180028DD8
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180028E80 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x180020F74 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180029AE0 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x180029F58 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::Init(CDWMDisplaySet *this, const struct CDWMDXGIEnumeration *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // r8
  bool IsEmpty; // al
  __int64 v9; // r8
  int v10; // r9d
  char v11; // r10
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax

  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(const struct CDWMDXGIEnumeration *))a2)(a2);
  v3 = CDWMDisplaySet::EnumerateOutputs(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7F0, 1u, v3, 0x76u, 0LL);
  }
  else
  {
    v5 = CDWMDisplaySet::ArrangeCloneDisplays(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7F0, 1u, v5, 0x78u, 0LL);
    }
    else if ( *((_DWORD *)this + 16) )
    {
      v6 = (_DWORD *)((char *)this + 16);
      do
      {
        TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v6);
        IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty((_DWORD *)(v7 + 56));
        if ( v11 )
        {
          if ( IsEmpty )
          {
            v6[3] = 0;
            v6[2] = 0;
            v6[1] = 0;
            *v6 = 0;
          }
          else
          {
            *(_OWORD *)v6 = *(_OWORD *)(v9 + 56);
          }
        }
        else if ( !IsEmpty )
        {
          v13 = *(_DWORD *)(v9 + 56);
          if ( v13 < *v6 )
            *v6 = v13;
          v14 = *(_DWORD *)(v9 + 60);
          if ( v14 < v6[1] )
            v6[1] = v14;
          v15 = *(_DWORD *)(v9 + 64);
          if ( v15 > v6[2] )
            v6[2] = v15;
          v16 = *(_DWORD *)(v9 + 68);
          if ( v16 > v6[3] )
            v6[3] = v16;
        }
      }
      while ( (unsigned int)(v10 + 1) < *((_DWORD *)this + 16) );
    }
  }
  return v4;
}
