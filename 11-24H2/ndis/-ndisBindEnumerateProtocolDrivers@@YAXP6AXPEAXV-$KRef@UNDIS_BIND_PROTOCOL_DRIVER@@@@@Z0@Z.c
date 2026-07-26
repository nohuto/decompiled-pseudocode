/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140155D10
 * Callers:
 *     ?ndisVBusUpdateDependentBindings@@YAXXZ @ 0x1401420BC (-ndisVBusUpdateDependentBindings@@YAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157050 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015F470 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?Release@KRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAXXZ @ 0x140155E90 (-Release@KRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAXXZ.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, volatile signed __int32 **),
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  unsigned __int64 i; // rdi
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = qword_14011D080;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = qword_14011D080;
  for ( i = 0LL; i < *(unsigned int *)(v5 + 44); ++i )
  {
    if ( i >= *(unsigned int *)(v5 + 44) )
LABEL_14:
      __fastfail(5u);
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(v5 + 48) + 8 * i);
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 16);
      ExReleasePushLockEx(v2, 0LL);
      KeLeaveCriticalRegion();
      v8 = v7;
      _InterlockedIncrement(v7 + 16);
    }
    else
    {
      ExReleasePushLockEx(v2, 0LL);
      KeLeaveCriticalRegion();
      v8 = 0LL;
    }
    a1(a2, &v8);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    v5 = qword_14011D080;
    if ( *(unsigned int *)(qword_14011D080 + 44) < i )
      goto LABEL_13;
    if ( i >= *(unsigned int *)(qword_14011D080 + 44) )
      goto LABEL_14;
    if ( (*(_QWORD *)(*(_QWORD *)(qword_14011D080 + 48) + 8 * i) != 0LL) != (v7 != 0LL) )
LABEL_13:
      i = 0LL;
    if ( v7 )
    {
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::Release((PVOID)v7);
      v5 = qword_14011D080;
    }
  }
  ExReleasePushLockEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
