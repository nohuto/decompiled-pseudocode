/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180099FB0
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x180055554 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAddressAll @ 0x180098E50 (RtlWakeAddressAll.c)
 *     RtlpWaitOnAddress @ 0x18009B780 (RtlpWaitOnAddress.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, volatile signed __int32 *a3)
{
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  volatile signed __int32 **v10; // rdx
  volatile signed __int32 **v11; // r9
  const signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rcx
  __int64 *v14; // r8
  __int64 *v15; // r9
  __int64 v16; // rdx
  bool i; // zf
  __int64 v20; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-A0h]
  __int64 v23; // [rsp+60h] [rbp-98h]
  _QWORD v24[4]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD *v25; // [rsp+88h] [rbp-70h]
  __int128 v26; // [rsp+90h] [rbp-68h]
  __int128 v27; // [rsp+A0h] [rbp-58h]
  __int128 v28; // [rsp+B0h] [rbp-48h]
  int v29; // [rsp+118h] [rbp+20h]

  v5 = a1;
  v24[0] = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v26 = 0LL;
  v29 = 0;
  v6 = *(_QWORD *)(a1 + 16);
  v25 = (_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 8);
  v22 = v6;
  v23 = v7;
  v8 = a2 << 15;
  v24[1] = a2 << 15;
  v9 = 0x8000LL;
  v10 = (volatile signed __int32 **)(v6 - (a2 << 15));
  if ( (unsigned __int64)v10 <= 0x8000 )
    v9 = (unsigned __int64)v10;
  v24[2] = v9;
  v27 = 0LL;
  v28 = 0LL;
  while ( 1 )
  {
    if ( (_DWORD)a3 )
      goto LABEL_21;
    if ( v8 >= v22 )
    {
LABEL_14:
      LODWORD(v12) = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      LODWORD(v12) = !_bittest64((const signed __int64 *)(v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL)), 0);
    }
    else
    {
      if ( v22 - v8 < v9 )
        goto LABEL_14;
      v10 = (volatile signed __int32 **)(v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL));
      v11 = (volatile signed __int32 **)(v23 + 8 * ((v9 + v8 - 1) >> 6));
      a3 = *v10;
      if ( v10 == v11 )
      {
        v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9));
      }
      else
      {
        if ( a3 )
          goto LABEL_14;
        for ( ++v10; ; ++v10 )
        {
          a3 = *v10;
          if ( v10 == v11 )
            break;
          if ( a3 )
            goto LABEL_14;
        }
        v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1));
      }
      LODWORD(v12) = ((unsigned __int64)a3 & (unsigned __int64)v12) == 0;
    }
LABEL_20:
    if ( !(_DWORD)v12 )
      goto LABEL_35;
LABEL_21:
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v5 + 24), v10, (unsigned __int64)a3);
    BYTE4(v26) = -1;
    LODWORD(v26) = 1;
    *((_QWORD *)&v26 + 1) = a1;
    v24[0] = *(_QWORD *)(a1 + 32);
    v13 = (volatile signed __int64 *)(a1 + 24);
    if ( v24[0] == -1LL )
      break;
    RtlReleaseSRWLockExclusive(v13);
    RtlpWaitOnAddress(a1 + 32, (unsigned int)v24, 8, 0, (_DWORD)RtlpWaitOnAddressSpinCycleCount, 0LL);
    v12 = *(const signed __int64 **)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_35;
    a3 = 0LL;
    v5 = a1;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlReleaseSRWLockExclusive(v13);
  v29 = 1;
  v12 = *(const signed __int64 **)a1;
  if ( _bittest64(*(const signed __int64 **)a1, a2) )
  {
    if ( v8 >= v22 )
      goto LABEL_33;
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_33;
      LOBYTE(v12) = !_bittest64((const signed __int64 *)(v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL)), 0);
    }
    else
    {
      if ( v22 - v8 < v9 )
        goto LABEL_33;
      v14 = (__int64 *)(v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL));
      v15 = (__int64 *)(v23 + 8 * ((v9 + v8 - 1) >> 6));
      v16 = *v14;
      if ( v14 == v15 )
      {
        v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9));
LABEL_39:
        LOBYTE(v12) = (v16 & (unsigned __int64)v12) == 0;
      }
      else
      {
        for ( i = v16 == 0; i; i = v16 == 0 )
        {
          v16 = *++v14;
          if ( v14 == v15 )
          {
            v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1));
            goto LABEL_39;
          }
        }
LABEL_33:
        LOBYTE(v12) = 0;
      }
    }
    if ( (_BYTE)v12 )
    {
      _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
      v21 = *v25 + (a2 << 12);
      v20 = 4096LL;
      if ( *(_BYTE *)(a1 + 50) == 5 )
        LOBYTE(v12) = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, __int64 *, int))(MEMORY[0x10] ^ RtlpHpHeapGlobals))(
                        MEMORY[0] ^ RtlpHpHeapGlobals,
                        -1LL,
                        &v21,
                        &v20,
                        0x4000);
      else
        LOBYTE(v12) = ZwFreeVirtualMemory(-1LL, &v21, &v20, 0x4000LL);
    }
  }
LABEL_35:
  if ( v29 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    LOBYTE(v12) = RtlWakeAddressAll(a1 + 32);
  }
  return (char)v12;
}
