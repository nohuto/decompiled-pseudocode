/*
 * XREFs of MapInCpuVisibleSegment @ 0x140114AC8
 * Callers:
 *     ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x1400CD4F8 (-MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004CC9C (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x14010322C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140103C94 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x140111C90 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall MapInCpuVisibleSegment(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rbx
  SIZE_T *v5; // rdi
  SIZE_T v7; // r9
  unsigned __int64 v8; // rcx
  PMDL v9; // rax
  PMDL v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi

  v2 = *a2;
  v4 = **a2;
  v5 = *(SIZE_T **)v4;
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline()
    && (*(_BYTE *)(v4 + 36) & 1) != 0 )
  {
    return 0LL;
  }
  v7 = v5[8];
  v8 = v2[2];
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) & 8) != 0 )
    v9 = VidMmiBuildMdlFromMdl(v8, v5[2], *(struct _MDL **)(v7 + 56), (__int64)v5[9] / 4096);
  else
    v9 = VidMmiBuildMdlForContiguousMmIo(v8, v5[2], (union _LARGE_INTEGER)(*(_QWORD *)(v7 + 56) + v5[9]));
  v10 = v9;
  if ( v9 )
  {
    v12 = VIDMM_GLOBAL::Rotate(a1, v4, 1u, (__int64)v9, v5[2], 0LL, 0LL, 0, (__int64)v5);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(3LL, v12);
      WdLogGlobalForLineNumber = 3011;
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      *(_BYTE *)(v4 + 36) |= 1u;
      *(_BYTE *)(v4 + 43) = 1;
    }
    return v13;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2979;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 3221225495LL;
  }
}
