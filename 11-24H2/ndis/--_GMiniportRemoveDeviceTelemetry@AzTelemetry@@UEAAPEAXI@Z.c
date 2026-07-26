/*
 * XREFs of ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008CFB0 (--3@YAXPEAX@Z.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400DD388 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportRemoveDeviceTelemetry *__fastcall AzTelemetry::MiniportRemoveDeviceTelemetry::`scalar deleting destructor'(
        AzTelemetry::MiniportRemoveDeviceTelemetry *this,
        char a2)
{
  AzTelemetry::MiniportRemoveDeviceTelemetry::~MiniportRemoveDeviceTelemetry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
