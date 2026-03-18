/*
 * XREFs of PspSetQuotaLimits @ 0x1409C2688
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x14047D754 (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14089F8F0 (SePrivilegedServiceAuditAlarm.c)
 *     PspSinglePrivCheck @ 0x1409C2BAC (PspSinglePrivCheck.c)
 *     PspAssignProcessQuotaBlock @ 0x140A30EE8 (PspAssignProcessQuotaBlock.c)
 */

__int64 __fastcall PspSetQuotaLimits(ULONG_PTR BugCheckParameter1, __int128 *a2, int a3, char a4)
{
  char v8; // r12
  __int64 result; // rax
  int v10; // edi
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // r13
  int v13; // r14d
  char v14; // r15
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 *v18; // r14
  bool v19; // zf
  int v20; // esi
  __int64 *v21; // rdi
  ULONG_PTR v22; // rbx
  char v23; // [rsp+40h] [rbp-118h]
  char v24; // [rsp+41h] [rbp-117h]
  char v25; // [rsp+42h] [rbp-116h]
  char v26; // [rsp+43h] [rbp-115h] BYREF
  char v27; // [rsp+44h] [rbp-114h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  int v29; // [rsp+50h] [rbp-108h]
  _QWORD *v30; // [rsp+58h] [rbp-100h]
  __int128 v31; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-E8h]
  __int128 v33; // [rsp+80h] [rbp-D8h]
  __int128 v34; // [rsp+90h] [rbp-C8h]
  __int128 v35; // [rsp+A0h] [rbp-B8h]
  __int64 v36; // [rsp+B0h] [rbp-A8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-68h]
  _OWORD v40[3]; // [rsp+F8h] [rbp-60h] BYREF

  v8 = 0;
  Object = 0LL;
  memset_0(&v31, 0, 0x58uLL);
  memset(v40, 0, sizeof(v40));
  v26 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v38 = 0LL;
  v39 = 0LL;
  if ( a3 == 48 )
  {
    v31 = *a2;
    v32 = a2[1];
    v33 = a2[2];
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v23 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v23 = 0;
    v31 = *a2;
    v32 = a2[1];
    v33 = a2[2];
    v34 = a2[3];
    v35 = a2[4];
    v36 = *((_QWORD *)a2 + 10);
  }
  if ( (v36 & 0xFFFFFFE0) != 0 || (v36 & 3) == 3 || (v36 & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v36 & 1) != 0 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 0;
    if ( (v36 & 2) != 0 )
      v10 = 8;
  }
  if ( (v36 & 4) != 0 )
  {
    v10 |= 1u;
  }
  else if ( (v36 & 8) != 0 )
  {
    v10 |= 2u;
  }
  if ( *((_QWORD *)&v34 + 1) | (unsigned __int64)v35 | *((_QWORD *)&v35 + 1) | HIDWORD(v36) )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             256,
             (__int64)PsProcessType,
             a4,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0;
    if ( *((__int64 **)Object + 95) != &PspSystemQuotaBlock || (_QWORD)v32 && *((_QWORD *)&v32 + 1) )
    {
      if ( (_QWORD)v32 && *((_QWORD *)&v32 + 1) )
      {
        if ( v32 == __PAIR128__(-1LL, -1LL) )
        {
          v24 = 1;
          LOBYTE(v29) = 0;
          v27 = 0;
        }
        else
        {
          v24 = 0;
          LOBYTE(v11) = a4;
          v29 = PspSinglePrivCheck(*((_QWORD *)&v32 + 1), -1LL, v11, &SubjectContext);
          v27 = 1;
        }
        v14 = 0;
        v15 = Object;
        v30 = Object;
        while ( 1 )
        {
          v25 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v40);
          --CurrentThread->SpecialApcDisable;
          v16 = v15[84];
          if ( v16 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
            if ( (*(_DWORD *)(v16 + 1056) & 1) != 0 )
            {
              v10 = 1;
              LOBYTE(v29) = 1;
              v25 = 1;
              if ( !v24 )
                v32 = *(_OWORD *)(v16 + 1000);
            }
            v17 = KeAbPreAcquire((__int64)&qword_140FC60B8, 0LL);
            v18 = v17;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC60B8, 0LL) )
              ExfAcquirePushLockExclusiveEx(&qword_140FC60B8, v17, (__int64)&qword_140FC60B8);
            if ( v18 )
              *((_BYTE *)v18 + 10) = 1;
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
            v8 = v25;
          }
          v13 = MmAdjustWorkingSetSizeEx(v32, *((unsigned __int64 *)&v32 + 1), 0, v29, v10, &v26);
          if ( v13 < 0 && v8 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v10);
          if ( v16 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC60B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC60B8);
            KeAbPostRelease((ULONG_PTR)&qword_140FC60B8);
          }
          v19 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v19
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KiUnstackDetachProcess((__int64)v40, 0LL);
          if ( v26 == 1 && !v8 )
            v14 = 1;
          v19 = v30[84] == v16;
          v15 = v30;
          if ( v19 )
            break;
          v8 = 0;
        }
        if ( v27 == 1 && BYTE4(v39) )
        {
          if ( v14 == 1 )
            SePrivilegedServiceAuditAlarm((int)L"$&", (__int64 *)&SubjectContext, &v38, SBYTE5(v39));
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
    }
    else
    {
      if ( v23 == 1 )
      {
        memset_0(&v31, 0, 0x58uLL);
        LODWORD(v36) = 16;
      }
      if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
      {
        v20 = -1073741727;
LABEL_66:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (unsigned int)v20;
      }
      v21 = (__int64 *)Object;
      v22 = PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
      v20 = PspAssignProcessQuotaBlock(&v31, v21, v22);
      ObFastDereferenceObject(v21 + 73, v22, 1953261124LL);
      if ( v20 < 0 )
        goto LABEL_66;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v13;
  }
  return result;
}
