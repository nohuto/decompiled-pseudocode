/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x180021030
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpWakeByAddress @ 0x180014E60 (RtlpWakeByAddress.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18001B950 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     RtlpWnfMetaCallbackProc @ 0x180020C70 (RtlpWnfMetaCallbackProc.c)
 *     RtlSetThreadSubProcessTag @ 0x180022160 (RtlSetThreadSubProcessTag.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180099634 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpFcWnfCallback @ 0x1800D6100 (RtlpFcWnfCallback.c)
 *     RtlpWnfMarkFailure @ 0x18011D448 (RtlpWnfMarkFailure.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x1801327B4 (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r10
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 **v6; // rcx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // edx
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // r9
  _QWORD *v12; // rbx
  _QWORD *v13; // r13
  _QWORD *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // r15d
  int v18; // ecx
  signed __int64 v19; // rax
  bool v20; // cc
  signed __int64 v21; // rax
  void (__fastcall *v22)(__int64, __int64, __int64, __int64); // rbx
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 (__fastcall *v33)(__int64, __int64, int); // rsi
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // esi
  int *SharedData; // rax
  __int64 v39; // rcx
  int v40; // esi
  __int64 v41; // r15
  unsigned int v42; // ebx
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  volatile signed __int32 *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  unsigned int v50; // eax
  _DWORD *v51; // r15
  signed __int32 v52[8]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v53; // [rsp+20h] [rbp-198h]
  int v54; // [rsp+28h] [rbp-190h]
  int v55; // [rsp+40h] [rbp-178h]
  int v56; // [rsp+44h] [rbp-174h]
  __int64 v57; // [rsp+48h] [rbp-170h]
  int v58; // [rsp+50h] [rbp-168h]
  int v59; // [rsp+54h] [rbp-164h]
  int v60; // [rsp+58h] [rbp-160h]
  __int64 v61; // [rsp+60h] [rbp-158h]
  int v62; // [rsp+68h] [rbp-150h]
  __int64 v63; // [rsp+70h] [rbp-148h]
  __int64 v64; // [rsp+78h] [rbp-140h]
  __int64 v65; // [rsp+80h] [rbp-138h]
  __int64 v66; // [rsp+88h] [rbp-130h]
  int v67; // [rsp+90h] [rbp-128h]
  volatile signed __int32 *v68; // [rsp+98h] [rbp-120h]
  __int64 v69; // [rsp+A0h] [rbp-118h]
  __int64 (__fastcall *v70)(__int64); // [rsp+A8h] [rbp-110h]
  __int64 v71; // [rsp+B0h] [rbp-108h]
  _QWORD *v72; // [rsp+B8h] [rbp-100h]
  _QWORD *v73; // [rsp+C0h] [rbp-F8h]
  int v74; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v75; // [rsp+D0h] [rbp-E8h]
  _QWORD *v76; // [rsp+D8h] [rbp-E0h]
  __int64 v77; // [rsp+E0h] [rbp-D8h]
  __int64 v78; // [rsp+E8h] [rbp-D0h]
  __int64 v79; // [rsp+F8h] [rbp-C0h]
  volatile signed __int32 *v80; // [rsp+100h] [rbp-B8h]
  _QWORD *v81; // [rsp+108h] [rbp-B0h]
  _BYTE v82[6]; // [rsp+120h] [rbp-98h] BYREF
  __int16 v83; // [rsp+126h] [rbp-92h]
  __int64 v84; // [rsp+140h] [rbp-78h]
  _QWORD *v85; // [rsp+148h] [rbp-70h]
  __int64 v86; // [rsp+150h] [rbp-68h]
  __int64 (__fastcall *v87)(__int64); // [rsp+158h] [rbp-60h]
  int v88; // [rsp+160h] [rbp-58h]
  unsigned int v89; // [rsp+164h] [rbp-54h]
  int v90; // [rsp+168h] [rbp-50h]
  __int64 v91; // [rsp+170h] [rbp-48h]

  v65 = a2;
  v4 = a1;
  v57 = a1;
  v77 = a1;
  v78 = a2;
  v62 = 0;
  v64 = a1 + *(unsigned int *)(a1 + 44);
  v5 = (volatile signed __int32 *)(a2 + 64);
  v68 = v5;
  v80 = v5;
  v6 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v6 = (volatile signed __int32 **)&SchedulerSharedDataSlot[i];
        break;
      }
    }
    v5 = v68;
  }
  if ( v6 )
    *v6 = v5;
  if ( _interlockedbittestandset64(v5, 0LL) )
  {
    RtlpAcquireSRWLockExclusiveContended(v5);
    v4 = v57;
  }
  v9 = (_QWORD *)(a2 + 72);
  v73 = (_QWORD *)(a2 + 72);
  v10 = *(_QWORD **)(a2 + 72);
  v72 = v10;
LABEL_12:
  v11 = 2147352584LL;
  while ( 1 )
  {
    v12 = v10;
    v81 = v10;
    if ( v10 == v9 )
      break;
    v13 = v10 - 1;
    v14 = v10 - 1;
    v76 = v10 - 1;
    v15 = RtlpFreezeTimeBias;
    v16 = MEMORY[0x7FFE03B0];
    v75 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    if ( _InterlockedIncrement64(v10 + 3) <= 1 )
      __fastfail(0xEu);
    v17 = v13[9] & *(_DWORD *)(v4 + 24);
    if ( *((_DWORD *)v13 + 19) || !v17 )
      goto LABEL_22;
    if ( ((v17 & 1) == 0 || (v18 = *((_DWORD *)v13 + 16)) != 0 && *(_DWORD *)(v4 + 16) - v18 <= 0)
      && ((v17 & 0xFFFFFFFE) == 0 || *((_DWORD *)v13 + 39))
      && (v17 & 0x10) == 0 )
    {
      goto LABEL_22;
    }
    if ( *((_DWORD *)v13 + 30) )
    {
      if ( v75 < v13[14] )
      {
        v45 = *((_DWORD *)v13 + 33);
        if ( v45 )
        {
          if ( *(_DWORD *)(v4 + 16) - v45 <= 0 )
            goto LABEL_22;
        }
      }
    }
    if ( a3 && !*((_DWORD *)v13 + 38) )
      goto LABEL_22;
    v70 = (__int64 (__fastcall *)(__int64))v13[5];
    v25 = v13[3];
    v26 = *(_QWORD *)(v25 + 16);
    v63 = *(_QWORD *)(v25 + 56);
    v61 = v13[6];
    v66 = v13[7];
    *((_DWORD *)v13 + 34) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( v10 == (_QWORD *)-136LL )
    {
      v50 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v50);
    }
    else
    {
      v13[18] = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
    }
    RtlReleaseSRWLockExclusive(v68);
    v55 = 0;
    v56 = 0;
    v60 = 0;
    v67 = 0;
    v27 = 0;
    v58 = 0;
    v28 = v13[10];
    v71 = v28;
    if ( !v28 )
      goto LABEL_33;
    v46 = (volatile signed __int32 *)(v28 + 24);
    if ( a3 )
    {
      RtlAcquireSRWLockExclusive(v46);
LABEL_97:
      v27 = 1;
      v58 = 1;
LABEL_33:
      if ( *((_DWORD *)v13 + 19) )
      {
        v42 = v55;
        v40 = 0;
        v41 = v71;
      }
      else
      {
        v79 = RtlSetThreadSubProcessTag(v66);
        v59 = 1;
        LODWORD(v66) = 1;
        v33 = (__int64 (__fastcall *)(__int64, __int64, int))v70;
        if ( (v17 & 1) != 0 )
        {
          v54 = *(_DWORD *)(v57 + 20);
          v53 = v64;
          if ( v70 == RtlLeaveCriticalSection )
          {
            v35 = RtlLeaveCriticalSection(v26);
          }
          else
          {
            v34 = *(unsigned int *)(v57 + 16);
            if ( (char *)v70 == (char *)RtlpFcWnfCallback )
              v35 = RtlpFcWnfCallback(v26, v34, v63, v61, v53, v54);
            else
              v35 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, int))v70)(
                      v26,
                      v34,
                      v63,
                      v61,
                      v53,
                      v54);
          }
          v55 = v35;
          v56 = v35;
        }
        else
        {
          v35 = v55;
        }
        if ( (v17 & 0x10) != 0 && !*((_DWORD *)v13 + 19) && (v35 >= 0 || (*((_BYTE *)v13 + 68) & 4) == 0) )
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))v33)(v26, 0LL, v63, v61, 0LL, 0);
          v55 = 0;
          v56 = 0;
        }
        if ( (v17 & 0xFFFFFFEE) != 0 )
        {
          if ( v33 == RtlpWnfMetaCallbackProc )
            RtlpWnfMetaCallbackProc(v26, v61, v17);
          else
            v33(v26, v61, v17);
          v55 = 0;
          v56 = 0;
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v29, v31, v32) )
        {
          v36 = (__int64)NtCurrentPeb()->SharedData + 564;
          v55 = v56;
        }
        else
        {
          v36 = 2147353486LL;
        }
        if ( *(_BYTE *)v36 )
        {
          v37 = *(_DWORD *)(v57 + 16);
          memset_thunk_772440563353939046(v82, 0, 0x50uLL);
          v83 = 3362;
          v91 = v26;
          v69 = v26;
          v84 = v26;
          v85 = v10 - 1;
          v86 = v65;
          v87 = v70;
          v88 = v37;
          v89 = v17;
          v90 = v55;
          SharedData = (int *)NtCurrentPeb()->SharedData;
          if ( SharedData && (v74 = *SharedData) != 0 )
            v39 = (__int64)NtCurrentPeb()->SharedData + 564;
          else
            v39 = 2147353486LL;
          NtTraceEvent(*(unsigned __int8 *)v39, 132098LL, 44LL, v82);
        }
        v40 = v59;
        v41 = v71;
        RtlSetThreadSubProcessTag(v79);
        v42 = v56;
        v27 = v58;
      }
      if ( v27 )
        RtlReleaseSRWLockExclusive(v41 + 24);
      if ( v40 )
      {
        RtlAcquireSRWLockExclusive(v80);
        v60 = 1;
        if ( v42 == -1073741267 || v42 == -1073741801 )
        {
          if ( (*((_BYTE *)v14 + 68) & 4) != 0 )
          {
            v62 = 1;
            RtlpWnfMarkFailure(v14, v42, *(unsigned int *)(v57 + 16));
          }
        }
        else
        {
          v43 = *((_DWORD *)v14 + 16);
          if ( !v43 || *(_DWORD *)(v57 + 16) - v43 > 0 )
            *((_DWORD *)v14 + 16) = *(_DWORD *)(v57 + 16);
          if ( *((_DWORD *)v14 + 31) )
          {
            v14[15] = 0LL;
            v14[16] = 0LL;
            v14[14] = 0LL;
          }
        }
      }
      v44 = 0;
      goto LABEL_73;
    }
    if ( RtlTryAcquireSRWLockExclusive(v46) )
      goto LABEL_97;
    v44 = 1;
LABEL_73:
    *((_DWORD *)v13 + 38) = v44;
    if ( !v60 )
      RtlAcquireSRWLockExclusive(v65 + 64);
    *((_DWORD *)v14 + 34) = 0;
    v14[18] = 0LL;
    v12 = v81;
LABEL_22:
    v10 = (_QWORD *)*v10;
    v72 = v10;
    v19 = _InterlockedExchangeAdd64(v14 + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v20 = v19 <= 1;
    v21 = v19 - 1;
    if ( v20 )
    {
      if ( v21 )
        __fastfail(0xEu);
      v47 = v14[10];
      if ( v47 )
        RtlpDecrementWnfSerializationGroup(v47, v16, v15, v11);
      v48 = *v12;
      v49 = (_QWORD *)v12[1];
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v49 != v12 )
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
      v51 = (_DWORD *)v14[11];
      v22 = (void (__fastcall *)(__int64, __int64, __int64, __int64))v14[12];
      v23 = v14[13];
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v14);
      if ( v51 )
      {
        *v51 = 1;
        _InterlockedOr(v52, 0);
        RtlpWakeByAddress((unsigned __int64)v51, 0, 0LL);
      }
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
    }
    v4 = v57;
    v9 = v73;
    v11 = 2147352584LL;
    if ( v22 )
    {
      v22(v23, v16, v15, 2147352584LL);
      v4 = v57;
      v9 = v73;
      goto LABEL_12;
    }
  }
  RtlReleaseSRWLockExclusive(v65 + 64);
  return v62 != 0 ? 0xC000022D : 0;
}
