/*
 * XREFs of MiGetImageWowSubsystemIndex @ 0x1408F7300
 * Callers:
 *     MiSelectImageBase @ 0x1408F67EC (MiSelectImageBase.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1408F6E3C (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetImageWowSubsystemIndex(__int64 a1)
{
  __int64 i; // rdx

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( *(_WORD *)(*(_QWORD *)(a1 + 56) + 48LL) == MiWowSubsystems6432[i] )
      return 0LL;
  }
  return 0xFFFFFFFFLL;
}
