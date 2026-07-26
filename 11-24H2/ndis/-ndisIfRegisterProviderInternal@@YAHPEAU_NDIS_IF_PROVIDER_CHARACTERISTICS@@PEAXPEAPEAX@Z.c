/*
 * XREFs of ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1400719E0
 * Callers:
 *     NdisIfRegisterProvider @ 0x1400C9220 (NdisIfRegisterProvider.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x140148824 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisIfRegisterProviderInternal(struct _NDIS_IF_PROVIDER_CHARACTERISTICS *Src, void *a2, void **a3)
{
  unsigned int v6; // ebx
  unsigned __int16 v7; // r14
  _WORD *Pool2; // rax
  _QWORD *v9; // r15
  size_t Size; // r8
  void *v11; // rcx
  _QWORD *v12; // rax
  KIRQL v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  if ( !Src )
    return (unsigned int)-1073741811;
  if ( Src->Header.Revision != 1 )
    return (unsigned int)-1073741637;
  if ( Src->Header.Size < 0x28u )
    return (unsigned int)-1073741811;
  v6 = 0;
  *a3 = 0LL;
  v7 = Src->Header.Size + 48;
  if ( v7 >= 0x58u && (Pool2 = (_WORD *)ExAllocatePool2(64LL, v7, 1718174798LL), (v9 = Pool2) != 0LL) )
  {
    Size = Src->Header.Size;
    v11 = Pool2 + 24;
    *Pool2 = -29183;
    Pool2[1] = v7;
    v12 = Pool2 + 12;
    v12[1] = v12;
    *v12 = v12;
    v9[5] = a2;
    memmove(v11, Src, Size);
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_14011CA88);
    v14 = qword_14011CA78;
    v15 = v9 + 1;
    if ( *(__int64 **)(qword_14011CA78 + 8) != &qword_14011CA78 )
      __fastfail(3u);
    *v15 = qword_14011CA78;
    v9[2] = &qword_14011CA78;
    *(_QWORD *)(v14 + 8) = v15;
    qword_14011CA78 = (__int64)(v9 + 1);
    KeReleaseSpinLock(&qword_14011CA88, v13);
    *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
