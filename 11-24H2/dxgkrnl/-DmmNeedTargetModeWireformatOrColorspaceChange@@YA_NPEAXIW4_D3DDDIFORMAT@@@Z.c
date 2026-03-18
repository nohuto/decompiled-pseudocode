/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x140310BB8
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsWireformatHighBpp@@YA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1400564CC (-IsWireformatHighBpp@@YA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(_QWORD *a1, unsigned int a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  VIDPN_MGR *v8; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v10; // rdi
  int NumPathsFromSource; // eax
  unsigned __int64 v12; // r12
  char v13; // si
  int v14; // eax
  __int64 v15; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  DMMVIDPNTARGET *v17; // rcx
  struct DMMVIDPNTARGETMODESET *v18; // rbx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v19; // rax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v20; // ecx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v21; // edx
  __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h] BYREF
  struct DMMVIDPNTARGETMODESET *v24; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304937) )
  {
    if ( a1 )
    {
      v6 = a1[390];
      if ( v6 )
      {
        v8 = *(VIDPN_MGR **)(v6 + 104);
        if ( v8 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, (__int64)v8);
          v22 = 0LL;
          ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
          auto_rc<DMMVIDPN const>::reset(&v22, (__int64)ClientCommittedVidPnRef);
          v10 = v22;
          if ( v22 )
          {
            v25 = 0LL;
            NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v22 + 96), v4, &v25);
            if ( NumPathsFromSource < 0 )
            {
              WdLogSingleEntry3(2LL, v4, v10 + 96, NumPathsFromSource);
              WdLogGlobalForLineNumber = 15589;
            }
            else
            {
              v12 = 0LL;
              v13 = 1;
              while ( 1 )
              {
                if ( v12 >= v25 )
                  goto LABEL_6;
                v26 = -1;
                v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v10 + 96), v4, v12, &v26);
                if ( v14 < 0 )
                  break;
                v15 = v26;
                if ( v26 == -1 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 15613;
                }
                Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v10 + 96), v4, v15);
                if ( !Path )
                {
                  WdLogSingleEntry3(2LL, v10, v4, v15);
                  WdLogGlobalForLineNumber = 15620;
                  goto LABEL_6;
                }
                v17 = (DMMVIDPNTARGET *)*((_QWORD *)Path + 12);
                if ( !v17 )
                {
                  WdLogSingleEntry1(2LL, Path);
                  v13 = 0;
                  WdLogGlobalForLineNumber = 15628;
                  goto LABEL_9;
                }
                v18 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v17);
                v24 = v18;
                if ( !*((_QWORD *)v18 + 18) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 15637;
                }
                v19 = (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)*((_QWORD *)v18 + 18);
                v20.0 = v19[33].0;
                v21.0 = v19[34].0;
                if ( a3 == D3DDDIFMT_A16B16G16R16F || a3 == D3DDDIFMT_A16B16G16R16 )
                {
                  if ( v21.Value == 32 || v21.Value == 12 )
LABEL_8:
                    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v24, 0LL);
                  else
LABEL_33:
                    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v18 + 88));
LABEL_9:
                  auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
                  DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
                  return v13;
                }
                if ( v21.Value == 32 || v21.Value == 12 )
                  goto LABEL_33;
                if ( v21.Value == 30 )
                  goto LABEL_8;
                if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
                {
                  if ( !IsWireformatHighBpp(v20) )
                    goto LABEL_8;
                }
                else if ( IsWireformatHighBpp(v20) )
                {
                  goto LABEL_8;
                }
                ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v18 + 88));
                v24 = 0LL;
                ++v12;
              }
              WdLogSingleEntry3(2LL, v12, v4, v14);
              WdLogGlobalForLineNumber = 15609;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, a1);
            WdLogGlobalForLineNumber = 15574;
          }
LABEL_6:
          auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
        }
        else
        {
          WdLogSingleEntry1(2LL, a1);
          WdLogGlobalForLineNumber = 15557;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 15543;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      WdLogGlobalForLineNumber = 15528;
    }
  }
  return 0;
}
