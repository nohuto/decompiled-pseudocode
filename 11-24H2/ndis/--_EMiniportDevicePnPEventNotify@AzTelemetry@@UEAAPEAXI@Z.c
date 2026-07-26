/*
 * XREFs of ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1400DD4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x140071240 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14008CFB0 (--3@YAXPEAX@Z.c)
 */

AzTelemetry::MiniportDevicePnPEventNotify *__fastcall AzTelemetry::MiniportDevicePnPEventNotify::`vector deleting destructor'(
        AzTelemetry::MiniportDevicePnPEventNotify *this,
        char a2)
{
  AzTelemetry::MiniportDevicePnPEventNotify::~MiniportDevicePnPEventNotify(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
