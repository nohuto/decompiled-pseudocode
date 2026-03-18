/*
 * XREFs of MiBeginPageAccessor @ 0x1404342F0
 * Callers:
 *     MiSetPageZeroInProgress @ 0x14041E500 (MiSetPageZeroInProgress.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F0954 (MiGetSingleHugeRangeToZero.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14066FA10 (MiCanBeginHugeIoPageAccessor.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  unsigned __int64 v9; // r8
  __int64 i; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rbp
  bool v14; // zf
  __int64 CanBeginHugeIoPageAccessor; // rax
  volatile LONG *v17; // rdi
  bool v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 *v21; // rcx
  _QWORD *v22; // rax
  int v23; // [rsp+48h] [rbp+20h]

  v4 = *(unsigned int *)(a1 + 280);
  if ( !a4 )
  {
    if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
    {
      v9 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
      {
        if ( v9 == ((*(_QWORD *)(a1 + 8 * i + 24) >> 12) & 0x3FFFFFFFFFLL) )
          return 0LL;
      }
      v11 = *(_QWORD *)(a3 + 16);
      v12 = ((v9 & 0x3FFFFFFFFFLL) << 12) | 0x18;
      if ( qword_140E2DB80 )
      {
        if ( (v11 & 0x10) != 0 )
          v11 &= ~0x10uLL;
        else
          v11 &= ~qword_140E2DB80;
      }
      if ( HIDWORD(v11) == 4294967293 )
        v12 |= 4uLL;
      v23 = *(_DWORD *)(a3 + 32);
      BYTE2(v23) |= 8u;
      *(_DWORD *)(a3 + 32) = v23;
      *(_QWORD *)(a3 + 16) = a1;
      goto LABEL_11;
    }
    return 0LL;
  }
  CanBeginHugeIoPageAccessor = MiCanBeginHugeIoPageAccessor(a3);
  if ( (CanBeginHugeIoPageAccessor & 0x3FFFFF) == 0 )
    return 0LL;
  v12 = ((unsigned __int64)(CanBeginHugeIoPageAccessor & 0x3FFFFF) << 12) | 0x18;
  *(_BYTE *)(a1 + 324) = 1;
LABEL_11:
  if ( (_DWORD)v4 )
  {
    CurrentThread = *(struct _KTHREAD **)(a1 + 312);
  }
  else
  {
    *(_DWORD *)(a1 + 320) = a2;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a1 + 312) = CurrentThread;
  }
  *(_QWORD *)(a1 + 8 * v4 + 24) = v12;
  ++*(_DWORD *)(a1 + 280);
  v14 = *(_BYTE *)(a1 + 325) == 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  if ( !v14 )
    return 1LL;
  if ( *(_BYTE *)(a1 + 326) )
  {
    v17 = &dword_140E2FE20;
  }
  else
  {
    if ( !a4 )
      return 1LL;
    v17 = &dword_140E2FE30;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v17);
  v18 = 0;
  *(_BYTE *)(a1 + 325) = 1;
  if ( *(_BYTE *)(a1 + 326) )
  {
    v19 = (_QWORD *)qword_140E2FE28;
    if ( qword_140E2FE28 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v19[39] )
        {
          v22 = (_QWORD *)v19[1];
          if ( !v22 )
          {
            v18 = 1;
            break;
          }
        }
        else
        {
          v22 = (_QWORD *)*v19;
          if ( !*v19 )
            break;
        }
        v19 = v22;
      }
    }
    v21 = &qword_140E2FE28;
    goto LABEL_38;
  }
  v19 = (_QWORD *)qword_140E2FE38;
  if ( !qword_140E2FE38 )
    goto LABEL_30;
  while ( a1 < (unsigned __int64)v19 )
  {
    v20 = (_QWORD *)*v19;
    if ( !*v19 )
      goto LABEL_30;
LABEL_33:
    v19 = v20;
  }
  v20 = (_QWORD *)v19[1];
  if ( v20 )
    goto LABEL_33;
  v18 = 1;
LABEL_30:
  v21 = &qword_140E2FE38;
LABEL_38:
  RtlAvlInsertNodeEx((unsigned __int64 *)v21, (unsigned __int64)v19, v18, (_QWORD *)a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v17);
  return 1LL;
}
