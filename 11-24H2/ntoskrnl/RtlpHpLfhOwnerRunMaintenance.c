/*
 * XREFs of RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1403D8924 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403D8A60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403D90D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403D9464 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

__int64 __fastcall RtlpHpLfhOwnerRunMaintenance(__int64 a1, __int64 a2, volatile __int32 **a3, unsigned int a4)
{
  volatile __int32 *v4; // rbx
  volatile __int32 *v5; // rsi
  volatile __int32 *v10; // rdi
  __int64 result; // rax
  __int64 *v12; // r8
  volatile __int32 *v13; // r8
  __int64 *v14; // rax
  __int64 **v15; // rcx
  volatile __int32 ***v16; // r8

  v4 = *(volatile __int32 **)(a2 + 24);
  v5 = (volatile __int32 *)(a2 + 24);
  while ( v4 != v5 )
  {
    v10 = v4;
    v4 = *(volatile __int32 **)v4;
    if ( *((unsigned __int16 *)v10 + 9) + *((unsigned __int16 *)v10 + 16)
      || ((*(_BYTE *)a2 & 1) != 0 || (*(_QWORD *)(a2 + 56) ^ (unsigned __int64)v10) - 1 > 0xFFE)
      && !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, a2, (_DWORD)v10, 1, 2) )
    {
      if ( (a4 & 1) != 0 && *((_WORD *)v10 + 9)
        || *((unsigned __int16 *)v10 + 9) + *((unsigned __int16 *)v10 + 16) == *((unsigned __int16 *)v10 + 17)
        && *((_WORD *)v10 + 9) )
      {
        RtlpHpLfhSubsegmentDelayFreeListProcess(a1, v10, (unsigned int)_InterlockedExchange(v10 + 4, 0));
      }
      if ( *((_WORD *)v10 + 16) == *((_WORD *)v10 + 17) )
      {
        RtlpHpLfhOwnerMoveSubsegment(a1, a2, (_DWORD)v10, 3, 2);
        v13 = *a3;
        if ( *((volatile __int32 ***)*a3 + 1) != a3 )
          goto LABEL_25;
        *(_QWORD *)v10 = v13;
        *((_QWORD *)v10 + 1) = a3;
        *((_QWORD *)v13 + 1) = v10;
        *a3 = v10;
      }
      else if ( (a4 & 4) != 0
             && *((_BYTE *)v10 + 39) == 1
             && *((_BYTE *)v10 + 38)
             && ((*(_BYTE *)a2 & 1) != 0 || (*(_QWORD *)(a2 + 56) ^ (unsigned __int64)v10) - 1 > 0xFFE) )
      {
        RtlpHpLfhSubsegmentReformatAsMulti(a1, v10, 0LL);
      }
    }
  }
  result = RtlpHpLfhOwnerFreeListProcess(a1, a2, a3, a4);
  do
  {
    if ( *a3 == (volatile __int32 *)a3 )
      return result;
    v12 = (__int64 *)a3[1];
    result = *((unsigned __int16 *)v12 + 17);
    if ( *((_WORD *)v12 + 16) == (_WORD)result && (a4 & 2) != 0 )
      return result;
    v14 = (__int64 *)*v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      goto LABEL_25;
    v15 = (__int64 **)v12[1];
    if ( *v15 != v12 )
      goto LABEL_25;
    *v15 = v14;
    v14[1] = (__int64)v15;
    result = RtlpHpLfhOwnerMoveSubsegment(a1, a2, (_DWORD)v12, 0, 2);
  }
  while ( (_DWORD)result );
  result = (__int64)a3[1];
  if ( *(volatile __int32 ***)result != a3 )
LABEL_25:
    __fastfail(3u);
  *v16 = a3;
  v16[1] = (volatile __int32 **)result;
  *(_QWORD *)result = v16;
  a3[1] = (volatile __int32 *)v16;
  return result;
}
