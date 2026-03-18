/*
 * XREFs of EngMapFile @ 0x140304DB0
 * Callers:
 *     ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x1403361F8 (-CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z.c)
 * Callees:
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140304B38 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 */

PVOID __stdcall EngMapFile(LPWSTR pwsz, ULONG cjSize, ULONG_PTR *piFile)
{
  void *v5; // rbx
  PVOID *v7; // rdi

  v5 = 0LL;
  v7 = (PVOID *)Win32AllocPoolZInit(80LL, 1818846791LL);
  if ( v7 )
  {
    if ( !cjSize )
      cjSize = -1;
    if ( (unsigned int)bMapFile(pwsz, v7, cjSize, 0) )
    {
      *piFile = (ULONG_PTR)v7;
      return v7[1];
    }
    else
    {
      *piFile = 0LL;
      Win32FreePool(v7);
    }
  }
  return v5;
}
