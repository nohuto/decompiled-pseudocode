/*
 * XREFs of FopReadNamingTable @ 0x140C727E0
 * Callers:
 *     FopValidateFontNameTable @ 0x140C72964 (FopValidateFontNameTable.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall FopReadNamingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int BytesAtOffset; // ebx
  unsigned int v7; // edx
  unsigned __int16 v8; // si
  __int16 v9; // bp
  __int64 Memory; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // r15d
  _WORD *v14; // rsi
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int16 v17; // [rsp+30h] [rbp-48h]

  v17 = 0;
  v16 = 0LL;
  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 6u, &v16);
  if ( BytesAtOffset >= 0 )
  {
    v7 = 18;
    LOWORD(v16) = __ROR2__(v16, 8);
    v8 = __ROR2__(WORD1(v16), 8);
    v9 = __ROR2__(WORD2(v16), 8);
    WORD1(v16) = v8;
    if ( v8 )
    {
      if ( 12 * (unsigned int)v8 + 18 < 0x12 )
        return (unsigned int)-1073741675;
      v7 = 12 * v8 + 18;
      BytesAtOffset = 0;
    }
    Memory = BgpFwAllocateMemory(v7);
    if ( Memory )
    {
      v11 = a2 + 6;
      *(_DWORD *)Memory = v16;
      *(_WORD *)(Memory + 4) = v9;
      v12 = 0;
      v13 = v8;
      while ( 1 )
      {
        if ( v12 >= v13 )
        {
          *a3 = Memory;
          return (unsigned int)BytesAtOffset;
        }
        v14 = (_WORD *)(Memory + 12LL * v12);
        BytesAtOffset = FioFwReadBytesAtOffset(a1, v11, 0xCu, v14 + 3);
        if ( BytesAtOffset < 0 )
          break;
        BytesAtOffset = 0;
        ++v12;
        v14[3] = __ROR2__(v14[3], 8);
        v14[4] = __ROR2__(v14[4], 8);
        v14[5] = __ROR2__(v14[5], 8);
        v14[6] = __ROR2__(v14[6], 8);
        v14[7] = __ROR2__(v14[7], 8);
        v14[8] = __ROR2__(v14[8], 8);
        v11 += 12;
      }
      BgpFwFreeMemory(Memory);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)BytesAtOffset;
}
