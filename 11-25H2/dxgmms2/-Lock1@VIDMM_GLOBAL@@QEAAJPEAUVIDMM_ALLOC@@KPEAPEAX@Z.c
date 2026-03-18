/*
 * XREFs of ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140112974
 * Callers:
 *     VidMmBeginCPUAccess @ 0x140040E40 (VidMmBeginCPUAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ValidateCommonLockParameters @ 0x140036F20 (ValidateCommonLockParameters.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x140043E64 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline @ 0x14004CC48 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400ACF00 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400F35B8 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock1(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  int v9; // r15d
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // rcx

  v4 = 0LL;
  v6 = a3;
  v9 = 0;
  v10 = **a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = v6;
    WdLogGlobalForLineNumber = 21791;
  }
  *a4 = 0LL;
  result = ValidateCommonLockParameters((__int64)this, a2);
  if ( (int)result >= 0 )
  {
    v13 = v6 & 0xFFFFFFA7;
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline()
      && (v13 & 0x400) == 0
      && (**(_DWORD **)(v10 + 376) & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, v10);
      WdLogGlobalForLineNumber = 21816;
LABEL_8:
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      return 3221225485LL;
    }
    v15 = ~((unsigned int)Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline() != 0
          ? 1959
          : 935);
    if ( ((unsigned int)v15 & v13) != 0 )
    {
      WdLogSingleEntry1(1LL, v13);
      WdLogGlobalForLineNumber = 21826;
      goto LABEL_8;
    }
    if ( (v13 & 0x82) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 24) & 0x40) == 0 && (*(_DWORD *)(v10 + 28) & 0x200000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 21849;
        goto LABEL_8;
      }
      if ( !*((_BYTE *)this + 7017) )
      {
        v15 = **(unsigned int **)(v10 + 376);
        if ( (v15 & 4) != 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 21859;
          goto LABEL_8;
        }
      }
    }
    if ( (v13 & 0x81) != 0 )
    {
      if ( (v13 & 0x100) != 0 )
      {
        WdLogSingleEntry2(4LL, a2, -1071775484LL);
        result = 3223191812LL;
        WdLogGlobalForLineNumber = 21895;
        return result;
      }
      VIDMM_GLOBAL::WaitOnAllocForceSync((VIDMM_GLOBAL *)v15, (struct VIDMM_ALLOC *)a2);
      v9 = 4;
    }
    else if ( (v13 & 2) == 0 )
    {
      return 3223191810LL;
    }
    v17 = VIDMM_GLOBAL::LockCommon(this, a2, 0, 0, a4);
    if ( v17 >= 0 && (byte_140081241 & 1) != 0 )
    {
      v19 = (__int64)a2[1];
      if ( v19 )
        v4 = *(_QWORD *)(v19 + 24);
      McTemplateK0ppqq_EtwWriteTransfer(v19, v16, v18, v4, a2, v13, v9);
    }
    return (unsigned int)v17;
  }
  return result;
}
