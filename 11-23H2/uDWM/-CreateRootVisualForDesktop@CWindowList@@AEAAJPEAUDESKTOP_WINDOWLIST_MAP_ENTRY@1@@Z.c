/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18002BA68
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18002B768 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18002BC30 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18002BD18 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180033F9C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(
        CWindowList *this,
        struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *a2)
{
  CBaseObject *v3; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  volatile signed __int32 *v7; // rsi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int inserted; // eax
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // rax
  CBaseObject *v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  bool v20; // [rsp+20h] [rbp-30h]
  CBaseObject *v21; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v24; // [rsp+90h] [rbp+40h] BYREF
  CBaseObject *v25; // [rsp+98h] [rbp+48h] BYREF

  v25 = 0LL;
  v21 = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v5 = CVisual::Create(&v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6B8u, 0LL);
LABEL_13:
    v7 = (volatile signed __int32 *)v25;
    goto LABEL_14;
  }
  v7 = (volatile signed __int32 *)v25;
  (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v25 + 112LL))(v25);
  v8 = CRenderDataVisual::Create(&v24);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6BEu, 0LL);
    v3 = v24;
    goto LABEL_14;
  }
  v3 = v24;
  if ( *((_QWORD *)this + 12) )
  {
    GetDesktopID(1LL, &v23);
    if ( *(_QWORD *)a2 == v23 )
    {
      v17 = *((_QWORD *)this + 12);
      v18 = v17 ? *(unsigned int *)(*(_QWORD *)(v17 + 16) + 24LL) : 0LL;
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v3 + 2)
                                                                                                 + 16LL)
                                                                                     + 16LL)
                                                                       + 288LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 16LL),
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 16LL) + 24LL),
              v18,
              (char *)this + 104);
      v6 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x6C8u, 0LL);
        goto LABEL_14;
      }
    }
  }
  v9 = CDesktopWindowReplacement::Create(&v22);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x6CEu, 0LL);
  }
  else
  {
    v10 = CMagnifierControl::Create((struct CVisual *)v7, v3, &v21);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6D3u, 0LL);
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(v7 + 8),
                   *((struct CVisual **)v21 + 4),
                   0LL,
                   0,
                   v20);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x6D8u, 0LL);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 64LL))(v7);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x6DBu, 0LL);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 24LL)
                                                  + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 6)
                                                                     + 24LL));
          v6 = v13;
          if ( v13 >= 0 )
          {
            *((_QWORD *)a2 + 1) = v7;
            _InterlockedIncrement(v7 + 2);
            v14 = v21;
            *((_QWORD *)a2 + 2) = v21;
            _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
            v3 = v24;
            *((_QWORD *)a2 + 3) = v24;
            if ( v3 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
              v3 = v24;
            }
            v15 = v22;
            *((_QWORD *)a2 + 4) = v22;
            if ( v15 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
              v3 = v24;
            }
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x6DDu, 0LL);
        }
      }
    }
  }
LABEL_14:
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  if ( v21 )
    CBaseObject::Release(v21);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v22 )
    CBaseObject::Release(v22);
  return v6;
}
