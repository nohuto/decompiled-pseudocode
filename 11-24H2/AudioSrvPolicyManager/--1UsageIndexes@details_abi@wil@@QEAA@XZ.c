/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180022970
 * Callers:
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x1800228B0 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800247A8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180024DB0 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     _wil::details_abi::FeatureStateData::RecordUsage_::_1_::dtor$0 @ 0x18004A18E (_wil--details_abi--FeatureStateData--RecordUsage_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::UsageIndexes::~UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    operator delete(v4);
}
