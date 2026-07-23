/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x1408C9830
 * Callers:
 *     PiDqQueryEnumObject @ 0x1408C9144 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     FilterEvalStrict @ 0x1408CA150 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1408D1A38 (FilterEvalImpliedAnd.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v3; // rax
  PVOID v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID *Pool2; // r14
  __int64 v11; // rax
  int v12; // r8d
  _DWORD *v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  PVOID *v16; // rdi
  __int64 v17; // rsi
  void *v18; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v23 = 0;
  v6 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *a3 = 0;
  v21 = 0LL;
  P = 0LL;
  v22 = 0LL;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL, 48LL * *(unsigned int *)(v3 + 80), 0x58706E50u);
  if ( Pool2 )
  {
    LODWORD(Handle[1]) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
    *(_QWORD *)&v21 = Pool2;
    *(_QWORD *)&v22 = a2;
    *((_QWORD *)&v22 + 1) = a1;
    PiPnpRtlBeginOperation(&P, v8, v9);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = *(_DWORD *)(v11 + 80);
    v13 = *(_DWORD **)(v11 + 88);
    if ( v12 )
    {
      if ( (*v13 & 0xFF00000) != 0 )
        v14 = FilterEvalStrict(
                (unsigned int)PiDqPropertyCallback,
                (unsigned int)Handle,
                v12,
                (_DWORD)v13,
                (__int64)&v23);
      else
        v14 = FilterEvalImpliedAnd(
                (unsigned int)PiDqPropertyCallback,
                (unsigned int)Handle,
                v12,
                (_DWORD)v13,
                (__int64)&v23);
      v15 = v14;
      if ( v14 >= 0 )
        *a3 = v23 != 0;
    }
    else
    {
      v15 = -1073741811;
    }
    if ( DWORD2(v21) )
    {
      v16 = Pool2 + 5;
      v17 = DWORD2(v21);
      do
      {
        v18 = *(v16 - 2);
        if ( v18 )
          ExFreePoolWithTag(v18, 0x58706E50u);
        if ( *v16 )
          ExFreePoolWithTag(*v16, 0x58706E50u);
        v16 += 6;
        --v17;
      }
      while ( v17 );
    }
    ExFreePoolWithTag(Pool2, 0x58706E50u);
    v6 = P;
  }
  else
  {
    v15 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v6 )
    PiPnpRtlEndOperation(v6);
  return v15;
}
