/*
 * XREFs of ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400A5180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140098850 (--3@YAXPEAX@Z.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E4598 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
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
