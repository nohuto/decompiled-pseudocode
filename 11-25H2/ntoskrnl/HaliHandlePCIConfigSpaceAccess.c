/*
 * XREFs of HaliHandlePCIConfigSpaceAccess @ 0x14055F1E0
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceWriteConfig @ 0x140281430 (HaliPciInterfaceWriteConfig.c)
 *     HaliPciInterfaceReadConfig @ 0x140281470 (HaliPciInterfaceReadConfig.c)
 */

__int64 __fastcall HaliHandlePCIConfigSpaceAccess(char a1, int a2, unsigned int a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  ULONG_PTR v8; // [rsp+20h] [rbp-18h]
  size_t v9; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( a2 == 3320 )
  {
    dword_140E113D8 = *(_DWORD *)a4;
    byte_140E113DC = 1;
  }
  else if ( (unsigned int)(a2 - 3324) <= 3 && byte_140E113DC )
  {
    LODWORD(v9) = a3;
    LODWORD(v8) = a2 + (dword_140E113D8 & 0xFC) - 3324;
    v6 = (dword_140E113D8 & 0x700 | ((unsigned int)dword_140E113D8 >> 8) & 0xF8) >> 3;
    if ( a1 )
      HaliPciInterfaceReadConfig(0LL, (ULONG_PTR *)BYTE2(dword_140E113D8), v6, a4, v8, v9);
    else
      HaliPciInterfaceWriteConfig(0LL, BYTE2(dword_140E113D8), v6, (__int64)a4, v8, a3);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
