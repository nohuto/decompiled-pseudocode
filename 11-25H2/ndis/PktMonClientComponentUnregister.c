/*
 * XREFs of PktMonClientComponentUnregister @ 0x14007B260
 * Callers:
 *     ndisPktMonOpenRegister @ 0x14016D210 (ndisPktMonOpenRegister.c)
 *     ndisPktMonFilterRegister @ 0x14016FF90 (ndisPktMonFilterRegister.c)
 *     ndisPktMonMiniportRegister @ 0x140173910 (ndisPktMonMiniportRegister.c)
 *     NdisCloseAdapter @ 0x14017F9C0 (NdisCloseAdapter.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall PktMonClientComponentUnregister(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  if ( a1[5] )
  {
    KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
    if ( a1[5] )
    {
      if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)&xmmword_1401278D0 + 1) + 16LL))(xmmword_1401278D0, a1[5]);
        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
      }
      v2 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
LABEL_11:
        __fastfail(3u);
      --PktMonCompCount;
      *v3 = v2;
      v2[1] = (__int64)v3;
      v4 = a1 + 2;
      while ( (_QWORD *)*v4 != v4 )
      {
        v5 = a1[3];
        if ( *(_QWORD **)v5 != v4 )
          goto LABEL_11;
        v6 = *(_QWORD **)(v5 + 8);
        if ( *v6 != v5 )
          goto LABEL_11;
        a1[3] = (__int64)v6;
        *v6 = v4;
        *(_OWORD *)v5 = 0LL;
        *(_OWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 32) = 0LL;
      }
      *(_OWORD *)a1 = 0LL;
      *((_OWORD *)a1 + 1) = 0LL;
      *((_OWORD *)a1 + 2) = 0LL;
      *((_OWORD *)a1 + 3) = 0LL;
    }
    KeReleaseMutex(&PktMonCompMutex, 0);
  }
}
