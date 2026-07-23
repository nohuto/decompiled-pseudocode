/*
 * XREFs of TppAlpcpExecuteCallback @ 0x1800522C0
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppDirectExecuteCallback @ 0x180089F30 (TppDirectExecuteCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     TpCallbackMayRunLong @ 0x18004EA40 (TpCallbackMayRunLong.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180160E60 (ZwAlertThreadByThreadId.c)
 *     NtAlpcSetInformation @ 0x180161220 (NtAlpcSetInformation.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppAlpcpExecuteCallback(_TP_CALLBACK_INSTANCE *a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rdi
  __int64 v6; // rax
  signed __int32 v7; // r8d
  int v8; // eax
  signed __int32 v9; // edx
  signed __int32 v10; // r9d
  char v11; // si
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  volatile signed __int32 *v14; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  volatile signed __int32 **v17; // rdx
  bool v18; // zf
  signed __int64 v19; // rax
  PTP_CALLBACK_INSTANCE v20; // r15
  __int64 v21; // r13
  __int64 **v22; // rdi
  __int64 *v23; // rbx
  void *v24; // rcx
  __int64 v25; // rdi
  struct _TEB *v26; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v29; // rdx
  unsigned __int64 *v30; // rbx
  __int64 v31; // rdi
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r10
  _QWORD *ThreadPoolData; // rcx
  unsigned int v40; // edx
  __int64 v41; // rax
  char *v42; // rbx
  _DWORD *v43; // rcx
  __int64 v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rsi
  unsigned __int64 Root; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  int Count; // ebx
  void *v52; // rcx
  int PortInformation; // [rsp+30h] [rbp-D0h] BYREF
  PTP_CALLBACK_INSTANCE Instance; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+40h] [rbp-C0h]
  __int128 v56; // [rsp+48h] [rbp-B8h]
  _DWORD Fields[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+68h] [rbp-98h]
  __int128 v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  _DWORD v65[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int128 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  __int64 v72; // [rsp+F0h] [rbp-10h]
  _OWORD v73[2]; // [rsp+100h] [rbp+0h] BYREF
  int v74; // [rsp+120h] [rbp+20h]
  int v75; // [rsp+124h] [rbp+24h]

  v3 = *(PVOID *)(a2 + 208);
  v55 = a3;
  Instance = a1;
  if ( !v3 )
    goto LABEL_2;
  v47 = 0LL;
  if ( v3 == LdrpSystemDllBase )
  {
    v47 = LdrpNtDllDataTableEntry;
    goto LABEL_72;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
      goto LABEL_71;
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !Root )
    goto LABEL_71;
  do
  {
    if ( (unsigned __int64)v3 >= *(_QWORD *)(Root - 152) )
    {
      if ( (unsigned __int64)v3 <= *(_QWORD *)(Root - 152) )
        break;
      v49 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v49 )
      {
        Root ^= v49;
        continue;
      }
LABEL_65:
      Root = v49;
      continue;
    }
    v49 = *(_QWORD *)Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v49 )
      goto LABEL_65;
    Root ^= v49;
  }
  while ( Root );
  if ( Root )
  {
    v50 = *(_QWORD *)(Root - 48);
    v47 = Root - 200;
    if ( *(_DWORD *)(v50 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v50 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v47 + 276));
  }
LABEL_71:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_72:
  if ( v47 )
  {
    Count = LdrpIncrementModuleLoadCount(v47);
    LdrpDereferenceModule((char *)v47);
    if ( Count >= 0 )
    {
      a1->CallbackEpilogFlags |= 0x100u;
      a1->RaceDll = v3;
LABEL_2:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
      if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(a2 + 216);
          v7 = *(_DWORD *)(a2 + 284);
          if ( !v6 || (v8 = *(_DWORD *)(v6 + 440)) == 0 )
            v8 = MEMORY[0x7FFE03C0];
          v9 = v8 + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
          v10 = v8 + v9;
          if ( v7 >= v9 && v7 <= v8 + v10 )
            break;
          if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v10, v7) )
          {
            v52 = *(void **)(a2 + 272);
            PortInformation = v8 + v9;
            NtAlpcSetInformation(v52, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
          }
        }
      }
      v11 = 0;
      v56 = 0LL;
      _m_prefetchw((const void *)(a2 + 128));
      v12 = *(_QWORD *)(a2 + 128);
      do
      {
        if ( v11 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
          v11 = 0;
        }
        v13 = (v12 + 1) ^ (v12 ^ (v12 + 1)) & 0xF000000000000000uLL;
        if ( ((v12 + 1) & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v12 >> 60) & 8) != 0 )
        {
          v14 = (volatile signed __int32 *)(a2 + 136);
          v13 &= ~0x8000000000000000uLL;
          v11 = 1;
          SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
          if ( SchedulerSharedDataSlot )
          {
            for ( i = 0; i < 8; ++i )
            {
              v17 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
              if ( !*v17 )
              {
                if ( v17 )
                  *v17 = v14;
                break;
              }
            }
          }
          if ( _interlockedbittestandset64(v14, 0LL) )
            RtlpAcquireSRWLockExclusiveContended((PVOID)(a2 + 136));
        }
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v13, v12);
        v18 = v12 == v19;
        v12 = v19;
      }
      while ( !v18 );
      v20 = Instance;
      v21 = v55;
      if ( v11 )
      {
        v22 = *(__int64 ***)(a2 + 144);
        *(_QWORD *)(a2 + 144) = 0LL;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
        if ( v22 )
        {
          do
          {
            v23 = *v22;
            ZwAlertThreadByThreadId(v22[1]);
            v22 = (__int64 **)v23;
          }
          while ( v23 );
        }
      }
      if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v20->ActivationFrame.Size = 72LL;
        v20->ActivationFrame.Format = 1;
        RtlActivateActivationContextUnsafeFast(v20, *(_QWORD *)(a2 + 168));
        *((_BYTE *)v20 + 76) |= 1u;
      }
      v20->CallbackEpilogFlags |= 0x240u;
      v20->CleanupGroupMember = (_TPP_CLEANUP_GROUP_MEMBER *)(a2 + 72);
      if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
        TpCallbackMayRunLong(v20);
      v24 = *(void **)(a2 + 176);
      if ( v24 )
      {
        v20->SubProcessTag = v24;
        v25 = 2147353488LL;
        v26 = NtCurrentTeb();
        SubProcessTag = v26->SubProcessTag;
        v26->SubProcessTag = v24;
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v29 = (__int64)NtCurrentPeb()->SharedData + 566;
        else
          v29 = 2147353488LL;
        if ( *(_BYTE *)v29 && v24 != SubProcessTag )
        {
          memset(v73, 0, sizeof(v73));
          WORD3(v73[0]) = 1349;
          v74 = (int)SubProcessTag;
          v75 = (int)v24;
          if ( RtlGetCurrentServiceSessionId() )
            v25 = (__int64)NtCurrentPeb()->SharedData + 566;
          NtTraceEvent((HANDLE)*(unsigned __int8 *)v25, 0x402u, 8u, v73);
        }
      }
      NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
      v30 = (unsigned __int64 *)(a2 + 200);
      if ( a2 != -200 )
      {
        if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *v30 )
          goto LABEL_36;
        if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v30, 8u) >= 0 )
        {
          *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v30;
LABEL_36:
          v20->WorkOnBehalf = *v30;
        }
      }
      v31 = 2147353478LL;
      v32 = NtCurrentPeb()->SharedData;
      if ( v32 && *v32 )
        v33 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v33 = 2147353478LL;
      if ( *(_BYTE *)v33 )
      {
        v60 = *(_QWORD *)(a2 + 216);
        v62 = *(_QWORD *)(a2 + 152);
        v63 = *(_QWORD *)(a2 + 160);
        v64 = *(_QWORD *)(a2 + 176);
        Fields[0] = 0;
        Fields[1] = 471990272;
        v58 = 0LL;
        v59 = 0LL;
        v61 = a2;
        v34 = NtCurrentPeb()->SharedData;
        if ( v34 && *v34 )
          v35 = (__int64)NtCurrentPeb()->SharedData + 556;
        else
          v35 = 2147353478LL;
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v35, 0x402u, 0x28u, Fields);
      }
      v36 = *(_QWORD *)(a2 + 176);
      v37 = *(_QWORD *)(a2 + 160);
      v38 = *(_QWORD *)(a2 + 152);
      ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
      if ( ThreadPoolData )
      {
        ++ThreadPoolData[2];
        v40 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
        *((_DWORD *)ThreadPoolData + 3) = v40;
        v41 = 4LL * v40;
        ThreadPoolData[v41 + 4] = v38;
        ThreadPoolData[v41 + 5] = v37;
        ThreadPoolData[v41 + 6] = v36;
        ThreadPoolData[v41 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
        v42 = (char *)&ThreadPoolData[4 * v40 + 4];
      }
      else
      {
        v42 = 0LL;
      }
      v20->Callback = *(void **)(a2 + 152);
      v20->Context = *(void **)(a2 + 160);
      if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
      {
        v20->AlpcWorkItem = (_TP_ALPC *)a2;
        (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64, __int64))(a2 + 152))(
          v20,
          *(_QWORD *)(a2 + 160),
          a2,
          v21);
      }
      else
      {
        (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64))(a2 + 152))(v20, *(_QWORD *)(a2 + 160), a2);
      }
      v43 = NtCurrentPeb()->SharedData;
      if ( v43 && *v43 )
        v44 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v44 = 2147353478LL;
      if ( *(_BYTE *)v44 )
      {
        v68 = *(_QWORD *)(a2 + 216);
        v70 = *(_QWORD *)(a2 + 152);
        v71 = *(_QWORD *)(a2 + 160);
        v72 = *(_QWORD *)(a2 + 176);
        v65[0] = 0;
        v65[1] = 472055808;
        v66 = 0LL;
        v67 = 0LL;
        v69 = a2;
        v45 = NtCurrentPeb()->SharedData;
        if ( v45 && *v45 )
          v31 = (__int64)NtCurrentPeb()->SharedData + 556;
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v31, 0x403u, 0x28u, v65);
      }
      if ( v42 )
      {
        v46 = *((_QWORD *)v42 + 3);
        if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v46 )
          *((_QWORD *)v42 + 3) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - v46;
      }
    }
  }
}
