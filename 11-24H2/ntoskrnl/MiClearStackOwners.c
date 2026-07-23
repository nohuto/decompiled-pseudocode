/*
 * XREFs of MiClearStackOwners @ 0x1402511A0
 * Callers:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiClearStackOwners(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  int v5; // edi
  unsigned int v6; // edx
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // ebp
  int v15; // eax

  v4 = 1;
  v5 = -1;
  if ( (a2 & 1) != 0 )
  {
    v6 = (unsigned int)KeKernelLargeStackSize >> 12;
  }
  else if ( (a2 & 8) != 0 )
  {
    v6 = (unsigned int)KeXStateStackSize >> 12;
  }
  else
  {
    v6 = (unsigned __int8)byte_140E35FE4;
  }
  v7 = a1 - 8LL * v6;
  v8 = v7 + 8LL * (v6 + 1);
  v9 = (unsigned __int64 *)(v7 + 8);
  if ( (unsigned __int64)v9 < v8 )
  {
    v10 = 0xFFFFFFFFFFLL;
    v11 = 0xFFFFDE0000000000uLL;
    do
    {
      v12 = *v9;
      if ( (*v9 & 1) != 0 )
      {
        v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, v10, a3, a4) )
            {
              HvlNotifyLongSpinWait(v14);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        if ( v12 == *v9 )
        {
          v15 = MI_NODE_FROM_PFN(v13, v10, a3, a4);
          if ( v5 == -1 )
          {
            v5 = v15;
          }
          else if ( v5 != v15 )
          {
            v4 = 0;
          }
          *(_QWORD *)v13 &= 0xFFFFF00000000001uLL;
          ++v9;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v11 = 0xFFFFDE0000000000uLL;
        v10 = 0xFFFFFFFFFFLL;
      }
      else
      {
        ++v9;
      }
    }
    while ( (unsigned __int64)v9 < v8 );
  }
  return v4;
}
