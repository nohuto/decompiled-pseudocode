/*
 * XREFs of MiFillPteWithProto @ 0x1403E17D0
 * Callers:
 *     MiResolveSharedZeroFault @ 0x14030A4E0 (MiResolveSharedZeroFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

unsigned __int64 __fastcall MiFillPteWithProto(__int64 *a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  if ( a3 == 256 )
  {
    v17 = a2 << 16;
    v5 = v17 | 0x400;
    if ( qword_140E2DCC0 )
    {
      v18 = v17;
      v19 = v17 | 0x410;
      v20 = qword_140E2DCC0 | v18 | 0x400;
      if ( (qword_140E2DCC0 & v5) == 0 )
        v19 = v20;
      v5 = v19;
    }
  }
  else
  {
    v5 = 32 * (a3 & 0x1F | 0xFFFFFFFFF8000020uLL);
    if ( qword_140E2DCC0 )
    {
      if ( (qword_140E2DCC0 & v5) != 0 )
        v5 |= 0x10uLL;
      else
        v5 |= qword_140E2DCC0;
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
      v9 = *(_QWORD *)v6;
      if ( (v8 & 1) != 0 && ((v8 & 0x42) == 0 || (v8 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v16 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
            if ( (v16 & 0x20) != 0 )
              v9 = v8 | 0x20;
            v8 = v9 | 0x42;
            if ( (v16 & 0x42) == 0 )
              v8 = v9;
          }
        }
      }
    }
    v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
    if ( (*(_DWORD *)(v10 + 36) & 0x4000000) != 0 )
      v12 = HIDWORD(*(_QWORD *)v10);
    else
      v12 = *(_QWORD *)(v10 + 16) >> 16;
    v13 = (unsigned int)(v12 + 1);
    if ( (*(_DWORD *)(v10 + 36) & 0x4000000) != 0 )
      *(_QWORD *)v10 = (v13 << 32) ^ ((v13 << 32) ^ *(_QWORD *)v10) & 0xFFFFFC00FFFFFFFFuLL;
    else
      *(_QWORD *)(v10 + 16) = (v13 << 16) ^ ((v13 << 16) ^ *(_QWORD *)(v10 + 16)) & 0xFFFFFFFFFC00FFFFuLL;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
