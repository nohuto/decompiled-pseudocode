/*
 * XREFs of DrvLogDrvChangeDisplaySettingsFailures @ 0x1400E3F54
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall DrvLogDrvChangeDisplaySettingsFailures(__int64 a1, int a2)
{
  unsigned int v3; // r15d
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax

  v3 = a1;
  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v5 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1272), 1u) + 1) & 7;
  v6 = 56 * v5;
  v7 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  *(_DWORD *)(v6 + v4 + 1292) = a2;
  *(_QWORD *)(v6 + v4 + 1280) = v7 * TimeIncrement;
  *(_DWORD *)(56 * (v5 + 23) + v4) = v3;
  *(_DWORD *)(v6 + v4 + 1296) = (unsigned int)PsGetCurrentThreadId();
  RtlCaptureStackBackTrace(1u, 4u, (PVOID *)(56 * v5 + v4 + 1304), 0LL);
  return DrvDxgkLogCodePointPacket(119LL, v3, 0LL, 0LL);
}
