/*
 * XREFs of PpmRegisterProfiles @ 0x1407635A0
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x14075C130 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     PpmResetProfileSettings @ 0x1404B9120 (PpmResetProfileSettings.c)
 *     PpmEventTraceProfiles @ 0x140A3CB8C (PpmEventTraceProfiles.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  __int64 v3; // rsi
  NTSTATUS v4; // ebp
  __int64 v5; // r14
  ULONGLONG v6; // rbx
  ULONG_PTR v7; // rdx
  unsigned __int8 v8; // r11
  ULONGLONG v9; // rdi
  char v10; // r11
  __int64 Pool2; // rax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rdi
  ULONGLONG v15; // rax
  unsigned __int8 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r12
  ULONGLONG v19; // r14
  char v20; // al
  __int64 v21; // r11
  size_t pcbLength; // [rsp+70h] [rbp+18h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp+20h] BYREF

  pcbLength = 0LL;
  pullResult = 0LL;
  v3 = a1;
  if ( a1 <= 0x1Fu )
  {
    v5 = a1;
    v4 = RtlULongLongMult(a1, 0x420uLL, &pullResult);
    if ( v4 >= 0 )
    {
      v6 = (pullResult + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v7 = v6;
      v8 = 0;
      v9 = v6;
      while ( v8 < (unsigned __int8)v3 )
      {
        v4 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v8 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v7 = v9 + pcbLength + 2;
        v8 = v10 + 1;
        v9 = v7;
      }
      Pool2 = ExAllocatePool2(0x40uLL, v7, 0x664D5050u);
      v14 = Pool2;
      if ( Pool2 )
      {
        v15 = v6 + Pool2;
        v16 = 0;
        if ( (_BYTE)v3 )
        {
          v17 = a2 + 8;
          v18 = v14 + 32;
          v19 = v15;
          do
          {
            ++v16;
            *(_OWORD *)(v18 - 20) = *(_OWORD *)*(_QWORD *)(v17 - 8);
            v20 = *(_BYTE *)(v17 + 8);
            *(_QWORD *)(v18 + 1008) = -1LL;
            *(_BYTE *)v18 = v20;
            *(_QWORD *)(v18 - 32) = v19;
            *(_BYTE *)(v18 - 24) = v16;
            RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v17, 0x7FFFFFFFuLL, &pcbLength);
            RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v18 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v17);
            *(_QWORD *)(v17 + 16) = v18 - 32;
            v19 += 2 * v21 + 2;
            v18 += 1056LL;
            v17 += 32LL;
          }
          while ( v16 < (unsigned __int8)v3 );
          v5 = v3;
        }
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v12, v13);
        PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
        PpmProfiles = v14;
        PpmProfileCount = v3;
        if ( (_BYTE)v3 )
        {
          do
          {
            PpmResetProfileSettings(v14);
            v14 += 1056LL;
            --v5;
          }
          while ( v5 );
        }
        PpmEventTraceProfiles(0LL);
        PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
        PpmReleaseLock(&PpmPerfPolicyLock);
        PpmProfileStatus |= 1u;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
