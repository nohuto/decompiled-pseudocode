/*
 * XREFs of ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800A5A48
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800202E8 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18008B1B0 (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x1800A5AB0 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall CMeterHardware::Initialize(CMeterHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  int MeterControlForEndpoint; // ebx

  MeterControlForEndpoint = CMeterHardware::FindMeterControlForEndpoint(this, a2, a3);
  if ( MeterControlForEndpoint < 0
    || (MeterControlForEndpoint = CMeterControlBase::Initialize(this, a2), MeterControlForEndpoint < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterHardware::Initialize", 404, MeterControlForEndpoint);
  }
  return (unsigned int)MeterControlForEndpoint;
}
