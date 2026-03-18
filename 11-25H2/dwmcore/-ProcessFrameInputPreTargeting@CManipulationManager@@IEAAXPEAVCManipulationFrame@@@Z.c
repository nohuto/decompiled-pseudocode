/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AEC44
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE308 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??2CInteractionTrackerBindingManager@@SAPEAX_K@Z @ 0x18000CEE4 (--2CInteractionTrackerBindingManager@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800F9EF4 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800FAE6C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1800FB438 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800FB9A4 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1800FBAB4 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801AF420 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801AF4A8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801AF804 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801E4320 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180216418 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  const struct DEVICE_INFO *v4; // rax
  unsigned int v5; // r12d
  const struct DEVICE_INFO *v6; // r15
  __int64 v7; // r9
  bool v8; // r14
  unsigned int v9; // r13d
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  __int128 v15; // xmm0
  unsigned __int64 *v16; // rdx
  __int64 v17; // r9
  struct CInteraction *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  CManipulationContext **v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // eax
  char v25; // r8
  unsigned int v26; // eax
  char v27; // r8
  CManipulationContext *v28; // rcx
  int v29; // ecx
  int v30; // ecx
  CManipulationContext *v31; // rax
  CManipulationContext *v32; // rax
  __int64 v33; // rdx
  bool IsMousewheelFrame; // [rsp+118h] [rbp+10h]
  struct CInteraction *v35; // [rsp+120h] [rbp+18h] BYREF
  __int64 v36; // [rsp+128h] [rbp+20h] BYREF

  v4 = CPointerDeviceCache::Update(a2);
  v5 = *((_DWORD *)a2 + 92);
  v6 = v4;
  v7 = 256LL;
  if ( v5 != 5 )
    v7 = 248LL;
  *(_QWORD *)((char *)this + v7) = *((_QWORD *)a2 + 56);
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  v8 = IsMousewheelFrame;
  v9 = 0;
  if ( *((_DWORD *)a2 + 4) )
  {
    while ( 1 )
    {
      v10 = 248LL * v9;
      if ( v5 == 5 )
      {
        if ( *((_BYTE *)v6 + 48) )
          break;
      }
LABEL_10:
      v12 = *((_QWORD *)this + 35);
      if ( v12 )
        v13 = *((_QWORD *)this + 36) * (*(_QWORD *)((char *)a2 + v10 + 448) / v12)
            + *((_QWORD *)this + 36) * (*(_QWORD *)((char *)a2 + v10 + 448) % v12) / v12;
      else
        v13 = 1000LL * *(unsigned int *)((char *)a2 + v10 + 432);
      *((_QWORD *)this + 37) = v13;
      if ( v5 == 3 )
        *((_QWORD *)this + 38) = v13;
      v14 = *(_DWORD *)((char *)a2 + v10 + 380);
      if ( (v14 & 0x20002) == 0x20002 && (v14 & 4) == 0
        || (v14 & 0x20000) != 0 && (v14 & 6) == 0
        || (v14 & 0x810000) != 0
        || v8 )
      {
        v15 = *((_OWORD *)a2 + 2);
        v35 = 0LL;
        v36 = v15;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
        v16 = (unsigned __int64 *)&v36;
        if ( (*(_DWORD *)((_BYTE *)a2 + v10 + 380) & 0x800000) != 0 )
          v16 = 0LL;
        CInteraction::ResolveInteractionHandle(*(_DWORD *)((char *)a2 + v10 + 560), v16, &v35);
        v18 = v35;
        v19 = 0LL;
        if ( v35 )
        {
          v20 = *(unsigned int *)((char *)a2 + v10 + 380);
          if ( (v20 & 0x10000) != 0 || v8 )
          {
            CManipulationManager::s_needsStopAndEndInertia = 0;
            LOBYTE(v19) = !v8;
            v26 = ConvertToInputType(v5, v20, v19, v17);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v18,
              *(_DWORD *)((char *)a2 + v10 + 372),
              v26,
              0,
              v27,
              v27);
            if ( CManipulationManager::s_needsStopAndEndInertia )
            {
              v33 = *(unsigned int *)((char *)a2 + v10 + 372);
              CManipulationManager::s_needsStopAndEndInertia = 0;
              StopAndEndInertia(0LL, v33);
            }
            if ( (*((_BYTE *)a2 + v10 + 380) & 1) == 0 )
            {
              v28 = (CManipulationContext *)*((_QWORD *)this + 30);
              if ( v28 )
                CManipulationContext::OnContactHoverDepart(v28, *(_DWORD *)((char *)a2 + v10 + 372));
            }
          }
          else if ( (v20 & 0x800000) != 0 )
          {
            v24 = ConvertToInputType(v5, v20, 0LL, v17);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v18,
              *(_DWORD *)((char *)a2 + v10 + 372),
              v24,
              v25,
              v25,
              v25);
          }
          else
          {
            v21 = (CManipulationContext **)((char *)this + 240);
            if ( *((_QWORD *)this + 30) )
              goto LABEL_28;
            v31 = (CManipulationContext *)CInteractionTrackerBindingManager::operator new();
            v32 = v31 ? CManipulationContext::CManipulationContext(v31, *((struct CComposition **)this + 2)) : 0LL;
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
              (_QWORD *)this + 30,
              (void (__fastcall ***)(_QWORD))v32);
            if ( *v21 )
              CManipulationContext::Initialize(*v21, 0, 0);
            if ( *v21 )
            {
LABEL_28:
              v22 = ConvertToInputType(
                      *(unsigned int *)((char *)a2 + v10 + 368),
                      *(unsigned int *)((char *)a2 + v10 + 380),
                      0LL,
                      v17);
              CManipulationContext::OnHoverContact(*v21, v18, *(unsigned int *)((char *)a2 + v10 + 372), v22);
            }
            v8 = IsMousewheelFrame;
          }
          if ( v18 )
            (*(void (__fastcall **)(struct CInteraction *, __int64, _QWORD))(*(_QWORD *)v18 + 16LL))(v18, v23, 0LL);
        }
      }
      if ( ++v9 >= *((_DWORD *)a2 + 4) )
        return;
    }
    v11 = *(_QWORD *)((char *)a2 + v10 + 424);
    if ( *((_DWORD *)v6 + 8) != 2 )
    {
      if ( *((_DWORD *)v6 + 8) == 3 )
      {
        *(_DWORD *)((char *)a2 + v10 + 424) = *((_DWORD *)v6 + 6) - v11;
        v29 = *((_DWORD *)v6 + 7);
        v11 >>= 32;
      }
      else
      {
        if ( *((_DWORD *)v6 + 8) != 4 )
        {
LABEL_9:
          *(_QWORD *)((char *)a2 + v10 + 408) = *(_QWORD *)((char *)a2 + v10 + 424);
          goto LABEL_10;
        }
        *(_DWORD *)((char *)a2 + v10 + 424) = HIDWORD(v11);
        v29 = *((_DWORD *)v6 + 6);
      }
      *(_DWORD *)((char *)a2 + v10 + 428) = v29 - v11;
      goto LABEL_9;
    }
    v30 = *((_DWORD *)v6 + 7) - HIDWORD(v11);
    *(_DWORD *)((char *)a2 + v10 + 428) = v11;
    *(_DWORD *)((char *)a2 + v10 + 424) = v30;
    goto LABEL_9;
  }
}
