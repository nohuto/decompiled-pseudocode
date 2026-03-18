/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x1801310CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z @ 0x18020D890 (-IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  struct CResource *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  struct CResource *v12; // rdx
  unsigned int v13; // ebx
  const struct CResource *v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 14) )
  {
    v6 = *((_DWORD *)a3 + 3);
    if ( v6 && v6 < *((_DWORD *)a2 + 7) && (v7 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v6 + v7)) )
    {
      v15 = *(const struct CResource **)(*((_DWORD *)a2 + 6) * v6 + v7 + 8);
      v8 = v15;
      if ( v15 && !CEffectBrush::IsValidInputResource(v15) )
      {
        v16 = 270;
        goto LABEL_17;
      }
    }
    else
    {
      v8 = 0LL;
    }
    v9 = *((unsigned int *)a3 + 2);
    if ( (unsigned int)v9 < *((_DWORD *)this + 40) )
    {
      v10 = *((_QWORD *)this + 17);
      v11 = (unsigned int)v9;
      v12 = *(struct CResource **)(v10 + 8 * v9);
      if ( v12 )
      {
        CResource::UnRegisterNotifierInternal(this, v12);
        *(_QWORD *)(v10 + 8 * v11) = 0LL;
      }
      if ( v8 )
      {
        *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)a3 + 2)) = v8;
        CResource::RegisterNotifier(this, v8);
      }
      (*(void (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)this + 80LL))(this, 14LL);
      return 0;
    }
    v16 = 275;
LABEL_17:
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v16, 0LL);
    return v13;
  }
  return 0;
}
