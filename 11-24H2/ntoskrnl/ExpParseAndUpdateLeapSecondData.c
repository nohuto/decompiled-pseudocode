/*
 * XREFs of ExpParseAndUpdateLeapSecondData @ 0x1407B6800
 * Callers:
 *     ExpReadLeapSecondData @ 0x1407B68FC (ExpReadLeapSecondData.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlParseLeapSecondData @ 0x14082BA74 (RtlParseLeapSecondData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpParseAndUpdateLeapSecondData(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  __int64 v8; // rsi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 3 && (v4 = *(unsigned int *)(a1 + 8) / 0xCuLL, *(_DWORD *)(a1 + 8) == 12 * v4) )
  {
    v5 = 8 * v4 + 8;
    if ( v5 <= 0x1000 )
    {
      if ( (_DWORD)v4 )
      {
        if ( (unsigned int)v4 > *(_DWORD *)(a2 + 4) )
        {
          Pool2 = ExAllocatePool2(0x100uLL, v5, 0x6453704Cu);
          v8 = Pool2;
          if ( Pool2 )
          {
            v6 = RtlParseLeapSecondData(a1 + 12, (unsigned int)v4, a2, Pool2);
            if ( !v6 )
            {
              memmove((void *)(a2 + 8), (const void *)(v8 + 8), 8LL * (unsigned int)v4);
              _InterlockedOr(v10, 0);
              *(_DWORD *)(a2 + 4) = v4;
            }
            ExFreePoolWithTag((PVOID)v8, 0x6453704Cu);
          }
          else
          {
            return 7;
          }
        }
        else
        {
          return (unsigned int)v4 < *(_DWORD *)(a2 + 4) ? 3 : 0;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
  return v6;
}
