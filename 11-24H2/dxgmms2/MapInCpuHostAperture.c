/*
 * XREFs of MapInCpuHostAperture @ 0x14011493C
 * Callers:
 *     ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x1400D95D8 (-MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004C4B0 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B1FBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1400C00E0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAUVIDMM_PHYSICAL_ALLOC@@_K2@Z @ 0x1400C0390 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAUVIDMM_PHYSICAL_AL.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1400CE2A0 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140100720 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401027B4 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 */

__int64 __fastcall MapInCpuHostAperture(__int64 a1, __int64 a2, _BYTE ***a3)
{
  VIDMM_CPU_HOST_APERTURE *v3; // r14
  __int64 v4; // rdi
  char v5; // r13
  _BYTE *v6; // rbx
  __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 *v13; // r15
  unsigned __int64 *v14; // r12
  char v15; // al
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  PMDL v19; // r12
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE ***v23; // rdx
  PMDL P; // [rsp+50h] [rbp-58h]
  char v27; // [rsp+B8h] [rbp+10h]
  char v28; // [rsp+C0h] [rbp+18h]
  _BYTE **v29; // [rsp+C8h] [rbp+20h]

  v3 = *(VIDMM_CPU_HOST_APERTURE **)(a2 + 552);
  v27 = 0;
  LODWORD(v4) = 0;
  v5 = 0;
  v29 = *a3;
  v28 = 0;
  v6 = **a3;
  v7 = *(_QWORD *)v6;
  v8 = *(__int64 **)(*(_QWORD *)v6 + 192LL);
  if ( !v8 || *((_DWORD *)v8 + 8) == -1 )
  {
    Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline();
    v13 = (unsigned __int64 *)(v7 + 16);
    v14 = (unsigned __int64 *)(v7 + 72);
    LODWORD(v4) = VIDMM_CPU_HOST_APERTURE::AcquireRange(
                    v3,
                    (void *)v7,
                    (struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v7 + 192),
                    *(_QWORD *)(v7 + 72),
                    *(_QWORD *)(v7 + 16));
    if ( (int)v4 < 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      v15 = 0;
      WdLogGlobalForLineNumber = 3093;
      goto LABEL_27;
    }
    v27 = 1;
    LODWORD(v4) = VIDMM_CPU_HOST_APERTURE::MapRange(
                    v3,
                    *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v7 + 192),
                    (struct VIDMM_PHYSICAL_ALLOC *)v7,
                    *v14);
    if ( (int)v4 >= 0 )
    {
      v5 = 1;
      if ( !(unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_21;
      P = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
            v3,
            v29[2],
            *(const struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v7 + 192),
            *v14,
            *v13);
      if ( P )
      {
        v17 = VIDMM_GLOBAL::Rotate(a1, (__int64)v6, 1u, (__int64)P, *v13, 0LL, 0LL, 0, v7);
        v4 = v17;
        if ( v17 >= 0 )
        {
          v6[36] |= 1u;
          goto LABEL_21;
        }
        ExFreePoolWithTag(P, 0);
        WdLogSingleEntry1(1LL, v4);
        WdLogGlobalForLineNumber = 3142;
        DxgkLogInternalTriageEvent(v18, 0x40000LL);
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3121;
        DxgkLogInternalTriageEvent(v16, 0x40000LL);
        LODWORD(v4) = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v7);
      WdLogGlobalForLineNumber = 3105;
    }
    v15 = 1;
    goto LABEL_27;
  }
  v9 = (__int64 *)*v8;
  if ( *(__int64 **)(*v8 + 8) != v8
    || (v10 = (__int64 **)v8[1], *v10 != v8)
    || (*v10 = v9, v9[1] = (__int64)v10, v11 = *(_QWORD *)v3, *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)v3 + 8LL) != v3) )
  {
    __fastfail(3u);
  }
  *v8 = v11;
  v8[1] = (__int64)v3;
  *(_QWORD *)(v11 + 8) = v8;
  *(_QWORD *)v3 = v8;
  Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline();
  v28 = 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v12);
    WdLogGlobalForLineNumber = 3072;
  }
  v13 = (unsigned __int64 *)(v7 + 16);
  v14 = (unsigned __int64 *)(v7 + 72);
LABEL_21:
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_34;
  v19 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
          v3,
          v29[2],
          *(const struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v7 + 192),
          *v14,
          *v13);
  if ( v19 )
  {
    v21 = VIDMM_GLOBAL::Rotate(a1, (__int64)v6, 1u, (__int64)v19, *v13, 0LL, 0LL, 0, v7);
    v4 = v21;
    if ( v21 < 0 )
    {
      ExFreePoolWithTag(v19, 0);
      WdLogSingleEntry1(1LL, v4);
      WdLogGlobalForLineNumber = 3189;
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
      goto LABEL_26;
    }
    v6[36] |= 1u;
LABEL_34:
    v6[43] = 1;
    return (unsigned int)v4;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 3168;
  DxgkLogInternalTriageEvent(v20, 0x40000LL);
  LODWORD(v4) = -1073741801;
LABEL_26:
  v15 = v27;
  v5 = v27;
LABEL_27:
  v23 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE ****)(v7 + 192);
  if ( v23 )
  {
    if ( v28 || v5 )
    {
      VIDMM_CPU_HOST_APERTURE::OfferRange(v3, v23);
    }
    else if ( v15 )
    {
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v3, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v23);
      *(_QWORD *)(v7 + 192) = 0LL;
    }
  }
  return (unsigned int)v4;
}
