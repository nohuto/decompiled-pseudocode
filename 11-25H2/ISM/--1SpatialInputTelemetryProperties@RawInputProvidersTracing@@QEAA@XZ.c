/*
 * XREFs of ??1SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@XZ @ 0x1800D2224
 * Callers:
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800D630C (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RawInputProvidersTracing::SpatialInputTelemetryProperties::~SpatialInputTelemetryProperties(
        HSTRING *this)
{
  WindowsDeleteString(this[7]);
  this[7] = 0LL;
  WindowsDeleteString(this[6]);
  this[6] = 0LL;
  WindowsDeleteString(this[5]);
  this[5] = 0LL;
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
}
