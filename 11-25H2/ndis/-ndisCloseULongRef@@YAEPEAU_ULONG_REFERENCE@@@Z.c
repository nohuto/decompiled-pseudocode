/*
 * XREFs of ?ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z @ 0x14004EBE0
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x14004EA00 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098510 (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCloseULongRef(PKSPIN_LOCK SpinLock)
{
  unsigned __int8 v2; // di
  KIRQL v3; // al

  v2 = 1;
  v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( *((_BYTE *)SpinLock + 12) )
    v2 = 0;
  else
    *((_BYTE *)SpinLock + 12) = 1;
  KeReleaseSpinLock(SpinLock, v3);
  return v2;
}
