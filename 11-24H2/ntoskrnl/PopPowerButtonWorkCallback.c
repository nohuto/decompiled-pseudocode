/*
 * XREFs of PopPowerButtonWorkCallback @ 0x1405D58C0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KeInitializeIRTimer @ 0x1404BD12C (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopRecordPhysicalPowerButton @ 0x140747AF0 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1407550C4 (PopDiagTracePowerButtonBugcheck.c)
 *     PopBsdPowerTransitionToParam1 @ 0x14075BAB0 (PopBsdPowerTransitionToParam1.c)
 *     PopPublishPowerButtonState @ 0x14075BC84 (PopPublishPowerButtonState.c)
 *     PopRecordPoBlackboxInformation @ 0x140765D88 (PopRecordPoBlackboxInformation.c)
 *     ExUuidCreate @ 0x14085C0B0 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C50 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD370 (PopQueryPowerButtonBugcheckEnabled.c)
 */

void PopPowerButtonWorkCallback()
{
  KIRQL v0; // al
  __m128i v1; // xmm6
  unsigned int v2; // r15d
  unsigned int v3; // r14d
  __int128 v4; // xmm6
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-49h] BYREF
  __int64 v12[4]; // [rsp+60h] [rbp-41h] BYREF
  __int128 *v13; // [rsp+80h] [rbp-21h]
  _BYTE Uuid[24]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v15; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v16; // [rsp+B0h] [rbp+Fh]
  __int128 v17; // [rsp+C0h] [rbp+1Fh]

  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  BugCheckParameter1 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = (__m128i)xmmword_140F07AF8;
    *(_OWORD *)Uuid = xmmword_140F07AF8;
    *(_QWORD *)&Uuid[16] = qword_140F07B08;
    KeReleaseSpinLock(&PopPowerButtonHold, v0);
    v2 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 4));
    v3 = _mm_cvtsi128_si32(v1);
    if ( (dword_140F07B10 & 1) != 0 && ((v3 & 1) == 0 || v2 != dword_140F07B14) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140F07B10 = 0;
      byte_140F07BA8 = 0;
      PopPublishPowerButtonState(&dword_140F07B10);
      KeDisableTimer2((__int64)&unk_140F07A48, 1, 1, 0LL);
    }
    if ( (v3 & 1) != 0 )
    {
      if ( (dword_140F07B10 & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v4 = *(_OWORD *)&Uuid[8];
        LOBYTE(v5) = 1;
        xmmword_140F07B80 = *(_OWORD *)&Uuid[8];
        PopRecordPhysicalPowerButton(v5);
        v2 = *(_DWORD *)&Uuid[4];
        dword_140F07B14 = *(_DWORD *)&Uuid[4];
        xmmword_140F07B18 = v4;
        dword_140F07B28 = PopQueryPowerButtonBugcheckEnabled();
        HIDWORD(BugCheckParameter1) = 65544;
        KeInitializeIRTimer(
          (unsigned __int64)&unk_140F07A48,
          (__int64)PopPowerButtonTimerCallback,
          v2,
          (unsigned __int16 *)&BugCheckParameter1 + 2,
          2);
        KeSetTimer2((__int64)&unk_140F07A48, (LARGE_INTEGER)-10000000LL, 10000000LL, 0LL);
        v3 = *(_DWORD *)Uuid;
      }
      dword_140F07B10 = v3;
      PopPublishPowerButtonState(&dword_140F07B10);
      v6 = v3 >> 1;
      if ( v3 >> 1 >= 0x1B58 )
      {
        PopDiagTracePowerButtonBugcheck(v6);
        PopRecordPoBlackboxInformation();
        if ( dword_140F07B28 )
        {
          PopBsdPowerTransitionToParam1(&BugCheckParameter1);
          KeBugCheckEx(
            0x1C8u,
            (unsigned int)BugCheckParameter1,
            (ULONG_PTR)&PopPowerButtonTriageBlock,
            (unsigned __int64)v3 >> 1,
            0LL);
        }
      }
      v7 = HIDWORD(qword_140F07BC4);
      if ( (qword_140F07BC4 & 0x100000000LL) != 0 && !dword_140F07B28 && v6 == 1000 * (BYTE4(qword_140F07BC4) >> 4) )
      {
        PopBsdPowerTransitionToParam1(&BugCheckParameter1);
        if ( (v7 & 8) != 0 )
        {
          v12[0] = 0x2800000001LL;
          *((_QWORD *)&v15 + 1) = ((unsigned __int64)v7 >> 8) & 1;
          v13 = &v15;
          v12[3] = 24LL;
          *(_OWORD *)&v12[1] = 0LL;
          *(_QWORD *)&v15 = 0x3000000001LL;
          v16 = 0LL;
          v17 = 0LL;
          v10 = DbgkWerCaptureLiveKernelDump2(L"PopPowerButton", (unsigned __int64)v3 >> 1, 1LL, (__int64)v12);
          DbgPrintEx(
            0x92u,
            2u,
            "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump2 completed with Status: %08x, SelectiveThreadKernelStacks: %01x\n",
            v10,
            (v7 >> 8) & 1);
        }
        else
        {
          v8 = v7 & 4 | ((v7 & 2 | 0x10) >> 1);
          v9 = DbgkWerCaptureLiveKernelDump(
                 (unsigned int)L"PopPowerButton",
                 4552,
                 BugCheckParameter1,
                 (unsigned int)&PopPowerButtonTriageBlock,
                 (unsigned __int64)v3 >> 1,
                 0LL,
                 0LL,
                 0LL,
                 v8);
          DbgPrintEx(
            0x92u,
            2u,
            "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump completed with Status: %08x, UserPages:  %08x, Hype"
            "rvisorPages:  %08x\n",
            v9,
            v8 & 1,
            (v8 >> 2) & 1);
        }
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v2, v3) != (_QWORD)xmmword_140F07AF8 );
  _InterlockedExchange(&dword_140F07AF0, 0);
  KeReleaseSpinLock(&PopPowerButtonHold, v0);
}
