/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x18008C670
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x180020790 (EtwpProcessNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpStopUmLogger @ 0x18008C4B4 (EtwpStopUmLogger.c)
 *     EtwpValidateLoggerInfo @ 0x18008C848 (EtwpValidateLoggerInfo.c)
 *     EtwpQueryUmLogger @ 0x18008C894 (EtwpQueryUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18008C9F0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18008CAC4 (EtwpUpdateUmLogger.c)
 *     EtwpStartUmLogger @ 0x18008CCDC (EtwpStartUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18008E070 (EtwpFlushUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(__int64 a1)
{
  bool v2; // cf
  __int128 v3; // xmm0
  volatile signed __int32 **v4; // rdx
  int v5; // edi
  unsigned __int64 v6; // r8
  int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // rcx
  int started; // eax
  int v11; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4) < 0xF8u;
  v14 = 0;
  v13 = 0;
  if ( v2 )
    return 4209LL;
  v3 = *(_OWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 20);
  v5 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v5 )
    goto LABEL_6;
  v7 = *(_DWORD *)(a1 + 76);
  v8 = *(_DWORD *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpPrivSessionLock, v4, v6);
  switch ( v7 )
  {
    case 1:
      started = EtwpStartUmLogger(v9, &v14, &v13, a1 + 72);
      break;
    case 2:
      started = EtwpStopUmLogger(v8, (__int64)&v14, (__int64)&v13, a1 + 72);
      break;
    case 3:
      started = EtwpQueryUmLogger(v8, &v14, &v13, a1 + 72);
      break;
    case 4:
      started = EtwpUpdateUmLogger(v8, &v14, &v13, a1 + 72);
      break;
    case 5:
      started = EtwpFlushUmLogger(v8, &v14, &v13, a1 + 72);
      break;
    case 6:
      started = EtwpIncrementUmLoggerFile(v8, &v14, &v13, a1 + 72);
      break;
    default:
      v5 = 87;
      RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
      goto LABEL_6;
  }
  v5 = started;
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v5 )
LABEL_6:
    v11 = 76;
  else
    v11 = *(_DWORD *)(a1 + 72) + 72;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v3;
  *(_DWORD *)(a1 + 32) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v5 )
    *(_DWORD *)(a1 + 72) = v5;
  return 0LL;
}
