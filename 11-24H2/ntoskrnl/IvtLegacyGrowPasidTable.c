/*
 * XREFs of IvtLegacyGrowPasidTable @ 0x14056DDB0
 * Callers:
 *     <none>
 * Callees:
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056CC30 (IvtLegacyAllocateScalableModePasidTables.c)
 *     IvtLegacyExtendScalableModePasidTables @ 0x14056D45C (IvtLegacyExtendScalableModePasidTables.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall IvtLegacyGrowPasidTable(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  int v6; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // r15d
  int v13; // ebp
  __int64 v14; // rax
  void **v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v19[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a3;
  if ( a4 >= 0x100000 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a2 + 64);
  v11 = 0LL;
  v18 = 0LL;
  v19[0] = v10;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 36);
    v13 = IvtLegacyExtendScalableModePasidTables(a1, v10, a4);
    if ( v13 >= 0 )
    {
LABEL_10:
      v14 = *(_QWORD *)(a2 + 64);
      if ( a5 != *(_DWORD *)(v14 + 48) )
        *(_DWORD *)(v14 + 48) = 1;
      if ( v11 && v10 && v11 != v10 )
      {
        if ( ((*(_DWORD *)(v10 + 32) >> 6) & 0x3FFF) != 0 )
        {
          v15 = (void **)(v11 + 64);
          v16 = v10 - v11;
          v17 = (*(_DWORD *)(v10 + 32) >> 6) & 0x3FFF;
          do
          {
            memmove(*v15, *(void **)((char *)v15 + v16), 0x1000uLL);
            ++v15;
            --v17;
          }
          while ( v17 );
        }
        IvtFreeScalableModePasidTables(a1, v10);
      }
      return (unsigned int)v13;
    }
    v6 = a3;
  }
  else
  {
    v12 = 0;
    v13 = -1073741823;
  }
  if ( a4 >= v12 )
  {
    v13 = IvtLegacyAllocateScalableModePasidTables(a1, a2, v6, a4, a4, a5, &v18, v19);
    if ( v13 >= 0 )
    {
      v11 = v18;
      v10 = v19[0];
      goto LABEL_10;
    }
  }
  return (unsigned int)v13;
}
