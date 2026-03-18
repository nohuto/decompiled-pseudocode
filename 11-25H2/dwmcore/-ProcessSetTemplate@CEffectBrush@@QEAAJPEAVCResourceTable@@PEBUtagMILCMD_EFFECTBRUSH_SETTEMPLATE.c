/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18013226C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180071124 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180132E3C (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  unsigned int v3; // r9d
  __int64 v6; // rax
  struct CResource *v7; // rsi
  unsigned int v8; // ebx
  int v10; // r9d
  int EffectInstance; // eax
  unsigned int v12; // esi
  unsigned int v13; // r14d
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rcx
  bool (__fastcall *v18)(__int64, int); // rax
  bool v19; // al
  unsigned int v20; // eax
  int v21; // ebp
  unsigned int v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( v3
    && v3 < *((_DWORD *)a2 + 7)
    && (v6 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v6))
    && (v16 = v6 + *((_DWORD *)a2 + 6) * v3, (v17 = *(_QWORD *)(v16 + 8)) != 0)
    && ((v18 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v17 + 64LL), v18 == CKeyframeAnimation::IsOfType)
      ? (v19 = CKeyframeAnimation::IsOfType(v17, 28))
      : v18 != CVisual::IsOfType
      ? (v18 != CSharedSection::IsOfType
       ? (v19 = v18(v17, 28))
       : (v19 = CSharedSection::IsOfType(v17, 28)))
      : (v19 = CVisual::IsOfType(v17, 28)),
        v19) )
  {
    v7 = *(struct CResource **)(v16 + 8);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( *((_QWORD *)this + 14) )
    {
      v8 = -2003303422;
      v10 = -2003303422;
      v22 = 189;
    }
    else
    {
      EffectInstance = CResource::RegisterNotifier(this, v7);
      v8 = EffectInstance;
      if ( EffectInstance < 0 )
      {
        v22 = 194;
      }
      else
      {
        *((_QWORD *)this + 14) = v7;
        v12 = 0;
        v13 = *((_DWORD *)a3 + 3);
        while ( v12 < v13 )
        {
          v23 = 0LL;
          v14 = *((_DWORD *)this + 40);
          v15 = v14 + 1;
          if ( v14 + 1 < v14 )
          {
            v8 = -2147024362;
            v20 = 181;
            v21 = -2147024362;
LABEL_32:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v20, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xC9u, 0LL);
            return v8;
          }
          if ( v15 > *((_DWORD *)this + 39) )
          {
            v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 136, 8, 1, &v23);
            v8 = v21;
            if ( v21 < 0 )
            {
              v20 = 192;
              goto LABEL_32;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v14) = 0LL;
            *((_DWORD *)this + 40) = v15;
          }
          ++v12;
        }
        EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
        v8 = EffectInstance;
        if ( EffectInstance >= 0 )
          goto LABEL_7;
        v22 = 204;
      }
      v10 = EffectInstance;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v22, 0LL);
  }
  else
  {
    CEffectBrush::ReleaseResources(this);
LABEL_7:
    v8 = 0;
    (*(void (__fastcall **)(CEffectBrush *, _QWORD, CEffectBrush *))(*(_QWORD *)this + 80LL))(this, 0LL, this);
  }
  return v8;
}
