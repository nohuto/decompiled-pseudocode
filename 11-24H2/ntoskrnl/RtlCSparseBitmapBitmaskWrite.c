/*
 * XREFs of RtlCSparseBitmapBitmaskWrite @ 0x1402196D4
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x14035E15C (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x14021966C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402197E0 (RtlpCSparseBitmapPageCommit.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     RtlCSparseBitmapBitsClear @ 0x140364118 (RtlCSparseBitmapBitsClear.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlCSparseBitmapBitmaskWrite(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  char v11; // di
  unsigned __int64 v12; // r8
  __int64 v13; // rbp
  signed __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int64 i; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  int v20[6]; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(v19) = 0;
  v18 = 0LL;
  *(_OWORD *)v20 = 0LL;
  if ( a4 )
  {
    v7 = RtlpCSparseBitmapPageCommit(a1, a2 >> 15, v20, &v18);
    if ( v7 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = a2;
      v11 = a2 & 0x3F;
      v12 = v10 >> 6;
      v13 = a4 << v11;
      v14 = *(_QWORD *)(v9 + 8 * v12);
      v15 = v14 & ~(3LL << v11);
      for ( i = v14; ; v15 = i & ~(3LL << v11) )
      {
        i = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 8 * v12), v13 | v15, i);
        if ( v14 == i )
          break;
        v14 = i;
      }
      v7 = 0;
      RtlpCSparseBitmapUnlock(v20);
      if ( *(_BYTE *)(v19 + 48) )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = v18;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
        }
        __writecr8((unsigned __int8)v18);
      }
      else
      {
        KeLeaveGuardedRegion();
      }
    }
    return (unsigned int)v7;
  }
  else
  {
    RtlCSparseBitmapBitsClear(a1, a2, 2LL);
    return 0LL;
  }
}
