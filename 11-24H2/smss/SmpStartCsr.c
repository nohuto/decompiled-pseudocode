/*
 * XREFs of SmpStartCsr @ 0x140004120
 * Callers:
 *     SmpCreateInitialSession @ 0x140019050 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     SmpInsertControlBlock @ 0x140003ACC (SmpInsertControlBlock.c)
 *     SmpAllocateControlBlock @ 0x140004B60 (SmpAllocateControlBlock.c)
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpReleaseControlBlock @ 0x140005FF0 (SmpReleaseControlBlock.c)
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpStopCsr @ 0x140007B00 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpInvokeAutoChk @ 0x140015CB8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpStartCsr(__int64 a1)
{
  __int64 v2; // rax
  __int64 ControlBlock; // rax
  _BYTE *v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  WCHAR *Heap; // rax
  signed int v8; // eax
  __int64 v9; // r9
  signed int v10; // r15d
  NTSTATUS v11; // r14d
  int v12; // eax
  __int64 v13; // rdx
  __int64 result; // rax
  _QWORD *v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r8
  _BYTE *v19; // rcx
  char v20; // al
  _BYTE *v21; // rax
  _OWORD *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  _BYTE *v35; // rcx
  __int64 v36; // r8
  char v37; // al
  _BYTE *v38; // rax
  _OWORD *v39; // rdx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  int v52; // r15d
  __int64 v53; // rbx
  unsigned int i; // edx
  void *v55; // rcx
  _QWORD *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // rdx
  void *v59; // rcx
  signed int SubSystem; // eax
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int ProcessInformation; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+58h] [rbp-A8h] BYREF
  PVOID BaseAddress[2]; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int64 EventInformation; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v67; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Object[3]; // [rsp+98h] [rbp-68h] BYREF
  HANDLE ProcessHandle[2]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle[2]; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+F0h] [rbp-10h]
  __int128 v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+10h]
  UNICODE_STRING Source; // [rsp+120h] [rbp+20h] BYREF
  __int128 v77; // [rsp+130h] [rbp+30h]
  _OWORD v78[12]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v79; // [rsp+200h] [rbp+100h]
  __int128 v80; // [rsp+210h] [rbp+110h]
  _OWORD v81[12]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v82; // [rsp+2E0h] [rbp+1E0h]
  __int128 v83; // [rsp+2F0h] [rbp+1F0h]
  _BYTE v84[40]; // [rsp+300h] [rbp+200h] BYREF
  int v85; // [rsp+328h] [rbp+228h]
  int v86; // [rsp+330h] [rbp+230h]
  wchar_t pszDest[20]; // [rsp+450h] [rbp+350h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v75 = 0LL;
  v2 = *(unsigned int *)(a1 + 48);
  *(_OWORD *)Object = 0LL;
  ProcessInformation = 0;
  *(_OWORD *)ProcessHandle = 0LL;
  *(_OWORD *)Handle = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  if ( (unsigned int)v2 >= SmpNumberInitialSessions )
    goto LABEL_2;
  v52 = 0;
  v53 = SmpCoreProcessIds + 40 * v2;
  RtlAcquireSRWLockShared(v53 + 8);
  while ( !*(_DWORD *)(v53 + 4) )
    RtlSleepConditionVariableSRW(v53 + 16, v53 + 8, 0LL, 1LL);
  if ( *(_QWORD *)(v53 + 32) )
  {
    for ( i = 0; i < 2; i += 2 )
    {
      v55 = *(void **)(v53 + 8LL * i + 24);
      BaseAddress[i] = v55;
      if ( !i && BaseAddress[0] )
        _InterlockedIncrement((volatile signed __int32 *)v55);
      BaseAddress[i + 1] = *(PVOID *)(v53 + 8LL * (i + 1) + 24);
      v56 = BaseAddress[0];
    }
  }
  else
  {
    v56 = BaseAddress[0];
    v52 = -1073741823;
  }
  RtlReleaseSRWLockShared(v53 + 8);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(SmpCoreProcessIds + 40LL * *(unsigned int *)(a1 + 48));
  if ( v52 < 0 )
  {
LABEL_2:
    NtWaitForSingleObject(SmpSessionCreateBlockEvent, 0, 0LL);
    Destination.Length = *(_WORD *)(a1 + 52);
    Destination.MaximumLength = Destination.Length;
    Destination.Buffer = (PWSTR)(a1 + 56);
    ControlBlock = SmpAllocateControlBlock();
    v4 = (_BYTE *)ControlBlock;
    if ( !ControlBlock )
    {
      memset_0(v78, 0, 0xE0uLL);
      LODWORD(v79) = -1073741670;
      DWORD2(v80) = 460;
      v35 = v78;
      v36 = 64LL;
      do
      {
        if ( v36 == -2147483582 )
          break;
        v37 = v35["SmpStartCsr" - (char *)v78];
        if ( !v37 )
          break;
        *v35++ = v37;
        --v36;
      }
      while ( v36 );
      v38 = v35 - 1;
      if ( v36 )
        v38 = v35;
      *v38 = 0;
      v39 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_140030ED4) % 16));
      v40 = v78[1];
      *(_OWORD *)((char *)v39 + 8) = v78[0];
      v41 = v78[2];
      *(_OWORD *)((char *)v39 + 24) = v40;
      v42 = v78[3];
      *(_OWORD *)((char *)v39 + 40) = v41;
      v43 = v78[4];
      *(_OWORD *)((char *)v39 + 56) = v42;
      v44 = v78[5];
      *(_OWORD *)((char *)v39 + 72) = v43;
      v45 = v78[6];
      *(_OWORD *)((char *)v39 + 88) = v44;
      v46 = v78[8];
      *(_OWORD *)((char *)v39 + 104) = v45;
      v39 = (_OWORD *)((char *)v39 + 136);
      *(v39 - 1) = v78[7];
      v47 = v78[9];
      *v39 = v46;
      v48 = v78[10];
      v39[1] = v47;
      v49 = v78[11];
      v39[2] = v48;
      v50 = v79;
      v39[3] = v49;
      v51 = v80;
      result = 3221225626LL;
      v39[4] = v50;
      v39[5] = v51;
      return result;
    }
    v5 = *(_QWORD *)(ControlBlock + 24);
    Source = Destination;
    v6 = SmpHelperCmd.Length + 40LL + (unsigned __int16)_mm_cvtsi128_si32((__m128i)Destination);
    if ( v6 > 0xFFFF )
    {
      v11 = -1073741811;
    }
    else
    {
      Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, v6);
      if ( Heap )
      {
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.MaximumLength = v6;
        Destination.Buffer = Heap;
        RtlAppendUnicodeStringToString(&Destination, &SmpHelperCmd);
        RtlStringCbPrintfW(pszDest, 0x28uLL, L" %08x %08x ", (unsigned int)v5, (_DWORD)SmpSharedSection);
        RtlAppendUnicodeToString(&Destination, pszDest);
        RtlAppendUnicodeStringToString(&Destination, &Source);
        v63 = 5152;
        UnicodeString = 0LL;
        v77 = 0LL;
        v67 = 0LL;
        v8 = SmpParseCommandLine(&Destination, &v63, &UnicodeString, 0LL);
        v10 = v8;
        if ( v8 < 0 )
        {
          SmpLogFailureString((__int64)"SmpExecuteCommand", 0x2789u, (__int64)Destination.Buffer, v8);
          v11 = v10;
          RtlFreeUnicodeString(&Destination);
          goto LABEL_46;
        }
        if ( (v63 & 4) != 0 )
        {
          if ( SmpSoftBoot && !SmpBugcheckRecovery )
          {
LABEL_9:
            RtlFreeUnicodeString(&UnicodeString);
            RtlFreeUnicodeString(&v67);
            if ( v10 >= 0 )
              goto LABEL_10;
            goto LABEL_77;
          }
          SubSystem = SmpInvokeAutoChk(&UnicodeString);
        }
        else if ( (v63 & 8) != 0 )
        {
          if ( SmpPrimarySmss )
            SubSystem = SmpLoadSubSystem(
                          (unsigned int)&UnicodeString,
                          0,
                          (unsigned int)&Destination,
                          0,
                          (unsigned int)&v67,
                          v63);
          else
            SubSystem = SmscpLoadSubSystem(&UnicodeString.Length, 0, (__int64)&Destination, 0, v63);
        }
        else
        {
          if ( (v63 & 0x10) != 0 )
          {
            v10 = -1073741772;
            SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27AFu, (__int64)UnicodeString.Buffer, 0xC0000034);
            RtlFreeUnicodeString(&UnicodeString);
            RtlFreeUnicodeString(&v67);
LABEL_77:
            SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27CAu, (__int64)Destination.Buffer, v10);
LABEL_10:
            v11 = v10;
            RtlFreeUnicodeString(&Destination);
            if ( v10 >= 0 )
            {
              v12 = NtQueryInformationProcess(ProcessHandle[1], ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
              v11 = v12;
              if ( v12 < 0 )
              {
                NtTerminateProcess(ProcessHandle[1], v12);
                NtClose(ProcessHandle[1]);
                NtClose(Handle[0]);
LABEL_13:
                SmpReleaseControlBlock(v4);
                return (unsigned int)v11;
              }
              v15 = (_QWORD *)*((_QWORD *)v4 + 2);
              *v15 = *((_QWORD *)v4 + 4);
              v15[1] = *((_QWORD *)v4 + 5);
              *((HANDLE *)v4 + 6) = ProcessHandle[1];
              *((HANDLE *)v4 + 7) = Handle[1];
              *((_DWORD *)v4 + 2) = ProcessInformation;
              v16 = ProcessInformation;
              v17 = _InterlockedIncrement(&dword_1400322E8);
              if ( v17 <= SmpNumberInitialSessions )
              {
                v13 = 5LL * (v17 - 1);
                *(_DWORD *)(SmpCoreProcessIds + 40LL * (v17 - 1)) = ProcessInformation;
              }
              else
              {
                _InterlockedDecrement(&dword_1400322E8);
              }
              *((_OWORD *)v4 + 4) = *(_OWORD *)a1;
              *((_OWORD *)v4 + 5) = *(_OWORD *)(a1 + 16);
              *((_QWORD *)v4 + 12) = *(_QWORD *)(a1 + 32);
              *((_QWORD *)v4 + 13) = v4 + 104;
              *((_QWORD *)v4 + 14) = 0LL;
              *((_QWORD *)v4 + 15) = 0LL;
              ++*((_DWORD *)v4 + 1);
              RtlAcquireSRWLockExclusive(&SmpControlLock, v13, v16);
              if ( (unsigned int)SmpInsertControlBlock((__int64)SmpControlBlockRoot, (__int64)v4) )
                SmpControlBlockRoot = (PRTL_SPLAY_LINKS)(v4 + 104);
              RtlReleaseSRWLockExclusive(&SmpControlLock);
              v11 = NtResumeThread(Handle[0], 0LL);
              NtClose(Handle[0]);
              if ( v11 < 0 )
              {
                if ( (*v4 & 1) == 0 )
                  _InterlockedOr((volatile signed __int32 *)v4, 1u);
                SmpDestroyControlBlock(v4);
                goto LABEL_13;
              }
              Object[0] = *((HANDLE *)v4 + 6);
              Object[1] = *((HANDLE *)v4 + 4);
              v11 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
              if ( v11 >= 0 )
              {
                if ( !v11 )
                {
                  v59 = (void *)*((_QWORD *)v4 + 4);
                  EventInformation = 0LL;
                  NtQueryEvent(v59, EventBasicInformation, &EventInformation, 8u, 0LL);
                  if ( !HIDWORD(EventInformation) )
                  {
                    if ( (*v4 & 1) == 0 )
                      _InterlockedOr((volatile signed __int32 *)v4, 1u);
                    v11 = -1073741823;
                    goto LABEL_55;
                  }
                  v11 = NtClearEvent(*((HANDLE *)v4 + 4));
                  if ( v11 < 0 )
                  {
LABEL_55:
                    SmpDestroyControlBlock(v4);
                    v58 = 646LL;
LABEL_56:
                    v57 = (unsigned int)v11;
                    goto LABEL_47;
                  }
                }
              }
              else
              {
                memset_0(v81, 0, 0xE0uLL);
                LODWORD(v82) = v11;
                DWORD2(v83) = 595;
                v18 = 64LL;
                v19 = v81;
                do
                {
                  if ( v18 == -2147483582 )
                    break;
                  v20 = v19["SmpStartCsr" - (char *)v81];
                  if ( !v20 )
                    break;
                  *v19++ = v20;
                  --v18;
                }
                while ( v18 );
                v21 = v19 - 1;
                if ( v18 )
                  v21 = v19;
                *v21 = 0;
                v22 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_140030ED4) % 16));
                v23 = v81[1];
                *(_OWORD *)((char *)v22 + 8) = v81[0];
                v24 = v81[2];
                *(_OWORD *)((char *)v22 + 24) = v23;
                v25 = v81[3];
                *(_OWORD *)((char *)v22 + 40) = v24;
                v26 = v81[4];
                *(_OWORD *)((char *)v22 + 56) = v25;
                v27 = v81[5];
                *(_OWORD *)((char *)v22 + 72) = v26;
                v28 = v81[6];
                *(_OWORD *)((char *)v22 + 88) = v27;
                v29 = v81[8];
                *(_OWORD *)((char *)v22 + 104) = v28;
                v22 = (_OWORD *)((char *)v22 + 136);
                *(v22 - 1) = v81[7];
                v30 = v81[9];
                *v22 = v29;
                v31 = v81[10];
                v22[1] = v30;
                v32 = v81[11];
                v22[2] = v31;
                v33 = v82;
                v22[3] = v32;
                v34 = v83;
                v22[4] = v33;
                v22[5] = v34;
                if ( (*v4 & 1) == 0 )
                {
                  _m_prefetchw(v4);
                  if ( (_InterlockedOr((volatile signed __int32 *)v4, 1u) & 1) == 0 )
                    goto LABEL_55;
                }
              }
              SmpReleaseControlBlock(v4);
              return 259LL;
            }
LABEL_46:
            v57 = (unsigned int)v10;
            v58 = 491LL;
LABEL_47:
            SmpLogFailure("SmpStartCsr", v58, v57);
            goto LABEL_13;
          }
          SubSystem = SmpExecuteImage(&UnicodeString.Length, 0LL, (__int64)&Destination, v9, 0LL, v63, ProcessHandle);
        }
        v10 = SubSystem;
        goto LABEL_9;
      }
      memset_0(v84, 0, 0xE0uLL);
      v11 = -1073741801;
      SmpInternalLogFailure((__int64)"SmpAllocateInitialCommandBuffer", 285, -1073741801, (__int64)v84);
    }
    v58 = 471LL;
    goto LABEL_56;
  }
  memset_0(v84, 0, 0x148uLL);
  if ( v56 && *((_DWORD *)v56 + 6) == 2 )
    *(_QWORD *)(a1 + 320) = v56[6];
  else
    v52 = -1073741823;
  if ( v56 )
    SmpDereferenceKnownSubSys(v56);
  if ( v52 >= 0 )
  {
    *(PVOID *)(a1 + 312) = BaseAddress[1];
    return 0LL;
  }
  else
  {
    v86 = *(_DWORD *)(a1 + 48);
    v85 = 6;
    SmpStopCsr(v84, 0LL, 0LL);
    return (unsigned int)v52;
  }
}
