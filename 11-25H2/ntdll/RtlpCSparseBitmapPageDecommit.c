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

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  const signed __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // r8
  unsigned __int64 *v16; // r9
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
  v10 = v6 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v24[2] = v9;
  v27 = 0LL;
  v28 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_21;
    if ( v8 >= v22 )
    {
LABEL_14:
      LODWORD(v13) = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      LODWORD(v13) = !_bittest64((const signed __int64 *)(v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL)), 0);
    }
    else
    {
      if ( v22 - v8 < v9 )
        goto LABEL_14;
      v10 = v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL);
      v11 = v23 + 8 * ((v9 + v8 - 1) >> 6);
      v12 = *(_QWORD *)v10;
      if ( v10 == v11 )
      {
        v13 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9));
      }
      else
      {
        if ( v12 )
          goto LABEL_14;
        for ( v10 += 8LL; ; v10 += 8LL )
        {
          v12 = *(_QWORD *)v10;
          if ( v10 == v11 )
            break;
          if ( v12 )
            goto LABEL_14;
        }
        v13 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1));
      }
      LODWORD(v13) = (v12 & (unsigned __int64)v13) == 0;
    }
LABEL_20:
    if ( !(_DWORD)v13 )
      goto LABEL_35;
LABEL_21:
    RtlAcquireSRWLockExclusive(v5 + 24);
    BYTE4(v26) = -1;
    LODWORD(v26) = 1;
    *((_QWORD *)&v26 + 1) = a1;
    v24[0] = *(_QWORD *)(a1 + 32);
    v14 = a1 + 24;
    if ( v24[0] == -1LL )
      break;
    RtlReleaseSRWLockExclusive(v14);
    RtlpWaitOnAddress(a1 + 32, (unsigned int)v24, 8, 0, (_DWORD)RtlpWaitOnAddressSpinCycleCount, 0LL);
    v13 = *(const signed __int64 **)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_35;
    a3 = 0;
    v5 = a1;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlReleaseSRWLockExclusive(v14);
  v29 = 1;
  v13 = *(const signed __int64 **)a1;
  if ( _bittest64(*(const signed __int64 **)a1, a2) )
  {
    if ( v8 >= v22 )
      goto LABEL_33;
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_33;
      LOBYTE(v13) = !_bittest64((const signed __int64 *)(v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL)), 0);
    }
    else
    {
      if ( v22 - v8 < v9 )
        goto LABEL_33;
      v15 = (unsigned __int64 *)(v23 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL));
      v16 = (unsigned __int64 *)(v23 + 8 * ((v9 + v8 - 1) >> 6));
      v10 = *v15;
      if ( v15 == v16 )
      {
        v13 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9));
LABEL_39:
        LOBYTE(v13) = (v10 & (unsigned __int64)v13) == 0;
      }
      else
      {
        for ( i = v10 == 0; i; i = v10 == 0 )
        {
          v10 = *++v15;
          if ( v15 == v16 )
          {
            v13 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1));
            goto LABEL_39;
          }
        }
LABEL_33:
        LOBYTE(v13) = 0;
      }
    }
    if ( (_BYTE)v13 )
    {
      _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
      v21 = *v25 + (a2 << 12);
      v20 = 4096LL;
      if ( *(_BYTE *)(a1 + 50) == 5 )
        LOBYTE(v13) = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, __int64 *, int))(MEMORY[0x10] ^ RtlpHpHeapGlobals))(
                        MEMORY[0] ^ RtlpHpHeapGlobals,
                        -1LL,
                        &v21,
                        &v20,
                        0x4000);
      else
        LOBYTE(v13) = ZwFreeVirtualMemory(-1LL, &v21, &v20, 0x4000LL);
    }
  }
LABEL_35:
  if ( v29 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    LOBYTE(v13) = RtlWakeAddressAll(a1 + 32, v10);
  }
  return (char)v13;
}
