/*
 * XREFs of ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x14006CCA0
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C8E0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@QEAAXPEAVNdisWdfIdle@@@Z @ 0x14006CD70 (-reset@-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@QEAAXPEAVNdisWdfIdle@@@.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x140171AE0 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x140172830 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ??1KnobNamespace@@QEAA@XZ @ 0x140173F10 (--1KnobNamespace@@QEAA@XZ.c)
 */

void __fastcall _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  KnobDescriptor *p; // rcx
  NDISWATCHDOG__ *m_ptr; // rcx
  NDISWATCHDOG__ *v4; // rcx
  NDISWATCHDOG__ *v5; // rcx

  wistd::unique_ptr<NdisWdfIdle,KFreePoolNP<NdisWdfIdle>>::reset(&this->IdleSm, 0LL);
  p = this->PollModeConfigKnobDescriptors._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->PollModeConfigKnobDescriptors._p = 0LL;
    *(_QWORD *)&this->PollModeConfigKnobDescriptors.m_bufferSize = 0LL;
  }
  KnobNamespace::~KnobNamespace(&this->PollModeConfigKnobsNamespace);
  m_ptr = this->ReenumerateWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  v4 = this->HookedOidWatchdog.m_ptr;
  if ( v4 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v4);
  v5 = this->PendingOidWatchdog.m_ptr;
  if ( v5 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v5);
  Ndis::BindEngine::~BindEngine(&this->BindEngine);
  Ndis::BindStack::~BindStack(&this->Bindings);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&this->FilterClass, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&this->ExportName, 0LL);
}
