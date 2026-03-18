/*
 * XREFs of MiGetFileOnlyRanges @ 0x140661830
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x140AADC88 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiGetNextNonGapPfnPage @ 0x140661A84 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(__int16 *a1, char a2, _QWORD *a3)
{
  char *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  char v7; // r12
  struct _LIST_ENTRY **v9; // rbp
  unsigned __int8 v10; // al
  __int64 v11; // r8
  unsigned __int8 v12; // bl
  __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  size_t v16; // rsi
  char *Pool; // rax
  char *v18; // r12
  unsigned __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  struct _LIST_ENTRY **v21; // [rsp+30h] [rbp-48h]
  __int16 v24; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = -1LL;
  v7 = a2;
  if ( (MiFlags & 0x30) == 0 )
    return 0LL;
  v24 = *a1;
  v20 = 0LL;
  v9 = MiSystemVaTypeToVm(3);
  v21 = v9;
LABEL_4:
  v10 = MiLockWorkingSetShared((__int64)v9);
  v19 = 0LL;
  LOBYTE(v11) = v10;
  v12 = v10;
  v13 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64 *, __int64, _QWORD))MiGetNextNonGapPfnPage)(
          &v20,
          &v19,
          v11,
          0LL);
  MiUnlockWorkingSetShared((__int64)v9, v12);
  if ( v13 )
  {
    v14 = 48 * ((v13 + 0x220000000000LL) / 0x30uLL) - 0x220000000000LL;
    v15 = 48 * ((v13 + v19 + 0x220000000000LL) / 0x30) - 0x220000000000LL;
    v19 = v15;
    v16 = 16 * v5;
    while ( 1 )
    {
      if ( v14 >= v15 )
      {
        v9 = v21;
        goto LABEL_4;
      }
      if ( _bittest64((const signed __int64 *)(v14 + 40), 0x35u)
        && ((v7 & 2) != 0 || ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FF) == v24) )
      {
        if ( v6 == -1LL || v6 + 1 != 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x220000000000LL) >> 4) )
        {
          if ( v5 == v4 )
          {
            if ( v4 )
              v4 *= 2LL;
            else
              v4 = 16LL;
            Pool = (char *)MiAllocatePool(0x40uLL, 16 * v4, 1716546893);
            v18 = Pool;
            if ( !Pool && v3 )
            {
              ExFreePoolWithTag(v3, 0);
              return 0LL;
            }
            if ( v5 )
            {
              memmove(Pool, v3, v16);
              ExFreePoolWithTag(v3, 0);
            }
            v15 = v19;
            v3 = v18;
            v7 = a2;
          }
          *(_QWORD *)&v3[v16 + 8] = 4096LL;
          ++v5;
          *(_QWORD *)&v3[v16] = 0xAAAAAAAAAAAAB000uLL * ((__int64)(v14 + 0x220000000000LL) >> 4);
          v16 += 16LL;
        }
        else
        {
          *(_QWORD *)&v3[v16 - 8] += 4096LL;
        }
        v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x220000000000LL) >> 4);
      }
      v14 += 48LL;
    }
  }
  *a3 = v5;
  return v3;
}
