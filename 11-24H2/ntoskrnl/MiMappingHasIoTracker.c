/*
 * XREFs of MiMappingHasIoTracker @ 0x1404066B0
 * Callers:
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  int v2; // r11d
  __int64 v3; // rbx
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+0h] [rbp-30h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4;
  v11[1] = v1;
  v12 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 4LL;
  do
  {
    v4 = v11[v3--];
    --v2;
    v5 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v6 = *(_QWORD *)v4;
      if ( (v5 & 1) == 0 )
        return (*(_QWORD *)v1 >> 9) & 1LL;
      if ( ((v5 & 0x42) == 0 || (v5 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              LOBYTE(v6) = v5 | 0x20;
            LOBYTE(v5) = v6 | 0x42;
            if ( (v10 & 0x42) == 0 )
              LOBYTE(v5) = v6;
          }
        }
      }
    }
    if ( (v5 & 1) == 0 )
      break;
    if ( (v5 & 0x80u) != 0LL )
    {
      for ( ; v2; --v2 )
        v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      return (*(_QWORD *)v1 >> 9) & 1LL;
    }
  }
  while ( v3 != 1 );
  return (*(_QWORD *)v1 >> 9) & 1LL;
}
