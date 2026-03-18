/*
 * XREFs of ??1MLOCKFAST@@QEAA@XZ @ 0x1C0264E60
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1C02A7C00 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

void __fastcall MLOCKFAST::~MLOCKFAST(MLOCKFAST *this)
{
  GreReleaseHmgrSemaphore(this);
}
