/*
 * XREFs of MiVaToPfnEx @ 0x1402AB010
 * Callers:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     MiGetPhysicalAddress @ 0x1402ABF00 (MiGetPhysicalAddress.c)
 *     MiCheckKernelShadow @ 0x14040FAF8 (MiCheckKernelShadow.c)
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaToPfnEx(unsigned __int64 a1)
{
  int v2; // r11d
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v12; // rax
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
      v12 = *(_QWORD *)v4;
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
              v12 = v5 | 0x20;
            v5 = v12 | 0x42;
            if ( (v15 & 0x42) == 0 )
              v5 = v12;
          }
        }
      }
    }
  }
  while ( v3 && (v5 & 0x80u) == 0LL );
  v6 = (v5 >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 )
  {
    v7 = 1LL;
    v8 = a1 >> 12;
    do
    {
      v9 = v8;
      v8 >>= 9;
      v10 = v7 * (v9 & 0x1FF);
      v7 <<= 9;
      v6 += v10;
      --v2;
    }
    while ( v2 );
  }
  return v6;
}
