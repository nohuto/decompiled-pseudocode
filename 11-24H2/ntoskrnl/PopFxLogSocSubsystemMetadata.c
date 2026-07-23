/*
 * XREFs of PopFxLogSocSubsystemMetadata @ 0x14096E27C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14074DBBC (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDiagTraceSleepStudyBlockerData @ 0x140755FA4 (PopDiagTraceSleepStudyBlockerData.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14096EBC0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxLogSocSubsystemMetadata(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // r14d
  __int64 v5; // r15
  unsigned int i; // r13d
  __int64 v7; // r12
  __int64 v8; // rax
  char *Pool2; // rdi
  unsigned int v10; // eax
  unsigned int j; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int k; // edx
  char *v20; // rcx
  __int64 v21; // rax
  struct _EVENT_DATA_DESCRIPTOR *v22; // rbx
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // r8
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // rdx
  ULONG v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rax
  ULONG v36; // ecx
  __int64 v38; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v39; // [rsp+80h] [rbp+48h] BYREF
  int v40; // [rsp+84h] [rbp+4Ch]
  unsigned int v41; // [rsp+88h] [rbp+50h]
  int v42; // [rsp+90h] [rbp+58h] BYREF
  ULONG UserDataCount; // [rsp+98h] [rbp+60h]

  v42 = a3;
  v41 = a2;
  v40 = HIDWORD(a1);
  v39 = 0;
  v3 = a2;
  v38 = PopWnfCsEnterScenarioId;
  v4 = 0;
  LOBYTE(v42) = 0;
  v5 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  if ( v5 )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 20); ++i )
    {
      v7 = 344LL * i;
      v8 = *(unsigned int *)(v7 + v5 + 104);
      v39 = v8;
      if ( (_DWORD)v8 )
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL, 296 * v8, 0x4D584650u);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v10 = v39;
        for ( j = 0; j < v39; v10 = v39 )
        {
          v12 = j++;
          v13 = 296 * v12;
          *(_WORD *)&Pool2[v13 + 2] = 128;
          *(_WORD *)&Pool2[v13 + 18] = 128;
          *(_QWORD *)&Pool2[v13 + 8] = &Pool2[296 * v12 + 32];
          *(_DWORD *)&Pool2[v13 + 160] = -1430541637;
          *(_QWORD *)&Pool2[v13 + 24] = &Pool2[296 * v12 + 164];
          *(_DWORD *)&Pool2[v13 + 292] = -1430541637;
        }
        v14 = (unsigned int *)ExAllocatePool2(0x100uLL, (int)(8 * v10 + 32), 0x4D584650u);
        v16 = (__int64)v14;
        if ( v14 )
        {
          *v14 = v3;
          v17 = 0LL;
          v18 = *(_QWORD *)(v7 + v5 + 64);
          *(_DWORD *)(v16 + 24) = 0;
          *(_QWORD *)(v16 + 8) = v18;
          *(_QWORD *)(v16 + 16) = v7 + v5 + 40;
          for ( *(_DWORD *)(v16 + 28) = v39; (unsigned int)v17 < v39; v17 = (unsigned int)(v17 + 1) )
          {
            v15 = (unsigned int)v17;
            *(_QWORD *)(v16 + 8 * v17 + 32) = &Pool2[296 * (unsigned int)v17];
          }
          if ( PopPluginQuerySocSubsystemMetadata(v15, *(_DWORD *)(v7 + v5 + 60), v16) )
          {
            for ( k = 0; k < v39; ++k )
            {
              v20 = &Pool2[296 * k];
              if ( *((_DWORD *)v20 + 40) != -1430541637 )
                PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *((unsigned __int16 *)v20 + 1));
              if ( *((_DWORD *)v20 + 73) != -1430541637 )
                PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *((unsigned __int16 *)v20 + 9));
            }
            UserDataCount = v39 + 4 * v39 + 3;
            v21 = ExAllocatePool2(0x100uLL, 16LL * UserDataCount, 0x4D584650u);
            v22 = (struct _EVENT_DATA_DESCRIPTOR *)v21;
            if ( v21 )
            {
              v23 = 0;
              LOBYTE(v42) = v38;
              v24 = 2;
              *(_DWORD *)(v21 + 12) = 0;
              *(_QWORD *)v21 = &v42;
              *(_DWORD *)(v21 + 8) = 1;
              *(_DWORD *)(v21 + 28) = 0;
              *(_QWORD *)(v21 + 16) = &v39;
              for ( *(_DWORD *)(v21 + 24) = 4; v23 < v39; *(_QWORD *)&v22[v33].Size = v34 )
              {
                v25 = v24;
                v22[v25].Reserved = 0;
                v22[v25].Ptr = v7 + v5 + 72;
                v22[v25].Size = 16;
                v26 = v23++;
                v27 = &Pool2[296 * v26];
                *((_DWORD *)v27 + 40) = *(unsigned __int16 *)v27 >> 1;
                v28 = v24 + 1;
                v29 = v24 + 2;
                v28 *= 2LL;
                v30 = v29;
                *(&v22->Reserved + 2 * v28) = 0;
                *(&v22->Ptr + v28) = (ULONGLONG)(v27 + 160);
                *(&v22->Size + 2 * v28) = 4;
                v31 = *(unsigned __int16 *)v27;
                v22[v30].Ptr = *((_QWORD *)v27 + 1);
                v22[v30].Size = v31;
                v22[v30].Reserved = 0;
                *((_DWORD *)v27 + 73) = *((unsigned __int16 *)v27 + 8) >> 1;
                v32 = v29 + 1;
                v29 += 2;
                v32 *= 2LL;
                v33 = v29;
                v24 = v29 + 1;
                *(&v22->Ptr + v32) = (ULONGLONG)(v27 + 292);
                *((_QWORD *)&v22->Size + v32) = 4LL;
                v34 = *((unsigned __int16 *)v27 + 8);
                v22[v33].Ptr = *((_QWORD *)v27 + 3);
              }
              v35 = v24;
              v22[v35].Reserved = 0;
              v22[v35].Ptr = (ULONGLONG)&v38;
              v36 = UserDataCount;
              v22[v35].Size = 8;
              PopDiagTraceSleepStudyBlockerData(v36, v22);
              ExFreePoolWithTag(v22, 0x4D584650u);
            }
            else
            {
              v4 = -1073741670;
            }
            v3 = v41;
          }
          else
          {
            v4 = -1073741595;
          }
        }
        else
        {
          v4 = -1073741670;
        }
        ExFreePoolWithTag(Pool2, 0x4D584650u);
        if ( v16 )
          ExFreePoolWithTag((PVOID)v16, 0x4D584650u);
        if ( v4 < 0 )
          return (unsigned int)v4;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v4;
}
