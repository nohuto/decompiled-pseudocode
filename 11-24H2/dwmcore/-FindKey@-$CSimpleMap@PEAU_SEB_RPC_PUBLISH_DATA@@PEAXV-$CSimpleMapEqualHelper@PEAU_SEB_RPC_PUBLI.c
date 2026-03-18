/*
 * XREFs of ?FindKey@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEBAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x180216058
 * Callers:
 *     PubSebUnregisterRpc @ 0x180215B70 (PubSebUnregisterRpc.c)
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x180215FCC (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::FindKey(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ecx
  __int64 i; // r8

  v2 = 0;
  for ( i = 0LL; i < dword_1803FAA88; ++i )
  {
    if ( *((_QWORD *)Block + i) == *a2 )
      return v2;
    ++v2;
  }
  return 0xFFFFFFFFLL;
}
