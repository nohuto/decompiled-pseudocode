/*
 * XREFs of MiCommitFileBackedSection @ 0x140939E1C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiFlushRelease @ 0x14035A870 (MiFlushRelease.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiFlushAcquire @ 0x14048A490 (MiFlushAcquire.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 *     MmExtendSection @ 0x14093ADB0 (MmExtendSection.c)
 */

__int64 __fastcall MiCommitFileBackedSection(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v15; // rax
  int v16; // r15d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int ProtectionMask; // eax
  unsigned __int64 v20; // rsi
  unsigned int v21; // ecx
  int v22; // eax
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
  v8 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a2 + 80);
  v11 = *(_QWORD *)(a2 + 72);
  v23 = v8;
  v25 = v8 >> 12;
  v26 = v9 >> 12;
  v27 = v9;
  v24 = MiStartingOffset(v11, v10, 0)
      - ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12)
      + v9
      + 1;
  v12 = **(_QWORD **)(a2 + 72);
  if ( !(unsigned int)MiFlushAcquire(v12, 0LL, 0LL) )
    return 3221225626LL;
  v13 = 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) == 0 && *(_QWORD *)(a2 + 128) )
  {
    v13 = *(_QWORD *)(a2 + 128);
    ObfReferenceObjectWithTag((PVOID)v13, 0x6D566D4Du);
  }
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  memset_0(v28, 0, 0x40uLL);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
      v15 = v13 | 1;
    else
      v15 = v13 | 2;
    v29 = v15;
  }
  else
  {
    v29 = v12;
  }
  v30 = *(_DWORD *)(v12 + 56);
  v31 = v31 & 0xFFFFF000 | 4;
  v16 = MmExtendSection(v28, &v24, 0LL);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v13, 0x6D566D4Du);
  MiLockVad((__int64)CurrentThread, a2);
  MiFlushRelease(v12, 0LL, 0LL);
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( (unsigned int)MiVadDeleted(a2) )
    return 3221225632LL;
  if ( *(__int64 *)(a2 + 120) >= 0 )
    return 0LL;
  v17 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v18 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  if ( v25 < v17 || v25 > v18 || v26 > v18 || v26 < v17 )
    return 3221225496LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 44));
    v20 = v23;
    result = MiCheckSecuredVad(a2, v23, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v33);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v20 = v23;
  }
  v21 = *(_DWORD *)(a1 + 44);
  v32 = 0;
  v22 = MiSetProtectionOnSection(*(_QWORD *)(a1 + 88), a2, v20, v27, v21, 0, &v34, &v32);
  if ( v22 < 0 )
    return (unsigned int)v22;
  return v4;
}
