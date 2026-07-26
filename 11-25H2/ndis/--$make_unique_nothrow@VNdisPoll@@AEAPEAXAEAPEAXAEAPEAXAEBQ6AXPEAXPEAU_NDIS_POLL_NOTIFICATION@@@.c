/*
 * XREFs of ??$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX0PEAU_NDIS_POLL_DATA@@@Z@wil@@YA?AV?$unique_ptr@VNdisPoll@@U?$default_delete@VNdisPoll@@@wistd@@@wistd@@AEAPEAX00AEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX1PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1400DCC6C
 * Callers:
 *     NdisRegisterPoll @ 0x140154FB0 (NdisRegisterPoll.c)
 * Callees:
 *     ??0NdisPoll@@QEAA@PEAX00P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1401552AC (--0NdisPoll@@QEAA@PEAX00P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z.c)
 */

NdisPoll **__fastcall wil::make_unique_nothrow<NdisPoll,void * &,void * &,void * &,void (*const &)(void *,_NDIS_POLL_NOTIFICATION *),void (*const &)(void *,_NDIS_POLL_DATA *)>(
        NdisPoll **a1,
        void **a2,
        void **a3,
        void **a4,
        void (**a5)(void *, struct _NDIS_POLL_NOTIFICATION *),
        void (**a6)(void *, struct _NDIS_POLL_DATA *))
{
  NdisPoll *PoolWithTag; // rcx
  NdisPoll *v11; // rax

  PoolWithTag = (NdisPoll *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x288uLL, 0x78744345u);
  v11 = 0LL;
  if ( PoolWithTag )
    v11 = NdisPoll::NdisPoll(PoolWithTag, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
