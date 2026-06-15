/*
 * XREFs of ??_GCPBMStreamClassVolumeGainStage@@UEAAPEAXI@Z @ 0x18002F740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPBMStreamClassVolumeGainStage@@UEAA@XZ @ 0x18002ECEC (--1CPBMStreamClassVolumeGainStage@@UEAA@XZ.c)
 */

CPBMStreamClassVolumeGainStage *__fastcall CPBMStreamClassVolumeGainStage::`scalar deleting destructor'(
        CPBMStreamClassVolumeGainStage *this,
        char a2)
{
  CPBMStreamClassVolumeGainStage::~CPBMStreamClassVolumeGainStage(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
