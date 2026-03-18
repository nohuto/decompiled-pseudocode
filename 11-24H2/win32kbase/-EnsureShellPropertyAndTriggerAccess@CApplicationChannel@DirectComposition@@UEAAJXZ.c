/*
 * XREFs of ?EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ @ 0x140104E40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140076824 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::EnsureShellPropertyAndTriggerAccess(
        PERESOURCE **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ecx

  v5 = 0;
  if ( (*((_BYTE *)this + 265) & 8) == 0 )
  {
    v5 = DirectComposition::CConnection::AcquireShellResourceAccess(this[5], a2, a3, a4);
    if ( v5 >= 0 )
      *((_BYTE *)this + 265) |= 8u;
  }
  return (unsigned int)v5;
}
