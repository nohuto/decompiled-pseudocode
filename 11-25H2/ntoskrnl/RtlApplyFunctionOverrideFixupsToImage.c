/*
 * XREFs of RtlApplyFunctionOverrideFixupsToImage @ 0x140778A40
 * Callers:
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C4944C (MiApplyFunctionOverrideToBootDriver.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405E2240 (RtlpCaptureDynamicRelocationTableRva.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x1409465B8 (RtlDoesRequireFunctionOverrideFixups.c)
 *     RtlApplyFunctionOverrideFixups @ 0x140946778 (RtlApplyFunctionOverrideFixups.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409F0820 (RtlCreateFunctionOverrideFixupInfo.c)
 *     RtlInitializeSystemOverrideDelta @ 0x140A91470 (RtlInitializeSystemOverrideDelta.c)
 */

__int64 __fastcall RtlApplyFunctionOverrideFixupsToImage(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v8; // ebx
  int v9; // eax
  int FunctionOverrideFixupInfo; // eax
  __int64 v11; // rdi
  unsigned int i; // ebx
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0;
  v14 = 0LL;
  v8 = RtlImageNtHeaderEx(0, a1, a2, &v14);
  if ( v8 >= 0 )
  {
    v9 = RtlpCaptureDynamicRelocationTableRva(a1, a2, &v16);
    v8 = v9;
    if ( v9 == -1073741637 )
      return 0;
    if ( v9 < 0 )
      return (unsigned int)v8;
    FunctionOverrideFixupInfo = RtlCreateFunctionOverrideFixupInfo(
                                  a1,
                                  a2,
                                  v16,
                                  (int)a1 + v16,
                                  *(_DWORD *)(v14 + 84),
                                  a3,
                                  (__int64)&v15,
                                  a5);
    v11 = v15;
    v8 = FunctionOverrideFixupInfo;
    if ( FunctionOverrideFixupInfo >= 0 )
    {
      if ( !v15 )
        return 0;
      RtlInitializeSystemOverrideDelta(v15, a1, a2, 0, 0);
      for ( i = *(_DWORD *)(v11 + 32); i <= *(_DWORD *)(v11 + 36); ++i )
      {
        if ( (unsigned __int8)RtlDoesRequireFunctionOverrideFixups(v11, i) )
          RtlApplyFunctionOverrideFixups(v11, i, a1 + (i << 12), 0, 1);
      }
      v8 = 0;
    }
    if ( v11 )
      SddlpFree(v11);
  }
  return (unsigned int)v8;
}
