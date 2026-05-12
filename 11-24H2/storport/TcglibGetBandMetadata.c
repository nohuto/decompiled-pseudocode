/*
 * XREFs of TcglibGetBandMetadata @ 0x14013C10C
 * Callers:
 *     RaidGetTcgLockingObjectMetadata @ 0x14008CBA4 (RaidGetTcgLockingObjectMetadata.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpGetBandMetadata @ 0x14013DCF4 (TcglibpGetBandMetadata.c)
 */

__int64 __fastcall TcglibGetBandMetadata(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // r9d
  int v11; // r10d
  int BandMetadata; // eax

  v9 = TcglibpCheckContext(a1, a2);
  if ( v9 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Cu,
          (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids);
      return (unsigned int)-2147483631;
    }
    else
    {
      BandMetadata = TcglibpGetBandMetadata(a1, v8, v11, v10, a5, a6);
      v9 = BandMetadata;
      if ( BandMetadata < 0 )
        v9 = TcglibpCheckError(a1, a2, (unsigned int)BandMetadata);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x2Bu,
      (__int64)&WPP_127317a3aac038578d69cb8ccf054e38_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
