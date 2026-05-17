/*
 * XREFs of LdrpSetProtection @ 0x1800E42F0
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800E3FFC (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpSetProtection(unsigned __int64 a1, char a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  unsigned int *v6; // rbx
  int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v12[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v11 = 0LL;
  v12[0] = 0LL;
  RtlImageNtHeaderEx(3, a1, 0LL, &v13);
  v4 = v13;
  v5 = 0;
  v6 = (unsigned int *)(*(unsigned __int16 *)(v13 + 20) + v13 + 40);
  while ( v5 < *(unsigned __int16 *)(v4 + 6) )
  {
    v7 = v6[5];
    if ( v7 >= 0 && *v6 )
    {
      if ( a2 )
      {
        v8 = (v7 & 0x20000000) != 0 ? ((v7 & 0x40000000) != 0 ? 32 : 16) : 2;
        v9 = v8;
        LODWORD(v9) = v8 | 0x200;
        if ( (v7 & 0x4000000) == 0 )
          v9 = v8;
      }
      else
      {
        v9 = 4LL;
      }
      v12[0] = a1 + *(v6 - 1);
      v11 = *v6;
      if ( v11 )
      {
        result = ZwProtectVirtualMemory(-1LL, v12, &v11, v9);
        if ( (int)result < 0 )
          return result;
      }
    }
    v6 += 10;
    ++v5;
  }
  return 0LL;
}
