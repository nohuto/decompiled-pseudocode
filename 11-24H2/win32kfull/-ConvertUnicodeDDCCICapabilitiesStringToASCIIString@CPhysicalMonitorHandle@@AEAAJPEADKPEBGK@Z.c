/*
 * XREFs of ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z @ 0x1403220F0
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140265160 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString(
        CPhysicalMonitorHandle *this,
        char *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int i; // edx
  int v8; // ecx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx

  v5 = 0;
  if ( a3 < a5 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    for ( i = 0; i < a5; ++i )
    {
      v8 = a4[i];
      if ( (unsigned __int16)(v8 - 32) > 0x3Fu
        || (v9 = 0x87FFFFFE03FF4301uLL, !_bittest64((const __int64 *)&v9, (unsigned int)(v8 - 32))) )
      {
        if ( (_WORD)v8 && (unsigned __int16)(v8 - 97) > 0x19u )
          return (unsigned int)-1073741823;
      }
      v10 = i;
      v11 = i;
      a2[v11] = a4[v10];
    }
  }
  return v5;
}
