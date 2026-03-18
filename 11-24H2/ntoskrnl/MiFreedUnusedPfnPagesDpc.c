/*
 * XREFs of MiFreedUnusedPfnPagesDpc @ 0x14066D068
 * Callers:
 *     MiFreeUnusedPfnPagesDpc @ 0x14066CE40 (MiFreeUnusedPfnPagesDpc.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1402E39BC (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x14066D5C4 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14066E2AC (MiPfnRangeIsZero.c)
 *     RtlCompareMemoryUlong @ 0x1406B3A10 (RtlCompareMemoryUlong.c)
 */

void __fastcall MiFreedUnusedPfnPagesDpc(__int64 a1)
{
  unsigned __int64 v1; // rbx
  char *v2; // rdx
  char *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  _QWORD *NextNonGapPfnPage; // rdi
  SIZE_T v11; // rsi
  SIZE_T v12; // r15
  _QWORD *v13; // r13
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rbp
  char *v16; // rbp
  char *v17; // r14
  unsigned __int64 v18; // rax
  struct _LIST_ENTRY **v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp+18h]
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v20 = a1;
  v19 = MiSystemVaTypeToVm(3);
  MiLockWorkingSetExclusiveAtDpc((__int64)v19);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E38CC8);
  v1 = 0LL;
  while ( v1 != qword_140E2DBE0 + 1 )
  {
    v2 = (char *)MmPhysicalMemoryBlock + 16;
    v3 = (char *)MmPhysicalMemoryBlock + 16 * *(unsigned int *)MmPhysicalMemoryBlock + 16;
    while ( v2 < v3 )
    {
      v4 = *(_QWORD *)v2;
      if ( v1 >= *(_QWORD *)v2 )
      {
        v6 = *((_QWORD *)v2 + 1) + v4;
        if ( v1 < v6 )
          v1 = v6;
      }
      else
      {
        v5 = v4 - v1;
        if ( v4 - v1 >= 0x55 )
          goto LABEL_12;
        v1 = v4 + *((_QWORD *)v2 + 1);
      }
      v2 += 16;
    }
    v5 = qword_140E2DBE0 - v1 + 1;
    if ( qword_140E2DBE0 - v1 == -1LL )
      break;
LABEL_12:
    v7 = 48 * v1 - 0x21FFFFFFF001LL;
    v1 += v5;
    v23 = v1;
    v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v8;
    v9 = (((48 * v1 - 0x220000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = v9;
    if ( v8 < v9 )
    {
      do
      {
        LOBYTE(v3) = 2;
        v20 = (__int64)(v9 - v8) >> 3 << 12;
        NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v21, &v20, v3, 1LL, v19);
        if ( !NextNonGapPfnPage )
          break;
        v11 = v20 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v20 & 0xFFFFFFFFFFFFF000uLL) == 0 )
          break;
        do
        {
          if ( *NextNonGapPfnPage || (v12 = RtlCompareMemoryUlong(NextNonGapPfnPage, v11, 0), v12 < 0x1000) )
          {
            v12 = 4096LL;
          }
          else
          {
            v13 = NextNonGapPfnPage;
            v14 = (unsigned __int64)(NextNonGapPfnPage + 0x44000000000LL) / 0x30;
            v15 = (_QWORD *)(48 * v14 - 0x220000000000LL);
            if ( v15 != NextNonGapPfnPage
              && MmIsAddressValidEx(48 * v14 - 0x220000000000LL)
              && RtlCompareMemoryUlong(v15, 0x30uLL, 0) != 48 )
            {
              v13 = NextNonGapPfnPage + 512;
            }
            v16 = (char *)NextNonGapPfnPage + (v12 & 0xFFFFFFFFFFFFF000uLL);
            v17 = (char *)(48 * ((unsigned __int64)(v16 + 0x220000000000LL) / 0x30) - 0x220000000000LL);
            if ( v17 != v16 && MmIsAddressValidEx((__int64)(v17 + 48)) && RtlCompareMemoryUlong(v17, 0x30uLL, 0) != 48 )
              v16 -= 4096;
            MiPfnRangeIsZero(v13, v16);
          }
          v18 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          NextNonGapPfnPage = (_QWORD *)((char *)NextNonGapPfnPage + v18);
          v11 -= v18;
        }
        while ( v11 >= 0x1000 );
        v8 = v21;
        v9 = v22;
        v1 = v23;
      }
      while ( v21 < v22 );
    }
  }
  MiReleaseSpinLockExclusive(&dword_140E38CC8, 0x11u);
  MiUnlockWorkingSetExclusive((__int64)v19, 0x11u);
}
