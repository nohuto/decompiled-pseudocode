/*
 * XREFs of CcNotifyWriteBehindHelper @ 0x140577900
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 */

char __fastcall CcNotifyWriteBehindHelper(__int64 a1, __int64 a2, char a3)
{
  if ( a2 )
    CcNotifyWriteBehindVolume(a2, a3);
  else
    CcNotifyWriteBehindInternal(a1, a3);
  return 1;
}
