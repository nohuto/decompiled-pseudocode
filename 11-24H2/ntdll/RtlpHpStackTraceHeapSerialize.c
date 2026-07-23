/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x18014A380
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180020A10 (RtlLockHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpWalkHeapInternal @ 0x18005E1A0 (RtlpWalkHeapInternal.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011D0E0 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x180149EC0 (RtlpHpStackTraceAllocFindMapping.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(_DWORD *HeapHandle, __int64 a2)
{
  NTSTATUS Context; // eax
  _RTL_SRWLOCK *v5; // rcx
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r8
  _RTL_SRWLOCK *v11; // rdi
  __int64 Mapping; // rax
  __int64 v13; // r8
  __int64 (__fastcall *v14)(__int128 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v16; // [rsp+20h] [rbp-49h] BYREF
  __int128 v17; // [rsp+28h] [rbp-41h] BYREF
  __int64 v18; // [rsp+38h] [rbp-31h]
  __int128 v19; // [rsp+40h] [rbp-29h] BYREF
  __int128 v20; // [rsp+50h] [rbp-19h]
  __int128 v21; // [rsp+60h] [rbp-9h]
  _QWORD v22[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+88h] [rbp+1Fh]

  v16 = 0LL;
  HIDWORD(v22[0]) = 0;
  v17 = 0LL;
  v18 = 0LL;
  Context = RtlpHpStackTraceHeapGetContext((__int64)HeapHandle, 0, (PVOID *)&v16);
  v5 = v16;
  v22[0] = 524290LL;
  if ( Context < 0 )
    v5 = 0LL;
  v22[1] = HeapHandle;
  v6 = HeapHandle[4] == -571548178;
  v16 = v5;
  if ( v6 )
  {
    v24 = *((_QWORD *)HeapHandle + 16) << 12;
    v24 += *((_QWORD *)HeapHandle + 11) << 12;
    v23 = *((_QWORD *)HeapHandle + 17) << 12;
    v23 += *((_QWORD *)HeapHandle + 12) << 12;
  }
  else
  {
    v7 = *((_QWORD *)HeapHandle + 72) - *((_QWORD *)HeapHandle + 84);
    v24 = *((_QWORD *)HeapHandle + 71);
    v23 = v7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v22, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    RtlLockHeap(HeapHandle);
    LOBYTE(v9) = 1;
    if ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, (__int64 *)&v19, v9) < 0 )
    {
LABEL_16:
      v13 = *(_QWORD *)(a2 + 24);
      v14 = *(__int64 (__fastcall **)(__int128 *, __int64, __int64))(a2 + 16);
      v17 = 0x1234CDEFuLL;
      v18 = 0xFFFFFFFFLL;
      v8 = v14(&v17, 24LL, v13);
      if ( v8 >= 0 )
        v8 = 0;
    }
    else
    {
      v11 = v16;
      while ( 1 )
      {
        if ( (BYTE2(v20) & 1) != 0 )
        {
          v18 = *((_QWORD *)&v19 + 1);
          v17 = (unsigned __int64)v19;
          if ( v11 )
          {
            RtlAcquireSRWLockShared(v11 + 1);
            ++*(_DWORD *)&v11->0;
            Mapping = RtlpHpStackTraceAllocFindMapping((__int64)v11, v19);
            if ( Mapping )
              *((_QWORD *)&v17 + 1) = *(_QWORD *)(Mapping + 16);
            --*(_DWORD *)&v11->0;
            RtlReleaseSRWLockShared(v11 + 1);
          }
          v8 = (*(__int64 (__fastcall **)(__int128 *, __int64, _QWORD))(a2 + 16))(&v17, 24LL, *(_QWORD *)(a2 + 24));
          if ( v8 < 0 )
            break;
        }
        LOBYTE(v10) = 1;
        if ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, (__int64 *)&v19, v10) < 0 )
          goto LABEL_16;
      }
    }
    RtlUnlockHeap(HeapHandle);
  }
  return (unsigned int)v8;
}
