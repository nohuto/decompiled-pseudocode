/*
 * XREFs of ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x18002E160
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18002F080 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x180030460 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180027CFC (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18002E4B0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x18002E688 (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18002EC88 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18002EDE4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002EFAC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(CBaseObject **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CVisual **v4; // rsi
  int v5; // eax
  struct CVisual **v6; // r12
  int v7; // eax
  struct CVisual **v8; // rbp
  int v9; // eax
  struct CVisual **v10; // r13
  int v11; // eax
  struct CVisual **v12; // r14
  int v13; // eax
  int v14; // eax
  struct CVisual **v15; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  CVisual *v26; // rcx
  struct _MARGINS v28; // [rsp+30h] [rbp-38h] BYREF
  struct CVisual **v29; // [rsp+78h] [rbp+10h]

  v2 = CContainerVisual::Initialize((CContainerVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xD0u, 0LL);
  }
  else if ( ((_BYTE)this[25] & 8) == 0 )
  {
    v4 = this + 27;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 27);
    v5 = CWindowBackgroundTreatmentVisual::Create(this + 27);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xD4u, 0LL);
    }
    else
    {
      v6 = this + 28;
      v7 = CWindowBorder::Create(this + 28);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xD5u, 0LL);
      }
      else
      {
        v8 = this + 29;
        v9 = CCanvasVisual::Create(this + 29);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xD6u, 0LL);
        }
        else
        {
          v10 = this + 30;
          v11 = CCanvasVisual::Create(this + 30);
          v3 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xD7u, 0LL);
          }
          else
          {
            v12 = this + 31;
            v13 = CCanvasVisual::Create(this + 31);
            v3 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xD8u, 0LL);
            }
            else
            {
              v29 = this + 68;
              v14 = CCanvasVisual::Create(this + 68);
              v3 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xD9u, 0LL);
              }
              else
              {
                v15 = this + 69;
                v16 = CCanvasVisual::Create(this + 69);
                v3 = v16;
                if ( v16 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xDAu, 0LL);
                }
                else
                {
                  v17 = CTopLevelAtlasedRectsVisual::Create(this + 33);
                  v3 = v17;
                  if ( v17 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xDBu, 0LL);
                  }
                  else
                  {
                    v18 = CContainerVisual::AddChild((CContainerVisual *)this, *v4);
                    v3 = v18;
                    if ( v18 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xDDu, 0LL);
                    }
                    else
                    {
                      v19 = CContainerVisual::AddChild(*v4, *v6);
                      v3 = v19;
                      if ( v19 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xDEu, 0LL);
                      }
                      else
                      {
                        v20 = CWindowBorder::SetContent(*v6, *v8);
                        v3 = v20;
                        if ( v20 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xDFu, 0LL);
                        }
                        else
                        {
                          v21 = CContainerVisual::AddChild(*v8, *v10);
                          v3 = v21;
                          if ( v21 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0xE0u, 0LL);
                          }
                          else
                          {
                            v22 = CContainerVisual::AddChild(*v10, *v12);
                            v3 = v22;
                            if ( v22 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xE1u, 0LL);
                            }
                            else
                            {
                              v23 = CContainerVisual::AddChild(*v12, this[33]);
                              v3 = v23;
                              if ( v23 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xE2u, 0LL);
                              }
                              else
                              {
                                v24 = CContainerVisual::AddChild(*v12, *v15);
                                v3 = v24;
                                if ( v24 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xE3u, 0LL);
                                }
                                else
                                {
                                  v25 = CContainerVisual::AddChild(*v15, *v29);
                                  v3 = v25;
                                  if ( v25 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xE4u, 0LL);
                                  }
                                  else
                                  {
                                    v26 = *v29;
                                    v28 = 0LL;
                                    CVisual::SetInsetFromParent(v26, &v28);
                                    CVisual::SetInsetFromParent(this[33], &v28);
                                    *((_DWORD *)*v15 + 32) = -1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
