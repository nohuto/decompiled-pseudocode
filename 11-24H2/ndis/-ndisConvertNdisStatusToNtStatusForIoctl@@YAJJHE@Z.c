/*
 * XREFs of ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x14002BC20
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x14002C6B0 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisConvertNdisStatusToNtStatusForIoctl(unsigned int a1, int a2, char a3)
{
  __int64 result; // rax

  if ( !a2 )
    return a1;
  if ( a2 == -1073676268 )
    return 2147483653LL;
  result = 3221225659LL;
  if ( a2 != -1073741637 )
    return 3221225473LL;
  if ( a3 )
    return 0LL;
  return result;
}
