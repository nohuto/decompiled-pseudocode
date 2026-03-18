/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x180138B2C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1801351A4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x180138DE8 (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180138F1C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        void *a4,
        size_t Size)
{
  int v6; // r8d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  SIZE_T v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  void *v16; // rbp
  int v17; // r13d
  int v18; // ebx
  __int64 *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  void *v24; // rax
  int v25; // esi
  unsigned int v26; // ebx
  unsigned int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-48h]
  struct CResourceTable *v30; // [rsp+78h] [rbp+10h] BYREF
  void *Src; // [rsp+88h] [rbp+20h]

  Src = a4;
  v30 = a2;
  v6 = *((_DWORD *)a3 + 4);
  v30 = 0LL;
  v8 = 0LL;
  if ( v6 == 1 || v6 == 2 || v6 == 3 )
  {
LABEL_2:
    v9 = 12LL;
    goto LABEL_3;
  }
  if ( v6 != 4 )
  {
    if ( v6 != 5 )
    {
      v26 = -2147024809;
      v29 = 316;
      goto LABEL_21;
    }
    goto LABEL_2;
  }
  v9 = 4LL;
LABEL_3:
  v11 = v9;
  v10 = *((unsigned int *)a3 + 2) * v9;
  if ( is_mul_ok(*((unsigned int *)a3 + 2), v11) )
  {
    v12 = (unsigned int)Size;
    if ( v10 == (unsigned int)Size )
    {
      CInteraction::TraceUpdatedConfiguration(this, *((unsigned int *)a3 + 3));
      v13 = *((_QWORD *)this + 3);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
      v14 = *(_QWORD *)(v13 + 640);
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v8 = *(_QWORD *)(v13 + 640);
        if ( v8 )
        {
          v15 = *((_DWORD *)a3 + 4);
          v16 = 0LL;
          v17 = *((_DWORD *)a3 + 2);
          v18 = *((_DWORD *)a3 + 3);
          LODWORD(v30) = v15;
          v19 = (__int64 *)operator new(0x48uLL);
          v20 = v19;
          if ( !v19 )
          {
            v26 = -2147024882;
            v25 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2DFu, 0LL);
LABEL_24:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x14Du, 0LL);
            goto LABEL_16;
          }
          memset_0(v19, 0, 0x48uLL);
          *(_DWORD *)v20 = 7;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20 + 1);
          if ( (CInteraction *)v20[2] != this )
          {
            (*(void (__fastcall **)(CInteraction *))(*(_QWORD *)this + 8LL))(this);
            v22 = v20[2];
            v20[2] = (__int64)this;
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          v23 = (int)v30;
          *((_DWORD *)v20 + 12) = v17;
          *((_DWORD *)v20 + 10) = v18;
          *((_DWORD *)v20 + 11) = v23;
          v20[7] = 0LL;
          if ( (_DWORD)Size )
          {
            v24 = operator new[](v12);
            v16 = v24;
            if ( !v24 )
            {
              v25 = -2147024882;
              v28 = 748;
              goto LABEL_35;
            }
            memcpy_0(v24, Src, v12);
            v20[7] = (__int64)v16;
          }
          v25 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v22, v21, v20);
          if ( v25 >= 0 )
            goto LABEL_15;
          v28 = 760;
LABEL_35:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, v28, 0LL);
          CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v20);
          if ( v16 )
            operator delete(v16);
LABEL_15:
          v26 = v25;
          if ( v25 >= 0 )
            goto LABEL_16;
          goto LABEL_24;
        }
      }
      else
      {
        v8 = 0LL;
      }
      v26 = -2147467259;
      v29 = 331;
    }
    else
    {
      v26 = -2003303421;
      v29 = 323;
    }
  }
  else
  {
    v26 = -2147024362;
    v29 = 319;
  }
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, v29, 0LL);
LABEL_16:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v26;
}
