/*
 * XREFs of MiAllocateAccessLog @ 0x1404814C0
 * Callers:
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetVmAccessLoggingPartition @ 0x140351780 (MiGetVmAccessLoggingPartition.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  ULONG *VmAccessLoggingPartition; // rbp
  __int64 v3; // rdx
  ULONG_PTR v4; // rbx
  void *v5; // rdi
  _QWORD *v6; // rsi
  __int64 Pool; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *result; // rax
  unsigned __int64 *v12; // rdx

  VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(a1);
  if ( !(unsigned int)MiSufficientAvailablePages((__int64)VmAccessLoggingPartition, 0x420uLL)
    || *((_QWORD *)VmAccessLoggingPartition + 2344) < v3
    || (v4 = 4096LL, (unsigned __int64)(*(_QWORD *)&MiState - qword_140E2CB88) < 0x800) )
  {
    v4 = 512LL;
  }
  v5 = &unk_140E38880;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v5 = (void *)(a1 + 192);
  v6 = (_QWORD *)*((_QWORD *)v5 + 5);
  if ( v6 && (v4 == 512 || *v6 && *(_QWORD *)*v6) )
  {
    MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, *((unsigned __int64 **)v5 + 5));
    v6 = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
  }
  while ( 1 )
  {
    Pool = MiAllocatePool(0x40uLL, v4, 1665232205);
    v8 = (_QWORD *)Pool;
    if ( Pool )
      break;
    v12 = (unsigned __int64 *)*((_QWORD *)v5 + 5);
    if ( v12 )
    {
      MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v12);
      v6 = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
    }
    v4 >>= 1;
    if ( v4 < 0x200 )
      return 0LL;
  }
  *((_QWORD *)v5 + 5) = Pool;
  *(_DWORD *)(Pool + 8) = 0;
  *(_QWORD *)(Pool + 32) = Pool + 64;
  v9 = (_QWORD *)(Pool + v4 - 8);
  *v9 = 0LL;
  v8[6] = v9;
  v8[5] = v9 - 1;
  *v8 = 0LL;
  v10 = a1 - 1024;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    v10 = 0LL;
  v8[7] = v10;
  v8[2] = MEMORY[0xFFFFF78000000320];
  result = v8;
  *v8 = v6;
  return result;
}
