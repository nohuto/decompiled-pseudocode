/*
 * XREFs of MiFreedUnusedPfnPagesDpc @ 0x14066E238
 * Callers:
 *     MiFreeUnusedPfnPagesDpc @ 0x14066E010 (MiFreeUnusedPfnPagesDpc.c)
 * Callees:
 *     MiLockWorkingSetExclusiveAtDpc @ 0x14020BEF8 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetNextNonGapPfnPage @ 0x14066E798 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14066F480 (MiPfnRangeIsZero.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
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
  _QWORD *v14; // rbp
  char *v15; // rbp
  char *v16; // r14
  unsigned __int64 v17; // rax
  struct _LIST_ENTRY **v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp+18h]
  unsigned __int64 v22; // [rsp+98h] [rbp+20h]

  v19 = a1;
  v18 = MiSystemVaTypeToVm(3);
  MiLockWorkingSetExclusiveAtDpc((__int64)v18);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E38E08);
  v1 = 0LL;
  while ( v1 != qword_140E2DD20 + 1 )
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
    v5 = qword_140E2DD20 - v1 + 1;
    if ( qword_140E2DD20 - v1 == -1LL )
      break;
LABEL_12:
    v7 = 48 * v1 - 0x21FFFFFFF001LL;
    v1 += v5;
    v22 = v1;
    v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = v8;
    v9 = (((48 * v1 - 0x220000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v9;
    if ( v8 < v9 )
    {
      do
      {
        LOBYTE(v3) = 2;
        v19 = (__int64)(v9 - v8) >> 3 << 12;
        NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v20, &v19, v3, 1LL, v18);
        if ( !NextNonGapPfnPage )
          break;
        v11 = v19 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == 0 )
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
            v14 = (_QWORD *)(48 * ((unsigned __int64)(NextNonGapPfnPage + 0x44000000000LL) / 0x30) - 0x220000000000LL);
            if ( v14 != NextNonGapPfnPage
              && MmIsAddressValidEx((__int64)v14)
              && RtlCompareMemoryUlong(v14, 0x30uLL, 0) != 48 )
            {
              v13 = NextNonGapPfnPage + 512;
            }
            v15 = (char *)NextNonGapPfnPage + (v12 & 0xFFFFFFFFFFFFF000uLL);
            v16 = (char *)(48 * ((unsigned __int64)(v15 + 0x220000000000LL) / 0x30) - 0x220000000000LL);
            if ( v16 != v15 && MmIsAddressValidEx((__int64)(v16 + 48)) && RtlCompareMemoryUlong(v16, 0x30uLL, 0) != 48 )
              v15 -= 4096;
            MiPfnRangeIsZero(v13, v15);
          }
          v17 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          NextNonGapPfnPage = (_QWORD *)((char *)NextNonGapPfnPage + v17);
          v11 -= v17;
        }
        while ( v11 >= 0x1000 );
        v8 = v20;
        v9 = v21;
        v1 = v22;
      }
      while ( v20 < v21 );
    }
  }
  MiReleaseSpinLockExclusive(&dword_140E38E08, 0x11u);
  MiUnlockWorkingSetExclusive((__int64)v18, 0x11u);
}
