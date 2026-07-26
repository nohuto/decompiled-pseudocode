/*
 * XREFs of ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x14015F980
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400218B0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AEEFC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x14015F5A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x14015F620 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14015F6A0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14016C060 (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x14006CFF0 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisArmWatchdog(
        struct NDISWATCHDOG__ *a1,
        void *a2,
        int a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v9; // rdx
  struct NDISWATCHDOG__ *v10; // rdi
  int v11; // ecx
  void *v12; // rcx
  _DEVICE_OBJECT *v13; // rcx
  char v14; // al
  unsigned int v15; // eax
  __int64 v16; // rbx
  int v17; // ecx
  ULONG v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v10 = WatchdogFromHandle(a1);
    *((_DWORD *)v10 + 50) = 846677070;
    if ( !v9 )
      goto LABEL_10;
    v11 = *v9;
    if ( v11 == 5 )
    {
      v12 = (void *)*((_QWORD *)v9 + 4);
    }
    else
    {
      v17 = v11 - 17;
      if ( !v17 )
      {
        v12 = a2;
LABEL_6:
        if ( (*((_DWORD *)v12 + 30) & 0x100) == 0
          && (v13 = (_DEVICE_OBJECT *)*((_QWORD *)v12 + 479),
              SecondsRemaining = 0,
              PoQueryWatchdogTime(v13, &SecondsRemaining)) )
        {
          v18 = SecondsRemaining;
          v19 = 3000;
          if ( SecondsRemaining < 3 )
            v18 = 3;
          v20 = 1000 * v18;
          v21 = a5;
          v22 = v20 - 3000;
          if ( v22 >= 0xBB8 )
            v19 = v22;
          if ( v19 < a5 )
            v21 = v19;
          a5 = v21;
          v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        *((_BYTE *)v10 + 248) = v14;
        goto LABEL_10;
      }
      if ( v17 != 1 )
      {
LABEL_10:
        *((_QWORD *)v10 + 27) = a2;
        *((_QWORD *)v10 + 26) = &ndisGlobalTriageBlock;
        *((_DWORD *)v10 + 51) = a5;
        *((_QWORD *)v10 + 28) = MEMORY[0xFFFFF78000000008];
        *((_QWORD *)v10 + 29) = KeGetCurrentThread();
        *((_QWORD *)v10 + 30) = a6;
        v15 = g_ndisWatchdogSequenceNumber;
        *((_QWORD *)v10 + 32) = a4;
        g_ndisWatchdogSequenceNumber = v15 + 1;
        *((_DWORD *)v10 + 41) = v15 + 1;
        v16 = -10000LL * *((unsigned int *)v10 + 51);
        *((_DWORD *)v10 + 48) = a3;
        *((_DWORD *)v10 + 40) = 1;
        KeClearEvent((PRKEVENT)v10 + 7);
        KeSetTimerEx((PKTIMER)v10 + 1, (LARGE_INTEGER)v16, 0, (PKDPC)v10);
        return;
      }
      v12 = (void *)*((_QWORD *)v9 + 2);
    }
    if ( v12 )
      goto LABEL_6;
    goto LABEL_10;
  }
}
