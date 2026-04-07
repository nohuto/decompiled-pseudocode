/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0
 * Callers:
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180017360 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180017430 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018410 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A720 (-ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800342D0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800347D0 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003CF00 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180041680 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180043580 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047370 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180047970 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180048EE0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x18004BF24 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18004CE90 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EBC10 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180009400 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180011C20 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18004BCE0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180051680 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800ACC7C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800C2C80 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C3648 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180106EA4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107100 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  __int64 v6; // rax
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  int SyncedWindowData; // eax
  char v17; // si
  CWindowData *v18; // r8
  int v19; // eax
  __int64 v20; // rbp
  CWindowData *v21; // rsi
  char v22; // al
  CBaseObject *v23; // rcx
  int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // r9
  unsigned int v27; // ecx
  CWindowIconic *v28; // rcx
  __int64 v29; // rax
  char v30; // si
  bool v31; // bp
  char v32; // r15
  char v33; // si
  unsigned __int8 v34; // si
  HWND v35; // rcx
  unsigned int PropW; // eax
  char v37; // al
  int v39; // eax
  int v40; // eax
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *i; // r14
  _QWORD *v43; // r14
  unsigned int v44; // eax
  unsigned int v45; // edx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  CWindowIconic *v49; // r14
  int v50; // eax
  int v51; // eax
  int v52; // eax
  CWindowData *v53; // [rsp+30h] [rbp-68h] BYREF
  CWindowData **Buffer; // [rsp+38h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v55; // [rsp+40h] [rbp-58h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 216);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 232);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 104LL))(a2, (char *)a3 + 248);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 120LL))(a2, (char *)a3 + 80);
  *((_DWORD *)a3 + 29) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 30) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 31) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_DWORD *)a3 + 33) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  *((_BYTE *)a3 + 672) ^= (*((_BYTE *)a3 + 672) ^ (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2)) & 1;
  *((_QWORD *)a3 + 17) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *((_OWORD *)a3 + 21) = *(_OWORD *)v6;
  *((_OWORD *)a3 + 22) = *(_OWORD *)(v6 + 16);
  *((_OWORD *)a3 + 23) = *(_OWORD *)(v6 + 32);
  *((_OWORD *)a3 + 24) = *(_OWORD *)(v6 + 48);
  *((_QWORD *)a3 + 50) = *(_QWORD *)(v6 + 64);
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  *((_BYTE *)a3 + 672) &= ~2u;
  *((_BYTE *)a3 + 672) |= 2 * (v7 & 1);
  *((_BYTE *)a3 + 408) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
  *((_BYTE *)a3 + 673) ^= (*((_BYTE *)a3 + 673) ^ (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 216LL))(a2)) & 1;
  *((_BYTE *)a3 + 676) ^= (*((_BYTE *)a3 + 676) ^ (8
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2))) & 8;
  *(_OWORD *)((char *)a3 + 168) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)a2 + 224LL))(
                                               a2,
                                               &v55);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  *((_BYTE *)a3 + 672) &= ~0x10u;
  *((_BYTE *)a3 + 672) |= 16 * (v8 & 1);
  *((_BYTE *)a3 + 674) ^= (*((_BYTE *)a3 + 674) ^ ((*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2) << 6)) & 0x40;
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  *((_BYTE *)a3 + 676) &= ~1u;
  *((_BYTE *)a3 + 676) |= v9 & 1;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 676) &= ~0x20u;
  *((_BYTE *)a3 + 676) |= 32 * (v10 & 1);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
  *((_BYTE *)a3 + 676) &= ~0x40u;
  *((_BYTE *)a3 + 676) |= v11 < 0 ? 0x40 : 0;
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
  *((_BYTE *)a3 + 676) &= ~0x80u;
  *((_BYTE *)a3 + 676) |= (v12 & 0x40) != 0 ? 0x80 : 0;
  *((_BYTE *)a3 + 677) = (((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2) & 0x1000) != 0) | *((_BYTE *)a3 + 677) & 0xFE;
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 392LL))(a2);
  *((_BYTE *)a3 + 677) &= ~4u;
  *((_BYTE *)a3 + 677) |= 4 * (v13 & 1);
  *((_DWORD *)a3 + 46) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 400LL))(a2);
  *((_DWORD *)a3 + 47) = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 408LL))(a2, 0LL);
  *((_DWORD *)a3 + 48) = (*(__int64 (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 408LL))(a2, 1LL);
  *((_DWORD *)a3 + 49) = (*(__int64 (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 408LL))(a2, 2LL);
  *((_BYTE *)a3 + 678) ^= (*((_BYTE *)a3 + 678) ^ (4
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 416LL))(a2))) & 4;
  *((_DWORD *)a3 + 51) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 424LL))(a2);
  v14 = *((_BYTE *)a3 + 676);
  if ( (v14 & 9) == 0 )
    *((_BYTE *)a3 + 676) = v14 & 0xEF;
  *((_BYTE *)a3 + 675) ^= (*((_BYTE *)a3 + 675) ^ (16
                                                 * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2))) & 0x10;
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 288LL))(a2);
  *((_BYTE *)a3 + 676) &= ~4u;
  *((_BYTE *)a3 + 676) |= 4 * (v15 & 1);
  v55 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v53 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v53);
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1907u, 0LL);
    goto LABEL_20;
  }
  v17 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  v18 = v53;
  if ( v53 )
  {
    v19 = *((_DWORD *)v53 + 33);
    if ( v19 < 8 || (v39 = v19 - 8) != 0 && (v40 = v39 - 1) != 0 && (unsigned int)(v40 - 1) > 1 )
    {
      if ( *((char *)v53 + 676) < 0 )
      {
        if ( !GetPropW(*((HWND *)v53 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
          goto LABEL_20;
        v18 = v53;
      }
      if ( (*((_BYTE *)v18 + 674) & 2) != 0 )
      {
        if ( v17 )
          goto LABEL_9;
        DynArray<CWindowData *,0>::Remove((__int64 *)this + 62, &v53);
      }
      else
      {
        if ( !v17 )
          goto LABEL_9;
        v43 = (_QWORD *)((char *)this + 496);
        v44 = *((_DWORD *)this + 130);
        v45 = v44 + 1;
        if ( v44 + 1 >= v44 )
        {
          if ( v45 > *((_DWORD *)this + 129) )
          {
            Buffer = &v53;
            v46 = DynArrayImpl<0>::Grow((char **)this + 62, 8u, 1, 0, (unsigned __int64 *)&Buffer);
            if ( v46 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xC0u, 0LL);
            else
              *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 130))++) + *v43) = *Buffer;
          }
          else
          {
            *(_QWORD *)(*v43 + 8LL * *((unsigned int *)this + 130)) = v18;
            *((_DWORD *)this + 130) = v45;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
      }
      v18 = v53;
LABEL_9:
      *((_BYTE *)v18 + 674) ^= (*((_BYTE *)v18 + 674) ^ (2 * v17)) & 2;
      v20 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
      v21 = v53;
      v22 = *((_BYTE *)v53 + 674);
      if ( (v22 & 2) != 0 )
      {
LABEL_19:
        v29 = *(_QWORD *)(v20 + 96);
        if ( v29 && *(CWindowData **)(v29 + 72) == v21 )
        {
          *(_WORD *)(v20 + 89) = 0;
          *(_BYTE *)(v20 + 88) = 0;
          v51 = CIconicBitmapRegistry::RequestBitmap(
                  (CIconicBitmapRegistry *)v20,
                  (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL,
                  0);
          if ( v51 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x39Cu, 0LL);
          CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v20, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL);
          v52 = CWindowIconic::OnRepresentationTypeUpdated(*(CWindowIconic **)(v20 + 96));
          if ( v52 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x39Eu, 0LL);
        }
        goto LABEL_20;
      }
      *((_BYTE *)v53 + 674) = v22 & 0xEB;
      v23 = (CBaseObject *)*((_QWORD *)v21 + 54);
      if ( v23 )
        CBaseObject::Release(v23);
      *((_QWORD *)v21 + 54) = 0LL;
      v24 = CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v20, v21, 0);
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x38Fu, 0LL);
      if ( (unsigned __int64)v21 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        *(_BYTE *)(v20 + 88) = 0;
        v49 = *(CWindowIconic **)(v20 + 96);
      }
      else
      {
        v25 = 0;
        v26 = *(_QWORD *)(v20 + 16);
        v27 = *(_DWORD *)(v20 + 40);
        if ( v27 )
        {
          do
          {
            if ( v21 == *(CWindowData **)(v26 + 8LL * v25) )
              break;
            ++v25;
          }
          while ( v25 < v27 );
        }
        if ( v25 < v27 )
        {
          if ( v25 < v27 - 1 )
          {
            do
            {
              v47 = v25 + 1;
              *(_QWORD *)(v26 + 8LL * v25++) = *(_QWORD *)(v26 + 8 * v47);
              v27 = *(_DWORD *)(v20 + 40);
            }
            while ( (unsigned int)v47 < v27 - 1 );
          }
          *(_DWORD *)(v20 + 40) = v27 - 1;
        }
        else if ( !*((_QWORD *)v21 + 54) )
        {
          goto LABEL_18;
        }
        CWindowData::SetIconicBitmap(v21, 0LL);
        v49 = (CWindowIconic *)*((_QWORD *)v21 + 61);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp_EtwEventWriteTransfer(v48, &UdwmManageIconicThumbnail_Info, 2LL);
      }
      if ( v49 )
        CWindowIconic::SetBitmap(v49, 0LL, 0, 1);
LABEL_18:
      v28 = (CWindowIconic *)*((_QWORD *)v21 + 61);
      if ( v28 )
      {
        v50 = CWindowIconic::OnRepresentationTypeUpdated(v28);
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x393u, 0LL);
          goto LABEL_20;
        }
      }
      goto LABEL_19;
    }
  }
LABEL_20:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v30 = *((_BYTE *)a3 + 673);
  v31 = (*((_DWORD *)a3 + 29) & 0x11000000) == 0x11000000 && *((_QWORD *)a3 + 4);
  v32 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  *((_BYTE *)a3 + 673) &= ~2u;
  *((_BYTE *)a3 + 673) |= 2 * v31;
  if ( v31 )
  {
    v33 = v30 & 2;
    if ( !v33 )
    {
      CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 424), (__int64)a3);
      goto LABEL_25;
    }
  }
  else
  {
    v33 = v30 & 2;
  }
  if ( v33 && !v31 )
  {
    Buffer = (CWindowData **)a3;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 424), &Buffer);
  }
LABEL_25:
  v34 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 424)) == 0;
  if ( v32 != v34 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)a3 + 17));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v34;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[42].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v34, 0LL);
      }
    }
  }
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 216);
  v35 = (HWND)*((_QWORD *)a3 + 5);
  if ( v35 )
    PropW = (unsigned int)GetPropW(v35, (LPCWSTR)0xA914);
  else
    PropW = 0;
  *((_DWORD *)a3 + 103) = PropW;
  v37 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 352LL))(a2);
  *((_BYTE *)a3 + 676) &= ~2u;
  *((_BYTE *)a3 + 676) |= 2 * (v37 & 1);
  return 0LL;
}
