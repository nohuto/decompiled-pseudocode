/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA038
 * Callers:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400D9E50 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DEA90 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400DF354 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     NtUserReportInertia @ 0x14016FA40 (NtUserReportInertia.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1402037CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     INPUTDEST_FROM_PWND @ 0x140107EA4 (INPUTDEST_FROM_PWND.c)
 *     ValidateHbwnd @ 0x14011F5D0 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1401F3948 (INPUTDEST_FROM_BASEWND.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__m128i *__fastcall CInputDest::CInputDest(__m128i *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __m128i *v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // rax
  __m128i *result; // rax
  __m128i v13; // [rsp+30h] [rbp-D0h]
  __m128i v14; // [rsp+40h] [rbp-C0h]
  __m128i v15; // [rsp+50h] [rbp-B0h]
  __m128i v16; // [rsp+60h] [rbp-A0h]
  __m128i v17; // [rsp+70h] [rbp-90h]
  __m128i v18; // [rsp+80h] [rbp-80h]
  _QWORD v19[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v20[7]; // [rsp+A0h] [rbp-60h] BYREF

  memset(a1, 0, 0x70uLL);
  a1[7].m128i_i8[0] = 0;
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
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 248LL);
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
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 262LL);
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 274LL);
    v19[1] = v10.m128i_i64[0];
    v19[0] = a1 + 5;
    HMAssignmentLock(v19, 0LL);
  }
  result = a1;
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v15;
  a1[3] = v16;
  a1[4] = v17;
  a1[5] = v10;
  a1[6] = v18;
  return result;
}
