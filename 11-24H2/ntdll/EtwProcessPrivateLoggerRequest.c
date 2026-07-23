/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x1800A8130
 * Callers:
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x18004D190 (EtwpProcessNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     EtwpStopUmLogger @ 0x1800A7F74 (EtwpStopUmLogger.c)
 *     EtwpValidateLoggerInfo @ 0x1800A8308 (EtwpValidateLoggerInfo.c)
 *     EtwpQueryUmLogger @ 0x1800A8354 (EtwpQueryUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800A84B0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800A8584 (EtwpUpdateUmLogger.c)
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 *     EtwpFlushUmLogger @ 0x1800A9B30 (EtwpFlushUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(__int64 a1)
{
  bool v2; // cf
  __int128 v3; // xmm0
  int v4; // edi
  int v5; // edi
  unsigned int v6; // ebp
  __int64 v7; // rcx
  int started; // eax
  int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4) < 0xF8u;
  v12 = 0;
  v11 = 0;
  if ( v2 )
    return 4209LL;
  v3 = *(_OWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 20);
  v4 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v4 )
    goto LABEL_6;
  v5 = *(_DWORD *)(a1 + 76);
  v6 = *(_DWORD *)(a1 + 72);
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  switch ( v5 )
  {
    case 1:
      started = EtwpStartUmLogger(v7, &v12, &v11, a1 + 72);
      break;
    case 2:
      started = EtwpStopUmLogger(v6, (__int64)&v12, (__int64)&v11, a1 + 72);
      break;
    case 3:
      started = EtwpQueryUmLogger(v6, &v12, &v11, a1 + 72);
      break;
    case 4:
      started = EtwpUpdateUmLogger(v6, &v12, &v11, a1 + 72);
      break;
    case 5:
      started = EtwpFlushUmLogger(v6, &v12, &v11, a1 + 72);
      break;
    case 6:
      started = EtwpIncrementUmLoggerFile(v6, &v12, &v11, a1 + 72);
      break;
    default:
      v4 = 87;
      RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
      goto LABEL_6;
  }
  v4 = started;
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v4 )
LABEL_6:
    v9 = 76;
  else
    v9 = *(_DWORD *)(a1 + 72) + 72;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v3;
  *(_DWORD *)(a1 + 32) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v4 )
    *(_DWORD *)(a1 + 72) = v4;
  return 0LL;
}
