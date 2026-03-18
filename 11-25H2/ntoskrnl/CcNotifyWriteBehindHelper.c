/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x140577170
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403A7B2C (CcNotifyWriteBehindVolume.c)
 */

char __fastcall CcNotifyWriteBehindHelper(__int64 a1, __int64 a2, char a3)
{
  if ( a2 )
    CcNotifyWriteBehindVolume(a2, a3);
  else
    CcNotifyWriteBehindInternal(a1, a3);
  return 1;
}
