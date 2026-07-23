/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeBegin @ 0x140A7820C
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x140764740 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopDirectedDripsDiagGetDeviceActiveStamp @ 0x1404C495C (PopDirectedDripsDiagGetDeviceActiveStamp.c)
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406F961C (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsDiagBroadcastTreeBegin(__int64 a1, unsigned __int8 a2, __int64 *a3)
{
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rbx
  __int64 DeviceDiagnostic; // rax
  __int64 v10; // rdi
  int v11; // esi
  PVOID *v12; // rax
  __int64 Pool2; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  int v16; // eax

  *a3 = 0LL;
  v6 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v6, (__int64)&PopDirectedDripsDiagLock);
  if ( v8 )
    v8[10] = 1;
  DeviceDiagnostic = PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(a1);
  v10 = DeviceDiagnostic;
  if ( DeviceDiagnostic )
  {
    if ( *(_DWORD *)(DeviceDiagnostic + 148) == -1 )
      *(_DWORD *)(DeviceDiagnostic + 148) = dword_140F06B44++;
    v11 = *(_DWORD *)(DeviceDiagnostic + 148);
    v12 = (PVOID *)PopDirectedDripsDiagSessionContext;
    if ( PopDirectedDripsDiagSessionContext == &PopDirectedDripsDiagSessionContext )
      goto LABEL_9;
    do
    {
      v14 = (__int64)v12;
      if ( *((_DWORD *)v12 + 8) == v11 )
        break;
      v12 = (PVOID *)*v12;
      v14 = 0LL;
    }
    while ( v12 != &PopDirectedDripsDiagSessionContext );
    if ( !v14 )
    {
LABEL_9:
      Pool2 = ExAllocatePool2(0x100uLL, 0xE8uLL, 0x67696450u);
      v14 = Pool2;
      if ( !Pool2 )
        goto LABEL_14;
      *(_DWORD *)(Pool2 + 32) = v11;
      *(_QWORD *)(Pool2 + 16) = v10;
      v15 = (__int64 *)qword_140F06928;
      if ( *(PVOID **)qword_140F06928 != &PopDirectedDripsDiagSessionContext )
        __fastfail(3u);
      *(_QWORD *)v14 = &PopDirectedDripsDiagSessionContext;
      *(_QWORD *)(v14 + 8) = v15;
      *v15 = v14;
      qword_140F06928 = v14;
    }
    *(_QWORD *)(v14 + 48) = PopDirectedDripsDiagGetDeviceActiveStamp(*(_QWORD *)(a1 + 80));
    *(_DWORD *)(v14 + 36) = dword_140F06B48;
    v16 = *(_DWORD *)(v14 + 40);
    *a3 = v14;
    *(_DWORD *)(v14 + 40) = v16 ^ (a2 ^ (unsigned __int8)v16) & 0xF;
    *(_DWORD *)(v10 + 152) |= 0x60000u;
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
