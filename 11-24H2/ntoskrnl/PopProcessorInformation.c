/*
 * XREFs of PopProcessorInformation @ 0x1409F8FB0
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmPerfGetCurrentState @ 0x140439344 (PpmPerfGetCurrentState.c)
 *     KeQueryGroupAffinity @ 0x14045F4C0 (KeQueryGroupAffinity.c)
 */

__int64 __fastcall PopProcessorInformation(__int64 a1, __int64 a2, USHORT a3, int *a4)
{
  int *v5; // r15
  __int64 v6; // rdi
  KAFFINITY GroupAffinity; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v20; // [rsp+30h] [rbp-48h]
  __int64 Prcb; // [rsp+30h] [rbp-48h]

  v5 = a4;
  LOWORD(v6) = a3;
  GroupAffinity = KeQueryGroupAffinity(a3);
  v8 = 0;
  v9 = __popcnt(GroupAffinity);
  v20 = v9;
  v10 = 24 * v9;
  if ( 24 * v9 > 0x600 )
  {
    if ( v5 )
      *v5 = 0;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( v9 )
    {
      v11 = 0;
      PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
      v12 = v20;
      while ( 1 )
      {
        v13 = (unsigned __int16)v6 + 1;
        while ( !GroupAffinity )
        {
          v6 = (unsigned __int16)(v6 + 1);
          if ( (unsigned int)v6 >= v13 )
            goto LABEL_14;
          GroupAffinity = *(_QWORD *)(8 * v6 + 8);
        }
        _BitScanForward64((unsigned __int64 *)&v14, GroupAffinity);
        GroupAffinity &= ~(1LL << v14);
        if ( v11 >= v12 )
          break;
        Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v6 + (unsigned __int8)v14));
        *(_DWORD *)(a1 + 24LL * v11) = *(unsigned __int8 *)(Prcb + 209);
        PpmPerfGetCurrentState(
          Prcb,
          (_DWORD *)(a1 + 8 + 24LL * v11),
          (unsigned int *)(a1 + 12 + 24LL * v11),
          0LL,
          0LL,
          0LL);
        v15 = *(_QWORD *)(Prcb + 35248);
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 448);
        else
          v16 = *(_DWORD *)(Prcb + 68);
        *(_DWORD *)(a1 + 24LL * v11 + 4) = v16;
        v17 = *(_QWORD *)(Prcb + 34880);
        if ( v17 )
        {
          *(_DWORD *)(a1 + 24LL * v11 + 16) = *(_DWORD *)(v17 + 40);
          v18 = *(_DWORD *)(v17 + 24) + 1;
        }
        else
        {
          *(_DWORD *)(a1 + 24LL * v11 + 16) = 0;
          v18 = 0;
        }
        *(_DWORD *)(a1 + 24LL * v11++ + 20) = v18;
      }
LABEL_14:
      PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
      v5 = a4;
    }
    *v5 = v10;
  }
  return v8;
}
