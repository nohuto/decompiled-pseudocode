/*
 * XREFs of ?AdjustForOrientation@@YA?AUtagSIZE@@II_N@Z @ 0x1401C67D8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall AdjustForOrientation(unsigned int a1, unsigned int a2, char a3)
{
  if ( a3 )
    return (struct tagSIZE)__PAIR64__(a1, a2);
  else
    return (struct tagSIZE)__PAIR64__(a2, a1);
}
