/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180005620
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x180011194 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlWakeAddressAll @ 0x1800044C0 (RtlWakeAddressAll.c)
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  _RTL_SRWLOCK *v5; // r11
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 *v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // r8
  __int64 *i; // rdx
  BOOL v15; // eax
  unsigned __int64 v16; // rax
  _RTL_SRWLOCK *v17; // rcx
  __int64 *v18; // r8
  __int64 *v19; // r9
  __int64 v20; // rdx
  bool j; // zf
  bool v22; // al
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+28h] [rbp-D0h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-A0h]
  __int64 v29; // [rsp+60h] [rbp-98h]
  _QWORD v30[4]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD *v31; // [rsp+88h] [rbp-70h]
  __int128 v32; // [rsp+90h] [rbp-68h]
  __int128 v33; // [rsp+A0h] [rbp-58h]
  __int128 v34; // [rsp+B0h] [rbp-48h]
  int v35; // [rsp+118h] [rbp+20h]

  v5 = (_RTL_SRWLOCK *)a1;
  v30[0] = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v32 = 0LL;
  v35 = 0;
  v6 = *(_QWORD *)(a1 + 16);
  v31 = (_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 8);
  v28 = v6;
  v29 = v7;
  v8 = a2 << 15;
  v30[1] = a2 << 15;
  v9 = 0x8000LL;
  v10 = v6 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v30[2] = v9;
  v33 = 0LL;
  v34 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_21;
    if ( v8 >= v28 )
    {
LABEL_14:
      v15 = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      v15 = !_bittest64((const signed __int64 *)(v29 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL)), 0);
    }
    else
    {
      if ( v28 - v8 < v9 )
        goto LABEL_14;
      v11 = (__int64 *)(v29 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL));
      v12 = (__int64 *)(v29 + 8 * ((v9 + v8 - 1) >> 6));
      v13 = *v11;
      if ( v11 == v12 )
      {
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9);
      }
      else
      {
        if ( v13 )
          goto LABEL_14;
        for ( i = v11 + 1; ; ++i )
        {
          v13 = *i;
          if ( i == v12 )
            break;
          if ( v13 )
            goto LABEL_14;
        }
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1);
      }
      v15 = (v13 & v16) == 0;
    }
LABEL_20:
    if ( !v15 )
      goto LABEL_35;
LABEL_21:
    RtlAcquireSRWLockExclusive(v5 + 3);
    BYTE4(v32) = -1;
    LODWORD(v32) = 1;
    *((_QWORD *)&v32 + 1) = a1;
    v30[0] = *(_QWORD *)(a1 + 32);
    v17 = (_RTL_SRWLOCK *)(a1 + 24);
    if ( v30[0] == -1LL )
      break;
    RtlReleaseSRWLockExclusive(v17);
    v24 = 0LL;
    RtlpWaitOnAddress(a1 + 32, v30, 8LL);
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_35;
    a3 = 0;
    v5 = (_RTL_SRWLOCK *)a1;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlReleaseSRWLockExclusive(v17);
  v35 = 1;
  if ( _bittest64(*(const signed __int64 **)a1, a2) )
  {
    if ( v8 >= v28 )
      goto LABEL_33;
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_33;
      v22 = !_bittest64((const signed __int64 *)(v29 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL)), 0);
    }
    else
    {
      if ( v28 - v8 < v9 )
        goto LABEL_33;
      v18 = (__int64 *)(v29 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL));
      v19 = (__int64 *)(v29 + 8 * ((v9 + v8 - 1) >> 6));
      v20 = *v18;
      if ( v18 == v19 )
      {
        v23 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9);
LABEL_39:
        v22 = (v20 & v23) == 0;
      }
      else
      {
        for ( j = v20 == 0; j; j = v20 == 0 )
        {
          v20 = *++v18;
          if ( v18 == v19 )
          {
            v23 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1);
            goto LABEL_39;
          }
        }
LABEL_33:
        v22 = 0;
      }
    }
    if ( v22 )
    {
      _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
      BaseAddress = (PVOID)(*v31 + (a2 << 12));
      RegionSize = 4096LL;
      if ( *(_BYTE *)(a1 + 50) == 5 )
        ((void (__fastcall *)(__int64, __int64, PVOID *, ULONG_PTR *, int, __int64))(MEMORY[0x10] ^ RtlpHpHeapGlobals))(
          MEMORY[0] ^ RtlpHpHeapGlobals,
          -1LL,
          &BaseAddress,
          &RegionSize,
          0x4000,
          v24);
      else
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    }
  }
LABEL_35:
  if ( v35 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    RtlWakeAddressAll((PVOID)(a1 + 32));
  }
}
