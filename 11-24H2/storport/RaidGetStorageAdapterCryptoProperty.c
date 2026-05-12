/*
 * XREFs of RaidGetStorageAdapterCryptoProperty @ 0x1400652F0
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401BD85C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidConvertCryptoCapabilitiesToExternal @ 0x14006A4D0 (RaidConvertCryptoCapabilitiesToExternal.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidGetStorageAdapterCryptoProperty(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD *v9; // rdi
  __int64 v10; // rsi
  size_t v11; // r12
  int v12; // r14d
  int v13; // eax
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v22; // r8

  v8 = 0;
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v22 = *(_QWORD *)(a1 + 5616);
    *a3 = 0LL;
    if ( v22 && a4 )
      return RaidConvertCryptoCapabilitiesToExternal(a2, a3, v22, 1LL);
    else
      return 3221225488LL;
  }
  else
  {
    v9 = *(_DWORD **)(a2 + 24);
    v10 = *(_QWORD *)(a1 + 5624);
    v11 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( a4 || !v10 )
    {
      return (unsigned int)-1073741808;
    }
    else
    {
      v12 = *(unsigned __int16 *)(v10 + 10);
      *a3 = 0LL;
      v13 = 3 * v12;
      v14 = 32 * v12 + 24;
      v15 = 8 * v13 + 16;
      if ( (unsigned int)v11 >= v15 )
      {
        memset_0(v9, 0, v11);
        if ( (unsigned int)v11 >= v14 )
        {
          v9[1] = v14;
          *v9 = 2;
          v9[2] = *(unsigned __int16 *)(v10 + 8);
          v9[3] = *(unsigned __int16 *)(v10 + 10);
          v9[4] = ((*(_BYTE *)(a1 + 112) & 0x10) != 0) + 1;
          if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
            *((_BYTE *)v9 + 20) = *(_BYTE *)(*(_QWORD *)(a1 + 6192) + 96LL);
          v15 = v14;
        }
        else
        {
          v9[1] = v15;
          *v9 = 1;
          v9[2] = *(unsigned __int16 *)(v10 + 8);
          v9[3] = *(unsigned __int16 *)(v10 + 10);
        }
        v16 = 0;
        for ( *a3 = v15; v16 < *(unsigned __int16 *)(v10 + 10); ++v16 )
        {
          v17 = 28LL * v16;
          if ( (unsigned int)v11 >= v14 )
          {
            v19 = 8LL * v16;
            v9[v19 + 6] = 2;
            v9[v19 + 7] = 32;
            v9[v19 + 8] = *(unsigned __int16 *)(v17 + v10 + 20);
            v9[v19 + 9] = *(_DWORD *)(v17 + v10 + 24);
            v9[v19 + 10] = *(_DWORD *)(v17 + v10 + 28);
            v9[v19 + 11] = *(unsigned __int16 *)(v17 + v10 + 22);
            if ( *(_DWORD *)(v17 + v10 + 12) < 2u )
            {
              LOWORD(v9[v19 + 12]) = 64;
              LOBYTE(v9[v19 + 13]) = 0;
            }
            else
            {
              if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
                v20 = *(_WORD *)(v17 + v10 + 32);
              else
                v20 = 64;
              LOWORD(v9[v19 + 12]) = v20;
              LOBYTE(v9[v19 + 13]) = *(_BYTE *)(v17 + v10 + 36);
            }
          }
          else
          {
            v18 = 3LL * v16;
            v9[2 * v18 + 4] = 1;
            v9[2 * v18 + 5] = 24;
            v9[2 * v18 + 6] = *(unsigned __int16 *)(v17 + v10 + 20);
            v9[2 * v18 + 7] = *(_DWORD *)(v17 + v10 + 24);
            v9[2 * v18 + 8] = *(_DWORD *)(v17 + v10 + 28);
            v9[2 * v18 + 9] = *(unsigned __int16 *)(v17 + v10 + 22);
          }
        }
      }
      else if ( (unsigned int)v11 < 8 )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        *a3 = 8LL;
        *v9 = 2;
        v9[1] = v14;
      }
    }
    return v8;
  }
}
