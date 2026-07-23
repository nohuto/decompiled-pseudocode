/*
 * XREFs of MiWakePageZeroing @ 0x140412D50
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 */

__int64 __fastcall MiWakePageZeroing(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r9
  __int64 *v12; // r8
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 *v17; // r8
  __int64 *v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rcx
  volatile LONG *v21; // rcx
  KIRQL v22; // r15
  __int64 v23; // rcx

  result = *(unsigned int *)(a1 + 16944);
  v5 = a2;
  if ( !(_DWORD)result )
  {
    v6 = 0LL;
    v7 = 64LL;
    if ( a2 )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 0x20) != 0 )
        return result;
      v8 = a2 + 57216;
      result = 1024LL;
      if ( (a3 & 1) != 0 )
        result = 64LL;
      v6 = (unsigned __int64)!(a3 & 1) << 20;
      v7 = (unsigned int)result;
    }
    else
    {
      result = (unsigned __int16)KeNumberNodes;
      a2 = *(_QWORD *)(a1 + 16);
      v8 = a2 + 57216LL * (unsigned __int16)KeNumberNodes;
    }
    if ( a2 < v8 )
    {
      v9 = a2 + 3856;
      v10 = (v8 - a2 - 1) / 0xDF80 + 1;
      do
      {
        result = *(unsigned __int8 *)(v9 + 11440);
        if ( !(_BYTE)result )
        {
          if ( (a3 & 2) != 0 )
            goto LABEL_22;
          v11 = 0LL;
          result = v9 - 3840;
          v12 = MiPageSizes;
          v13 = 3LL;
          do
          {
            v14 = *v12++;
            v15 = *(_QWORD *)result;
            result += 1280LL;
            v11 += v14 * v15;
            --v13;
          }
          while ( v13 );
          if ( !v5 )
          {
            result = *(_QWORD *)v9;
            v11 += *(_QWORD *)v9;
          }
          if ( v11 >= v7 )
          {
            if ( !v6 )
              goto LABEL_22;
            v16 = 0LL;
            v17 = (__int64 *)(v9 - 3848);
            v18 = MiPageSizes;
            v19 = 3LL;
            do
            {
              result = *v18++;
              v20 = *v17;
              v17 += 160;
              v16 += result * v20;
              --v19;
            }
            while ( v19 );
            if ( v16 < v6 )
            {
LABEL_22:
              v21 = (volatile LONG *)(v9 + 11424);
              if ( v5 )
              {
                v22 = 17;
                ExAcquireSpinLockExclusiveAtDpcLevel(v21);
              }
              else
              {
                v22 = ExAcquireSpinLockExclusive(v21);
              }
              v23 = *(_QWORD *)(v9 + 11416);
              if ( v23 )
              {
                if ( !*(_BYTE *)(v9 + 11440) )
                {
                  *(_BYTE *)(v9 + 11440) = 1;
                  MiWakeZeroingThreads(v23);
                }
              }
              result = MiReleaseSpinLockExclusive((_DWORD *)(v9 + 11424), v22);
            }
          }
        }
        v9 += 57216LL;
        --v10;
      }
      while ( v10 );
    }
  }
  return result;
}
