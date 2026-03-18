/*
 * XREFs of IsValidMouseSensitivity @ 0x14013CF10
 * Callers:
 *     TryUpdatePTPConfigFromRegistry @ 0x140141C74 (TryUpdatePTPConfigFromRegistry.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B1850 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidMouseSensitivity(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  W32GetUserSessionState(a1);
  return (unsigned int)(v1 - 1) <= 0x13;
}
