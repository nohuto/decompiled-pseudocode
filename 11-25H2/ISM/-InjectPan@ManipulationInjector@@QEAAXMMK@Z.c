/*
 * XREFs of ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180110248
 * Callers:
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF9FC (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800C08EC (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180110248 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x180178694 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x18010EB9C (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x18010EF08 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x18010EF60 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x18010F010 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x18010F8CC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180110248 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180110818 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?RoundSubPixelToPixel@ManipulationInjector@@AEAAJM@Z @ 0x180110860 (-RoundSubPixelToPixel@ManipulationInjector@@AEAAJM@Z.c)
 *     ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x180110E54 (-UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x180110EB4 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::InjectPan(ManipulationInjector *this, float a2, float a3, unsigned int a4)
{
  ManipulationInjector *v6; // rcx
  char v7; // r14
  float v8; // xmm3_4
  int v9; // eax
  float v10; // xmm4_4
  ManipulationInjector *v11; // rcx
  LONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  bool v16; // zf
  struct tagRECT *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  int v21; // ecx
  int v22; // ecx
  struct tagRECT *v23; // r9
  struct tagPOINT v24; // rbx
  const char *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  const char *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  const char *v31; // r9
  int v32; // [rsp+20h] [rbp-50h]
  struct tagRECT v33; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v34; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( ManipulationInjector::IsInContactForDeviceId(this, a4) )
  {
    v7 = 0;
    if ( *((_DWORD *)this + 22) != 1 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x21B,
        (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)0x80070057LL,
        v32);
    if ( !*((_BYTE *)this + 744) )
    {
      v6 = (ManipulationInjector *)*((unsigned int *)this + 185);
      if ( (int)v6 > 0 )
      {
        *((_BYTE *)this + 744) = 1;
        v8 = 0.0;
        v9 = 1;
        v10 = 0.0;
        if ( COERCE_FLOAT(LODWORD(a2) & _xmm) <= COERCE_FLOAT(LODWORD(a3) & _xmm) )
        {
          if ( a3 < 0.0 )
            v9 = -1;
          v10 = (float)(v9 * (int)v6);
        }
        else
        {
          if ( a2 < 0.0 )
            v9 = -1;
          v8 = (float)(v9 * (int)v6);
        }
        ManipulationInjector::InjectPan(this, v8, v10, a4);
      }
    }
    if ( *((_BYTE *)this + 13) )
      DbgPrint(
        "Pan Delta: (%d.%03d, %d.%03d)\n",
        (int)a2,
        (int)(float)(a2 * 1000.0) - 1000 * (int)a2,
        (int)a3,
        (int)(float)(a3 * 1000.0) - 1000 * (int)a3);
    v33.left = ManipulationInjector::RoundSubPixelToPixel(v6, a2);
    v12 = ManipulationInjector::RoundSubPixelToPixel(v11, a3);
    v16 = *((_DWORD *)this + 1) == 2;
    v33.top = v12;
    v17 = *(struct tagRECT **)&v33.left;
    if ( !v16 || !*((_DWORD *)this + 10) )
    {
      if ( *((_DWORD *)this + 12) != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x23D,
          (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v15);
      ManipulationInjector::UpdatePanContact(this, 0, *(struct tagPOINT *)&v33.left);
      v33 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v33, 0);
      v7 = ManipulationInjector::CheckOverlapAndEvent(this, v18, v19, v20);
    }
    if ( *((_DWORD *)this + 1) != 2 || !*((_BYTE *)this + 12) )
    {
      if ( v7 )
      {
        if ( *((_DWORD *)this + 1) == 1 && *((_BYTE *)this + 12) )
        {
          ManipulationInjector::AddContact(
            (struct tagPOINT *)this,
            *(struct tagPOINT *)((char *)this + 80),
            0,
            (const char *)a4);
          ManipulationInjector::InjectAndScrub(this, v26, v27, v28);
          *((_DWORD *)this + 31) = 0x40000;
          *((_DWORD *)this + 69) = 131078;
        }
        else
        {
          ManipulationInjector::InjectAndScrub(this, v13, v14, v15);
          *((_DWORD *)this + 31) = 0x40000;
          ManipulationInjector::InjectAndScrub(this, v29, v30, v31);
          ManipulationInjector::AddContact(
            (struct tagPOINT *)this,
            *(struct tagPOINT *)((char *)this + 80),
            0,
            (const char *)a4);
        }
      }
      goto LABEL_42;
    }
    v21 = *((_DWORD *)this + 10);
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( *((_DWORD *)this + 12) != 2 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x250,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v15);
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        v23 = **(struct tagRECT ***)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (struct tagRECT **)&v33,
                                       0LL,
                                       v17,
                                       &v34.left);
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        v24 = **(struct tagPOINT **)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (struct tagRECT **)&v33,
                                       (struct tagPOINT)1LL,
                                       v23,
                                       &v34.left);
        ManipulationInjector::UpdatePanContact(this, 0, v24);
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v34, 0) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x257,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v25);
        ManipulationInjector::UpdatePanContact(this, 1u, v24);
        v34 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v34, 0) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x25B,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v15);
        *((_DWORD *)this + 10) = 2;
        goto LABEL_42;
      }
      if ( v22 != 1 )
        return;
      if ( *((_DWORD *)this + 12) != 2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x264,
          (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v15);
      *((_DWORD *)this + 31) = 0x40000;
      ManipulationInjector::UpdatePanContact(this, 1u, (struct tagPOINT)v17);
      v33 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v33, 0);
    }
    ManipulationInjector::UpdatePanOverlapState(this);
LABEL_42:
    ManipulationInjector::InjectAndScrub(this, v13, v14, v15);
  }
}
