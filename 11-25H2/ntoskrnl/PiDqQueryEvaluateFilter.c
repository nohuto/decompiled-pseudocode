/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x1408D06A0
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1408D0544 (PiDqQueryEnumObject.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     FilterEvalStrict @ 0x1408D0FC0 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1408D1E0C (FilterEvalImpliedAnd.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(__int64 a1, __int64 a2, bool *a3)
{
  PVOID v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  PVOID *Pool2; // r14
  __int64 v10; // rax
  int v11; // r8d
  _DWORD *v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  PVOID *v15; // rdi
  __int64 v16; // rsi
  void *v17; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v22 = 0;
  v5 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *a3 = 0;
  v20 = 0LL;
  P = 0LL;
  v21 = 0LL;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    LODWORD(Handle[1]) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
    *(_QWORD *)&v20 = Pool2;
    *(_QWORD *)&v21 = a2;
    *((_QWORD *)&v21 + 1) = a1;
    PiPnpRtlBeginOperation(&P, v7, v8);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(_DWORD *)(v10 + 80);
    v12 = *(_DWORD **)(v10 + 88);
    if ( v11 )
    {
      if ( (*v12 & 0xFF00000) != 0 )
        v13 = FilterEvalStrict(
                (unsigned int)PiDqPropertyCallback,
                (unsigned int)Handle,
                v11,
                (_DWORD)v12,
                (__int64)&v22);
      else
        v13 = FilterEvalImpliedAnd(
                (unsigned int)PiDqPropertyCallback,
                (unsigned int)Handle,
                v11,
                (_DWORD)v12,
                (__int64)&v22);
      v14 = v13;
      if ( v13 >= 0 )
        *a3 = v22 != 0;
    }
    else
    {
      v14 = -1073741811;
    }
    if ( DWORD2(v20) )
    {
      v15 = Pool2 + 5;
      v16 = DWORD2(v20);
      do
      {
        v17 = *(v15 - 2);
        if ( v17 )
          ExFreePoolWithTag(v17, 0x58706E50u);
        if ( *v15 )
          ExFreePoolWithTag(*v15, 0x58706E50u);
        v15 += 6;
        --v16;
      }
      while ( v16 );
    }
    ExFreePoolWithTag(Pool2, 0x58706E50u);
    v5 = P;
  }
  else
  {
    v14 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v5 )
    PiPnpRtlEndOperation(v5);
  return v14;
}
