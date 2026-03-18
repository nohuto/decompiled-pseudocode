/*
 * XREFs of PpmRegisterProfiles @ 0x14075411C
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x1407508B0 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     RtlStringCchLengthW @ 0x140433290 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x14043FDBC (RtlStringCchCopyW.c)
 *     RtlStringCbLengthW @ 0x140479D40 (RtlStringCbLengthW.c)
 *     PpmResetProfileSettings @ 0x1404BF6DC (PpmResetProfileSettings.c)
 *     PpmEventTraceProfiles @ 0x140A3E7F4 (PpmEventTraceProfiles.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  __int64 v3; // rsi
  NTSTATUS v4; // ebp
  __int64 v5; // r14
  ULONGLONG v6; // rbx
  unsigned __int8 v7; // r11
  ULONGLONG v8; // rdi
  char v9; // r11
  __int64 Pool2; // rax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rdi
  ULONGLONG v14; // rax
  unsigned __int8 v15; // r13
  __int64 v16; // r15
  __int64 v17; // r12
  ULONGLONG v18; // r14
  char v19; // al
  __int64 v20; // r11
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
      v7 = 0;
      v8 = v6;
      while ( v7 < (unsigned __int8)v3 )
      {
        v4 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v7 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v7 = v9 + 1;
        v8 += pcbLength + 2;
      }
      Pool2 = ExAllocatePool2(0x40uLL);
      v13 = Pool2;
      if ( Pool2 )
      {
        v14 = v6 + Pool2;
        v15 = 0;
        if ( (_BYTE)v3 )
        {
          v16 = a2 + 8;
          v17 = v13 + 32;
          v18 = v14;
          do
          {
            ++v15;
            *(_OWORD *)(v17 - 20) = *(_OWORD *)*(_QWORD *)(v16 - 8);
            v19 = *(_BYTE *)(v16 + 8);
            *(_QWORD *)(v17 + 1008) = -1LL;
            *(_BYTE *)v17 = v19;
            *(_QWORD *)(v17 - 32) = v18;
            *(_BYTE *)(v17 - 24) = v15;
            RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v16, 0x7FFFFFFFuLL, &pcbLength);
            RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v17 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v16);
            *(_QWORD *)(v16 + 16) = v17 - 32;
            v18 += 2 * v20 + 2;
            v17 += 1056LL;
            v16 += 32LL;
          }
          while ( v15 < (unsigned __int8)v3 );
          v5 = v3;
        }
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v11, v12);
        PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
        PpmProfiles = v13;
        PpmProfileCount = v3;
        if ( (_BYTE)v3 )
        {
          do
          {
            PpmResetProfileSettings(v13);
            v13 += 1056LL;
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
