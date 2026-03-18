/*
 * XREFs of EditionInitInputHangInfo @ 0x1C00741D0
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F3FF4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EditionInitInputHangInfo(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  PERESOURCE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax

  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 8)
    || (v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v2, v1, v3, v4),
        !ExIsResourceAcquiredSharedLite(*v5)) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6, v8);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  EtwTraceMessageCheckDelay(gptiCurrent);
  v11 = -1;
  if ( (_DWORD)v10 )
    v11 = v10;
  *(_DWORD *)(gptiCurrent + 1216LL) = v11;
  if ( *(int *)(gptiCurrent + 488LL) < 0 )
    xxxHandleHealthyThread(gptiCurrent);
  *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
  EtwTraceProcessWindowInfo(gptiCurrent);
  result = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  --*(_DWORD *)(result + 48);
  return result;
}
