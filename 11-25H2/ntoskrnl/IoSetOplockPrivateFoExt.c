/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x1403755B4
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x140375544 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  char v3; // bp
  unsigned int v6; // edi
  _QWORD *v7; // rdx
  _OWORD *v8; // rax
  __int64 *Pool2; // r14

  v2 = *(__int64 **)(a1 + 208);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == qword_1400140F0 )
      return (unsigned int)-1073741670;
    v6 = 0;
  }
  else
  {
    Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
    v2 = Pool2;
    v6 = Pool2 == 0LL ? 0xC000009A : 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 && Pool2 != qword_1400140F0 )
        ExFreePoolWithTag(Pool2, 0);
      v2 = *(__int64 **)(a1 + 208);
    }
    if ( !Pool2 )
      return v6;
  }
  v7 = (_QWORD *)v2[7];
  if ( v7 )
  {
LABEL_7:
    v7[5] = *(_QWORD *)(a2 + 40);
    if ( v3 )
    {
      if ( _InterlockedCompareExchange64(v2 + 7, (signed __int64)v7, 0LL) )
      {
        v6 = -1073741823;
        ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v7);
      }
      else
      {
        return 0;
      }
    }
    return v6;
  }
  v8 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
  v7 = v8;
  if ( v8 )
  {
    v3 = 1;
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    goto LABEL_7;
  }
  return 3221225626LL;
}
