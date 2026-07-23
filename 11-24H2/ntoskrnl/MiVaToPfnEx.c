/*
 * XREFs of MiVaToPfnEx @ 0x140293EF0
 * Callers:
 *     MiGetPhysicalAddress @ 0x140292DD0 (MiGetPhysicalAddress.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MiCheckKernelShadow @ 0x1402EE7D4 (MiCheckKernelShadow.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaToPfnEx(unsigned __int64 a1)
{
  int v2; // r11d
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-30h]
  unsigned __int64 v17; // [rsp+8h] [rbp-28h]
  unsigned __int64 v18; // [rsp+10h] [rbp-20h]
  unsigned __int64 v19; // [rsp+18h] [rbp-18h]
  __int64 v20; // [rsp+20h] [rbp-10h]

  v17 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4;
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 4LL;
  do
  {
    v4 = *(&v16 + v3--);
    --v2;
    v5 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v6 = *(_QWORD *)v4;
      if ( (v5 & 1) != 0 && ((v5 & 0x42) == 0 || (v5 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v15 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v6 = v5 | 0x20;
            v5 = v6 | 0x42;
            if ( (v15 & 0x42) == 0 )
              v5 = v6;
          }
        }
      }
    }
  }
  while ( v3 && (v5 & 0x80u) == 0LL );
  v7 = (v5 >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 )
  {
    v8 = 1LL;
    v9 = a1 >> 12;
    do
    {
      v10 = v9;
      v9 >>= 9;
      v11 = v8 * (v10 & 0x1FF);
      v8 <<= 9;
      v7 += v11;
      --v2;
    }
    while ( v2 );
  }
  return v7;
}
