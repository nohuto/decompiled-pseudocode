/*
 * XREFs of ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180038EF0
 * Callers:
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18001039C (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18004E674 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180035AB0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180035BF4 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180035CF4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x1800361FC (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180039180 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x18003A0D0 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(CTopLevelWindow *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CVisual **v4; // rsi
  CBaseObject *v5; // rcx
  int inserted; // eax
  struct CVisual **v7; // rbp
  struct CVisual **v8; // r12
  struct CVisual **v9; // r14
  struct CVisual **v10; // r13
  struct CVisual **v11; // r15
  struct CVisual *v12; // rcx
  __int64 v13; // rax
  struct CVisual *v14; // rcx
  __int64 v15; // rax
  bool v17; // [rsp+20h] [rbp-48h]
  bool v18; // [rsp+20h] [rbp-48h]
  bool v19; // [rsp+20h] [rbp-48h]
  bool v20; // [rsp+20h] [rbp-48h]
  bool v21; // [rsp+20h] [rbp-48h]
  bool v22; // [rsp+20h] [rbp-48h]
  unsigned int v23; // [rsp+20h] [rbp-48h]
  struct CVisual **v24; // [rsp+70h] [rbp+8h]

  v2 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         (char *)this + 16);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x4Du, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xD1u, 0LL);
    return v3;
  }
  if ( (*((_BYTE *)this + 248) & 8) == 0 )
  {
    v4 = (struct CVisual **)((char *)this + 264);
    v5 = (CBaseObject *)*((_QWORD *)this + 33);
    if ( v5 )
    {
      *v4 = 0LL;
      CBaseObject::Release(v5);
    }
    inserted = CWindowBackgroundTreatmentVisual::Create((struct CWindowBackgroundTreatmentVisual **)this + 33);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v23 = 213;
    }
    else
    {
      v7 = (struct CVisual **)((char *)this + 272);
      inserted = CWindowBorder::Create((struct CWindowBorder **)this + 34);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v23 = 214;
      }
      else
      {
        v8 = (struct CVisual **)((char *)this + 280);
        inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 35);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v23 = 215;
        }
        else
        {
          v9 = (struct CVisual **)((char *)this + 288);
          inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 36);
          v3 = inserted;
          if ( inserted < 0 )
          {
            v23 = 216;
          }
          else
          {
            v10 = (struct CVisual **)((char *)this + 584);
            inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 73);
            v3 = inserted;
            if ( inserted < 0 )
            {
              v23 = 217;
            }
            else
            {
              v11 = (struct CVisual **)((char *)this + 592);
              inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 74);
              v3 = inserted;
              if ( inserted < 0 )
              {
                v23 = 218;
              }
              else
              {
                v24 = (struct CVisual **)((char *)this + 304);
                inserted = CTopLevelAtlasedRectsVisual::Create((struct CTopLevelAtlasedRectsVisual **)this + 38);
                v3 = inserted;
                if ( inserted < 0 )
                {
                  v23 = 219;
                }
                else
                {
                  inserted = VisualCollection::InsertRelative((CTopLevelWindow *)((char *)this + 32), *v4, 0LL, 0, v17);
                  v3 = inserted;
                  if ( inserted < 0 )
                  {
                    v23 = 221;
                  }
                  else
                  {
                    inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v4 + 32), *v7, 0LL, 0, v18);
                    v3 = inserted;
                    if ( inserted < 0 )
                    {
                      v23 = 222;
                    }
                    else
                    {
                      inserted = CWindowBorder::SetContent((struct CVisual **)*v7, *v8);
                      v3 = inserted;
                      if ( inserted < 0 )
                      {
                        v23 = 223;
                      }
                      else
                      {
                        inserted = VisualCollection::InsertRelative(
                                     (struct CVisual *)((char *)*v8 + 32),
                                     *v9,
                                     0LL,
                                     0,
                                     v19);
                        v3 = inserted;
                        if ( inserted < 0 )
                        {
                          v23 = 224;
                        }
                        else
                        {
                          inserted = VisualCollection::InsertRelative(
                                       (struct CVisual *)((char *)*v9 + 32),
                                       *v24,
                                       0LL,
                                       0,
                                       v20);
                          v3 = inserted;
                          if ( inserted < 0 )
                          {
                            v23 = 225;
                          }
                          else
                          {
                            inserted = VisualCollection::InsertRelative(
                                         (struct CVisual *)((char *)*v9 + 32),
                                         *v11,
                                         0LL,
                                         0,
                                         v21);
                            v3 = inserted;
                            if ( inserted < 0 )
                            {
                              v23 = 226;
                            }
                            else
                            {
                              inserted = VisualCollection::InsertRelative(
                                           (struct CVisual *)((char *)*v11 + 32),
                                           *v10,
                                           0LL,
                                           0,
                                           v22);
                              v3 = inserted;
                              if ( inserted >= 0 )
                              {
                                v12 = *v10;
                                if ( *((_DWORD *)*v10 + 36)
                                  || *((_DWORD *)v12 + 34)
                                  || *((_DWORD *)v12 + 35)
                                  || *((_DWORD *)v12 + 37) )
                                {
                                  v13 = *(_QWORD *)v12;
                                  *(_OWORD *)((char *)v12 + 136) = 0LL;
                                  (*(void (__fastcall **)(struct CVisual *, __int64))(v13 + 24))(v12, 2LL);
                                }
                                v14 = *v24;
                                if ( *((_DWORD *)*v24 + 36)
                                  || *((_DWORD *)v14 + 34)
                                  || *((_DWORD *)v14 + 35)
                                  || *((_DWORD *)v14 + 37) )
                                {
                                  v15 = *(_QWORD *)v14;
                                  *(_OWORD *)((char *)v14 + 136) = 0LL;
                                  (*(void (__fastcall **)(struct CVisual *, __int64))(v15 + 24))(v14, 2LL);
                                }
                                *((_DWORD *)*v11 + 50) = -1;
                                return v3;
                              }
                              v23 = 227;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v23, 0LL);
  }
  return v3;
}
