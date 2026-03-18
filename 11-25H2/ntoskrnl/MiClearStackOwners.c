/*
 * XREFs of MiClearStackOwners @ 0x14021C960
 * Callers:
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiClearStackOwners(__int64 a1, char a2)
{
  unsigned int v2; // r15d
  int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // ebp
  int v12; // eax

  v2 = 1;
  v3 = -1;
  if ( (a2 & 1) != 0 )
  {
    v4 = (unsigned int)KeKernelLargeStackSize >> 12;
  }
  else if ( (a2 & 8) != 0 )
  {
    v4 = (unsigned int)KeXStateStackSize >> 12;
  }
  else
  {
    v4 = (unsigned __int8)byte_140E35C64;
  }
  v5 = a1 - 8LL * v4;
  v6 = v5 + 8LL * (v4 + 1);
  v7 = (unsigned __int64 *)(v5 + 8);
  if ( (unsigned __int64)v7 < v6 )
  {
    v8 = 0xFFFFDE0000000000uLL;
    do
    {
      v9 = *v7;
      if ( (*v7 & 1) != 0 )
      {
        v10 = 48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
            {
              HvlNotifyLongSpinWait(v11);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        if ( v9 == *v7 )
        {
          v12 = MI_NODE_FROM_PFN(v10);
          if ( v3 == -1 )
          {
            v3 = v12;
          }
          else if ( v3 != v12 )
          {
            v2 = 0;
          }
          *(_QWORD *)v10 &= 0xFFFFF00000000001uLL;
          ++v7;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v8 = 0xFFFFDE0000000000uLL;
      }
      else
      {
        ++v7;
      }
    }
    while ( (unsigned __int64)v7 < v6 );
  }
  return v2;
}
