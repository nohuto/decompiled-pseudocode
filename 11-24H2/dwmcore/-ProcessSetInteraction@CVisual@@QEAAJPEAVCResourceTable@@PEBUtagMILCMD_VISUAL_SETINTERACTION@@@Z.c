/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x1800951BC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180095328 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     McTemplateU0qqqxxpp_EventWriteTransfer @ 0x18021E7B8 (McTemplateU0qqqxxpp_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETINTERACTION *a3)
{
  unsigned int v3; // r9d
  struct CInteraction *v4; // rbx
  struct CInteraction *v5; // rsi
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rcx
  bool (__fastcall *v12)(__int64, int); // rax
  bool v13; // al
  int v14; // eax
  unsigned int v15; // edi

  v3 = *((_DWORD *)a3 + 2);
  LOBYTE(v4) = 0;
  v5 = 0LL;
  if ( v3 )
  {
    if ( (unsigned int)HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v3)
      && (v10 = *((_QWORD *)a2 + 5) + (unsigned int)(*((_DWORD *)a2 + 6) * v9), (v11 = *(_QWORD *)(v10 + 8)) != 0)
      && ((v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 64LL), v12 != CKeyframeAnimation::IsOfType)
        ? (v12 != CVisual::IsOfType
         ? (v12 != CSharedSection::IsOfType
          ? (v13 = v12(v11, 89))
          : (v13 = CSharedSection::IsOfType(v11, 89)))
         : (v13 = CVisual::IsOfType(v11, 89)))
        : (v13 = CKeyframeAnimation::IsOfType(v11, 89)),
          v13) )
    {
      v4 = *(struct CInteraction **)(v10 + 8);
    }
    else
    {
      v4 = 0LL;
    }
    v5 = v4;
  }
  v14 = CVisual::SetInteraction(this, v5);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xD32u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
  {
    McTemplateU0qqqxxpp_EventWriteTransfer(
      *((_DWORD *)a3 + 2),
      0,
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      (char)v4,
      (char)v5);
  }
  return v15;
}
