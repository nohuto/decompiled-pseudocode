/*
 * XREFs of IopBootAllocation @ 0x140722FC8
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x140722E38 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopAddRemoveReqDescs @ 0x140A98BC0 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]
  __int128 v14; // [rsp+40h] [rbp-10h]

  v12[1] = v12;
  v13 = 0LL;
  v4 = 0;
  v12[0] = v12;
  LOBYTE(a4) = 1;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  v14 = 0LL;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v12, a4);
  v5 = (_QWORD *)v12[0];
  while ( v5 != v12 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 17) )
    {
      v7 = v6 - 6;
      *(_QWORD *)&v13 = v6 - 6;
      v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(v6 - 8) + 8LL), 9LL);
      v9 = v6 - 2;
      if ( v8 < 0 )
        v4 = v8;
      *((_WORD *)v6 + 8) = 0;
      v6[1] = v6;
      *v6 = v6;
      v9[1] = v9;
      *v9 = v9;
      v10 = v6 - 4;
      v7[1] = v7;
      *v7 = v7;
      v10[1] = v10;
      *v10 = v10;
    }
  }
  return v4;
}
