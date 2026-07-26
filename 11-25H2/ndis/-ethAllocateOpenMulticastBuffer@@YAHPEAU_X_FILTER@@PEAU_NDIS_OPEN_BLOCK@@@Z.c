/*
 * XREFs of ?ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140081140
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ethAllocateOpenMulticastBuffer(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  __int64 MaxMulticastAddresses; // rax
  _ETH_MULTICAST_WRAPPER *Pool2; // rax
  _ETH_MULTICAST_WRAPPER *v5; // rax

  if ( a1->Miniport->MediaType )
    return 0LL;
  MaxMulticastAddresses = a1->MaxMulticastAddresses;
  a2->MaxMulticastAddresses = MaxMulticastAddresses;
  if ( !(_DWORD)MaxMulticastAddresses )
    return 0LL;
  a2->OldNumAddresses = 0;
  a2->NumAddresses = 0;
  Pool2 = (_ETH_MULTICAST_WRAPPER *)ExAllocatePool2(66LL, 12 * MaxMulticastAddresses, 1634092110);
  a2->MCastAddressBuf = Pool2;
  if ( Pool2 )
  {
    v5 = (_ETH_MULTICAST_WRAPPER *)ExAllocatePool2(66LL, 12LL * a2->MaxMulticastAddresses, 1634092110);
    a2->OldMCastAddressBuf = v5;
    if ( v5 )
      return 0LL;
    ExFreePoolWithTag(a2->MCastAddressBuf, 0);
    a2->MCastAddressBuf = 0LL;
  }
  return 3221225626LL;
}
