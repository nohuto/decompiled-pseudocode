/*
 * XREFs of EngLoadModuleForWrite @ 0x1403033C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1403030C8 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 */

HANDLE __stdcall EngLoadModuleForWrite(LPWSTR pwsz, ULONG cjSizeOfModule)
{
  if ( !cjSizeOfModule )
    cjSizeOfModule = -1;
  return (HANDLE)LoadModuleWorkHorse(pwsz, cjSizeOfModule);
}
