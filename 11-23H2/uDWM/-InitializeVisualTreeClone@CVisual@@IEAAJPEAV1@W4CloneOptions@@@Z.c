/*
 * XREFs of ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0
 * Callers:
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800021A8 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180004B90 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000660C (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006AD0 (-CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180006DFC (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000706C (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000BD30 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CDCompositionInteropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B33E0 (-CloneVisualTree@CDCompositionInteropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800D8B60 (-CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x180105340 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18010D490 (-CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::InitializeVisualTreeClone(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rdi
  char v8; // bp
  char v9; // al
  char v10; // dl
  unsigned int v11; // eax
  double v12; // xmm5_8
  double v13; // xmm4_8
  char v14; // r8
  char v15; // cl
  _BYTE *v17; // rcx
  int v18; // eax
  int inserted; // eax
  CBaseObject *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // [rsp+20h] [rbp-48h]
  CBaseObject *v25; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  LODWORD(v7) = -1;
  v8 = 0;
LABEL_2:
  v25 = 0LL;
  while ( 1 )
  {
    v9 = v8;
    v10 = v8;
    if ( !v8 )
      v9 = 1;
    v8 = v9;
    v11 = v7 + 1;
    v7 = 0LL;
    if ( v10 )
      v7 = v11;
    if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 72) )
      break;
    v17 = *(_BYTE **)(*(_QWORD *)(a1 + 48) + 8 * v7);
    if ( (v17[92] & 8) == 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_BYTE *, CBaseObject **, _QWORD))(*(_QWORD *)v17 + 160LL))(v17, &v25, a3);
      v6 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x472u, 0LL);
        goto LABEL_17;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(a2 + 4), v25, 0LL, 0, v24);
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x474u, 0LL);
        goto LABEL_17;
      }
      v20 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25 + 2, 0xFFFFFFFF) == 1 && v20 )
          (**(void (__fastcall ***)(CBaseObject *, __int64))v20)(v20, 1LL);
        goto LABEL_2;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 120) != *((_DWORD *)a2 + 30) || *(_DWORD *)(a1 + 124) != *((_DWORD *)a2 + 31) )
  {
    a2[15] = *(_QWORD *)(a1 + 120);
    (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 24))(a2, 8LL);
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 104))(a2, a1 + 128);
  v12 = *(double *)(a1 + 176);
  v13 = *(double *)(a1 + 184);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a2 + 22) - (float)v12) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a2 + 23) - (float)v13) & _xmm) > 0.0000011920929 )
  {
    v22 = *a2;
    *((double *)a2 + 22) = v12;
    *((double *)a2 + 23) = v13;
    (*(void (__fastcall **)(__int64 *, __int64))(v22 + 24))(a2, 16LL);
  }
  v14 = *((_BYTE *)a2 + 92);
  v15 = *(_BYTE *)(a1 + 92) & 1;
  if ( v15 != (v14 & 1) )
  {
    v23 = *a2;
    *((_BYTE *)a2 + 92) = v15 | v14 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v23 + 24))(a2, 16LL);
  }
  if ( *(_DWORD *)(a1 + 204) )
  {
    v21 = *a2;
    *(_OWORD *)((char *)a2 + 204) = *(_OWORD *)(a1 + 204);
    *(_OWORD *)((char *)a2 + 220) = *(_OWORD *)(a1 + 220);
    *(__int64 *)((char *)a2 + 236) = *(_QWORD *)(a1 + 236);
    (*(void (__fastcall **)(__int64 *, __int64))(v21 + 24))(a2, 64LL);
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 112))(a2);
LABEL_17:
  if ( v25 )
    CBaseObject::Release(v25);
  return v6;
}
