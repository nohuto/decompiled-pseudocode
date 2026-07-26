/*
 * XREFs of ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x14016B530
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x14016A440 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(__int64 *a1)
{
  _WORD *PoolWithTag; // rax
  _WORD *v3; // rbx
  _QWORD *v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x44745042u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v4 = PoolWithTag + 4;
    v4[1] = v4;
    *v4 = v4;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 8) = 0;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_OWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 16) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  if ( *a1 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1);
    *a1 = 0LL;
  }
  if ( !v3 )
    return 0;
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1);
  *a1 = (__int64)v3;
  return 1;
}
