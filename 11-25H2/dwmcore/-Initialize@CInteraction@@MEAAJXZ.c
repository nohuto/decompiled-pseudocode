/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x180110150
 * Callers:
 *     ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x180110380 (-Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800FBF74 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800FC290 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x180132494 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  unsigned int v3; // ebp
  CInteractionContextWrapper *v4; // rax
  struct IInteractionContextWrapper *v5; // r14
  CInteractionContextWrapper *v6; // rax
  CInteractionContextWrapper *v7; // rax
  struct IInteractionContextWrapper *v8; // rbx
  CInteractionContextWrapper *v9; // rax
  CInteractionContextWrapper *v10; // rax
  struct IInteractionContextWrapper *v11; // rdi
  CInteractionContextWrapper *v12; // rax
  CInteractionContextWrapper *v13; // rax
  struct IInteractionContextWrapper *v14; // rsi
  int v15; // eax

  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v2 && (v4 = CInteractionContextWrapper::CInteractionContextWrapper(v2), (v5 = v4) != 0LL) )
  {
    (**(void (__fastcall ***)(CInteractionContextWrapper *))v4)(v4);
    v6 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
    if ( v6 && (v7 = CInteractionContextWrapper::CInteractionContextWrapper(v6), (v8 = v7) != 0LL) )
    {
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v7)(v7);
      v9 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
      if ( v9 && (v10 = CInteractionContextWrapper::CInteractionContextWrapper(v9), (v11 = v10) != 0LL) )
      {
        (**(void (__fastcall ***)(CInteractionContextWrapper *))v10)(v10);
        v12 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
        if ( v12 && (v13 = CInteractionContextWrapper::CInteractionContextWrapper(v12), (v14 = v13) != 0LL) )
        {
          (**(void (__fastcall ***)(CInteractionContextWrapper *))v13)(v13);
          v15 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 360), v5, v8, v11, v14, 0);
          v3 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x74u, 0LL);
          (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v14 + 8LL))(v14);
        }
        else
        {
          v3 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x72u, 0LL);
        }
        (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      else
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x6Fu, 0LL);
      }
      (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x6Cu, 0LL);
    }
    (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x69u, 0LL);
  }
  return v3;
}
