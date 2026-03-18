/*
 * XREFs of PopQueryPowerLimitAttributes @ 0x14074BAD8
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x14074B078 (PopAssociatePowerLimitRequest.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopQueryPowerLimitAttributes(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned int v4; // esi
  int v5; // r12d
  _DWORD *Pool2; // r14
  _DWORD *v7; // rbp
  __int64 v8; // rax
  void *v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 120);
  v14 = 0;
  v4 = guard_dispatch_icall_no_overrides(v3, 0LL, 0LL, &v14);
  if ( v4 != -1073741789 )
    return v4;
  v5 = (v14 >> 6) + ((v14 & 0x3F) != 0);
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v7 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v8 = ExAllocatePool2(0x100uLL);
  v9 = (void *)v8;
  if ( Pool2 && v7 && v8 )
  {
    v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 120), v14, Pool2, &v14);
    if ( (v4 & 0x80000000) == 0 )
    {
      v10 = v14;
      if ( v14 )
      {
        do
        {
          v11 = v2++;
          v12 = 9 * v11;
          v11 *= 2LL;
          v7[2 * v11] = Pool2[v12];
          v7[2 * v11 + 1] = Pool2[v12 + 1];
          v10 = v14;
        }
        while ( v2 < v14 );
      }
      *(_DWORD *)(a1 + 72) = v10;
      *(_QWORD *)(a1 + 80) = Pool2;
      *(_QWORD *)(a1 + 88) = v7;
      *(_DWORD *)(a1 + 96) = v5;
      *(_QWORD *)(a1 + 104) = v9;
      return v4;
    }
    goto LABEL_10;
  }
  v4 = -1073741670;
  if ( Pool2 )
LABEL_10:
    ExFreePoolWithTag(Pool2, 0x6D6C5050u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6D6C5050u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x6D6C5050u);
  return v4;
}
