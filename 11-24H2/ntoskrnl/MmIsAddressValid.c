/*
 * XREFs of MmIsAddressValid @ 0x1403FF300
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1405084B8 (KiMarkBugCheckRegions.c)
 *     sub_14051AA08 @ 0x14051AA08 (sub_14051AA08.c)
 *     PopMarkComponentsBootPhase @ 0x140B5D694 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-30h]
  unsigned __int64 v11; // [rsp+8h] [rbp-28h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  if ( (__int64)VirtualAddress >> 47 != -1 && (__int64)VirtualAddress >> 47 != 0 )
    return 0;
  v11 = (((unsigned __int64)VirtualAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v10 + v2--);
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v5 = *(_QWORD *)v3;
      if ( (v4 & 1) == 0 )
        return 0;
      if ( ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v9 & 0x20) != 0 )
              LOBYTE(v5) = v4 | 0x20;
            LOBYTE(v4) = v5 | 0x42;
            if ( (v9 & 0x42) == 0 )
              LOBYTE(v4) = v5;
          }
        }
      }
    }
    if ( (v4 & 1) == 0 )
      break;
    if ( (v4 & 0x80u) != 0LL )
      return (unsigned __int64)VirtualAddress < 0xFFFFF68000000000uLL
          || (unsigned __int64)VirtualAddress > 0xFFFFF6FFFFFFFFFFuLL;
    if ( !v2 )
      return 1;
  }
  return 0;
}
