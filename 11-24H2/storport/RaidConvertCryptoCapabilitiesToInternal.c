/*
 * XREFs of RaidConvertCryptoCapabilitiesToInternal @ 0x14006A5E0
 * Callers:
 *     RaidInitializeCryptoEngine @ 0x1400457B4 (RaidInitializeCryptoEngine.c)
 *     AddNvmeIceInterfaceToList @ 0x140069104 (AddNvmeIceInterfaceToList.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidConvertCryptoCapabilitiesToInternal(void **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  void *v5; // rcx
  unsigned int v6; // ebx
  _WORD *Pool; // r8
  ULONG_PTR v11; // r9
  unsigned int v12; // edx
  char *v13; // rcx
  int v14; // eax
  int v15; // eax
  char v16; // al

  v3 = *(unsigned __int16 *)(a2 + 10);
  v5 = *a1;
  v6 = 0;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x72436152u);
    *a1 = 0LL;
  }
  Pool = (_WORD *)RaidAllocatePool(64LL, 16 * (v3 + 1), 1917018450LL, 0LL);
  if ( !Pool )
    return 3238002691LL;
  *Pool = *(_WORD *)(a2 + 8);
  v11 = a2 + 12;
  Pool[1] = v3;
  v12 = 0;
  if ( v3 )
  {
    v13 = (char *)(Pool + 12);
    do
    {
      if ( !*(_DWORD *)v11 )
        KeBugCheckEx(0x176u, 3uLL, 1uLL, v11, 1uLL);
      if ( *(_DWORD *)(v11 + 4) < (*(_DWORD *)v11 < 2u ? 20 : 25) )
        KeBugCheckEx(0x176u, 3uLL, 1uLL, v11, 2uLL);
      *((_WORD *)v13 - 4) = *(_WORD *)(v11 + 8);
      *((_WORD *)v13 - 3) = *(_WORD *)(v11 + 10);
      *((_DWORD *)v13 - 1) = *(_DWORD *)(v11 + 12);
      if ( a3 && *(_DWORD *)(v11 + 12) == 1 )
      {
        v14 = *(_DWORD *)(v11 + 16);
        if ( v14 == 4 )
        {
          v15 = 3;
        }
        else
        {
          if ( v14 != 3 )
            goto LABEL_30;
          v15 = 1;
        }
      }
      else
      {
        v15 = *(_DWORD *)(v11 + 16);
      }
      *(_DWORD *)v13 = v15;
      if ( *(_DWORD *)v11 < 2u )
      {
        *((_WORD *)v13 + 2) = 64;
      }
      else
      {
        *((_WORD *)v13 + 2) = *(_WORD *)(v11 + 20);
        v13[6] = *(_BYTE *)(v11 + 24);
      }
      ++v12;
      v11 += *(unsigned int *)(v11 + 4);
      v13 += 16;
    }
    while ( v12 < v3 );
  }
  if ( !a3 )
  {
    *((_BYTE *)Pool + 4) |= 1u;
    goto LABEL_32;
  }
  *((_BYTE *)Pool + 4) = *(_BYTE *)(a3 + 3);
  v16 = *(_BYTE *)(a3 + 1);
  if ( (v16 & 1) != 0 )
  {
    *((_BYTE *)Pool + 5) = 3;
LABEL_29:
    *((_DWORD *)Pool + 2) = *(unsigned __int16 *)(a3 + 4) << 10;
LABEL_32:
    *a1 = Pool;
    return v6;
  }
  if ( (v16 & 2) != 0 )
  {
    *((_BYTE *)Pool + 5) = 7;
    goto LABEL_29;
  }
  if ( (v16 & 4) != 0 )
  {
    *((_BYTE *)Pool + 5) = 15;
    goto LABEL_29;
  }
LABEL_30:
  v6 = -1056964602;
  ExFreePoolWithTag(Pool, 0x72436152u);
  return v6;
}
