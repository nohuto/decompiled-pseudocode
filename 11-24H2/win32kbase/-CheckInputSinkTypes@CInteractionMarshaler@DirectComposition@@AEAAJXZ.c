/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x140049698
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x14004A34C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x14004A558 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1400482F4 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x14004981C (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x14004995C (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x14004A088 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x14004B0B4 (-QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(
        DirectComposition::CInteractionMarshaler *this)
{
  int v1; // esi
  __int64 v3; // r14
  int v4; // ebx
  char v5; // r15
  int v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+24h] [rbp-2Ch]
  int v9; // [rsp+28h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]

  v1 = 0;
  if ( (*((_BYTE *)this + 332) & 1) == 0 )
    return 0LL;
  v3 = *((_QWORD *)this + 33);
  v4 = 0;
  v5 = 0;
  v11 = 0LL;
  v10 = 0LL;
  if ( v3 )
  {
    RIMLockShared(v3 + 32);
    CInputSink::QueryInputQueueTypes((CInputSink *)(v3 + 24), (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v10);
    CPushLock::ReleaseLock((CPushLock *)(v3 + 32));
    v4 = v11;
  }
  else
  {
    v5 = 1;
  }
  DirectComposition::CInteractionConfigurationGroup::ClearConfiguration((DirectComposition::CInteractionMarshaler *)((char *)this + 56));
  if ( v5 || v4 > 1 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
      (__int64)this + 120,
      0);
    v8 = -1;
    v7 = 1;
    v9 = -805306369;
    v1 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           (char *)this + 120,
           &v7,
           0LL);
    if ( v1 >= 0 )
    {
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 17) |= 2u;
    }
  }
  if ( v1 >= 0 )
  {
    if ( (v5 || SDWORD1(v10) > 1) && (*((_DWORD *)this + 17) |= 1u, v1 = 0, *((_DWORD *)this + 35) = -805306369, v5)
      || SHIDWORD(v10) > 1 )
    {
      v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 56, 1LL);
      if ( v1 >= 0 )
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
          (__int64)this + 96,
          0);
        v8 = -1;
        v7 = 1;
        v9 = -805306369;
        v1 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               (char *)this + 96,
               &v7,
               0LL);
        if ( v1 >= 0 )
        {
          *((_DWORD *)this + 28) = 0;
          *((_DWORD *)this + 17) |= 8u;
        }
      }
    }
  }
  *((_DWORD *)this + 4) |= 0x200u;
  return (unsigned int)v1;
}
