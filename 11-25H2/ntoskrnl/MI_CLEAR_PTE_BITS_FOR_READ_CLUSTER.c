/*
 * XREFs of MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER @ 0x14037C8A0
 * Callers:
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 * Callees:
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 */

char __fastcall MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r9
  _KPROCESS *v3; // rax
  __int64 v4; // r8
  unsigned __int64 KernelWaitTime; // rcx

  v1 = *a1;
  v2 = (unsigned __int64)a1;
  LOBYTE(v3) = 0;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(v3) = -8;
    if ( (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL && (v1 & 1) != 0 )
    {
      LOBYTE(v3) = (v1 & 0x20) != 0;
      if ( (((v1 & 0x42) != 0) & (unsigned __int8)v3) == 0 )
      {
        v3 = MiPteHasShadow();
        if ( v3 )
        {
          KernelWaitTime = v3[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v3 = *(_KPROCESS **)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
            if ( ((unsigned __int8)v3 & 0x20) != 0 )
              v4 |= 0x20uLL;
            v1 = v4 | 0x42;
            if ( ((unsigned __int8)v3 & 0x42) == 0 )
              v1 = v4;
          }
        }
      }
    }
  }
  *(_QWORD *)v2 = v1 & 0xFFFFFFFFFFFFFFFDuLL;
  *(_QWORD *)v2 &= 0xFFFFFFFFFC00FF1FuLL;
  return (char)v3;
}
