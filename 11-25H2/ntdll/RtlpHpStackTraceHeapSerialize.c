/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x18014D580
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlUnlockHeap @ 0x1800938E0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180093AD0 (RtlLockHeap.c)
 *     RtlpWalkHeapInternal @ 0x18009B880 (RtlpWalkHeapInternal.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180120780 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x18014D0C0 (RtlpHpStackTraceAllocFindMapping.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(_DWORD *HeapHandle, __int64 a2)
{
  NTSTATUS Context; // eax
  _RTL_SRWLOCK *v5; // rdi
  bool v6; // zf
  int v7; // esi
  __int64 Mapping; // rax
  __int64 v9; // r8
  __int64 (__fastcall *v10)(__int128 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v12; // [rsp+20h] [rbp-49h] BYREF
  __int128 v13; // [rsp+28h] [rbp-41h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h]
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-19h]
  __int128 v17; // [rsp+60h] [rbp-9h]
  _QWORD v18[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]

  v12 = 0LL;
  HIDWORD(v18[0]) = 0;
  v13 = 0LL;
  v14 = 0LL;
  Context = RtlpHpStackTraceHeapGetContext((__int64)HeapHandle, 0, (PVOID *)&v12);
  v5 = v12;
  v18[0] = 524290LL;
  if ( Context < 0 )
    v5 = 0LL;
  v18[1] = HeapHandle;
  v6 = HeapHandle[4] == -571548178;
  v12 = v5;
  if ( v6 )
  {
    v20 = *((_QWORD *)HeapHandle + 16) << 12;
    v20 += *((_QWORD *)HeapHandle + 11) << 12;
    v19 = *((_QWORD *)HeapHandle + 17) << 12;
    v5 = v12;
    v19 += *((_QWORD *)HeapHandle + 12) << 12;
  }
  else
  {
    v19 = *((_QWORD *)HeapHandle + 72) - *((_QWORD *)HeapHandle + 83);
    v20 = *((_QWORD *)HeapHandle + 71);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v18, 32LL, *(_QWORD *)(a2 + 24));
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    RtlLockHeap(HeapHandle);
    while ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, (__int64)&v15, 1u) >= 0 )
    {
      if ( (BYTE2(v16) & 1) != 0 )
      {
        v14 = *((_QWORD *)&v15 + 1);
        v13 = (unsigned __int64)v15;
        if ( v5 )
        {
          RtlAcquireSRWLockShared(v5 + 1);
          ++*(_DWORD *)&v5->0;
          Mapping = RtlpHpStackTraceAllocFindMapping((__int64)v5, v15);
          if ( Mapping )
            *((_QWORD *)&v13 + 1) = *(_QWORD *)(Mapping + 16);
          --*(_DWORD *)&v5->0;
          RtlReleaseSRWLockShared(v5 + 1);
        }
        v7 = (*(__int64 (__fastcall **)(__int128 *, __int64, _QWORD))(a2 + 16))(&v13, 24LL, *(_QWORD *)(a2 + 24));
        if ( v7 < 0 )
          goto LABEL_18;
      }
    }
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(__int64 (__fastcall **)(__int128 *, __int64, __int64))(a2 + 16);
    v13 = 0x1234CDEFuLL;
    v14 = 0xFFFFFFFFLL;
    v7 = v10(&v13, 24LL, v9);
    if ( v7 >= 0 )
      v7 = 0;
LABEL_18:
    RtlUnlockHeap(HeapHandle);
  }
  return (unsigned int)v7;
}
