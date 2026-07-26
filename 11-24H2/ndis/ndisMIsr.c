/*
 * XREFs of ndisMIsr @ 0x1400D7710
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140032130 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x140047D00 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x140048790 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x140048A90 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

char __fastcall ndisMIsr(__int64 a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // r10
  __int64 v4; // r10
  _BYTE v6[12]; // [rsp+20h] [rbp-20h] BYREF
  int v7; // [rsp+2Ch] [rbp-14h]
  char v8; // [rsp+58h] [rbp+18h] BYREF
  char v9; // [rsp+60h] [rbp+20h] BYREF

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  v8 = 0;
  v9 = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v6, v2);
  if ( (v7 & 2) != 0 )
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v6, 1u);
  if ( (*(_DWORD *)(v4 + 120) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 3760) + 128LL))(*(_QWORD *)(v4 + 24));
    v9 = 1;
    v8 = 1;
  }
  else
  {
    (*(void (__fastcall **)(char *, char *, _QWORD))(a2 + 24))(&v8, &v9, *(_QWORD *)(v4 + 24));
  }
  if ( (v7 & 2) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v6, 1u, 14LL);
  if ( v9 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a2 + 112), 1u);
    if ( KeInsertQueueDpc((PRKDPC)(a2 + 40), 0LL, 0LL) )
    {
      if ( (v7 & 0x1000) != 0 )
        ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v6, 0xCu);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
    }
  }
  if ( v8 && (v6[8] & 2) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)v6, 1LL, 1LL);
  return v8;
}
