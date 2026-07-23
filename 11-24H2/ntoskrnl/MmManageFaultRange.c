/*
 * XREFs of MmManageFaultRange @ 0x140681764
 * Callers:
 *     RtlpEnvRegisterFaultRange @ 0x140604BA0 (RtlpEnvRegisterFaultRange.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManageFaultRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 a3, char a4)
{
  unsigned int v4; // edi
  ULONG_PTR v5; // r14
  ULONG *v8; // rsi
  int v9; // ebx
  unsigned int i; // edx
  __int64 result; // rax
  KIRQL v12; // r12
  _QWORD *v13; // rdx
  bool v14; // r8
  _QWORD *v15; // rax
  ULONG_PTR v16; // rbx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h]
  ULONG_PTR v19; // [rsp+50h] [rbp-28h]

  v4 = 0;
  v5 = BugCheckParameter4 + BugCheckParameter3 - 1;
  v8 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v9 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    for ( i = 0; i < 2; ++i )
    {
      v8 = &MiState + 8 * i + 2 * i + 16;
      if ( !*((_QWORD *)v8 + 3)
        && !_InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, BugCheckParameter3, 0LL) )
      {
        *((_QWORD *)v8 + 4) = v5;
        goto LABEL_12;
      }
    }
    if ( i == 2 )
    {
      result = MiAllocatePool(0x40uLL, 0x28uLL, 1983998285);
      v8 = (ULONG *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v5;
    }
  }
  else
  {
    *((_QWORD *)&v18 + 1) = BugCheckParameter3;
    v8 = (ULONG *)&v17;
    v19 = BugCheckParameter4 + BugCheckParameter3 - 1;
  }
LABEL_12:
  v12 = ExAcquireSpinLockExclusive(&dword_140E2CBB0);
  if ( !v9 )
  {
    v16 = qword_140E2CBB8[0];
    while ( v16 )
    {
      if ( *((_QWORD *)v8 + 3) <= *(_QWORD *)(v16 + 32) )
      {
        if ( *((_QWORD *)v8 + 4) >= *(_QWORD *)(v16 + 24) )
          break;
        v16 = *(_QWORD *)v16;
      }
      else
      {
        v16 = *(_QWORD *)(v16 + 8);
      }
    }
    if ( *(_QWORD *)(v16 + 24) != BugCheckParameter3 || *(_QWORD *)(v16 + 32) != v5 )
      KeBugCheckEx(0x1Au, 0x5231uLL, v16, BugCheckParameter3, BugCheckParameter4);
    RtlAvlRemoveNode(qword_140E2CBB8, v16);
    goto LABEL_31;
  }
  v13 = (_QWORD *)qword_140E2CBB8[0];
  v14 = 0;
  if ( !qword_140E2CBB8[0] )
    goto LABEL_21;
  while ( *((_QWORD *)v8 + 3) <= v13[4] && *((_QWORD *)v8 + 4) < v13[3] )
  {
    v15 = (_QWORD *)*v13;
    if ( !*v13 )
      goto LABEL_21;
LABEL_19:
    v13 = v15;
  }
  v15 = (_QWORD *)v13[1];
  if ( v15 )
    goto LABEL_19;
  v14 = 1;
LABEL_21:
  RtlAvlInsertNodeEx(qword_140E2CBB8, (unsigned __int64)v13, v14, v8);
  v16 = 0LL;
LABEL_31:
  MiReleaseSpinLockExclusive(&dword_140E2CBB0, v12);
  if ( v16 )
  {
    while ( v4 < 2 )
    {
      if ( (ULONG *)v16 == &MiState + 10 * v4 + 16 )
        return 1LL;
      ++v4;
    }
    ExFreePoolWithTag((PVOID)v16, 0);
  }
  return 1LL;
}
