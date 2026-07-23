/*
 * XREFs of CmFcpPopulateModuleFeatures @ 0x1406675B0
 * Callers:
 *     CmFcpSecondaryMultiPartDumpDataCallback @ 0x1406676C0 (CmFcpSecondaryMultiPartDumpDataCallback.c)
 * Callees:
 *     CmFcpIsValidMemoryRange @ 0x14066754C (CmFcpIsValidMemoryRange.c)
 */

void __fastcall CmFcpPopulateModuleFeatures(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdi
  __int64 v9; // rbx
  _DWORD *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rcx
  bool IsValidMemoryRange; // al
  int v14; // ecx
  int v15; // eax
  int v16; // ecx

  v4 = 0;
  v5 = a1 + 56;
  v9 = a1;
  while ( v5 <= a2 )
  {
    if ( v4 >= a4 )
      break;
    if ( CmFcpIsValidMemoryRange(v9, 0x38uLL) && (v10 = *(_DWORD **)v9) != 0LL )
    {
      v11 = 2LL * v4;
      v12 = *(_QWORD *)v9;
      *(_QWORD *)(a3 + 8 * v11 + 8) = 0LL;
      *(_DWORD *)(a3 + 8 * v11) = *(_DWORD *)(v9 + 24);
      IsValidMemoryRange = CmFcpIsValidMemoryRange(v12, 8uLL);
      v14 = *(_DWORD *)(a3 + 16LL * v4 + 8);
      if ( IsValidMemoryRange )
      {
        v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(*v10 >> 17)) & 2;
        *(_DWORD *)(a3 + 16LL * v4 + 8) = v15;
        v16 = v15 ^ (*v10 ^ v15) & 1;
        *(_DWORD *)(a3 + 16LL * v4 + 8) = v16;
        *(_DWORD *)(a3 + 16LL * v4 + 8) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(*v10 >> 10)) & 0xFC;
        *(_DWORD *)(a3 + 16LL * v4 + 12) = v10[1];
      }
      else
      {
        *(_DWORD *)(a3 + 16LL * v4 + 8) = v14 | 0x100;
      }
      ++v4;
      v9 += 56LL;
      v5 += 56LL;
    }
    else
    {
      v9 += 8LL;
      v5 += 8LL;
    }
  }
}
