/*
 * XREFs of WheaReportHwError @ 0x140420030
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14049A84C (HalpCheckAndReportGhes.c)
 *     HalpMcaReportError @ 0x14053D9E4 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x140541490 (HalHandleNMI.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14065A9D0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     WheapAllocErrorRecord @ 0x140420434 (WheapAllocErrorRecord.c)
 *     WheapGetErrorSource @ 0x1404204D8 (WheapGetErrorSource.c)
 *     WheapCallErrorSourceCreateRecord @ 0x140420528 (WheapCallErrorSourceCreateRecord.c)
 *     WheapApplyThresholdChecks @ 0x1404205CC (WheapApplyThresholdChecks.c)
 *     WheapWorkQueueAddItem @ 0x14042085C (WheapWorkQueueAddItem.c)
 *     WheapFreeErrorRecord @ 0x14047468C (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1404746BC (WheapGenerateETWEvents.c)
 *     WheaIsCriticalState @ 0x140474710 (WheaIsCriticalState.c)
 *     WheapCompressErrorRecord @ 0x140474738 (WheapCompressErrorRecord.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     WheaRecoveryBugCheck @ 0x14065A2F0 (WheaRecoveryBugCheck.c)
 *     WheapAddToDumpFile @ 0x14065A3DC (WheapAddToDumpFile.c)
 *     WheapAttemptErrorRecovery @ 0x14065A4C0 (WheapAttemptErrorRecovery.c)
 *     WheapPersistPageForMemoryError @ 0x14065A568 (WheapPersistPageForMemoryError.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  int v1; // r11d
  unsigned int v2; // ebx
  char v4; // r12
  _QWORD *WheaInfo; // r13
  __int64 v6; // rcx
  __int64 ErrorSource; // rax
  ULONG_PTR v8; // rdx
  unsigned int v9; // r11d
  __int64 v10; // r15
  __int64 v11; // rax
  char *v12; // r14
  __int64 v13; // r8
  int v14; // ecx
  _DWORD *v16; // rcx
  int v17; // edx
  char v18; // [rsp+38h] [rbp-29h]
  int v19; // [rsp+3Ch] [rbp-25h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-21h]
  _DWORD Src[6]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1h]
  _DWORD v23[10]; // [rsp+68h] [rbp+7h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0;
  v19 = 0;
  v18 = 0;
  v20 = 0LL;
  v4 = 0;
  if ( (v1 & 0xC0000000) == 0xC0000000 )
    return 3221225485LL;
  if ( (v1 & 0x40000000) != 0 )
  {
    v1 &= ~0x40000000u;
    v18 = 1;
    v20 = (a1 + *(unsigned int *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_26:
    *(_DWORD *)(a1 + 20) = v1;
    goto LABEL_4;
  }
  if ( v1 < 0 )
  {
    v1 &= ~0x80000000;
    v4 = 1;
    goto LABEL_26;
  }
LABEL_4:
  if ( v1 == 3 && !v4 )
    return 0LL;
  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo || (v6 = WheaInfo[1]) == 0 || !*(_DWORD *)(v6 + 4) )
  {
    if ( (unsigned int)v1 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    Src[0] = 1733060695;
    v16 = Src;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483594;
    Src[4] = 1280201291;
    v22 = 2LL;
    goto LABEL_74;
  }
  ErrorSource = WheapGetErrorSource(v6, *(unsigned int *)(a1 + 24));
  v10 = ErrorSource;
  if ( ErrorSource )
  {
    _InterlockedAdd((volatile signed __int32 *)(ErrorSource + 24), 1u);
    if ( *(_DWORD *)(a1 + 20) == 2 && (unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
    {
      v16 = v23;
      v23[8] = *(_DWORD *)(a1 + 28);
      v23[9] = *(_DWORD *)(a1 + 24);
      v23[0] = 1733060695;
      v23[1] = 1;
      v23[2] = 40;
      v23[3] = 1;
      v23[5] = -2147483644;
      v23[4] = 1280201291;
      v23[6] = 2;
      v23[7] = 8;
LABEL_74:
      WheaLogInternalEvent(v16);
      return 0LL;
    }
    v11 = WheapAllocErrorRecord(v10, &v19);
    v12 = (char *)v11;
    if ( v11 )
    {
      v13 = (unsigned int)(v19 - 40);
      v14 = *(_DWORD *)(v11 + 24) ^ ((unsigned __int8)*(_DWORD *)(v11 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 4;
      *(_DWORD *)(v11 + 24) = v14;
      *(_DWORD *)(v11 + 24) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
      v19 = WheapCallErrorSourceCreateRecord(v10, a1, v13, v11 + 40);
      if ( v19 >= 0 )
      {
        if ( v4 || v18 )
          *((_DWORD *)v12 + 36) |= 8u;
        if ( (v12[144] & 2) != 0 )
        {
          if ( (*((_DWORD *)v12 + 6) & 1) != 0 && !(unsigned __int8)WheaIsCriticalState() )
          {
            if ( WheapEventingInitialized != 1 )
              goto LABEL_61;
            goto LABEL_60;
          }
          goto LABEL_16;
        }
        if ( !*(_BYTE *)off_140E09668 && !v4 )
        {
          WheapCompressErrorRecord(0LL, v12 + 40);
          if ( (int)PshedWriteErrorRecord(1LL, *((unsigned int *)v12 + 15), v12 + 40) < 0 )
            *(_BYTE *)off_140E09668 = 1;
        }
        v17 = *(_DWORD *)(a1 + 20);
        if ( v17 == 1 )
        {
          if ( !v4 )
          {
            PshedFinalizeErrorRecord(v12 + 40, v10 + 96);
            WheapPersistPageForMemoryError(v12 + 40);
            WheapCompressErrorRecord(3LL, v12 + 40);
            PshedWriteErrorRecord(0LL, *((unsigned int *)v12 + 15), v12 + 40);
            WheapAddToDumpFile(v12 + 40, *((unsigned int *)v12 + 15));
            if ( v18 )
              KeBugCheckEx(
                0x124u,
                *(int *)(v10 + 104),
                (ULONG_PTR)(v12 + 40),
                *(_QWORD *)(v20 + 72),
                *(_QWORD *)(v20 + 80));
            PshedBugCheckSystem(v10 + 96, v12 + 40);
            return v2;
          }
        }
        else if ( (unsigned int)(v17 - 2) > 1 )
        {
          if ( v17 )
          {
            WheapFreeErrorRecord(v12);
            return (unsigned int)-1073741811;
          }
          PshedFinalizeErrorRecord(v12 + 40, v10 + 96);
          WheapAttemptErrorRecovery(v12 + 40);
          if ( *((_DWORD *)v12 + 13) == 2 )
          {
            *((_DWORD *)v12 + 36) |= 1u;
          }
          else if ( !v4 )
          {
            WheaRecoveryBugCheck(v12 + 40, v10 + 96, a1);
            return v2;
          }
          if ( (*((_DWORD *)v12 + 6) & 1) != 0
            && WheapEventingInitialized == 1
            && !(unsigned __int8)WheaIsCriticalState()
            && v12[144] >= 0 )
          {
LABEL_60:
            WheapGenerateETWEvents(v12 + 40);
LABEL_61:
            WheapFreeErrorRecord(v12);
            return v2;
          }
LABEL_16:
          WheapWorkQueueAddItem(WheaInfo[2], v12);
          return v2;
        }
        PshedFinalizeErrorRecord(v12 + 40, v10 + 96);
        goto LABEL_16;
      }
      if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
        KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
      WheapFreeErrorRecord(v12);
      return (unsigned int)v19;
    }
    else
    {
      ++*(_DWORD *)(v10 + 16);
      if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
        KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
      return 3221225626LL;
    }
  }
  else
  {
    if ( v9 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v8, 0LL);
    return 3221225664LL;
  }
}
