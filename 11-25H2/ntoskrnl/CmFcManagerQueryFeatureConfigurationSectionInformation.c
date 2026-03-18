/*
 * XREFs of CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A1AE34
 * Callers:
 *     CmQueryFeatureConfigurationSections @ 0x140A1ACB8 (CmQueryFeatureConfigurationSections.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     CmFcpCopySectionState @ 0x140A1B078 (CmFcpCopySectionState.c)
 *     CmFcpCleanupSectionState @ 0x140A1B0A8 (CmFcpCleanupSectionState.c)
 */

__int64 __fastcall CmFcManagerQueryFeatureConfigurationSectionInformation(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rbx
  __int64 v9; // r12
  _QWORD *v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // rbx
  unsigned int i; // edi
  void *v14; // rcx
  NTSTATUS v15; // ebp
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
  v8 = KeAbPreAcquire((__int64)&stru_140EF6B68, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF6B68, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140EF6B68, 0, v8, (unsigned __int64)&stru_140EF6B68);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = qword_140EF6B78;
  v10 = &unk_140EF6B88;
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF6B68, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140EF6B68);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6B68);
  KeLeaveCriticalRegion();
  for ( i = 0; i < 4; ++i )
  {
    v14 = *(void **)&v25[24 * i - 8];
    if ( v14 )
    {
      v15 = ObOpenObjectByPointer(v14, a4 == 0 ? 0x200 : 0, 0LL, 4u, MmSectionObjectType, a4, (PHANDLE)v22 + i);
      if ( v15 < 0 )
        goto LABEL_19;
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
  v15 = 0;
LABEL_19:
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
  return (unsigned int)v15;
}
