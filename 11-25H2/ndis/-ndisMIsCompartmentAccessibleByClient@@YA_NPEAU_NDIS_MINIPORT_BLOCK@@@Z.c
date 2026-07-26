/*
 * XREFs of ?ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004A7A0
 * Callers:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004A030 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1400107F0 (NdisDereferenceWithTag.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14004A950 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

bool __fastcall ndisMIsCompartmentAccessibleByClient(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // si
  _NDIS_IF_BLOCK *IfBlock; // rbx
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  bool v6; // bl
  KIRQL v7; // al
  _NDIS_IF_BLOCK *v8; // rdi
  KIRQL v9; // si
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v15);
  v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v3 = v2;
  if ( !a1->IfBlockAvailable )
  {
    KeReleaseSpinLock(&SpinLock, v2);
    return 0;
  }
  IfBlock = a1->IfBlock;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker, 0x16u);
  ++IfBlock->MiniportLinkReference;
  KeReleaseSpinLock(&SpinLock, v3);
  if ( !IfBlock )
    return 0;
  Compartment = IfBlock->Compartment;
  if ( DWORD1(v15) == *((_DWORD *)Compartment + 4) )
  {
    v6 = 1;
  }
  else
  {
    v14 = *((_QWORD *)&v15 + 1) - *(_QWORD *)((char *)Compartment + 1684);
    if ( *((_QWORD *)&v15 + 1) == *(_QWORD *)((char *)Compartment + 1684) )
      v14 = v16 - *(_QWORD *)((char *)Compartment + 1692);
    if ( v14 )
      v6 = (*((_DWORD *)Compartment + 420) & 2) == 0 && DWORD1(v15) == 1;
    else
      v6 = 1;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v8 = a1->IfBlock;
  v9 = v7;
  NdisDereferenceWithTag((ULONG_PTR)v8->MpRefCountTracker, 0x16u);
  if ( v8->MiniportLinkReference-- == 1 )
  {
    Miniport = v8->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v9);
  return v6;
}
