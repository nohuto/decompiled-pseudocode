/*
 * XREFs of ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1400E46F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x14008D950 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140098850 (--3@YAXPEAX@Z.c)
 */

AzTelemetry::MiniportDevicePnPEventNotify *__fastcall AzTelemetry::MiniportDevicePnPEventNotify::`vector deleting destructor'(
        AzTelemetry::MiniportDevicePnPEventNotify *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  AzTelemetry::MiniportDevicePnPEventNotify::~MiniportDevicePnPEventNotify(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
