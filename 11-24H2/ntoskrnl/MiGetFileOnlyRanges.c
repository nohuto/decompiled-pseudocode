/*
 * XREFs of MiGetFileOnlyRanges @ 0x14066E544
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x140AADC98 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiGetNextNonGapPfnPage @ 0x14066E798 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(__int16 *a1, char a2, _QWORD *a3)
{
  char *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  char v7; // r12
  unsigned __int64 v9; // rdx
  struct _LIST_ENTRY **v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // al
  __int64 v14; // r8
  unsigned __int8 v15; // bl
  __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  size_t v19; // rsi
  char *Pool; // rax
  char *v21; // r12
  unsigned __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h] BYREF
  struct _LIST_ENTRY **v24; // [rsp+30h] [rbp-48h]
  __int16 v27; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = -1LL;
  v7 = a2;
  if ( (MiFlags & 0x30) == 0 )
    return 0LL;
  v27 = *a1;
  v23 = 0LL;
  v10 = MiSystemVaTypeToVm(3);
  v24 = v10;
LABEL_4:
  v13 = MiLockWorkingSetShared((__int64)v10, v9, v11, v12);
  v22 = 0LL;
  LOBYTE(v14) = v13;
  v15 = v13;
  v16 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __int64, _QWORD))MiGetNextNonGapPfnPage)(
          &v23,
          &v22,
          v14,
          0LL);
  MiUnlockWorkingSetShared((__int64)v10, v15);
  if ( v16 )
  {
    v12 = 0xFFFFDE0000000000uLL;
    v11 = 0xAAAAAAAAAAAAAAABuLL;
    v17 = 48 * ((v16 + 0x220000000000LL) / 0x30uLL) - 0x220000000000LL;
    v9 = (v16 + v22 + 0x220000000000LL) / 0x30;
    v18 = 48 * v9 - 0x220000000000LL;
    v22 = v18;
    v19 = 16 * v5;
    while ( 1 )
    {
      if ( v17 >= v18 )
      {
        v10 = v24;
        goto LABEL_4;
      }
      if ( _bittest64((const signed __int64 *)(v17 + 40), 0x35u) )
      {
        if ( (v7 & 2) != 0 || (v9 = 1023LL, ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FF) == v27) )
        {
          if ( v6 == -1LL || v6 + 1 != 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v17 + 0x220000000000LL) >> 4) )
          {
            if ( v5 == v4 )
            {
              if ( v4 )
                v4 *= 2LL;
              else
                v4 = 16LL;
              Pool = (char *)MiAllocatePool(0x40uLL, 16 * v4, 1716546893);
              v21 = Pool;
              if ( !Pool && v3 )
              {
                ExFreePoolWithTag(v3, 0);
                return 0LL;
              }
              if ( v5 )
              {
                memmove(Pool, v3, v19);
                ExFreePoolWithTag(v3, 0);
              }
              v18 = v22;
              v3 = v21;
              v7 = a2;
              v11 = 0xAAAAAAAAAAAAAAABuLL;
            }
            *(_QWORD *)&v3[v19 + 8] = 4096LL;
            ++v5;
            *(_QWORD *)&v3[v19] = 0xAAAAAAAAAAAAB000uLL * ((__int64)(v17 + 0x220000000000LL) >> 4);
            v19 += 16LL;
          }
          else
          {
            *(_QWORD *)&v3[v19 - 8] += 4096LL;
          }
          v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v17 + 0x220000000000LL) >> 4);
        }
      }
      v17 += 48LL;
    }
  }
  *a3 = v5;
  return v3;
}
