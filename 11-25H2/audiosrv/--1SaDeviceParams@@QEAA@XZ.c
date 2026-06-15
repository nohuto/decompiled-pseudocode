/*
 * XREFs of ??1SaDeviceParams@@QEAA@XZ @ 0x180027A34
 * Callers:
 *     ??R?$default_delete@USaDeviceParams@@@std@@QEBAXPEAUSaDeviceParams@@@Z @ 0x1800276C4 (--R-$default_delete@USaDeviceParams@@@std@@QEBAXPEAUSaDeviceParams@@@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800276F4 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180027A08 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180027AA4 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800BFA00 (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SaDeviceParams::~SaDeviceParams(SaDeviceParams *this)
{
  unsigned __int64 v2; // rcx

  ATL::CAutoPtr<CResourcePriorityTracker>::Free((char *)this + 104);
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    ReleaseAudioResourceHandle(v2);
  CoTaskMemFree(*((LPVOID *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  CoTaskMemFree(*(LPVOID *)this);
  *(_QWORD *)this = 0LL;
}
