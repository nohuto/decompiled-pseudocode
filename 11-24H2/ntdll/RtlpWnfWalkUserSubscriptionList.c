/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18004DA30
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlpDecrementWnfSerializationGroup @ 0x18002E484 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpWakeByAddress @ 0x180041860 (RtlpWakeByAddress.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180048350 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     RtlpWnfMetaCallbackProc @ 0x18004D670 (RtlpWnfMetaCallbackProc.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EB60 (RtlSetThreadSubProcessTag.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpFcWnfCallback @ 0x1800D1470 (RtlpFcWnfCallback.c)
 *     RtlpWnfMarkFailure @ 0x18011B678 (RtlpWnfMarkFailure.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x1801309E4 (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(__int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  __int64 v4; // r10
  _RTL_SRWLOCK *v5; // rdx
  _RTL_SRWLOCK **v6; // rcx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // edx
  unsigned __int64 *v9; // rax
  unsigned __int64 *Value; // r14
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v12; // r13
  unsigned __int64 *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // r15d
  int v17; // ecx
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax
  void (__fastcall *v21)(unsigned __int64, __int64, __int64, __int64); // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v24; // rax
  _RTL_CRITICAL_SECTION *v25; // rbx
  int v26; // ecx
  _RTL_SRWLOCK *v27; // rax
  __int64 (__fastcall *v28)(__int64, __int64, int); // rsi
  __int64 v29; // rdx
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  int v32; // esi
  int *SharedData; // rax
  __int64 v34; // rcx
  int v35; // esi
  _RTL_SRWLOCK *v36; // r15
  unsigned __int32 v37; // ebx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  _RTL_SRWLOCK *v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 **v44; // rax
  LONG v45; // eax
  _DWORD *v46; // r15
  signed __int32 v47[8]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-198h]
  int v49; // [rsp+28h] [rbp-190h]
  NTSTATUS v50; // [rsp+40h] [rbp-178h]
  NTSTATUS v51; // [rsp+44h] [rbp-174h]
  __int64 v52; // [rsp+48h] [rbp-170h]
  int v53; // [rsp+50h] [rbp-168h]
  int v54; // [rsp+54h] [rbp-164h]
  int v55; // [rsp+58h] [rbp-160h]
  __int64 v56; // [rsp+60h] [rbp-158h]
  int v57; // [rsp+68h] [rbp-150h]
  __int64 v58; // [rsp+70h] [rbp-148h]
  __int64 v59; // [rsp+78h] [rbp-140h]
  _RTL_SRWLOCK *v60; // [rsp+80h] [rbp-138h]
  PVOID SubProcessTag; // [rsp+88h] [rbp-130h]
  int v62; // [rsp+90h] [rbp-128h]
  PRTL_SRWLOCK SRWLock; // [rsp+98h] [rbp-120h]
  _RTL_CRITICAL_SECTION *v64; // [rsp+A0h] [rbp-118h]
  NTSTATUS (__cdecl *v65)(PRTL_CRITICAL_SECTION); // [rsp+A8h] [rbp-110h]
  _RTL_SRWLOCK *v66; // [rsp+B0h] [rbp-108h]
  unsigned __int64 *v67; // [rsp+B8h] [rbp-100h]
  _RTL_SRWLOCK *v68; // [rsp+C0h] [rbp-F8h]
  int v69; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v70; // [rsp+D0h] [rbp-E8h]
  unsigned __int64 *v71; // [rsp+D8h] [rbp-E0h]
  __int64 v72; // [rsp+E0h] [rbp-D8h]
  _RTL_SRWLOCK *v73; // [rsp+E8h] [rbp-D0h]
  PVOID v74; // [rsp+F8h] [rbp-C0h]
  PRTL_SRWLOCK v75; // [rsp+100h] [rbp-B8h]
  unsigned __int64 *v76; // [rsp+108h] [rbp-B0h]
  _BYTE Fields[6]; // [rsp+120h] [rbp-98h] BYREF
  __int16 v78; // [rsp+126h] [rbp-92h]
  _RTL_CRITICAL_SECTION *v79; // [rsp+140h] [rbp-78h]
  unsigned __int64 *v80; // [rsp+148h] [rbp-70h]
  _RTL_SRWLOCK *v81; // [rsp+150h] [rbp-68h]
  NTSTATUS (__cdecl *v82)(PRTL_CRITICAL_SECTION); // [rsp+158h] [rbp-60h]
  int v83; // [rsp+160h] [rbp-58h]
  unsigned int v84; // [rsp+164h] [rbp-54h]
  NTSTATUS v85; // [rsp+168h] [rbp-50h]
  _RTL_CRITICAL_SECTION *v86; // [rsp+170h] [rbp-48h]

  v60 = a2;
  v4 = a1;
  v52 = a1;
  v72 = a1;
  v73 = a2;
  v57 = 0;
  v59 = a1 + *(unsigned int *)(a1 + 44);
  v5 = a2 + 8;
  SRWLock = v5;
  v75 = v5;
  v6 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v6 = (_RTL_SRWLOCK **)&SchedulerSharedDataSlot[i];
        break;
      }
    }
    v5 = SRWLock;
  }
  if ( v6 )
    *v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
  {
    RtlpAcquireSRWLockExclusiveContended(v5);
    v4 = v52;
  }
  v9 = (unsigned __int64 *)&a2[9];
  v68 = a2 + 9;
  Value = (unsigned __int64 *)a2[9].Value;
  v67 = Value;
  while ( 1 )
  {
    v11 = Value;
    v76 = Value;
    if ( Value == v9 )
      break;
    v12 = Value - 1;
    v13 = Value - 1;
    v71 = Value - 1;
    v14 = RtlpFreezeTimeBias;
    v15 = MEMORY[0x7FFE03B0];
    v70 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)Value + 3) <= 1 )
      __fastfail(0xEu);
    v16 = v12[9] & *(_DWORD *)(v4 + 24);
    if ( !*((_DWORD *)v12 + 19)
      && v16
      && ((v16 & 1) != 0 && ((v17 = *((_DWORD *)v12 + 16)) == 0 || *(_DWORD *)(v4 + 16) - v17 > 0)
       || (v16 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v12 + 39)
       || (v16 & 0x10) != 0)
      && (!*((_DWORD *)v12 + 30)
       || v70 >= v12[14]
       || (v40 = *((_DWORD *)v12 + 33)) == 0
       || *(_DWORD *)(v4 + 16) - v40 > 0)
      && (!a3 || *((_DWORD *)v12 + 38)) )
    {
      v65 = (NTSTATUS (__cdecl *)(PRTL_CRITICAL_SECTION))v12[5];
      v24 = v12[3];
      v25 = *(_RTL_CRITICAL_SECTION **)(v24 + 16);
      v58 = *(_QWORD *)(v24 + 56);
      v56 = v12[6];
      SubProcessTag = (PVOID)v12[7];
      *((_DWORD *)v12 + 34) = NtCurrentTeb()->ClientId.UniqueThread;
      if ( Value == (unsigned __int64 *)-136LL )
      {
        v45 = RtlNtStatusToDosErrorNoTeb(-1073741811);
        RtlSetLastWin32Error(v45);
      }
      else
      {
        v12[18] = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
      }
      RtlReleaseSRWLockExclusive(SRWLock);
      v50 = 0;
      v51 = 0;
      v55 = 0;
      v62 = 0;
      v26 = 0;
      v53 = 0;
      v27 = (_RTL_SRWLOCK *)v12[10];
      v66 = v27;
      if ( !v27 )
      {
LABEL_32:
        if ( *((_DWORD *)v12 + 19) )
        {
          v37 = v50;
          v35 = 0;
          v36 = v66;
        }
        else
        {
          v74 = RtlSetThreadSubProcessTag(SubProcessTag);
          v54 = 1;
          LODWORD(SubProcessTag) = 1;
          v28 = (__int64 (__fastcall *)(__int64, __int64, int))v65;
          if ( (v16 & 1) != 0 )
          {
            v49 = *(_DWORD *)(v52 + 20);
            v48 = v59;
            if ( v65 == RtlLeaveCriticalSection )
            {
              v30 = RtlLeaveCriticalSection(v25);
            }
            else
            {
              v29 = *(unsigned int *)(v52 + 16);
              if ( (char *)v65 == (char *)RtlpFcWnfCallback )
                v30 = RtlpFcWnfCallback(v25, v29, v58, v56, v48, v49);
              else
                v30 = ((__int64 (__fastcall *)(_RTL_CRITICAL_SECTION *, __int64, __int64, __int64, __int64, int))v65)(
                        v25,
                        v29,
                        v58,
                        v56,
                        v48,
                        v49);
            }
            v50 = v30;
            v51 = v30;
          }
          else
          {
            v30 = v50;
          }
          if ( (v16 & 0x10) != 0 && !*((_DWORD *)v12 + 19) && (v30 >= 0 || (*((_BYTE *)v12 + 68) & 4) == 0) )
          {
            ((void (__fastcall *)(_RTL_CRITICAL_SECTION *, _QWORD, __int64, __int64, _QWORD, _DWORD))v28)(
              v25,
              0LL,
              v58,
              v56,
              0LL,
              0);
            v50 = 0;
            v51 = 0;
          }
          if ( (v16 & 0xFFFFFFEE) != 0 )
          {
            if ( v28 == RtlpWnfMetaCallbackProc )
              RtlpWnfMetaCallbackProc((__int64)v25, v56, v16);
            else
              v28((__int64)v25, v56, v16);
            v50 = 0;
            v51 = 0;
          }
          if ( RtlGetCurrentServiceSessionId() )
          {
            v31 = (__int64)NtCurrentPeb()->SharedData + 564;
            v50 = v51;
          }
          else
          {
            v31 = 2147353486LL;
          }
          if ( *(_BYTE *)v31 )
          {
            v32 = *(_DWORD *)(v52 + 16);
            memset_thunk_772440563353939046(Fields, 0, 0x50uLL);
            v78 = 3362;
            v86 = v25;
            v64 = v25;
            v79 = v25;
            v80 = Value - 1;
            v81 = v60;
            v82 = v65;
            v83 = v32;
            v84 = v16;
            v85 = v50;
            SharedData = (int *)NtCurrentPeb()->SharedData;
            if ( SharedData && (v69 = *SharedData) != 0 )
              v34 = (__int64)NtCurrentPeb()->SharedData + 564;
            else
              v34 = 2147353486LL;
            NtTraceEvent((HANDLE)*(unsigned __int8 *)v34, 0x20402u, 0x2Cu, Fields);
          }
          v35 = v54;
          v36 = v66;
          RtlSetThreadSubProcessTag(v74);
          v37 = v51;
          v26 = v53;
        }
        if ( v26 )
          RtlReleaseSRWLockExclusive(v36 + 3);
        if ( v35 )
        {
          RtlAcquireSRWLockExclusive(v75);
          v55 = 1;
          if ( v37 == -1073741267 || v37 == -1073741801 )
          {
            if ( (*((_BYTE *)v13 + 68) & 4) != 0 )
            {
              v57 = 1;
              RtlpWnfMarkFailure(v13, v37, *(unsigned int *)(v52 + 16));
            }
          }
          else
          {
            v38 = *((_DWORD *)v13 + 16);
            if ( !v38 || *(_DWORD *)(v52 + 16) - v38 > 0 )
              *((_DWORD *)v13 + 16) = *(_DWORD *)(v52 + 16);
            if ( *((_DWORD *)v13 + 31) )
            {
              v13[15] = 0LL;
              v13[16] = 0LL;
              v13[14] = 0LL;
            }
          }
        }
        v39 = 0;
        goto LABEL_72;
      }
      v41 = v27 + 3;
      if ( a3 )
      {
        RtlAcquireSRWLockExclusive(v41);
      }
      else if ( !RtlTryAcquireSRWLockExclusive(v41) )
      {
        v39 = 1;
LABEL_72:
        *((_DWORD *)v12 + 38) = v39;
        if ( !v55 )
          RtlAcquireSRWLockExclusive(v60 + 8);
        *((_DWORD *)v13 + 34) = 0;
        v13[18] = 0LL;
        v11 = v76;
        goto LABEL_21;
      }
      v26 = 1;
      v53 = 1;
      goto LABEL_32;
    }
LABEL_21:
    Value = (unsigned __int64 *)*Value;
    v67 = Value;
    v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v19 = v18 <= 1;
    v20 = v18 - 1;
    if ( v19 )
    {
      if ( v20 )
        __fastfail(0xEu);
      v42 = v13[10];
      if ( v42 )
        RtlpDecrementWnfSerializationGroup(v42);
      v43 = *v11;
      v44 = (unsigned __int64 **)v11[1];
      if ( *(unsigned __int64 **)(*v11 + 8) != v11 || *v44 != v11 )
        __fastfail(3u);
      *v44 = (unsigned __int64 *)v43;
      *(_QWORD *)(v43 + 8) = v44;
      v46 = (_DWORD *)v13[11];
      v21 = (void (__fastcall *)(unsigned __int64, __int64, __int64, __int64))v13[12];
      v22 = v13[13];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
      if ( v46 )
      {
        *v46 = 1;
        _InterlockedOr(v47, 0);
        RtlpWakeByAddress((unsigned __int64)v46, 0, 0LL);
      }
    }
    else
    {
      v21 = 0LL;
      v22 = 0LL;
    }
    v4 = v52;
    v9 = (unsigned __int64 *)v68;
    if ( v21 )
    {
      v21(v22, v15, v14, 2147352584LL);
      v4 = v52;
      v9 = (unsigned __int64 *)v68;
    }
  }
  RtlReleaseSRWLockExclusive(v60 + 8);
  return v57 != 0 ? 0xC000022D : 0;
}
