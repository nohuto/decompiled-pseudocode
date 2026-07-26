/*
 * XREFs of ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400DD520
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x14006C3B0 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14008CFB0 (--3@YAXPEAX@Z.c)
 */

AzTelemetry::MiniportHaltTelemetry *__fastcall AzTelemetry::MiniportHaltTelemetry::`vector deleting destructor'(
        AzTelemetry::MiniportHaltTelemetry *this,
        char a2)
{
  AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
