/*
 * XREFs of MiFillPteWithProto @ 0x1403E6330
 * Callers:
 *     MiResolveSharedZeroFault @ 0x140243D50 (MiResolveSharedZeroFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

unsigned __int64 __fastcall MiFillPteWithProto(__int64 *a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v20; // rdx

  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  if ( a3 == 256 )
  {
    v13 = a2 << 16;
    v5 = v13 | 0x400;
    if ( qword_140E2D940 )
    {
      v14 = v13;
      v15 = v13 | 0x410;
      v16 = qword_140E2D940 | v14 | 0x400;
      if ( (qword_140E2D940 & v5) == 0 )
        v15 = v16;
      v5 = v15;
    }
  }
  else
  {
    v5 = 32 * (a3 & 0x1F | 0xFFFFFFFFF8000020uLL);
    if ( qword_140E2D940 )
    {
      if ( (qword_140E2D940 & v5) != 0 )
        v5 |= 0x10uLL;
      else
        v5 |= qword_140E2D940;
    }
  }
  *a1 = v5;
  v6 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
  {
    v8 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v17 = *(_QWORD *)v6;
      if ( (v8 & 1) != 0 && ((v8 & 0x42) == 0 || (v8 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v20 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v17 = v8 | 0x20;
            v8 = v17 | 0x42;
            if ( (v20 & 0x42) == 0 )
              v8 = v17;
          }
        }
      }
    }
    v9 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000000) != 0 )
      v11 = HIDWORD(*(_QWORD *)v9);
    else
      v11 = *(_QWORD *)(v9 + 16) >> 16;
    v12 = (unsigned int)(v11 + 1);
    if ( (*(_DWORD *)(v9 + 36) & 0x4000000) != 0 )
      *(_QWORD *)v9 = (v12 << 32) ^ ((v12 << 32) ^ *(_QWORD *)v9) & 0xFFFFFC00FFFFFFFFuLL;
    else
      *(_QWORD *)(v9 + 16) = (v12 << 16) ^ ((v12 << 16) ^ *(_QWORD *)(v9 + 16)) & 0xFFFFFFFFFC00FFFFuLL;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
