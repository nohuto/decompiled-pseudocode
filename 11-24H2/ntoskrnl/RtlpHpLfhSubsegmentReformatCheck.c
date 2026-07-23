/*
 * XREFs of RtlpHpLfhSubsegmentReformatCheck @ 0x1403D8038
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1403D7F1C (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403D90D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x140219598 (RtlpHpReleaseLockShared.c)
 *     RtlpHpLfhSubsegmentCountAllocatedBlocks @ 0x1403D81A8 (RtlpHpLfhSubsegmentCountAllocatedBlocks.c)
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x1403D97B4 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     RtlpHpAcquireLockShared @ 0x1403D9B14 (RtlpHpAcquireLockShared.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatCheck(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  unsigned int v9; // ebx
  __int64 v11; // rsi
  int v12; // ebp
  __int16 *v13; // r14
  __int16 *v14; // r13
  KIRQL v15; // r9
  char *v16; // rdx
  __int16 v17; // r8
  int v18; // ecx
  _BYTE v20[128]; // [rsp+30h] [rbp-D8h] BYREF

  v6 = *(unsigned __int16 *)(a2 + 34) - *(unsigned __int16 *)(a2 + 32);
  if ( *(_BYTE *)(a2 + 39) == 1 )
  {
    if ( (unsigned int)RtlpHpLfhSubsegmentCountAllocatedBlocks(a2) >= v6 )
    {
      *a3 = 0;
      *a4 = 0;
      return 1;
    }
    return 0;
  }
  memset_0(v20, 0, sizeof(v20));
  if ( (unsigned int)RtlpHpLfhSubsegmentConstructCommitState(a1, a2, a2 + 64, v20) < v6 )
    return 0;
  v9 = 0;
  LODWORD(v11) = 0;
  v12 = 0;
  v13 = (__int16 *)(a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
  v14 = &v13[*(unsigned __int8 *)(a2 + 39)];
  v15 = RtlpHpAcquireLockShared(a2 + 56, *(unsigned __int8 *)(a1 + 65));
  if ( v13 < v14 )
  {
    v16 = v20;
    do
    {
      v17 = *v13;
      v18 = v12 + 1;
      if ( *v13 )
        v18 = v12;
      v12 = v18;
      if ( v17 != *(_WORD *)v16 )
      {
        if ( *(_WORD *)v16 || v17 != -1 )
          break;
        if ( !(_DWORD)v11 )
          v11 = (v16 - v20) >> 1;
      }
      ++v13;
      v16 += 2;
    }
    while ( v13 < v14 );
  }
  RtlpHpReleaseLockShared((PEX_SPIN_LOCK)(a2 + 56), *(unsigned __int8 *)(a1 + 65), v15);
  if ( v13 >= v14 )
  {
    *a3 = v11;
    *a4 = v12;
    return 1;
  }
  return v9;
}
