/*
 * XREFs of MiGetImageWowSubsystemIndex @ 0x140974B3C
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x140974678 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
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
