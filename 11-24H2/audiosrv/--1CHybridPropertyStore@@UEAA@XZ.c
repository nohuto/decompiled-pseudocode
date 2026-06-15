/*
 * XREFs of ??1CHybridPropertyStore@@UEAA@XZ @ 0x180149AD0
 * Callers:
 *     ??_GCHybridPropertyStore@@UEAAPEAXI@Z @ 0x180149B50 (--_GCHybridPropertyStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CHybridPropertyStore::~CHybridPropertyStore(CHybridPropertyStore *this)
{
  char *v2; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v2 = (char *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)(4 * ((__int64)(*((_QWORD *)this + 6) - (_QWORD)v2) >> 2)));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
