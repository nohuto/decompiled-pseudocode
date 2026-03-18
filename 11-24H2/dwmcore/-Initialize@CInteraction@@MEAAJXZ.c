/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x1800DA890
 * Callers:
 *     ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800DAAC0 (-Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x18008D97C (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800EEA64 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x180207438 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  unsigned int v3; // ebp
  CInteractionContextWrapper *v4; // rax
  struct IInteractionContextWrapper *v5; // r14
  unsigned __int64 v6; // rcx
  CInteractionContextWrapper *v7; // rax
  CInteractionContextWrapper *v8; // rax
  struct IInteractionContextWrapper *v9; // rbx
  unsigned __int64 v10; // rcx
  CInteractionContextWrapper *v11; // rax
  CInteractionContextWrapper *v12; // rax
  struct IInteractionContextWrapper *v13; // rdi
  unsigned __int64 v14; // rcx
  CInteractionContextWrapper *v15; // rax
  CInteractionContextWrapper *v16; // rax
  struct IInteractionContextWrapper *v17; // rsi
  int v18; // eax

  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( v2 && (v4 = CInteractionContextWrapper::CInteractionContextWrapper(v2), (v5 = v4) != 0LL) )
  {
    (**(void (__fastcall ***)(CInteractionContextWrapper *))v4)(v4);
    v7 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v6);
    if ( v7 && (v8 = CInteractionContextWrapper::CInteractionContextWrapper(v7), (v9 = v8) != 0LL) )
    {
      (**(void (__fastcall ***)(CInteractionContextWrapper *))v8)(v8);
      v11 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v10);
      if ( v11 && (v12 = CInteractionContextWrapper::CInteractionContextWrapper(v11), (v13 = v12) != 0LL) )
      {
        (**(void (__fastcall ***)(CInteractionContextWrapper *))v12)(v12);
        v15 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v14);
        if ( v15 && (v16 = CInteractionContextWrapper::CInteractionContextWrapper(v15), (v17 = v16) != 0LL) )
        {
          (**(void (__fastcall ***)(CInteractionContextWrapper *))v16)(v16);
          v18 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 360), v5, v9, v13, v17, 0);
          v3 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x74u, 0LL);
          (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v17 + 8LL))(v17);
        }
        else
        {
          v3 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x72u, 0LL);
        }
        (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v13 + 8LL))(v13);
      }
      else
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x6Fu, 0LL);
      }
      (*(void (__fastcall **)(struct IInteractionContextWrapper *))(*(_QWORD *)v9 + 8LL))(v9);
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
