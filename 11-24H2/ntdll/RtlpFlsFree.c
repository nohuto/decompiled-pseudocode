/*
 * XREFs of RtlpFlsFree @ 0x18008F164
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x18008EF4C (RtlpHpLfhContextCleanup.c)
 *     RtlpHpEnvTlsAlloc @ 0x1800B9008 (RtlpHpEnvTlsAlloc.c)
 *     RtlFlsFree @ 0x18010B970 (RtlFlsFree.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhTlsCleanup @ 0x18004EDC0 (RtlpHpLfhTlsCleanup.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x18008F344 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFlsFree(volatile signed __int64 *a1, int a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  _QWORD **v11; // r13
  __int64 v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // rsi
  __int64 (__fastcall *v21)(__int64, int); // rax
  __int64 v22; // rcx
  volatile signed __int32 **v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-1D0h]
  _QWORD v30[47]; // [rsp+38h] [rbp-1C0h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xFEE
    && (v3 = a2 + 16,
        v4 = 0,
        _BitScanReverse(&v5, a2 + 16),
        v6 = (volatile signed __int32 **)((a2 + 16) ^ (unsigned int)(1 << v5)),
        (v7 = a1[v5 - 3]) != 0)
    && (v8 = v7 + 24LL * (_QWORD)v6, (v9 = *(_QWORD *)(v8 + 16)) != 0) )
  {
    v10 = *(_QWORD *)(v8 + 24);
    v28 = v10;
    if ( v9 == -1 )
      v9 = 0LL;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v8 + 8), v6, v7);
    v11 = (_QWORD **)(a1 + 9);
    while ( 1 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockShared(a1);
      v13 = *v11;
      if ( *v11 != v11 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v12 >= 0x10 )
            goto LABEL_15;
          v14 = (_QWORD *)*v13;
          _BitScanReverse(&v15, v3);
          v16 = v3 ^ (1 << v15);
          v17 = v13[v15 - 2];
          v18 = v17 ? (__int64 *)(v17 + 8 * (v16 + 1LL)) : 0LL;
          if ( v9 )
            break;
          if ( v18 )
            goto LABEL_23;
LABEL_14:
          v13 = v14;
          if ( v14 == v11 )
            goto LABEL_15;
        }
        if ( !v18 )
          goto LABEL_14;
        v19 = *v18;
        if ( !*v18 )
          goto LABEL_14;
        v22 = 3 * v12;
        v12 = (unsigned int)(v12 + 1);
        v30[v22 - 1] = v9;
        v30[v22] = v10;
        v30[v22 + 1] = v19;
LABEL_23:
        *v18 = 0LL;
        goto LABEL_14;
      }
LABEL_15:
      RtlReleaseSRWLockShared(a1);
      if ( !(_DWORD)v12 )
        break;
      v20 = v30;
      do
      {
        v21 = (__int64 (__fastcall *)(__int64, int))*(v20 - 1);
        if ( *v20 )
        {
          v26 = v20[1];
          v27 = *v20;
          if ( v21 == RtlpHpLfhTlsCleanup )
            RtlpHpLfhTlsCleanup(v27, v26);
          else
            v21(v27, v26);
        }
        else
        {
          ((void (__fastcall *)(__int64))v21)(v20[1]);
        }
        v20 += 3;
        --v12;
      }
      while ( v12 );
      v10 = v28;
    }
    *(_QWORD *)(v8 + 16) = -2LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 8));
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, v23, v24);
    *(_QWORD *)(v8 + 16) = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(a1 + 1, v3);
    RtlReleaseSRWLockExclusive(a1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
