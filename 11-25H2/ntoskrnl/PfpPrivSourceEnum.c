/*
 * XREFs of PfpPrivSourceEnum @ 0x1408DED60
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     SmStoreExistsForProcess @ 0x140324354 (SmStoreExistsForProcess.c)
 *     MmQuerySystemMemoryInformation @ 0x1403BDCA8 (MmQuerySystemMemoryInformation.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1403D8014 (MmQueryProcessWorkingSetSwapPages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140861F50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x1408DF8B8 (PfpPrivSourceAdd.c)
 *     ExGetNextProcess @ 0x1408DF930 (ExGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1408DFCB4 (SmProcessQueryStoreStats.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall PfpPrivSourceEnum(struct _KTHREAD *a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 NextProcess; // r14
  unsigned __int64 v6; // r15
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int SListFaultAddress; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
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
  __int64 *v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  char v28; // al
  _BYTE *v29; // rax
  _DWORD *v30; // rdi
  __int64 v32; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v34[8]; // [rsp+20h] [rbp-1C8h] BYREF
  _DWORD *v35; // [rsp+28h] [rbp-1C0h]
  __int128 v36; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-1A8h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-198h]
  unsigned __int64 v39; // [rsp+58h] [rbp-190h]
  _DWORD *v40; // [rsp+60h] [rbp-188h]
  int v41; // [rsp+70h] [rbp-178h] BYREF
  unsigned int v42; // [rsp+74h] [rbp-174h]
  int v43; // [rsp+78h] [rbp-170h]
  __int64 v44; // [rsp+80h] [rbp-168h]
  __int64 v45; // [rsp+88h] [rbp-160h]
  unsigned __int64 v46; // [rsp+90h] [rbp-158h]
  unsigned __int64 v47; // [rsp+98h] [rbp-150h]
  int SessionId; // [rsp+A0h] [rbp-148h]
  _BYTE v49[20]; // [rsp+A4h] [rbp-144h] BYREF
  unsigned __int64 v50; // [rsp+B8h] [rbp-130h] BYREF
  unsigned __int64 v51; // [rsp+C0h] [rbp-128h]
  int v52; // [rsp+C8h] [rbp-120h]
  unsigned int v53; // [rsp+CCh] [rbp-11Ch]
  PVOID Object; // [rsp+D0h] [rbp-118h]
  _OWORD v55[2]; // [rsp+D8h] [rbp-110h] BYREF
  _QWORD SystemInformation[8]; // [rsp+100h] [rbp-E8h] BYREF
  struct _LIST_ENTRY v57; // [rsp+140h] [rbp-A8h]

  v35 = a3;
  CurrentThread = a1;
  v40 = a3;
  memset_0(SystemInformation, 0, sizeof(SystemInformation));
  memset(v55, 0, sizeof(v55));
  v34[0] = 0;
  v39 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  NextProcess = 0LL;
  Object = 0LL;
  LODWORD(v6) = 0;
  Blink = a1->Header.WaitListHead.Blink;
  SListFaultAddress = (unsigned int)a1->SListFaultAddress;
  if ( SListFaultAddress < 0x10 )
  {
    SystemMemoryInformation = -1073741789;
    goto LABEL_62;
  }
  if ( a2 )
    ProbeForWrite(Blink, SListFaultAddress, 8u);
  v57 = *Blink;
  LODWORD(Blink->Blink) = 0;
  if ( LODWORD(v57.Flink) != 8 || (HIDWORD(v57.Flink) & 0xFFFFFFF8) != 0 || (BYTE4(v57.Flink) & 3) == 3 )
  {
    SystemMemoryInformation = -1073741811;
    goto LABEL_62;
  }
  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
LABEL_8:
    if ( !v34[0] )
      ++*((_QWORD *)&v36 + 1);
    goto LABEL_10;
  }
  IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, v34);
  SystemMemoryInformation = IsAppContainerOrIdentifyLevelContext;
  if ( IsAppContainerOrIdentifyLevelContext != -1073741659 )
  {
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_62;
    goto LABEL_8;
  }
  v34[0] = 1;
LABEL_10:
  NextProcess = ExGetNextProcess(0LL);
  if ( NextProcess )
  {
LABEL_11:
    ++*((_QWORD *)&v36 + 1);
    while ( 1 )
    {
      v9 = PsGetNextProcess((PVOID)NextProcess);
      NextProcess = v9;
      if ( !v9 )
        break;
      if ( (*(_DWORD *)(v9 + 500) & 0x4000000) != 0 )
        goto LABEL_11;
    }
    NextProcess = 0LL;
  }
  if ( *((_QWORD *)&v36 + 1) > 0xFFFFFFFFuLL || (v10 = 96LL * *((_QWORD *)&v36 + 1) + 16, v10 > 0xFFFFFFFF) )
  {
    SystemMemoryInformation = -1073741670;
  }
  else
  {
    LODWORD(v6) = 96 * DWORD2(v36) + 16;
    v11 = (unsigned int)CurrentThread->SListFaultAddress;
    if ( (unsigned int)v10 > v11 )
    {
      SystemMemoryInformation = -1073741789;
    }
    else
    {
      HIDWORD(v37) = (v11 - 16) / 0x60;
      *(_QWORD *)&v36 = Blink;
      if ( v34[0] )
        goto LABEL_31;
      memset_0(&v41, 0, 0x60uLL);
      v42 = -1;
      v45 = 0xFFFFFFFFLL;
      v12 = 16LL;
      v13 = v49;
      do
      {
        if ( v12 == -2147483630 )
          break;
        v14 = v13["KernelSpace" - v49];
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
        SystemMemoryInformation = MmQuerySystemMemoryInformation(v55);
        if ( SystemMemoryInformation >= 0 )
        {
          v46 = SystemInformation[0] >> 12;
          v17 = *(_QWORD *)&v55[0];
          if ( *(_QWORD *)&v55[0] <= SystemInformation[0] >> 12 )
            v17 = SystemInformation[0] >> 12;
          v47 = v17;
          SystemMemoryInformation = PfpPrivSourceAdd(&v36, &v41);
          if ( SystemMemoryInformation >= 0 )
          {
LABEL_31:
            v18 = ExGetNextProcess(0LL);
            v19 = BYTE4(v57.Flink);
            while ( 1 )
            {
              NextProcess = v18;
              if ( !v18 )
                break;
              memset_0(&v41, 0, 0x60uLL);
              if ( (v19 & 4) == 0 || (*(_DWORD *)(NextProcess + 1532) & 1) == 0 )
              {
                v41 = 2;
                v42 = *(_DWORD *)(NextProcess + 464);
                v43 = *(_DWORD *)(NextProcess + 900);
                v44 = (*(_QWORD *)(NextProcess + 464) ^ *(_QWORD *)(NextProcess + 504)) & 0x1FFFFFFFFFFFFFFFLL;
                v45 = v42;
                v46 = *(_QWORD *)(NextProcess + 1176);
                if ( v46 > *(_QWORD *)(NextProcess + 1168) )
                  v51 = v46;
                else
                  v51 = *(_QWORD *)(NextProcess + 1168);
                v20 = *(_QWORD *)(NextProcess + 648);
                if ( v20 <= v46 )
                  v20 = v46;
                v47 = v20;
                SessionId = PsGetSessionIdEx(NextProcess);
                v21 = PsReferencePrimaryTokenWithTag(NextProcess, 0x746C6644u);
                v22 = SeSecurityAttributePresent(v21, (const UNICODE_STRING *)&PspSysAppIdClaim);
                ObFastDereferenceObject((__int64 *)(NextProcess + 584), v21, 1953261124LL);
                v23 = SmStoreExistsForProcess(NextProcess);
                v53 = v53 & 0xFFFFFFE6 | v22 & 1 | (8 * v23) | (*(_QWORD *)(NextProcess + 1648) != 0LL ? 0x10 : 0);
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v24 = KeAbPreAcquire(NextProcess + 456, 0LL);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(NextProcess + 456), 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx((signed __int64 *)(NextProcess + 456), 0, v24, NextProcess + 456);
                if ( v24 )
                  *((_BYTE *)v24 + 10) = 1;
                v25 = *(_QWORD *)(NextProcess + 1584);
                PspUnlockProcessShared(NextProcess, (__int64)CurrentThread);
                if ( v25 )
                {
                  v53 |= 2u;
                  v52 = v25 / 0x2710;
                }
                if ( *(_BYTE *)(NextProcess + 1210) == 2 )
                  v53 |= 4u;
                v26 = 16LL;
                v27 = v49;
                do
                {
                  if ( v26 == -2147483630 )
                    break;
                  v28 = v27[NextProcess - (_QWORD)v49 + 824];
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
                v19 = BYTE4(v57.Flink);
                if ( (BYTE4(v57.Flink) & 1) != 0 )
                {
                  MmQueryProcessWorkingSetSwapPages(NextProcess, &v50);
                }
                else if ( (BYTE4(v57.Flink) & 2) != 0
                       && (int)SmProcessQueryStoreStats((struct _EPROCESS *)NextProcess) >= 0 )
                {
                  v50 = v39 >> 12;
                }
                SystemMemoryInformation = PfpPrivSourceAdd(&v36, &v41);
                if ( SystemMemoryInformation < 0 )
                  goto LABEL_62;
              }
              v18 = ExGetNextProcess((PVOID)NextProcess);
            }
            LODWORD(v6) = 96 * v37 + 16;
            SystemMemoryInformation = 0;
          }
        }
      }
    }
  }
LABEL_62:
  v30 = v35;
  if ( NextProcess )
    ObfDereferenceObjectWithTag((PVOID)NextProcess, 0x6E457350u);
  if ( SystemMemoryInformation == -1073741789 )
  {
    v32 = *((_QWORD *)&v36 + 1);
    if ( (unsigned __int64)(unsigned int)(v37 + 1) > *((_QWORD *)&v36 + 1) )
      v32 = (unsigned int)(v37 + 1);
    v6 = 96 * v32 + 16;
    if ( v6 > 0xFFFFFFFF )
    {
      LODWORD(v6) = 0;
      SystemMemoryInformation = -1073741670;
    }
  }
  *v30 = v6;
  return (unsigned int)SystemMemoryInformation;
}
