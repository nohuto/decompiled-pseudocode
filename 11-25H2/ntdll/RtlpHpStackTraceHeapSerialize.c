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

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  int Context; // eax
  __int64 v5; // rdi
  bool v6; // zf
  int v7; // esi
  __int64 v8; // r8
  __int64 Mapping; // rax
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int128 *, __int64, __int64); // rax
  __int64 v13; // [rsp+20h] [rbp-49h] BYREF
  __int128 v14; // [rsp+28h] [rbp-41h] BYREF
  __int64 v15; // [rsp+38h] [rbp-31h]
  __int128 v16; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+50h] [rbp-19h]
  __int128 v18; // [rsp+60h] [rbp-9h]
  _QWORD v19[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]

  v13 = 0LL;
  HIDWORD(v19[0]) = 0;
  v14 = 0LL;
  v15 = 0LL;
  Context = RtlpHpStackTraceHeapGetContext(a1, 0, &v13);
  v5 = v13;
  v19[0] = 524290LL;
  if ( Context < 0 )
    v5 = 0LL;
  v19[1] = a1;
  v6 = *(_DWORD *)(a1 + 16) == -571548178;
  v13 = v5;
  if ( v6 )
  {
    v21 = *(_QWORD *)(a1 + 128) << 12;
    v21 += *(_QWORD *)(a1 + 88) << 12;
    v20 = *(_QWORD *)(a1 + 136) << 12;
    v5 = v13;
    v20 += *(_QWORD *)(a1 + 96) << 12;
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v21 = *(_QWORD *)(a1 + 568);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v19, 32LL, *(_QWORD *)(a2 + 24));
  if ( v7 >= 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    RtlLockHeap(a1);
    while ( 1 )
    {
      LOBYTE(v8) = 1;
      if ( (int)RtlpWalkHeapInternal(a1, (__int64)&v16, v8) < 0 )
        break;
      if ( (BYTE2(v17) & 1) != 0 )
      {
        v15 = *((_QWORD *)&v16 + 1);
        v14 = (unsigned __int64)v16;
        if ( v5 )
        {
          RtlAcquireSRWLockShared((volatile signed __int64 *)(v5 + 8));
          ++*(_DWORD *)v5;
          Mapping = RtlpHpStackTraceAllocFindMapping(v5, v16);
          if ( Mapping )
            *((_QWORD *)&v14 + 1) = *(_QWORD *)(Mapping + 16);
          --*(_DWORD *)v5;
          RtlReleaseSRWLockShared((volatile signed __int64 *)(v5 + 8));
        }
        v7 = (*(__int64 (__fastcall **)(__int128 *, __int64, _QWORD))(a2 + 16))(&v14, 24LL, *(_QWORD *)(a2 + 24));
        if ( v7 < 0 )
          goto LABEL_18;
      }
    }
    v10 = *(_QWORD *)(a2 + 24);
    v11 = *(__int64 (__fastcall **)(__int128 *, __int64, __int64))(a2 + 16);
    v14 = 0x1234CDEFuLL;
    v15 = 0xFFFFFFFFLL;
    v7 = v11(&v14, 24LL, v10);
    if ( v7 >= 0 )
      v7 = 0;
LABEL_18:
    RtlUnlockHeap(a1);
  }
  return (unsigned int)v7;
}
