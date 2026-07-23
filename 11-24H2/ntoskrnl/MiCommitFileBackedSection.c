/*
 * XREFs of MiCommitFileBackedSection @ 0x1409147D8
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiFlushAcquire @ 0x140484FBC (MiFlushAcquire.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 */

__int64 __fastcall MiCommitFileBackedSection(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // r13
  unsigned __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int v14; // r15d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned int v18; // ecx
  int v19; // eax
  __int64 result; // rax
  __int64 v21; // rax
  unsigned int ProtectionMask; // eax
  unsigned __int64 v23; // [rsp+40h] [rbp-49h]
  unsigned __int64 v24; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-39h]
  unsigned __int64 v26; // [rsp+58h] [rbp-31h]
  unsigned __int64 v27; // [rsp+60h] [rbp-29h]
  _BYTE v28[40]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v29; // [rsp+98h] [rbp+Fh]
  int v30; // [rsp+A8h] [rbp+1Fh]
  unsigned int v31; // [rsp+ACh] [rbp+23h]
  int v32; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v33; // [rsp+100h] [rbp+77h]
  int v34; // [rsp+108h] [rbp+7Fh] BYREF

  v33 = a3;
  v3 = *(_QWORD *)(a2 + 120);
  v4 = 0;
  v34 = 0;
  if ( v3 >= 0 )
    return 3221225505LL;
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a2 + 80);
  v10 = *(__int64 **)(a2 + 72);
  v23 = v7;
  v25 = v7 >> 12;
  v26 = v8 >> 12;
  v27 = v8;
  v24 = MiStartingOffset(v10, v9, 0)
      - ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12)
      + v8
      + 1;
  v11 = **(_QWORD **)(a2 + 72);
  if ( !(unsigned int)MiFlushAcquire(v11, 0LL, 0LL) )
    return 3221225626LL;
  v12 = 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) == 0 && *(_QWORD *)(a2 + 128) )
  {
    v12 = *(_QWORD *)(a2 + 128);
    ObfReferenceObjectWithTag((PVOID)v12, 0x6D566D4Du);
  }
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  memset_0(v28, 0, 0x40uLL);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 )
      v21 = v12 | 1;
    else
      v21 = v12 | 2;
    v29 = v21;
  }
  else
  {
    v29 = v11;
  }
  v30 = *(_DWORD *)(v11 + 56);
  v31 = v31 & 0xFFFFF000 | 4;
  v14 = MmExtendSection(v28, &v24, 0LL);
  if ( v12 )
    ObfDereferenceObjectWithTag((PVOID)v12, 0x6D566D4Du);
  MiLockVad((__int64)CurrentThread, a2);
  MiFlushRelease(v11, 0LL, 0LL);
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( (unsigned int)MiVadDeleted(a2) )
    return 3221225632LL;
  if ( *(__int64 *)(a2 + 120) >= 0 )
    return 0LL;
  v15 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v16 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  if ( v25 < v15 || v25 > v16 || v26 > v16 || v26 < v15 )
    return 3221225496LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 44));
    v17 = v23;
    result = MiCheckSecuredVad(a2, v23, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v33);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v17 = v23;
  }
  v18 = *(_DWORD *)(a1 + 44);
  v32 = 0;
  v19 = MiSetProtectionOnSection(*(_QWORD *)(a1 + 88), a2, v17, v27, v18, 0, &v34, &v32);
  if ( v19 < 0 )
    return (unsigned int)v19;
  return v4;
}
