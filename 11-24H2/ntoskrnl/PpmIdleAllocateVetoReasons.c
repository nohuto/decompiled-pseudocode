/*
 * XREFs of PpmIdleAllocateVetoReasons @ 0x1407481E8
 * Callers:
 *     PopFxRequestCommon @ 0x1405CF5D0 (PopFxRequestCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CBEC0 (PpmIdleInstallNewVetoList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmIdleAllocateVetoReasons(_DWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned int v4; // r14d
  _DWORD *v5; // rax
  _DWORD *v6; // r15
  unsigned int v7; // r12d
  __int64 v8; // r13
  WCHAR *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  signed __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned int v15; // ebx
  const WCHAR *SourceString; // [rsp+68h] [rbp+10h]
  __int64 Pool2; // [rsp+70h] [rbp+18h]
  PVOID P; // [rsp+78h] [rbp+20h]

  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v2 = 0;
  if ( PpmIdleVetoList
    && (v3 = *((unsigned int *)PpmIdleVetoList + 1), (_DWORD)v3)
    && PpmPlatformStates
    && (P = *(PVOID *)(PpmPlatformStates + 112)) != 0LL )
  {
    v4 = v3 + a1[1];
    if ( v4 >= (unsigned int)v3 )
    {
      Pool2 = ExAllocatePool2(0x40uLL, (*(_DWORD *)PpmPlatformStates * v4) << 6, 0x694D5050u);
      if ( Pool2 && (v5 = (_DWORD *)ExAllocatePool2(0x40uLL, 24 * v4 + 8, 0x694D5050u), (v6 = v5) != 0LL) )
      {
        v5[1] = v4;
        v7 = v3;
        *v5 = *(_DWORD *)PpmIdleVetoList;
        while ( v7 < v4 )
        {
          v8 = 2LL * (v7 - (unsigned int)v3);
          v9 = (WCHAR *)ExAllocatePool2(0x40uLL, 2LL * LOWORD(a1[4 * (v7 - (unsigned int)v3) + 3]) + 2, 0x694D5050u);
          SourceString = v9;
          if ( !v9 )
            goto LABEL_8;
          memmove(
            v9,
            *(const void **)&a1[4 * (v7 - (unsigned int)v3) + 4],
            2LL * LOWORD(a1[4 * (v7 - (unsigned int)v3) + 3]));
          v10 = 3LL * v7;
          RtlInitUnicodeString((PUNICODE_STRING)&v6[6 * v7++ + 4], SourceString);
          v6[2 * v10 + 2] = a1[2 * v8 + 2];
        }
        v11 = (char *)(v6 + 2);
        v12 = (_BYTE *)PpmIdleVetoList - (_BYTE *)v6;
        v13 = v3;
        do
        {
          *(_OWORD *)v11 = *(_OWORD *)&v11[v12];
          *((_QWORD *)v11 + 2) = *(_QWORD *)&v11[v12 + 16];
          v11 += 24;
          --v13;
        }
        while ( v13 );
        ExFreePoolWithTag(PpmIdleVetoList, 0x694D5050u);
        v14 = PpmPlatformStates;
        v15 = 0;
        for ( PpmIdleVetoList = v6; v15 < *(_DWORD *)PpmPlatformStates; ++v15 )
        {
          PpmIdleInstallNewVetoList(448LL * v15 + v14 + 64, v4, (char *)(Pool2 + ((unsigned __int64)(v15 * v4) << 6)));
          v14 = PpmPlatformStates;
        }
        ExFreePoolWithTag(P, 0x694D5050u);
        *a1 = v3 + 1;
      }
      else
      {
LABEL_8:
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741675;
    }
  }
  else
  {
    v2 = -1073741637;
  }
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  return v2;
}
