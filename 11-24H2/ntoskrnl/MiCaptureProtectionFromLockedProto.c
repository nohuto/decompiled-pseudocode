/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x14044D614
 * Callers:
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rbx

  while ( 1 )
  {
    v2 = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    v3 = (v2 >> 12) & 0xFFFFFFFFFFLL;
    if ( v3 <= qword_140E2DD20 )
    {
      v4 = 48 * v3;
      if ( ((*(_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v5 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 - 0x220000000000LL + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v5 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v5);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v4 - 0x220000000000LL + 24) < 0 );
        }
        if ( v2 == *a1 )
        {
          v6 = *(_QWORD *)(v4 - 0x220000000000LL + 16) >> 5;
          _InterlockedAnd64((volatile signed __int64 *)(v4 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return v6 & 0x1F;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v4 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  v6 = v2 >> 5;
  return v6 & 0x1F;
}
