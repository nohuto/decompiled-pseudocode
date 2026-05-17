/*
 * XREFs of TppAlpcpExecuteCallback @ 0x1800258C0
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppDirectExecuteCallback @ 0x18006D650 (TppDirectExecuteCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     TpCallbackMayRunLong @ 0x180022040 (TpCallbackMayRunLong.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 *     NtAlpcSetInformation @ 0x180162E60 (NtAlpcSetInformation.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppAlpcpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 SchedulerSharedDataSlot)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rax
  signed __int32 v8; // r8d
  int v9; // eax
  signed __int32 v10; // edx
  char v11; // si
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  volatile signed __int32 *v14; // r8
  unsigned int i; // ecx
  volatile signed __int32 **v16; // rdx
  bool v17; // zf
  signed __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r13
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rbx
  void *v25; // rcx
  __int64 v26; // rdi
  struct _TEB *v27; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r10
  _QWORD *ThreadPoolData; // rcx
  unsigned int v41; // edx
  __int64 v42; // rax
  char *v43; // rbx
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  _DWORD *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  int Count; // ebx
  __int64 v53; // rcx
  int v54; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+38h] [rbp-C8h]
  __int64 v56; // [rsp+40h] [rbp-C0h]
  __int128 v57; // [rsp+48h] [rbp-B8h]
  _DWORD v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-98h]
  __int128 v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-60h]
  _DWORD v66[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int128 v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  _OWORD v74[2]; // [rsp+100h] [rbp+0h] BYREF
  int v75; // [rsp+120h] [rbp+20h]
  int v76; // [rsp+124h] [rbp+24h]

  v4 = *(_QWORD *)(a2 + 208);
  v56 = a3;
  v55 = a1;
  if ( !v4 )
    goto LABEL_2;
  v48 = 0LL;
  if ( v4 == LdrpSystemDllBase )
  {
    v48 = LdrpNtDllDataTableEntry;
    goto LABEL_72;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v49 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D2460 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_71;
    v49 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v49 )
    goto LABEL_71;
  do
  {
    if ( v4 >= *(_QWORD *)(v49 - 152) )
    {
      if ( v4 <= *(_QWORD *)(v49 - 152) )
        break;
      v50 = *(_QWORD *)(v49 + 8);
      if ( (qword_1801D2460 & 1) != 0 && v50 )
      {
        v49 ^= v50;
        continue;
      }
LABEL_65:
      v49 = v50;
      continue;
    }
    v50 = *(_QWORD *)v49;
    if ( (qword_1801D2460 & 1) == 0 || !v50 )
      goto LABEL_65;
    v49 ^= v50;
  }
  while ( v49 );
  if ( v49 )
  {
    v51 = *(_QWORD *)(v49 - 48);
    v48 = v49 - 200;
    if ( *(_DWORD *)(v51 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v51 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v48 + 276));
  }
LABEL_71:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_72:
  if ( v48 )
  {
    Count = LdrpIncrementModuleLoadCount(v48);
    LdrpDereferenceModule(v48);
    if ( Count >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v4;
LABEL_2:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
      if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(a2 + 216);
          v8 = *(_DWORD *)(a2 + 284);
          if ( !v7 || (v9 = *(_DWORD *)(v7 + 440)) == 0 )
            v9 = MEMORY[0x7FFE03C0];
          v10 = v9 + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
          SchedulerSharedDataSlot = (unsigned int)(v9 + v10);
          if ( v8 >= v10 && v8 <= v9 + (int)SchedulerSharedDataSlot )
            break;
          if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), SchedulerSharedDataSlot, v8) )
          {
            v53 = *(_QWORD *)(a2 + 272);
            v54 = v9 + v10;
            NtAlpcSetInformation(v53, 8LL, &v54);
          }
        }
      }
      v11 = 0;
      v57 = 0LL;
      _m_prefetchw((const void *)(a2 + 128));
      v12 = *(_QWORD *)(a2 + 128);
      do
      {
        if ( v11 )
        {
          RtlReleaseSRWLockExclusive(a2 + 136);
          v11 = 0;
        }
        v13 = (v12 + 1) ^ (v12 ^ (v12 + 1)) & 0xF000000000000000uLL;
        if ( ((v12 + 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v12 >> 60) & 8) != 0 )
        {
          v14 = (volatile signed __int32 *)(a2 + 136);
          v13 &= ~0x8000000000000000uLL;
          v11 = 1;
          SchedulerSharedDataSlot = (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot;
          if ( SchedulerSharedDataSlot )
          {
            for ( i = 0; i < 8; ++i )
            {
              v16 = (volatile signed __int32 **)(SchedulerSharedDataSlot + 8LL * i);
              if ( !*v16 )
              {
                if ( v16 )
                  *v16 = v14;
                break;
              }
            }
          }
          if ( _interlockedbittestandset64(v14, 0LL) )
            RtlpAcquireSRWLockExclusiveContended(a2 + 136);
        }
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v13, v12);
        v17 = v12 == v18;
        v12 = v18;
      }
      while ( !v17 );
      v19 = v55;
      v20 = v56;
      if ( v11 )
      {
        v21 = *(_QWORD **)(a2 + 144);
        *(_QWORD *)(a2 + 144) = 0LL;
        RtlReleaseSRWLockExclusive(a2 + 136);
        if ( v21 )
        {
          do
          {
            v24 = (_QWORD *)*v21;
            ZwAlertThreadByThreadId(v21[1], v22, v23, SchedulerSharedDataSlot);
            v21 = v24;
          }
          while ( v24 );
        }
      }
      if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        *(_QWORD *)v19 = 72LL;
        *(_DWORD *)(v19 + 8) = 1;
        RtlActivateActivationContextUnsafeFast(v19, *(_QWORD *)(a2 + 168));
        *(_BYTE *)(v19 + 76) |= 1u;
      }
      *(_DWORD *)(v19 + 144) |= 0x240u;
      *(_QWORD *)(v19 + 184) = a2 + 72;
      if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
        TpCallbackMayRunLong(v19);
      v25 = *(void **)(a2 + 176);
      if ( v25 )
      {
        *(_QWORD *)(v19 + 80) = v25;
        v26 = 2147353488LL;
        v27 = NtCurrentTeb();
        SubProcessTag = v27->SubProcessTag;
        v27->SubProcessTag = v25;
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v30 = (__int64)NtCurrentPeb()->SharedData + 566;
        else
          v30 = 2147353488LL;
        if ( *(_BYTE *)v30 && v25 != SubProcessTag )
        {
          memset(v74, 0, sizeof(v74));
          WORD3(v74[0]) = 1349;
          v75 = (int)SubProcessTag;
          v76 = (int)v25;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v30, SubProcessTag, SchedulerSharedDataSlot) )
            v26 = (__int64)NtCurrentPeb()->SharedData + 566;
          NtTraceEvent(*(unsigned __int8 *)v26, 1026LL, 8LL, v74);
        }
      }
      NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
      v31 = (_QWORD *)(a2 + 200);
      if ( a2 != -200 )
      {
        if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *v31 )
          goto LABEL_36;
        if ( (int)NtSetInformationThread(-2LL, 44LL, v31) >= 0 )
        {
          *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v31;
LABEL_36:
          *(_QWORD *)(v19 + 248) = *v31;
        }
      }
      v32 = 2147353478LL;
      v33 = NtCurrentPeb()->SharedData;
      if ( v33 && *v33 )
        v34 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v34 = 2147353478LL;
      if ( *(_BYTE *)v34 )
      {
        v61 = *(_QWORD *)(a2 + 216);
        v63 = *(_QWORD *)(a2 + 152);
        v64 = *(_QWORD *)(a2 + 160);
        v65 = *(_QWORD *)(a2 + 176);
        v58[0] = 0;
        v58[1] = 471990272;
        v59 = 0LL;
        v60 = 0LL;
        v62 = a2;
        v35 = NtCurrentPeb()->SharedData;
        if ( v35 && *v35 )
          v36 = (__int64)NtCurrentPeb()->SharedData + 556;
        else
          v36 = 2147353478LL;
        NtTraceEvent(*(unsigned __int8 *)v36, 1026LL, 40LL, v58);
      }
      v37 = *(_QWORD *)(a2 + 176);
      v38 = *(_QWORD *)(a2 + 160);
      v39 = *(_QWORD *)(a2 + 152);
      ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
      if ( ThreadPoolData )
      {
        ++ThreadPoolData[2];
        v41 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
        *((_DWORD *)ThreadPoolData + 3) = v41;
        v42 = 4LL * v41;
        ThreadPoolData[v42 + 4] = v39;
        ThreadPoolData[v42 + 5] = v38;
        ThreadPoolData[v42 + 6] = v37;
        ThreadPoolData[v42 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
        v43 = (char *)&ThreadPoolData[4 * v41 + 4];
      }
      else
      {
        v43 = 0LL;
      }
      *(_QWORD *)(v19 + 88) = *(_QWORD *)(a2 + 152);
      *(_QWORD *)(v19 + 96) = *(_QWORD *)(a2 + 160);
      if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
      {
        *(_QWORD *)(v19 + 136) = a2;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(v19, *(_QWORD *)(a2 + 160), a2, v20);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(a2 + 152))(v19, *(_QWORD *)(a2 + 160), a2);
      }
      v44 = NtCurrentPeb()->SharedData;
      if ( v44 && *v44 )
        v45 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v45 = 2147353478LL;
      if ( *(_BYTE *)v45 )
      {
        v69 = *(_QWORD *)(a2 + 216);
        v71 = *(_QWORD *)(a2 + 152);
        v72 = *(_QWORD *)(a2 + 160);
        v73 = *(_QWORD *)(a2 + 176);
        v66[0] = 0;
        v66[1] = 472055808;
        v67 = 0LL;
        v68 = 0LL;
        v70 = a2;
        v46 = NtCurrentPeb()->SharedData;
        if ( v46 && *v46 )
          v32 = (__int64)NtCurrentPeb()->SharedData + 556;
        NtTraceEvent(*(unsigned __int8 *)v32, 1027LL, 40LL, v66);
      }
      if ( v43 )
      {
        v47 = *((_QWORD *)v43 + 3);
        if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v47 )
          *((_QWORD *)v43 + 3) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - v47;
      }
    }
  }
}
