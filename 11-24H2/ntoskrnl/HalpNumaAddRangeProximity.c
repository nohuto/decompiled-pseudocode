/*
 * XREFs of HalpNumaAddRangeProximity @ 0x1405553C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     HalpCheckSratMemoryRanges @ 0x1405551D0 (HalpCheckSratMemoryRanges.c)
 *     HalpNumaQueryProximityNode @ 0x140555C90 (HalpNumaQueryProximityNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HalpNumaAddRangeProximity(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  KIRQL v6; // al
  KIRQL v7; // r15
  __int64 i; // rcx
  __int64 v9; // rbx
  int v11; // eax
  void *v12; // rax
  void *v13; // rdi
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-49h] BYREF
  __int64 v22; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-19h]
  __int64 v25; // [rsp+78h] [rbp-11h]
  unsigned __int64 *v26; // [rsp+80h] [rbp-9h]
  __int64 v27; // [rsp+88h] [rbp-1h]
  __int64 *v28; // [rsp+90h] [rbp+7h]
  __int64 v29; // [rsp+98h] [rbp+Fh]
  __int64 *v30; // [rsp+A0h] [rbp+17h]
  __int64 v31; // [rsp+A8h] [rbp+1Fh]

  LOWORD(v19) = 0;
  if ( (unsigned int)dword_140E03B08 > 5 && tlgKeywordOn((__int64)&dword_140E03B08, 0x400000000000LL) )
  {
    v20 = 0x1000000LL;
    v24 = &v20;
    v25 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E03B08, (unsigned __int8 *)&byte_140043317, 0LL, 0LL, 3u, v23);
  }
  HalpCheckSratMemoryRanges(a1);
  if ( a3 == -1 )
  {
    return 0;
  }
  else
  {
    v5 = HalpNumaQueryProximityNode(a3, &v19);
    if ( v5 < 0 )
    {
LABEL_13:
      if ( (unsigned int)dword_140E03B08 > 5 && tlgKeywordOn((__int64)&dword_140E03B08, 0x400000000000LL) )
      {
        v19 = v5;
        v24 = (__int64 *)&v19;
        v25 = 4LL;
        v26 = &v21;
        v21 = a1;
        v28 = &v20;
        v27 = 8LL;
        v30 = &v22;
        LODWORD(v20) = a3;
        v29 = 4LL;
        v22 = 0x1000000LL;
        v31 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E03B08,
          (unsigned __int8 *)&dword_140043254,
          0LL,
          0LL,
          6u,
          v23);
      }
    }
    else
    {
      v6 = ExAcquireSpinLockExclusive(&HalpNumaMemoryRangeLock);
      v7 = v6;
      for ( i = 0LL; (unsigned int)i < HalpNumaMemoryRangeCount; i = (unsigned int)(i + 1) )
      {
        if ( *((_QWORD *)HalpNumaMemoryRanges + 2 * (unsigned int)i) == a1 )
        {
          v9 = *((unsigned __int16 *)HalpNumaMemoryRanges + 8 * (unsigned int)i + 4);
          ExReleaseSpinLockExclusive(&HalpNumaMemoryRangeLock, v6);
          if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4 * v9) == a3 )
            return 0;
          v5 = -1073741800;
          goto LABEL_13;
        }
      }
      v11 = HalpNumaMaxMemoryRangeCount;
      if ( HalpNumaMemoryRangeCount >= (unsigned int)HalpNumaMaxMemoryRangeCount )
      {
        HalpNumaMaxMemoryRangeCount += 5;
        v12 = (void *)HalpMmAllocCtxAlloc(i, (unsigned int)(16 * (v11 + 6)));
        v13 = v12;
        if ( !v12 )
        {
          HalpNumaMaxMemoryRangeCount -= 5;
          ExReleaseSpinLockExclusive(&HalpNumaMemoryRangeLock, v7);
          v5 = -1073741670;
          goto LABEL_13;
        }
        memmove(v12, HalpNumaMemoryRanges, 16LL * (unsigned int)HalpNumaMemoryRangeCount);
        if ( HalpNumaDynamicMemoryRanges )
          HalpMmAllocCtxFree(v14, (__int64)HalpNumaMemoryRanges);
        HalpNumaDynamicMemoryRanges = 1;
        HalpNumaMemoryRanges = v13;
      }
      v15 = HalpNumaMemoryRangeCount;
      v16 = (unsigned __int16)v19;
      v17 = 2LL * (unsigned int)HalpNumaMemoryRangeCount;
      *((_QWORD *)HalpNumaMemoryRanges + v17) = a1;
      *((_DWORD *)HalpNumaMemoryRanges + 2 * v17 + 2) = v16;
      HalpNumaMemoryRangeCount = v15 + 1;
      qsort(
        HalpNumaMemoryRanges,
        (unsigned int)(v15 + 1),
        0x10uLL,
        (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
      v18 = 2LL * (unsigned int)HalpNumaMemoryRangeCount;
      *((_QWORD *)HalpNumaMemoryRanges + v18) = -1LL;
      *((_DWORD *)HalpNumaMemoryRanges + 2 * v18 + 2) = 0;
      ExReleaseSpinLockExclusive(&HalpNumaMemoryRangeLock, v7);
    }
  }
  return (unsigned int)v5;
}
