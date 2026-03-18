/*
 * XREFs of MiGetImageWowSubsystemIndex @ 0x140941B90
 * Callers:
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1409416C0 (MiUpdateCfgSystemWideBitmap.c)
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
