/*
 * XREFs of HMAllocObjectEx @ 0x140041FF0
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14000B4F4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     HMAllocObject @ 0x140041E30 (HMAllocObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D000 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     UserCreateBaseWindowHandle @ 0x1401BE720 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001B87C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032B8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x140041A40 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x140042EF8 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140062510 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserCreateHandle @ 0x140063210 (EtwTraceUserCreateHandle.c)
 *     LockObjectAssignment @ 0x1400EC2C0 (LockObjectAssignment.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x140111A54 (-HMGrowHandleTable@@YAHXZ.c)
 *     SharedAlloc @ 0x14014DBE0 (SharedAlloc.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall HMAllocObjectEx(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, int a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r15
  unsigned __int16 v12; // bx
  __int64 v13; // rcx
  __int64 UserSessionState; // rsi
  __int64 *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // r8
  __int64 Pool2; // rsi
  __int64 result; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // r14
  _QWORD *v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  signed int v36; // edx
  signed int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // edi
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // rcx
  unsigned int v48; // edi
  int v49; // ebx
  __int64 v50; // rsi
  __int64 CurrentProcess; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  int (*v54)(void); // rax
  unsigned int v55; // r15d
  __int64 (__fastcall *v56)(__int64, _QWORD, _QWORD); // rax
  __int64 v57; // rax
  void *v58; // r15
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned int EtwUserHandleType; // eax
  __int64 v63; // rax
  unsigned int v64; // ecx
  __int64 v65; // rax
  _DWORD *v66; // rdx
  unsigned __int64 i; // rax
  int ProcessSessionId; // [rsp+28h] [rbp-100h]
  BOOL v69; // [rsp+40h] [rbp-E8h]
  __int64 v70; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v71; // [rsp+48h] [rbp-E0h]
  PVOID BackTrace[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v74; // [rsp+140h] [rbp+18h]
  char v75; // [rsp+140h] [rbp+18h]

  v5 = a3;
  v6 = 0LL;
  v69 = 0;
  v9 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1) + 42400);
  if ( !*(_DWORD *)(W32GetUserSessionState(v10) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v9) != 1) )
  {
    __int2c();
  }
  v11 = 6 * v5;
  v12 = *((_WORD *)&unk_1402437BC + 12 * v5);
  if ( (v12 & 3) != 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 1) != 0 )
      return 0LL;
    v6 = *(_QWORD *)(a1 + 464);
    if ( *(_DWORD *)(v6 + 68) >= gUserProcessHandleQuota )
      goto LABEL_59;
  }
  UserSessionState = W32GetUserSessionState(3 * v5);
  while ( 1 )
  {
    if ( (_BYTE)v5 != 1 )
    {
      v15 = (__int64 *)(UserSessionState + 19760);
      if ( *(_QWORD *)(UserSessionState + 19760) )
        break;
    }
    v15 = (__int64 *)(UserSessionState + 19752);
    if ( *(_QWORD *)(UserSessionState + 19752) )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      goto LABEL_59;
  }
  if ( !v15 )
  {
LABEL_59:
    UserSetLastError(1158LL);
    return 0LL;
  }
  if ( (v12 & 0x10) != 0 && a2 )
  {
    v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
    v54 = *(int (**)(void))(v17 + 2944);
    if ( v54 && v54() >= 0 )
    {
      Pool2 = (__int64)HMAllocateUserOrIsolatedType(a4, v12, v5);
      if ( Pool2 )
      {
        v55 = dword_1402437C0[v11];
        v56 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                + 2952LL);
        if ( v56 )
        {
          v57 = v56(a2, v55, ((_DWORD)v5 << 16) | 5u);
          *(_QWORD *)(Pool2 + 40) = v57;
          if ( v57 )
          {
            v58 = *(void **)(Pool2 + 24);
            ObfReferenceObject((PVOID)a2);
            *(_QWORD *)(Pool2 + 24) = a2;
            if ( v58 )
              ObfDereferenceObject(v58);
            v59 = *(_QWORD *)(Pool2 + 40);
            *(_QWORD *)(Pool2 + 32) = Pool2;
            v17 = v59 - *(_QWORD *)(a2 + 136);
            *(_QWORD *)(Pool2 + 48) = v17;
            goto LABEL_26;
          }
        }
        else
        {
          *(_QWORD *)(Pool2 + 40) = 0LL;
        }
        HMFreeUserOrIsolatedType(v12, v5, (void *)Pool2);
        UserSetLastError(8LL);
        return 0LL;
      }
    }
    else
    {
      Pool2 = 0LL;
    }
    goto LABEL_25;
  }
  if ( (v12 & 0x40) == 0 )
  {
    v69 = !a2 && (v12 & 0x20) != 0;
    if ( (v12 & 0x200) != 0 )
    {
      Pool2 = (__int64)HMAllocateIsolatedType(v5);
    }
    else
    {
      v74 = *(_DWORD *)((char *)&unk_1402437B8 + v11 * 4);
      v16 = a4;
      v18 = W32GetUserSessionState(v13) + 72288;
      v19 = *(_DWORD *)v18;
      if ( !*(_DWORD *)v18 )
      {
        v20 = v74;
        goto LABEL_18;
      }
      if ( v19 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v18,
               v74)
          && (unsigned __int64)a4 + 16 >= a4 )
        {
          Pool2 = ExAllocatePool2(256LL, a4 + 16LL, v74);
          if ( !Pool2
            || (_InterlockedIncrement64((volatile signed __int64 *)(v18 + 112)),
                *(_QWORD *)Pool2 = v74,
                (Pool2 += 16LL) == 0) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v18 + 8),
              v74);
          }
          goto LABEL_20;
        }
      }
      else if ( v19 == 2 )
      {
        v64 = v74;
        if ( (v74 & *(_DWORD *)(v18 + 80)) != v74 )
        {
LABEL_108:
          v20 = v74;
LABEL_18:
          Pool2 = ExAllocatePool2(256LL, a4, v20);
          if ( Pool2 )
            _InterlockedIncrement64((volatile signed __int64 *)(v18 + 112));
          goto LABEL_20;
        }
        v66 = (_DWORD *)(v18 + 48);
        for ( i = 0LL; ; ++i )
        {
          v71 = i;
          if ( i >= *(unsigned int *)(v18 + 84) )
            goto LABEL_108;
          if ( *v66 == v74 )
            break;
          ++v66;
        }
        v75 = 0;
        if ( a4 < 0x1000uLL || (a4 & 0xFFF) != 0 )
        {
          v75 = 1;
          v16 = a4 + 16LL;
        }
        Pool2 = ExAllocatePool2(256LL, v16, v64);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v18 + 128));
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v75 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v18,
                                    Pool2,
                                    v71,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_20;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v18,
                                       Pool2,
                                       v71,
                                       BackTrace) )
          {
            goto LABEL_20;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v18 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      Pool2 = 0LL;
    }
LABEL_20:
    if ( !Pool2 )
      goto LABEL_21;
    if ( (_BYTE)v5 == 1 )
    {
      v63 = Win32AllocPoolWithQuotaZInitImpl(v17, 0x158uLL, 0x64777355u);
      *(_QWORD *)(Pool2 + 40) = v63;
      if ( !v63 )
      {
        HMFreeUserOrIsolatedType(v12, 1, (void *)Pool2);
        Pool2 = 0LL;
      }
    }
    if ( (v12 & 0x100) != 0 )
    {
      LockObjectAssignment(Pool2 + 24, a2);
      *(_QWORD *)(Pool2 + 32) = Pool2;
    }
LABEL_25:
    if ( Pool2 )
      goto LABEL_26;
LABEL_21:
    UserSetLastError(8LL);
    return 0LL;
  }
  if ( !dword_1402437C0[v11] )
  {
    v65 = SharedAlloc(a4);
    Pool2 = v65;
    if ( v65 )
    {
      *(_QWORD *)(v65 + 24) = 0LL;
      *(_QWORD *)(v65 + 32) = 0LL;
      v17 = v65 - *(_QWORD *)(W32GetUserSessionState(v17) + 19920);
      *(_QWORD *)(Pool2 + 48) = v17;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  Pool2 = Win32AllocPoolZInitImpl(256LL, a4, *(_DWORD *)((char *)&unk_1402437B8 + v11 * 4));
  if ( !Pool2 )
    goto LABEL_25;
  v60 = SharedAlloc((unsigned int)dword_1402437C0[v11]);
  *(_QWORD *)(Pool2 + 40) = v60;
  if ( !v60 )
  {
    GreDeleteFastMutex((char *)Pool2);
    UserSetLastError(8LL);
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  v17 = *(_QWORD *)(W32GetUserSessionState(v61) + 19920);
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(Pool2 + 40) - v17;
LABEL_26:
  v23 = *v15;
  v70 = *v15;
  v24 = *(_QWORD *)(W32GetUserSessionState(v17) + 19944) + 32 * v23;
  v26 = W32GetUserSessionState(v25);
  v27 = 5 * v23;
  v28 = (__int64 *)(*(_QWORD *)(v26 + 19888) + 40 * v23);
  *v15 = *v28;
  if ( (unsigned int)v70 > *(_DWORD *)(W32GetUserSessionState(v27) + 19872) )
    *(_DWORD *)(W32GetUserSessionState(v29) + 19872) = v70;
  *(_BYTE *)(v24 + 24) = v5;
  v28[3] = 0LL;
  *v28 = Pool2;
  v28[4] = _InterlockedIncrement64(&HandleSequenceNumber);
  if ( (v12 & 0x40) != 0 )
  {
    *(_QWORD *)v24 = *(_QWORD *)(Pool2 + 48);
  }
  else if ( (v12 & 0x10) != 0 && (v29 = (_QWORD *)a2) != 0LL )
  {
    *(_QWORD *)v24 = *(_QWORD *)(Pool2 + 48);
    v29 = **(_QWORD ***)(a2 + 8);
    *(_QWORD *)(v24 + 16) = *v29;
  }
  else
  {
    *(_QWORD *)v24 = 0LL;
  }
  if ( v69 )
    *(_BYTE *)(v24 + 25) |= 0x40u;
  if ( a5 )
    *(_BYTE *)(v24 + 25) |= 0x80u;
  if ( (v12 & 2) != 0 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    v28[1] = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(v24 + 8) = PsGetProcessId(**(PEPROCESS **)(a1 + 464));
    if ( (v12 & 4) != 0 )
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 464);
  }
  else if ( (v12 & 1) != 0 )
  {
    v28[1] = a1;
    *(_QWORD *)(v24 + 8) = PsGetThreadId(*(PETHREAD *)a1);
    *(_QWORD *)(Pool2 + 16) = v28[1];
  }
  v30 = W32GetUserSessionState(v29);
  v32 = *(unsigned int *)(W32GetUserSessionState(v31) + 19952);
  v33 = *(_QWORD *)(v30 + 19944);
  v34 = v70 * v32;
  v35 = *(unsigned __int16 *)(v34 + v33 + 26);
  LOBYTE(v33) = *(_BYTE *)(v34 + v33 + 25);
  v36 = v70 | (v35 << 16);
  v37 = v36 | 0x80000000;
  if ( (v33 & 0x80u) == 0LL )
    v37 = v36;
  v38 = v37;
  v39 = 3 * v5;
  *(_QWORD *)Pool2 = v38;
  if ( dword_1402437C0[6 * v5] )
  {
    v39 = *(_QWORD *)(Pool2 + 40);
    *(_QWORD *)v39 = v38;
    *(_QWORD *)(v39 + 8) = *(_QWORD *)(Pool2 + 48);
  }
  if ( v6 )
  {
    v40 = *(_DWORD *)(v6 + 68) + 1;
    *(_DWORD *)(v6 + 68) = v40;
    if ( v40 > *(_DWORD *)(v6 + 72) )
      *(_DWORD *)(v6 + 72) = v40;
  }
  v41 = W32GetUserSessionState(v39);
  ++*(_DWORD *)(v41 + 19876);
  v43 = *(_DWORD *)(W32GetUserSessionState(v42) + 19876);
  if ( v43 > *(_DWORD *)(W32GetUserSessionState(v44) + 19880) )
  {
    v46 = *(_DWORD *)(W32GetUserSessionState(v45) + 19876);
    *(_DWORD *)(W32GetUserSessionState(v47) + 19880) = v46;
  }
  if ( (v12 & 3) != 0 )
  {
    v48 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(a1 + 464)) & 0xFFFFFFFC;
    if ( (_DWORD)v5 == 16 )
    {
      v49 = 16;
    }
    else if ( (_DWORD)v5 == 255 )
    {
      v49 = 255;
    }
    else
    {
      switch ( (int)v5 )
      {
        case 0:
          v49 = 0;
          break;
        case 1:
          v49 = 1;
          break;
        case 2:
          v49 = 2;
          break;
        case 3:
          v49 = 3;
          break;
        case 4:
          v49 = 4;
          break;
        case 5:
          v49 = 5;
          break;
        case 6:
          v49 = 6;
          break;
        case 7:
          v49 = 7;
          break;
        case 8:
          v49 = 8;
          break;
        case 9:
          v49 = 9;
          break;
        case 10:
          v49 = 10;
          break;
        case 11:
          v49 = 11;
          break;
        case 12:
          v49 = 12;
          break;
        case 13:
          v49 = 13;
          break;
        case 14:
          v49 = 14;
          break;
        case 15:
          v49 = 15;
          break;
        case 17:
          v49 = 17;
          break;
        case 18:
          v49 = 18;
          break;
        case 19:
          v49 = 19;
          break;
        case 20:
          v49 = 20;
          break;
        case 21:
          v49 = 21;
          break;
        case 22:
          v49 = 22;
          break;
        case 23:
          v49 = 23;
          break;
        case 24:
          v49 = 24;
          break;
        default:
          v49 = -1;
          break;
      }
    }
    v50 = *(_QWORD *)Pool2;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
      McTemplateK0pqqq_EtwWriteTransfer(v52, (__int64)&UserCreateHandle, v53, v50, v49, ProcessSessionId, v48);
    }
  }
  else
  {
    EtwUserHandleType = GetEtwUserHandleType((unsigned __int8)v5);
    EtwTraceUserCreateHandle(*(_QWORD *)Pool2, EtwUserHandleType, 0LL);
  }
  result = *v28;
  v28[2] = 0LL;
  return result;
}
