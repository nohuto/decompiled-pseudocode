/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404977E0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403D90D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403D9464 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentFree @ 0x1403D996C (RtlpHpLfhSubsegmentFree.c)
 */

char __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _UNKNOWN **v4; // rax
  _QWORD *v5; // rdi
  char v6; // r15
  _QWORD *v10; // r8
  __int64 v11; // rcx
  int v12; // ebp
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = (_QWORD *)*a3;
  v6 = a4 & 0xC;
  if ( (a4 & 0xC) == 0 )
    v6 = 8;
  if ( v5 != a3 )
  {
    v12 = a4 & 2;
    do
    {
      v13 = v5;
      v5 = (_QWORD *)*v5;
      if ( v12 || (LOWORD(v4) = *((_WORD *)v13 + 17), *((_WORD *)v13 + 16) != (_WORD)v4) )
      {
        if ( (*((_BYTE *)v13 + 51) & 1) != 0 )
        {
          LOBYTE(v4) = *((_BYTE *)v13 + 51) & 0xFE;
          *((_BYTE *)v13 + 51) = (_BYTE)v4;
          if ( (v6 & 8) == 0 )
            LOBYTE(v4) = RtlpHpLfhSubsegmentReformatAsMulti(a1, v13, 1LL);
        }
      }
      else
      {
        if ( (_QWORD *)v5[1] != v13 || (v14 = (_QWORD *)v13[1], (_QWORD *)*v14 != v13) )
LABEL_16:
          __fastfail(3u);
        *v14 = v5;
        v5[1] = v14;
        LOBYTE(v4) = RtlpHpLfhSubsegmentFree(a1, v13, a2);
      }
    }
    while ( v5 != a3 );
  }
  if ( (_QWORD *)*a3 != a3 )
  {
    RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 65));
    v10 = (_QWORD *)*a3;
    do
    {
      if ( (_QWORD *)v10[1] != a3 )
        goto LABEL_16;
      v11 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_16;
      *a3 = v11;
      *(_QWORD *)(v11 + 8) = a3;
      RtlpHpLfhOwnerMoveSubsegment(a1, a2, (_DWORD)v10, 0, 0);
      v10 = (_QWORD *)*a3;
    }
    while ( (_QWORD *)*a3 != a3 );
    LOBYTE(v4) = RtlpHpReleaseLockExclusive(a2 + 16);
  }
  return (char)v4;
}
