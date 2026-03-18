/*
 * XREFs of PopFxLogSocSubsystemMetadata @ 0x140985A6C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14074F88C (PopPluginQuerySocSubsystemMetadata.c)
 *     PopDiagTraceSleepStudyBlockerData @ 0x140757B24 (PopDiagTraceSleepStudyBlockerData.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1409863B0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxLogSocSubsystemMetadata(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // r14d
  __int64 v5; // r15
  unsigned int i; // r13d
  __int64 v7; // r12
  char *Pool2; // rdi
  unsigned int j; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int k; // edx
  char *v18; // rcx
  __int64 v19; // rax
  struct _EVENT_DATA_DESCRIPTOR *v20; // rbx
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // r8
  __int64 v26; // rax
  unsigned int v27; // r9d
  __int64 v28; // rdx
  ULONG v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rax
  ULONG v34; // ecx
  __int64 v36; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+80h] [rbp+48h] BYREF
  int v38; // [rsp+84h] [rbp+4Ch]
  unsigned int v39; // [rsp+88h] [rbp+50h]
  int v40; // [rsp+90h] [rbp+58h] BYREF
  ULONG UserDataCount; // [rsp+98h] [rbp+60h]

  v40 = a3;
  v39 = a2;
  v38 = HIDWORD(a1);
  v37 = 0;
  v3 = a2;
  v36 = PopWnfCsEnterScenarioId;
  v4 = 0;
  LOBYTE(v40) = 0;
  v5 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  if ( v5 )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 20); ++i )
    {
      v7 = 344LL * i;
      v37 = *(_DWORD *)(v7 + v5 + 104);
      if ( v37 )
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        for ( j = 0; j < v37; *(_DWORD *)&Pool2[v11 + 292] = -1430541637 )
        {
          v10 = j++;
          v11 = 296 * v10;
          *(_WORD *)&Pool2[v11 + 2] = 128;
          *(_WORD *)&Pool2[v11 + 18] = 128;
          *(_QWORD *)&Pool2[v11 + 8] = &Pool2[296 * v10 + 32];
          *(_DWORD *)&Pool2[v11 + 160] = -1430541637;
          *(_QWORD *)&Pool2[v11 + 24] = &Pool2[296 * v10 + 164];
        }
        v12 = (unsigned int *)ExAllocatePool2(0x100uLL);
        v14 = (__int64)v12;
        if ( v12 )
        {
          *v12 = v3;
          v15 = 0LL;
          v16 = *(_QWORD *)(v7 + v5 + 64);
          *(_DWORD *)(v14 + 24) = 0;
          *(_QWORD *)(v14 + 8) = v16;
          *(_QWORD *)(v14 + 16) = v7 + v5 + 40;
          for ( *(_DWORD *)(v14 + 28) = v37; (unsigned int)v15 < v37; v15 = (unsigned int)(v15 + 1) )
          {
            v13 = (unsigned int)v15;
            *(_QWORD *)(v14 + 8 * v15 + 32) = &Pool2[296 * (unsigned int)v15];
          }
          if ( PopPluginQuerySocSubsystemMetadata(v13, *(_DWORD *)(v7 + v5 + 60), v14) )
          {
            for ( k = 0; k < v37; ++k )
            {
              v18 = &Pool2[296 * k];
              if ( *((_DWORD *)v18 + 40) != -1430541637 )
                PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *((unsigned __int16 *)v18 + 1));
              if ( *((_DWORD *)v18 + 73) != -1430541637 )
                PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *((unsigned __int16 *)v18 + 9));
            }
            UserDataCount = v37 + 4 * v37 + 3;
            v19 = ExAllocatePool2(0x100uLL);
            v20 = (struct _EVENT_DATA_DESCRIPTOR *)v19;
            if ( v19 )
            {
              v21 = 0;
              LOBYTE(v40) = v36;
              v22 = 2;
              *(_DWORD *)(v19 + 12) = 0;
              *(_QWORD *)v19 = &v40;
              *(_DWORD *)(v19 + 8) = 1;
              *(_DWORD *)(v19 + 28) = 0;
              *(_QWORD *)(v19 + 16) = &v37;
              for ( *(_DWORD *)(v19 + 24) = 4; v21 < v37; *(_QWORD *)&v20[v31].Size = v32 )
              {
                v23 = v22;
                v20[v23].Reserved = 0;
                v20[v23].Ptr = v7 + v5 + 72;
                v20[v23].Size = 16;
                v24 = v21++;
                v25 = &Pool2[296 * v24];
                *((_DWORD *)v25 + 40) = *(unsigned __int16 *)v25 >> 1;
                v26 = v22 + 1;
                v27 = v22 + 2;
                v26 *= 2LL;
                v28 = v27;
                *(&v20->Reserved + 2 * v26) = 0;
                *(&v20->Ptr + v26) = (ULONGLONG)(v25 + 160);
                *(&v20->Size + 2 * v26) = 4;
                v29 = *(unsigned __int16 *)v25;
                v20[v28].Ptr = *((_QWORD *)v25 + 1);
                v20[v28].Size = v29;
                v20[v28].Reserved = 0;
                *((_DWORD *)v25 + 73) = *((unsigned __int16 *)v25 + 8) >> 1;
                v30 = v27 + 1;
                v27 += 2;
                v30 *= 2LL;
                v31 = v27;
                v22 = v27 + 1;
                *(&v20->Ptr + v30) = (ULONGLONG)(v25 + 292);
                *((_QWORD *)&v20->Size + v30) = 4LL;
                v32 = *((unsigned __int16 *)v25 + 8);
                v20[v31].Ptr = *((_QWORD *)v25 + 3);
              }
              v33 = v22;
              v20[v33].Reserved = 0;
              v20[v33].Ptr = (ULONGLONG)&v36;
              v34 = UserDataCount;
              v20[v33].Size = 8;
              PopDiagTraceSleepStudyBlockerData(v34, v20);
              ExFreePoolWithTag(v20, 0x4D584650u);
            }
            else
            {
              v4 = -1073741670;
            }
            v3 = v39;
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
        if ( v14 )
          ExFreePoolWithTag((PVOID)v14, 0x4D584650u);
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
