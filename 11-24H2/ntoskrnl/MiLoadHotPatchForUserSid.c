/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x140A9AA90
 * Callers:
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     RtlHashBytes2 @ 0x140425320 (RtlHashBytes2.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiAllocateHotPatchRecord @ 0x1407F1130 (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1407F2A84 (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x1407F3224 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x1407F3934 (MiInsertHotPatchRecord.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatchForUserSid(const void **a1, _QWORD *a2, _DWORD *a3)
{
  bool v3; // r12
  _DWORD *v4; // r15
  int inserted; // edi
  void *HotPatchRecord; // r14
  struct _KTHREAD *CurrentThread; // rsi
  ULONG v10; // ebx
  char *v11; // rax
  char *v12; // rdi
  _QWORD *v13; // rdi
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *Pool; // rax
  _QWORD *v17; // r15
  bool v18; // zf
  ULONG v19; // ecx
  int v20; // ebx
  int v21; // edi
  unsigned int v23; // [rsp+48h] [rbp-29h] BYREF
  ULONG DestinationSidLength; // [rsp+4Ch] [rbp-25h]
  ULONG v25; // [rsp+50h] [rbp-21h]
  PVOID Object; // [rsp+58h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-11h] BYREF
  __int128 v28; // [rsp+68h] [rbp-9h] BYREF
  __int64 v29; // [rsp+78h] [rbp+7h]
  int v30; // [rsp+80h] [rbp+Fh]
  _DWORD *v31; // [rsp+88h] [rbp+17h]
  _QWORD v32[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v31 = a3;
  v3 = 0;
  v29 = 0LL;
  v30 = 0;
  v23 = 0;
  v4 = a3;
  Handle = 0LL;
  Object = 0LL;
  v28 = 0LL;
  inserted = MiOpenHotPatchFile(
               (_DWORD)a1,
               1,
               0,
               (unsigned int)&Handle,
               (__int64)&Object,
               0LL,
               (__int64)&v28,
               (__int64)&v23);
  if ( inserted >= 0 )
  {
    HotPatchRecord = (void *)MiAllocateHotPatchRecord(v28, SDWORD1(v28), v30, a1, v23);
    if ( !HotPatchRecord )
    {
      inserted = -1073741670;
      goto LABEL_33;
    }
    CurrentThread = KeGetCurrentThread();
    v10 = RtlLengthSid(a2);
    DestinationSidLength = v10;
    v32[0] = RtlHashBytes2(a2, v10, 0LL);
    v32[1] = a2;
    v25 = v10 + 40;
    --CurrentThread->SpecialApcDisable;
    v11 = (char *)KeAbPreAcquire((__int64)&qword_140E375D0, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E375D0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140E375D0, v11, (__int64)&qword_140E375D0);
    if ( v12 )
      v12[10] = 1;
    v13 = (_QWORD *)qword_140E375B0;
    if ( qword_140E375B0 )
    {
      while ( 1 )
      {
        v14 = MiCompareUserSidHotPatchNodes(v32, (__int64)v13);
        if ( v14 <= 0 )
        {
          if ( v14 >= 0 )
            goto LABEL_23;
          v15 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
        }
        else
        {
          v15 = (_QWORD *)v13[1];
          if ( !v15 )
          {
            v3 = 1;
            break;
          }
        }
        v13 = v15;
      }
    }
    Pool = (_QWORD *)MiAllocatePool(0x100uLL, v25, 1934126413);
    v17 = Pool;
    if ( !Pool )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E375D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E375D0);
      KeAbPostRelease((ULONG_PTR)&qword_140E375D0);
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      inserted = -1073741670;
LABEL_32:
      ExFreePoolWithTag(HotPatchRecord, 0);
      goto LABEL_33;
    }
    Pool[3] = 0LL;
    v19 = DestinationSidLength;
    Pool[4] = v32[0];
    RtlCopySid(v19, Pool + 5, a2);
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E375B0, (unsigned __int64)v13, v3, v17);
    v13 = v17;
    v4 = v31;
LABEL_23:
    inserted = MiInsertHotPatchRecord(v13 + 3, (__int64)HotPatchRecord, 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E375D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E375D0);
    KeAbPostRelease((ULONG_PTR)&qword_140E375D0);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( inserted < 0 )
      goto LABEL_32;
    v20 = v28;
    v18 = inserted == 255;
    v21 = DWORD1(v28);
    if ( !v18 )
      HotPatchRecord = 0LL;
    MiHotPatchAllProcesses(v28, DWORD1(v28), v23);
    *v4 = v20;
    v4[1] = v21;
    inserted = 0;
    if ( HotPatchRecord )
      goto LABEL_32;
  }
LABEL_33:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)inserted;
}
