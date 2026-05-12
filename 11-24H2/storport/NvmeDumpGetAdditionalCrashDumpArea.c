/*
 * XREFs of NvmeDumpGetAdditionalCrashDumpArea @ 0x14019FA80
 * Callers:
 *     NvmeDumpCreateDumpAdapterInfo @ 0x14019F024 (NvmeDumpCreateDumpAdapterInfo.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x140184DF0 (StorAllocateContiguousMemory.c)
 */

__int64 __fastcall NvmeDumpGetAdditionalCrashDumpArea(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ecx
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // r9
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v6 = 0;
  if ( !a1 )
    return 3221225473LL;
  v8 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a2 + 184) )
    goto LABEL_12;
  v9 = *(_QWORD *)(a1 + 1360);
  if ( !v9 )
  {
    if ( *(_DWORD *)(a1 + 1168) == 3 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
        v9 = *(_QWORD *)(a1 + 1392);
      else
        v9 = -1LL;
    }
    else
    {
      v9 = 0xFFFFFFFFLL;
    }
  }
  result = StorAllocateContiguousMemory(
             (__int64 *)(a1 + 1144),
             a3,
             *(_QWORD *)(a1 + 1368),
             v9,
             *(_QWORD *)(a1 + 1376),
             *(_DWORD *)(a1 + 1352),
             0x80000000,
             (PHYSICAL_ADDRESS *)&v10);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v8 = v11;
LABEL_12:
    *(_OWORD *)(a2 + 168) = v10;
    result = v6;
    *(_DWORD *)(a2 + 184) = v8;
  }
  return result;
}
