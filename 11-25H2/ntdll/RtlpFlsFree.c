/*
 * XREFs of RtlpFlsFree @ 0x1800B84E4
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x1800B8168 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpEnvTlsAlloc @ 0x1800F2190 (RtlpHpEnvTlsAlloc.c)
 *     RtlFlsFree @ 0x18010DFC0 (RtlFlsFree.c)
 * Callees:
 *     RtlpHpLfhTlsCleanup @ 0x18000AA50 (RtlpHpLfhTlsCleanup.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x1800B86C4 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFlsFree(PRTL_SRWLOCK SRWLock, int a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  int v5; // ecx
  unsigned __int64 v6; // r8
  _RTL_SRWLOCK *v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 Value; // rsi
  PRTL_SRWLOCK v10; // r13
  __int64 v11; // rdi
  _RTL_SRWLOCK **v12; // rdx
  _RTL_SRWLOCK *v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  _RTL_SRWLOCK *v16; // rcx
  _RTL_SRWLOCK *v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 *v19; // rsi
  __int64 (__fastcall *v20)(unsigned __int64, unsigned __int64); // rax
  __int64 v21; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+28h] [rbp-1D0h]
  _QWORD v27[47]; // [rsp+38h] [rbp-1C0h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xFEE
    && (v3 = a2 + 16,
        v4 = 0,
        _BitScanReverse((unsigned int *)&v5, a2 + 16),
        (v6 = SRWLock[(unsigned int)(v5 - 4) + 1].Value) != 0)
    && (v7 = (_RTL_SRWLOCK *)(v6 + 24LL * (v3 ^ (1 << v5))), (v8 = v7[2].Value) != 0) )
  {
    Value = v7[3].Value;
    v25 = Value;
    if ( v8 == -1LL )
      v8 = 0LL;
    RtlAcquireSRWLockExclusive(v7 + 1);
    v10 = SRWLock + 9;
    while ( 1 )
    {
      v11 = 0LL;
      RtlAcquireSRWLockShared(SRWLock);
      v12 = (_RTL_SRWLOCK **)v10->Value;
      if ( (PRTL_SRWLOCK)v10->Value != v10 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v11 >= 0x10 )
            goto LABEL_15;
          v13 = *v12;
          _BitScanReverse(&v14, v3);
          v15 = v3 ^ (1 << v14);
          v16 = v12[v14 - 2];
          v17 = v16 ? &v16[v15 + 1] : 0LL;
          if ( v8 )
            break;
          if ( v17 )
            goto LABEL_23;
LABEL_14:
          v12 = (_RTL_SRWLOCK **)v13;
          if ( v13 == v10 )
            goto LABEL_15;
        }
        if ( !v17 )
          goto LABEL_14;
        v18 = v17->Value;
        if ( !v17->Value )
          goto LABEL_14;
        v21 = 3 * v11;
        v11 = (unsigned int)(v11 + 1);
        v27[v21 - 1] = v8;
        v27[v21] = Value;
        v27[v21 + 1] = v18;
LABEL_23:
        v17->Value = 0LL;
        goto LABEL_14;
      }
LABEL_15:
      RtlReleaseSRWLockShared(SRWLock);
      if ( !(_DWORD)v11 )
        break;
      v19 = v27;
      do
      {
        v20 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64))*(v19 - 1);
        if ( *v19 )
        {
          v23 = v19[1];
          v24 = *v19;
          if ( v20 == RtlpHpLfhTlsCleanup )
            RtlpHpLfhTlsCleanup(v24, v23);
          else
            v20(v24, v23);
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64))v20)(v19[1]);
        }
        v19 += 3;
        --v11;
      }
      while ( v11 );
      Value = v25;
    }
    v7[2].Value = -2LL;
    RtlReleaseSRWLockExclusive(v7 + 1);
    RtlAcquireSRWLockExclusive(SRWLock);
    v7[2].Value = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&SRWLock[1]);
    RtlReleaseSRWLockExclusive(SRWLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
