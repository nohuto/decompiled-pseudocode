/*
 * XREFs of ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003EFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x140036AF0 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14003F1E0 (-ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisOidPostPacketFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // rbp
  const struct _NDIS_FILTER_BLOCK *v5; // r14
  int v6; // eax
  struct _NDIS_IF_BLOCK *v7; // rcx
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+40h] [rbp-98h] BYREF
  __int128 v12; // [rsp+50h] [rbp-88h]
  __int128 v13; // [rsp+60h] [rbp-78h]
  __int128 v14; // [rsp+70h] [rbp-68h]
  __int128 v15; // [rsp+80h] [rbp-58h]
  __int128 v16; // [rsp+90h] [rbp-48h]
  __int128 v17; // [rsp+A0h] [rbp-38h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v5 = (const struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 2);
  v11 = 0LL;
  v10 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    return;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x800) != 0 )
    {
      *(_QWORD *)(v1 + 40) = *(_QWORD *)(v2 + 528);
      *(_DWORD *)(v1 + 48) = *(unsigned __int16 *)(v2 + 536);
      *(_QWORD *)(v2 + 528) = 0LL;
      *(_WORD *)(v2 + 536) = 0;
      *(_DWORD *)(v1 + 88) &= ~0x800u;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v6 = *(_DWORD *)(v2 + 1836);
      if ( v6 )
      {
        if ( v6 != 16 )
          goto LABEL_3;
        *(_DWORD *)(*(_QWORD *)(v2 + 600) + 312LL) = **(_DWORD **)(v1 + 40);
        v10 = **(_DWORD **)(v1 + 40);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(v2 + 400) + 312LL) = **(_DWORD **)(v1 + 40);
        v10 = *(_DWORD *)(*(_QWORD *)(v2 + 400) + 312LL);
        v7 = *(struct _NDIS_IF_BLOCK **)(v2 + 4040);
        v8 = (v10 & 0x20) != 0;
        if ( v7->ifPromiscuousMode != v8 )
        {
          v7->ifPromiscuousMode = v8;
          ndisNsiScheduleIfBlockRodChangeNotification(v7, &v7->ifPromiscuousMode, 1, 640);
        }
      }
      LODWORD(v11) = 7340440;
      *(_QWORD *)&v14 = &v10;
      *((_QWORD *)&v11 + 1) = v2;
      DWORD1(v12) = 1073807396;
      DWORD2(v14) = 4;
      v9 = (__int64)*(int *)(*(_QWORD *)(v2 + 3760) + 896LL) << 7;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *))((char *)g_MiniportHookDrivers + v9 + 64))(
        *(_QWORD *)((char *)g_MiniportHookDrivers + v9 + 24),
        *(_QWORD *)(v2 + 5288),
        v2,
        &v11);
    }
  }
LABEL_3:
  if ( v4 )
    ndisPostSetOpenPacketFilter(v4, (struct _NDIS_OID_REQUEST *)v1, *((_DWORD *)a1 + 10));
  if ( !*((_DWORD *)a1 + 10) && v5 && FILTER_TEST_FLAG(v5, 0x8000) )
    v5->Miniport->EthDB->MiniportPacketFilter = **(_DWORD **)(v1 + 40);
}
