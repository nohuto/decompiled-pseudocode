/*
 * XREFs of IoctlQueryReservedQueueEntries @ 0x140020F94
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall IoctlQueryReservedQueueEntries(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int16 *v7; // r8
  __int64 SrbDataBuffer; // r14
  unsigned int *v9; // rsi
  unsigned __int64 v10; // rcx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // r8
  unsigned __int16 i; // r10
  __int64 v18; // r9
  _WORD *v19; // r15
  unsigned __int16 v20; // r11
  __int16 v21; // cx
  unsigned __int64 v22; // rdx
  unsigned int *v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = 0LL;
  v4 = 16;
  if ( *(_WORD *)(a1 + 982) )
  {
    v5 = *(_QWORD *)(a1 + 968);
    v6 = *(unsigned __int16 *)(a1 + 982);
    v7 = (unsigned __int16 *)(v5 + 34);
    do
    {
      if ( *(v7 - 5) )
        v4 += (*v7 << 6) + 48;
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v23);
  v9 = (unsigned int *)(SrbDataBuffer + 28);
  if ( *(_WORD *)(a1 + 954) )
  {
    v10 = *v23;
    if ( v10 >= (unsigned __int64)v4 + 28 )
    {
      v13 = v10 - 28;
      if ( (((_BYTE)v10 - 28) & 3) != 0 )
      {
        if ( (_DWORD)v10 != 28 )
          memset(v9, 0, v13);
      }
      else
      {
        v14 = v13 >> 2;
        if ( v14 )
          memset(v9, 0, 4LL * v14);
      }
      v15 = *(_WORD *)(a1 + 982);
      v16 = SrbDataBuffer + 44;
      for ( i = 0; i < v15; ++i )
      {
        v18 = *(_QWORD *)(a1 + 968) + 48LL * i;
        if ( *(_WORD *)(v18 + 24) )
        {
          v19 = (_WORD *)(v16 + 34);
          *(_QWORD *)v16 = *(_QWORD *)v18;
          v20 = 0;
          *(_QWORD *)(v16 + 16) = *(_QWORD *)(v18 + 16);
          *(_WORD *)(v16 + 24) = *(_WORD *)(v18 + 24);
          *(_WORD *)(v16 + 26) = *(_WORD *)(v18 + 26);
          v21 = *(_WORD *)(v16 + 32) ^ (*(_WORD *)(v18 + 32) ^ *(_WORD *)(v16 + 32)) & 1;
          *(_WORD *)(v16 + 32) = v21;
          *(_WORD *)(v16 + 32) = v21 ^ (*(_WORD *)(v18 + 32) ^ v21) & 2;
          *(_DWORD *)(v16 + 28) = *(_DWORD *)(v18 + 28);
          v16 += 48LL;
          *v19 = 0;
          v15 = *(_WORD *)(a1 + 982);
          if ( v15 )
          {
            do
            {
              v22 = *(_QWORD *)(a1 + 960) + ((unsigned __int64)v20 << 6);
              if ( *(_WORD *)(v22 + 46) == *(_WORD *)(v18 + 24) )
              {
                *(_QWORD *)v16 = *(_QWORD *)v22;
                *(_QWORD *)(v16 + 16) = *(_QWORD *)(v22 + 16);
                *(_WORD *)(v16 + 42) = *(_WORD *)(v22 + 42);
                *(_WORD *)(v16 + 44) = *(_WORD *)(v22 + 44);
                *(_WORD *)(v16 + 48) ^= (*(_WORD *)(v22 + 48) ^ *(_WORD *)(v16 + 48)) & 1;
                *(_WORD *)(v16 + 46) = *(_WORD *)(v22 + 46);
                *(_WORD *)(v16 + 50) = *(_WORD *)(v22 + 50);
                ++*v19;
                v16 += 64LL;
              }
              v15 = *(_WORD *)(a1 + 982);
              ++v20;
            }
            while ( v20 < v15 );
          }
        }
      }
      v12 = v4;
      *(_WORD *)(SrbDataBuffer + 36) = *(_WORD *)(a1 + 954);
    }
    else
    {
      if ( (unsigned int)v10 < 0x24 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
      v12 = 8;
    }
    *(_BYTE *)(a2 + 3) = 1;
    *(_DWORD *)(SrbDataBuffer + 32) = v4;
    *v9 = v4;
    *(_DWORD *)(SrbDataBuffer + 24) = v12;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 1;
  }
  return 0LL;
}
