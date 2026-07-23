/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140B65280
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  _QWORD *PteAddress; // rdx
  unsigned int v6; // ecx
  _QWORD *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rcx

  v3 = a1;
  v4 = 0;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v6 = 0;
  if ( a2 )
  {
    do
    {
      ++v6;
      *PteAddress++ = CLFS_LSN_NULL_EXT;
    }
    while ( v6 < a2 );
    do
    {
      MiFlushSingleTbEntry(v3, -1, 1);
      v3 += 4096LL;
      --a2;
    }
    while ( a2 );
  }
  v7 = (_QWORD *)qword_140E301F8;
  result = Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( dword_140E30200 )
    {
      result = CLFS_LSN_NULL_EXT;
      do
      {
        *v7 = CLFS_LSN_NULL_EXT;
        ++v4;
        ++v7;
      }
      while ( v4 < dword_140E30200 );
    }
  }
  else
  {
    result = CLFS_LSN_NULL_EXT;
    v9 = 32LL;
    do
    {
      *v7++ = CLFS_LSN_NULL_EXT;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
