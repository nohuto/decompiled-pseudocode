/*
 * XREFs of PfpPrivSourceEnum @ 0x14085F9A0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     SmStoreExistsForProcess @ 0x14020DF24 (SmStoreExistsForProcess.c)
 *     MmQuerySystemMemoryInformation @ 0x140261DE8 (MmQuerySystemMemoryInformation.c)
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1403C81C8 (MmQueryProcessWorkingSetSwapPages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x1408604F8 (PfpPrivSourceAdd.c)
 *     ExGetNextProcess @ 0x140860570 (ExGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1408608B4 (SmProcessQueryStoreStats.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 NextProcess; // r14
  unsigned __int64 v6; // r15
  _DWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int SListFaultAddress; // eax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  char v14; // al
  _BYTE *v15; // rax
  int SystemMemoryInformation; // ebx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  char v19; // di
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rdi
  char v22; // bl
  bool v23; // al
  char *v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  char v28; // al
  _BYTE *v29; // rax
  __int64 v31; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v33; // [rsp+20h] [rbp-1C8h]
  __int128 v35; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-1A8h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-198h]
  unsigned __int64 v38; // [rsp+58h] [rbp-190h]
  _DWORD *v39; // [rsp+60h] [rbp-188h]
  int v40; // [rsp+70h] [rbp-178h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-174h]
  int v42; // [rsp+78h] [rbp-170h]
  __int64 v43; // [rsp+80h] [rbp-168h]
  __int64 v44; // [rsp+88h] [rbp-160h]
  unsigned __int64 v45; // [rsp+90h] [rbp-158h]
  unsigned __int64 v46; // [rsp+98h] [rbp-150h]
  int SessionId; // [rsp+A0h] [rbp-148h]
  _BYTE v48[20]; // [rsp+A4h] [rbp-144h] BYREF
  unsigned __int64 v49; // [rsp+B8h] [rbp-130h] BYREF
  unsigned __int64 v50; // [rsp+C0h] [rbp-128h]
  int v51; // [rsp+C8h] [rbp-120h]
  unsigned int v52; // [rsp+CCh] [rbp-11Ch]
  PVOID Object; // [rsp+D0h] [rbp-118h]
  _OWORD v54[2]; // [rsp+D8h] [rbp-110h] BYREF
  _QWORD SystemInformation[8]; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v56; // [rsp+140h] [rbp-A8h]

  CurrentThread = (struct _KTHREAD *)a1;
  v39 = a3;
  memset_0(SystemInformation, 0, sizeof(SystemInformation));
  memset(v54, 0, sizeof(v54));
  v33 = 0;
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  NextProcess = 0LL;
  Object = 0LL;
  LODWORD(v6) = 0;
  v7 = *(_DWORD **)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 24);
  if ( v8 < 0x10 )
  {
    SystemMemoryInformation = -1073741789;
    goto LABEL_61;
  }
  if ( a2 )
    ProbeForWrite(v7, v8, 8u);
  v56 = *(_OWORD *)v7;
  v7[2] = 0;
  if ( (_DWORD)v56 != 8 || (DWORD1(v56) & 0xFFFFFFF8) != 0 || (BYTE4(v56) & 3) == 3 )
  {
    SystemMemoryInformation = -1073741811;
    goto LABEL_61;
  }
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
    SystemMemoryInformation = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v33 = 1;
      goto LABEL_9;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_61;
  }
  ++*((_QWORD *)&v35 + 1);
LABEL_9:
  NextProcess = ExGetNextProcess(0LL);
  if ( NextProcess )
  {
LABEL_10:
    ++*((_QWORD *)&v35 + 1);
    while ( 1 )
    {
      v9 = PsGetNextProcess((PVOID)NextProcess);
      NextProcess = v9;
      if ( !v9 )
        break;
      if ( (*(_DWORD *)(v9 + 500) & 0x4000000) != 0 )
        goto LABEL_10;
    }
    NextProcess = 0LL;
  }
  if ( *((_QWORD *)&v35 + 1) > 0xFFFFFFFFuLL || (v10 = 96LL * *((_QWORD *)&v35 + 1) + 16, v10 > 0xFFFFFFFF) )
  {
    SystemMemoryInformation = -1073741670;
  }
  else
  {
    LODWORD(v6) = 96 * DWORD2(v35) + 16;
    SListFaultAddress = (unsigned int)CurrentThread->SListFaultAddress;
    if ( (unsigned int)v10 > SListFaultAddress )
    {
      SystemMemoryInformation = -1073741789;
    }
    else
    {
      HIDWORD(v36) = (SListFaultAddress - 16) / 0x60;
      *(_QWORD *)&v35 = v7;
      if ( v33 )
        goto LABEL_30;
      memset_0(&v40, 0, 0x60uLL);
      v41 = -1;
      v44 = 0xFFFFFFFFLL;
      v12 = 16LL;
      v13 = v48;
      do
      {
        if ( v12 == -2147483630 )
          break;
        v14 = v13["KernelSpace" - v48];
        if ( !v14 )
          break;
        *v13++ = v14;
        --v12;
      }
      while ( v12 );
      v15 = v13 - 1;
      if ( v12 )
        v15 = v13;
      *v15 = 0;
      SystemMemoryInformation = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
      if ( SystemMemoryInformation >= 0 )
      {
        SystemMemoryInformation = MmQuerySystemMemoryInformation(v54);
        if ( SystemMemoryInformation >= 0 )
        {
          v45 = SystemInformation[0] >> 12;
          v17 = *(_QWORD *)&v54[0];
          if ( *(_QWORD *)&v54[0] <= SystemInformation[0] >> 12 )
            v17 = SystemInformation[0] >> 12;
          v46 = v17;
          SystemMemoryInformation = PfpPrivSourceAdd(&v35, &v40);
          if ( SystemMemoryInformation >= 0 )
          {
LABEL_30:
            v18 = ExGetNextProcess(0LL);
            v19 = BYTE4(v56);
            while ( 1 )
            {
              NextProcess = v18;
              if ( !v18 )
                break;
              memset_0(&v40, 0, 0x60uLL);
              if ( (v19 & 4) == 0 || (*(_DWORD *)(NextProcess + 1532) & 1) == 0 )
              {
                v40 = 2;
                v41 = *(_DWORD *)(NextProcess + 464);
                v42 = *(_DWORD *)(NextProcess + 900);
                v43 = (*(_QWORD *)(NextProcess + 464) ^ *(_QWORD *)(NextProcess + 504)) & 0x1FFFFFFFFFFFFFFFLL;
                v44 = v41;
                v45 = *(_QWORD *)(NextProcess + 1176);
                if ( v45 > *(_QWORD *)(NextProcess + 1168) )
                  v50 = v45;
                else
                  v50 = *(_QWORD *)(NextProcess + 1168);
                v20 = *(_QWORD *)(NextProcess + 648);
                if ( v20 <= v45 )
                  v20 = v45;
                v46 = v20;
                SessionId = PsGetSessionIdEx(NextProcess);
                v21 = PsReferencePrimaryTokenWithTag(NextProcess, 0x746C6644u);
                v22 = SeSecurityAttributePresent(v21, (const UNICODE_STRING *)&PspSysAppIdClaim);
                ObFastDereferenceObject((__int64 *)(NextProcess + 584), v21, 0x746C6644u);
                v23 = SmStoreExistsForProcess(NextProcess);
                v52 = v52 & 0xFFFFFFE6 | v22 & 1 | (8 * v23) | (*(_QWORD *)(NextProcess + 1648) != 0LL ? 0x10 : 0);
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v24 = (char *)KeAbPreAcquire(NextProcess + 456, 0LL);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(NextProcess + 456), 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx((signed __int64 *)(NextProcess + 456), 0, v24, NextProcess + 456);
                if ( v24 )
                  v24[10] = 1;
                v25 = *(_QWORD *)(NextProcess + 1584);
                PspUnlockProcessShared(NextProcess);
                if ( v25 )
                {
                  v52 |= 2u;
                  v51 = v25 / 0x2710;
                }
                if ( *(_BYTE *)(NextProcess + 1210) == 2 )
                  v52 |= 4u;
                v26 = 16LL;
                v27 = v48;
                do
                {
                  if ( v26 == -2147483630 )
                    break;
                  v28 = v27[NextProcess - (_QWORD)v48 + 824];
                  if ( !v28 )
                    break;
                  *v27++ = v28;
                  --v26;
                }
                while ( v26 );
                v29 = v27 - 1;
                if ( v26 )
                  v29 = v27;
                *v29 = 0;
                v19 = BYTE4(v56);
                if ( (BYTE4(v56) & 1) != 0 )
                {
                  MmQueryProcessWorkingSetSwapPages(NextProcess, &v49);
                }
                else if ( (BYTE4(v56) & 2) != 0 && (int)SmProcessQueryStoreStats((struct _EPROCESS *)NextProcess) >= 0 )
                {
                  v49 = v38 >> 12;
                }
                SystemMemoryInformation = PfpPrivSourceAdd(&v35, &v40);
                if ( SystemMemoryInformation < 0 )
                  goto LABEL_61;
              }
              v18 = ExGetNextProcess((PVOID)NextProcess);
            }
            LODWORD(v6) = 96 * v36 + 16;
            SystemMemoryInformation = 0;
          }
        }
      }
    }
  }
LABEL_61:
  if ( NextProcess )
    ObfDereferenceObjectWithTag((PVOID)NextProcess, 0x6E457350u);
  if ( SystemMemoryInformation == -1073741789 )
  {
    v31 = *((_QWORD *)&v35 + 1);
    if ( (unsigned __int64)(unsigned int)(v36 + 1) > *((_QWORD *)&v35 + 1) )
      v31 = (unsigned int)(v36 + 1);
    v6 = 96 * v31 + 16;
    if ( v6 > 0xFFFFFFFF )
    {
      LODWORD(v6) = 0;
      SystemMemoryInformation = -1073741670;
    }
  }
  *a3 = v6;
  return (unsigned int)SystemMemoryInformation;
}
