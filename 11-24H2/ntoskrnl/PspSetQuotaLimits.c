/*
 * XREFs of PspSetQuotaLimits @ 0x140999A58
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MmEnforceWorkingSetLimit @ 0x140478F0C (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14084FDF0 (SePrivilegedServiceAuditAlarm.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PspSinglePrivCheck @ 0x140999F7C (PspSinglePrivCheck.c)
 *     PspAssignProcessQuotaBlock @ 0x140A2BBE8 (PspAssignProcessQuotaBlock.c)
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
  char *v17; // rax
  char *v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  int v22; // esi
  __int64 *v23; // rdi
  ULONG_PTR v24; // rbx
  char v25; // [rsp+40h] [rbp-118h]
  char v26; // [rsp+41h] [rbp-117h]
  char v27; // [rsp+42h] [rbp-116h]
  char v28; // [rsp+43h] [rbp-115h] BYREF
  char v29; // [rsp+44h] [rbp-114h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  int v31; // [rsp+50h] [rbp-108h]
  _QWORD *v32; // [rsp+58h] [rbp-100h]
  __int128 v33; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+70h] [rbp-E8h]
  __int128 v35; // [rsp+80h] [rbp-D8h]
  __int128 v36; // [rsp+90h] [rbp-C8h]
  __int128 v37; // [rsp+A0h] [rbp-B8h]
  __int64 v38; // [rsp+B0h] [rbp-A8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-68h]
  _OWORD v42[3]; // [rsp+F8h] [rbp-60h] BYREF

  v8 = 0;
  Object = 0LL;
  memset_0(&v33, 0, 0x58uLL);
  memset(v42, 0, sizeof(v42));
  v28 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v40 = 0LL;
  v41 = 0LL;
  if ( a3 == 48 )
  {
    v33 = *a2;
    v34 = a2[1];
    v35 = a2[2];
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v25 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v25 = 0;
    v33 = *a2;
    v34 = a2[1];
    v35 = a2[2];
    v36 = a2[3];
    v37 = a2[4];
    v38 = *((_QWORD *)a2 + 10);
  }
  if ( (v38 & 0xFFFFFFE0) != 0 || (v38 & 3) == 3 || (v38 & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v38 & 1) != 0 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 0;
    if ( (v38 & 2) != 0 )
      v10 = 8;
  }
  if ( (v38 & 4) != 0 )
  {
    v10 |= 1u;
  }
  else if ( (v38 & 8) != 0 )
  {
    v10 |= 2u;
  }
  if ( *((_QWORD *)&v36 + 1) | (unsigned __int64)v37 | *((_QWORD *)&v37 + 1) | HIDWORD(v38) )
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
    if ( *((__int64 **)Object + 95) != &PspSystemQuotaBlock || (_QWORD)v34 && *((_QWORD *)&v34 + 1) )
    {
      if ( (_QWORD)v34 && *((_QWORD *)&v34 + 1) )
      {
        if ( v34 == __PAIR128__(-1LL, -1LL) )
        {
          v26 = 1;
          LOBYTE(v31) = 0;
          v29 = 0;
        }
        else
        {
          v26 = 0;
          LOBYTE(v11) = a4;
          v31 = PspSinglePrivCheck(*((_QWORD *)&v34 + 1), -1LL, v11, &SubjectContext);
          v29 = 1;
        }
        v14 = 0;
        v15 = Object;
        v32 = Object;
        while ( 1 )
        {
          v27 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v42);
          --CurrentThread->SpecialApcDisable;
          v16 = v15[84];
          if ( v16 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
            if ( (*(_DWORD *)(v16 + 1056) & 1) != 0 )
            {
              v10 = 1;
              LOBYTE(v31) = 1;
              v27 = 1;
              if ( !v26 )
                v34 = *(_OWORD *)(v16 + 1000);
            }
            v17 = (char *)KeAbPreAcquire((__int64)&qword_140FC70E8, 0LL);
            v18 = v17;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC70E8, 0LL) )
              ExfAcquirePushLockExclusiveEx(&qword_140FC70E8, v17, (__int64)&qword_140FC70E8);
            if ( v18 )
              v18[10] = 1;
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
            v8 = v27;
          }
          v13 = MmAdjustWorkingSetSizeEx(v34, *((unsigned __int64 *)&v34 + 1), 0, v31, v10, &v28);
          if ( v13 < 0 && v8 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v10);
          if ( v16 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC70E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC70E8);
            KeAbPostRelease((ULONG_PTR)&qword_140FC70E8);
          }
          v21 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v21
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KiUnstackDetachProcess((__int64)v42, 0, v19, v20);
          if ( v28 == 1 && !v8 )
            v14 = 1;
          v21 = v32[84] == v16;
          v15 = v32;
          if ( v21 )
            break;
          v8 = 0;
        }
        if ( v29 == 1 && BYTE4(v41) )
        {
          if ( v14 == 1 )
            SePrivilegedServiceAuditAlarm(L"$&", &SubjectContext, (unsigned int *)&v40, SBYTE5(v41));
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
    }
    else
    {
      if ( v25 == 1 )
      {
        memset_0(&v33, 0, 0x58uLL);
        LODWORD(v38) = 16;
      }
      if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
      {
        v22 = -1073741727;
LABEL_66:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (unsigned int)v22;
      }
      v23 = (__int64 *)Object;
      v24 = PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
      v22 = PspAssignProcessQuotaBlock(&v33, v23, v24);
      ObFastDereferenceObject(v23 + 73, v24, 0x746C6644u);
      if ( v22 < 0 )
        goto LABEL_66;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v13;
  }
  return result;
}
