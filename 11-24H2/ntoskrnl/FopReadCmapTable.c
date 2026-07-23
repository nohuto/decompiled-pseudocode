/*
 * XREFs of FopReadCmapTable @ 0x140C724A4
 * Callers:
 *     FopReadMappingTable @ 0x140C725F4 (FopReadMappingTable.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall FopReadCmapTable(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  int BytesAtOffset; // ebx
  unsigned __int16 v8; // si
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  _DWORD *Memory; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  _DWORD *v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+28h] [rbp-50h]

  v16 = 0LL;
  v17 = 0;
  v6 = 0;
  BytesAtOffset = FioFwReadBytesAtOffset(a1, a2, 4u, &v16);
  if ( BytesAtOffset >= 0 )
  {
    v8 = __ROR2__(WORD1(v16), 8);
    LOWORD(v16) = __ROR2__(v16, 8);
    WORD1(v16) = v8;
    if ( (_WORD)v16 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v9 = 12LL;
      if ( v8 )
      {
        v10 = 8 * v8 + 4;
        if ( v10 < 0xC )
          return (unsigned int)-1073741675;
        v9 = v10;
        BytesAtOffset = 0;
      }
      Memory = (_DWORD *)BgpFwAllocateMemory(v9);
      if ( Memory )
      {
        v12 = a2 + 4;
        *Memory = v16;
        v13 = v8;
        while ( v6 < v13 )
        {
          v14 = &Memory[2 * v6];
          BytesAtOffset = FioFwReadBytesAtOffset(a1, v12, 8u, v14 + 1);
          if ( BytesAtOffset < 0 )
            goto LABEL_15;
          BytesAtOffset = 0;
          ++v6;
          *((_WORD *)v14 + 2) = __ROR2__(*((_WORD *)v14 + 2), 8);
          *((_WORD *)v14 + 3) = __ROR2__(*((_WORD *)v14 + 3), 8);
          v12 += 8;
          v14[2] = _byteswap_ulong(v14[2]);
        }
        *a3 = Memory;
        if ( BytesAtOffset >= 0 )
          return (unsigned int)BytesAtOffset;
LABEL_15:
        BgpFwFreeMemory((__int64)Memory);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)BytesAtOffset;
}
