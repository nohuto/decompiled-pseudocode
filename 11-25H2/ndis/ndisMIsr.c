/*
 * XREFs of ndisMIsr @ 0x1400DEA40
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004CD70 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x140061280 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x140062630 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x140062930 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

char __fastcall ndisMIsr(__int64 a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // r10
  __int64 v4; // r10
  char v5; // di
  _BYTE v7[12]; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+2Ch] [rbp-14h]
  char v9; // [rsp+68h] [rbp+28h] BYREF
  char v10; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  v9 = 0;
  v10 = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v7, v2);
  v5 = v8;
  if ( (v8 & 2) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v7, 1u);
    v5 = v8;
  }
  if ( (*(_DWORD *)(v4 + 120) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 3760) + 128LL))(*(_QWORD *)(v4 + 24));
    v10 = 1;
    v9 = 1;
  }
  else
  {
    (*(void (__fastcall **)(char *, char *, _QWORD))(a2 + 24))(&v9, &v10, *(_QWORD *)(v4 + 24));
  }
  if ( (v5 & 2) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v7, 1u, 14LL);
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a2 + 112), 1u);
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 40), 0LL, 0LL) )
    {
      if ( (v8 & 0x1000) != 0 )
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v7, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
    }
  }
  if ( v9 && (v7[8] & 2) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)v7, 1LL, 1LL);
  return v9;
}
