/*
 * XREFs of MiGetPhysicalAddress @ 0x140292DD0
 * Callers:
 *     MiDbgCopyPrivilegedData @ 0x14067FE28 (MiDbgCopyPrivilegedData.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiQueuePinDriverAddressLog @ 0x140293B70 (MiQueuePinDriverAddressLog.c)
 *     MiVaToPfnEx @ 0x140293EF0 (MiVaToPfnEx.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v4; // edi
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  bool v19; // zf
  volatile signed __int64 *v20; // r8
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+20h] [rbp-38h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]
  unsigned __int64 v26; // [rsp+30h] [rbp-28h]
  __int64 v27; // [rsp+38h] [rbp-20h]

  v4 = 0;
  *a3 = 0;
  v24 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MI_IS_PHYSICAL_ADDRESS(a1);
  v8 = v7;
  if ( v7 )
  {
    v18 = MiVaToPfnEx(a1);
    v19 = (MI_READ_PTE_LOCK_FREE(*(&v24 + v8)) & 0x800) == 0;
  }
  else
  {
    v9 = 4LL;
    do
    {
      v10 = *(&v23 + v9--);
      v11 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v12 = *(_QWORD *)v10;
        if ( (v11 & 1) == 0 )
          return 0LL;
        if ( ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v17 = *(_QWORD *)(KernelWaitTime + 8 * ((v10 >> 3) & 0x1FF));
              if ( (v17 & 0x20) != 0 )
                LOBYTE(v12) = v11 | 0x20;
              LOBYTE(v11) = v12 | 0x42;
              if ( (v17 & 0x42) == 0 )
                LOBYTE(v11) = v12;
            }
          }
        }
      }
      if ( (v11 & 1) == 0 )
        return 0LL;
    }
    while ( v9 != 1 );
    v13 = *(_QWORD *)v24;
    if ( a1 >= 0xFFFF800000000000uLL )
    {
      v4 = byte_140E38AE8[((a1 >> 39) & 0x1FF) - 256];
      if ( v4 == 11 )
        MiQueuePinDriverAddressLog(a1, *(_QWORD *)v24, 0LL);
    }
    if ( (v13 & 1) == 0 )
      return 0LL;
    if ( v4 == 4 )
    {
      v20 = (volatile signed __int64 *)v24;
      v21 = *(_QWORD *)v24;
      if ( (*(_QWORD *)v24 & 0x200LL) == 0 )
      {
        do
        {
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v22 = v21;
          v21 = _InterlockedCompareExchange64(v20, v21 | 0x220, v21);
        }
        while ( v22 != v21 && (v21 & 0x200) == 0 );
      }
      v13 = *(_QWORD *)v24;
    }
    v18 = (v13 >> 12) & 0xFFFFFFFFFFLL;
    v19 = (v13 & 0x800) == 0;
  }
  if ( !v19 )
    *a3 = 1;
  result = 1LL;
  *a2 = __PAIR64__(v18 >> 20, ((_DWORD)v18 << 12) + (unsigned int)(a1 & 0xFFF));
  return result;
}
