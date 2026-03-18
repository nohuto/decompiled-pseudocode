/*
 * XREFs of IopBootAllocation @ 0x140725438
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x1407252A8 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopAddRemoveReqDescs @ 0x140A9D650 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF

  v13[1] = v13;
  v14[0] = 0LL;
  v4 = 0;
  v13[0] = v13;
  LOBYTE(a4) = 1;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  v14[1] = 0LL;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v13, a4);
  v6 = (_QWORD *)v13[0];
  while ( v6 != v13 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v7 + 17) )
    {
      v8 = v7 - 6;
      *(_QWORD *)&v14[0] = v7 - 6;
      v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(v7 - 8) + 8LL), 9LL, v14, v5);
      v10 = v7 - 2;
      if ( v9 < 0 )
        v4 = v9;
      *((_WORD *)v7 + 8) = 0;
      v7[1] = v7;
      *v7 = v7;
      v10[1] = v10;
      *v10 = v10;
      v11 = v7 - 4;
      v8[1] = v8;
      *v8 = v8;
      v11[1] = v11;
      *v11 = v11;
    }
  }
  return v4;
}
