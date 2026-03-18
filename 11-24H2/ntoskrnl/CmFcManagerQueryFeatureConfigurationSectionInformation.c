/*
 * XREFs of CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A25E28
 * Callers:
 *     CmQueryFeatureConfigurationSections @ 0x140A25CAC (CmQueryFeatureConfigurationSections.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     CmFcpCopySectionState @ 0x140A26050 (CmFcpCopySectionState.c)
 *     CmFcpCleanupSectionState @ 0x140A26080 (CmFcpCleanupSectionState.c)
 */

__int64 __fastcall CmFcManagerQueryFeatureConfigurationSectionInformation(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r12
  _QWORD *v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // rbx
  void *v13; // rcx
  NTSTATUS v14; // ebp
  unsigned int i; // edi
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r10
  HANDLE *v19; // rdi
  _BYTE *v20; // rsi
  _OWORD v22[2]; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v25[80]; // [rsp+80h] [rbp-98h] BYREF

  memset(v22, 0, sizeof(v22));
  memset_0(v23, 0, 0x60uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)&stru_140EF6F08, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF6F08, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140EF6F08, 0, v8, (__int64)&stru_140EF6F08);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = qword_140EF6F18;
  v10 = &unk_140EF6F28;
  v11 = 0;
  v12 = 4LL;
  do
  {
    if ( *a2 < *v10 )
      CmFcpCopySectionState(&v23[24 * v11], &CmFcSystemManager[3 * v11 + 5]);
    ++v11;
    ++a2;
    v10 += 3;
  }
  while ( v11 < 4 );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF6F08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140EF6F08);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6F08);
  KeLeaveCriticalRegion();
  for ( i = 0; i < 4; ++i )
  {
    v13 = *(void **)&v25[24 * i - 8];
    if ( v13 )
    {
      v14 = ObOpenObjectByPointer(v13, a4 == 0 ? 0x200 : 0, 0LL, 4u, MmSectionObjectType, a4, (PHANDLE)v22 + i);
      if ( v14 < 0 )
        goto LABEL_18;
    }
  }
  memset_0(a3 + 1, 0, 0x60uLL);
  *a3 = v9;
  v16 = v22;
  v17 = a3 + 3;
  v18 = 4LL;
  do
  {
    *(v17 - 2) = *(_QWORD *)((char *)v17 + v23 - (_BYTE *)a3 - 24);
    *v17 = *(_QWORD *)((char *)v17 + v25 - (_BYTE *)a3 - 24);
    v17 += 3;
    *(v17 - 4) = *v16;
    *v16++ = 0LL;
    --v18;
  }
  while ( v18 );
  v14 = 0;
LABEL_18:
  v19 = (HANDLE *)v22;
  v20 = v23;
  do
  {
    CmFcpCleanupSectionState(v20);
    if ( *v19 )
      ObCloseHandle(*v19, a4);
    v20 += 24;
    ++v19;
    --v12;
  }
  while ( v12 );
  return (unsigned int)v14;
}
