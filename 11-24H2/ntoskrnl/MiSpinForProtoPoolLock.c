/*
 * XREFs of MiSpinForProtoPoolLock @ 0x14041F210
 * Callers:
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x1403354A0 (MiLockOwnedProtoPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiSpinForProtoPoolLock(__int64 a1)
{
  int v3; // esi
  __int64 result; // rax
  unsigned int v5; // ebx

  _RDI = (_DWORD *)(a1 + 16);
  _EBP = 0;
  v3 = KeFeatureBits2 & 0x800000;
  if ( (KeFeatureBits2 & 0x800000) != 0 )
    goto LABEL_2;
  while ( 1 )
  {
LABEL_3:
    result = (unsigned int)*_RDI;
    if ( (_DWORD)result )
      return result;
    if ( v3 )
      break;
    v5 = 0;
    while ( !*_RDI )
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
  }
  __asm { umwait  ebp }
  result = (unsigned int)*_RDI;
  if ( !(_DWORD)result )
  {
LABEL_2:
    __asm { umonitor rdi }
    goto LABEL_3;
  }
  return result;
}
