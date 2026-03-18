/*
 * XREFs of ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x18006F60C
 * Callers:
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x180048AA0 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18006EF44 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x18022D888 (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateFromVisualSurface(
        __int64 *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        int a6)
{
  unsigned int v6; // esi
  char v7; // bp
  __int64 v9; // r14
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm6_4
  void (__fastcall *v18)(__int64 *, _QWORD, _QWORD); // rax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  float v23[28]; // [rsp+30h] [rbp-78h]

  v6 = 0;
  v7 = 0;
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 72);
  else
    v9 = 0LL;
  v10 = *a3;
  v11 = a3[1];
  v12 = *a3 + *a4;
  v13 = v11 + a4[1];
  v23[0] = *a3;
  v23[1] = v11;
  v23[2] = v12;
  v23[3] = v13;
  v14 = (float)(int)floorf_0(*a5 + 0.5);
  v15 = floorf_0(a5[1] + 0.5);
  v16 = a1[17];
  v17 = (float)(int)v15;
  if ( v16 != v9 )
  {
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))(*a1 + 192))(a1);
    v20 = *a1;
    *((_WORD *)a1 + 1028) = 0;
    a1[17] = v9;
    v21 = (*(__int64 (__fastcall **)(__int64 *))(v20 + 184))(a1);
    v6 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x220u, 0LL);
      return v6;
    }
    v22 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 224))(a1);
    v6 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x222u, 0LL);
      return v6;
    }
    v7 = 1;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 24) - v10) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 25) - v11) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 26) - v12) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 27) - v13) & _xmm) > 0.0000011920929 )
  {
    v7 = 1;
    *((_OWORD *)a1 + 6) = *(_OWORD *)v23;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 30) - v14) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 31) - v17) & _xmm) > 0.0000011920929 )
  {
    *((float *)a1 + 30) = v14;
    v7 = 1;
    *((float *)a1 + 31) = v17;
  }
  if ( *((_DWORD *)a1 + 42) == a6 )
  {
    if ( !v7 )
      return v6;
  }
  else
  {
    *((_DWORD *)a1 + 42) = a6;
  }
  v18 = *(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 80);
  if ( (char *)v18 == (char *)CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  else
    v18(a1, 0LL, 0LL);
  return v6;
}
