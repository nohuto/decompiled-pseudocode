/*
 * XREFs of ??_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008CFB0 (--3@YAXPEAX@Z.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400DD220 (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportAddDeviceTelemetry *__fastcall AzTelemetry::MiniportAddDeviceTelemetry::`scalar deleting destructor'(
        AzTelemetry::MiniportAddDeviceTelemetry *this,
        char a2)
{
  AzTelemetry::MiniportAddDeviceTelemetry::~MiniportAddDeviceTelemetry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
