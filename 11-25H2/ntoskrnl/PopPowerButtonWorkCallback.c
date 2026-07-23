/*
 * XREFs of PopPowerButtonWorkCallback @ 0x1405D39C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     KeInitializeIRTimer @ 0x1404C4448 (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopRecordPhysicalPowerButton @ 0x14073D764 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x14074AB90 (PopDiagTracePowerButtonBugcheck.c)
 *     PopBsdPowerTransitionToParam1 @ 0x1407501E0 (PopBsdPowerTransitionToParam1.c)
 *     PopPublishPowerButtonState @ 0x1407503B4 (PopPublishPowerButtonState.c)
 *     PopRecordPoBlackboxInformation @ 0x1407563A8 (PopRecordPoBlackboxInformation.c)
 *     ExUuidCreate @ 0x1408DB8F0 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4B90 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD190 (PopQueryPowerButtonBugcheckEnabled.c)
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
    v1 = (__m128i)xmmword_140F070F8;
    *(_OWORD *)Uuid = xmmword_140F070F8;
    *(_QWORD *)&Uuid[16] = qword_140F07108;
    KeReleaseSpinLock(&PopPowerButtonHold, v0);
    v2 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 4));
    v3 = _mm_cvtsi128_si32(v1);
    if ( (dword_140F07110 & 1) != 0 && ((v3 & 1) == 0 || v2 != dword_140F07114) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140F07110 = 0;
      byte_140F071E8 = 0;
      PopPublishPowerButtonState(&dword_140F07110);
      KeDisableTimer2((__int64)&unk_140F07048, 1, 1, 0LL);
    }
    if ( (v3 & 1) != 0 )
    {
      if ( (dword_140F07110 & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v4 = *(_OWORD *)&Uuid[8];
        LOBYTE(v5) = 1;
        xmmword_140F071C0 = *(_OWORD *)&Uuid[8];
        PopRecordPhysicalPowerButton(v5);
        v2 = *(_DWORD *)&Uuid[4];
        dword_140F07114 = *(_DWORD *)&Uuid[4];
        xmmword_140F07118 = v4;
        dword_140F07128 = PopQueryPowerButtonBugcheckEnabled();
        HIDWORD(BugCheckParameter1) = 65544;
        KeInitializeIRTimer(
          (unsigned __int64)&unk_140F07048,
          (__int64)PopPowerButtonTimerCallback,
          v2,
          (unsigned __int16 *)&BugCheckParameter1 + 2,
          2);
        KeSetTimer2((__int64)&unk_140F07048, (LARGE_INTEGER)-10000000LL, 10000000LL, 0LL);
        v3 = *(_DWORD *)Uuid;
      }
      dword_140F07110 = v3;
      PopPublishPowerButtonState(&dword_140F07110);
      v6 = v3 >> 1;
      if ( v3 >> 1 >= 0x1B58 )
      {
        PopDiagTracePowerButtonBugcheck(v6);
        PopRecordPoBlackboxInformation();
        if ( dword_140F07128 )
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
      v7 = HIDWORD(qword_140F07204);
      if ( (qword_140F07204 & 0x100000000LL) != 0 && !dword_140F07128 && v6 == 1000 * (BYTE4(qword_140F07204) >> 4) )
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
  while ( __PAIR64__(v2, v3) != (_QWORD)xmmword_140F070F8 );
  _InterlockedExchange(&dword_140F070F0, 0);
  KeReleaseSpinLock(&PopPowerButtonHold, v0);
}
