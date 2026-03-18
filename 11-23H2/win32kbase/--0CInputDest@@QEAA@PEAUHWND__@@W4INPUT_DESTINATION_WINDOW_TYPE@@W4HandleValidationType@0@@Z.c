/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5004
 * Callers:
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BB1C8 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01CF2CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01CFA4C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1BC4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E1FA0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0045FD0 (ValidateHwndEx.c)
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0052FA0 (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ValidateHbwnd @ 0x1C012FD70 (ValidateHbwnd.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C01B5B04 (INPUTDEST_FROM_BASEWND.c)
 */

__int64 *__fastcall CInputDest::CInputDest(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __m128i *v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // rax
  __int64 *result; // rax
  __m128i v13; // [rsp+30h] [rbp-D0h]
  __m128i v14; // [rsp+40h] [rbp-C0h]
  __m128i v15; // [rsp+50h] [rbp-B0h]
  __m128i v16; // [rsp+60h] [rbp-A0h]
  __m128i v17; // [rsp+70h] [rbp-90h]
  __m128i v18; // [rsp+80h] [rbp-80h]
  __int64 *v19[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v20[7]; // [rsp+A0h] [rbp-60h] BYREF

  memset(a1, 0, 0x70uLL);
  *((_BYTE *)a1 + 112) = 0;
  memset(v20, 0, sizeof(v20));
  if ( a3 == 2 )
  {
    if ( a4 == 2 )
    {
      v8 = ValidateHwndEx(a2, 1, 0);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 246);
      v8 = HMValidateHandleNoSecure(a2, 1);
    }
    v9 = (__m128i *)INPUTDEST_FROM_PWND(v20, v8);
LABEL_8:
    v10 = v9[5];
    v13 = *v9;
    v14 = v9[1];
    v15 = v9[2];
    v16 = v9[3];
    v17 = v9[4];
    v18 = v9[6];
    goto LABEL_17;
  }
  if ( a3 == 1 )
  {
    if ( a4 == 2 )
    {
      v11 = ValidateHbwnd(a2);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 260);
      v11 = HMValidateHandleNoSecure(a2, 23);
    }
    v9 = (__m128i *)INPUTDEST_FROM_BASEWND(v20, v11);
    goto LABEL_8;
  }
  v10 = (__m128i)v20[5];
  v18 = (__m128i)v20[6];
  v17 = (__m128i)v20[4];
  v16 = (__m128i)v20[3];
  v15 = (__m128i)v20[2];
  v14 = (__m128i)v20[1];
  v13 = (__m128i)v20[0];
LABEL_17:
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v10, 12)) )
  {
    if ( !v10.m128i_i64[0] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 272);
    v19[1] = (__int64 *)v10.m128i_i64[0];
    v19[0] = a1 + 10;
    HMAssignmentLock(v19, 0);
  }
  result = a1;
  *(__m128i *)a1 = v13;
  *((__m128i *)a1 + 1) = v14;
  *((__m128i *)a1 + 2) = v15;
  *((__m128i *)a1 + 3) = v16;
  *((__m128i *)a1 + 4) = v17;
  *((__m128i *)a1 + 5) = v10;
  *((__m128i *)a1 + 6) = v18;
  return result;
}
