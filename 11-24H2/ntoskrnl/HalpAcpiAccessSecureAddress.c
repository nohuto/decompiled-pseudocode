/*
 * XREFs of HalpAcpiAccessSecureAddress @ 0x1402931A0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpPCIConfig @ 0x1403AA980 (HalpPCIConfig.c)
 */

__int64 __fastcall HalpAcpiAccessSecureAddress(char a1, void *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int16 v8; // di
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int i; // r10d
  __int64 result; // rax
  __int64 v12; // r8
  PHYSICAL_ADDRESS v13; // r9
  __int64 v14; // rcx
  int v15; // edi
  LONGLONG v16; // r8
  LONGLONG v17; // rdx

  v8 = (__int16)a2;
  *a5 = 0;
  PhysicalAddress = MmGetPhysicalAddress(a2);
  for ( i = 0; ; ++i )
  {
    if ( i >= HalpPciMcfgTableCount )
      return 3221225793LL;
    v12 = HalpPciMcfgTable + 16LL * i;
    v13 = *(PHYSICAL_ADDRESS *)(v12 + 44);
    if ( PhysicalAddress.QuadPart >= (unsigned __int64)v13.QuadPart
      && PhysicalAddress.QuadPart < v13.QuadPart
                                  + (unsigned __int64)((*(unsigned __int8 *)(v12 + 55)
                                                      - (unsigned int)*(unsigned __int8 *)(v12 + 54)
                                                      + 1) << 20)
      && (!HalpPciUseNvidiaAlternateAddress || (PhysicalAddress.LowPart & 0xF00) == 0) )
    {
      break;
    }
  }
  v14 = *(unsigned __int16 *)(v12 + 52);
  v15 = v8 & 0xFFF;
  v16 = ((PhysicalAddress.QuadPart - v13.QuadPart) >> 15) & 0x1F | (32
                                                                  * ((unsigned int)((PhysicalAddress.QuadPart
                                                                                   - v13.QuadPart) >> 12) & 7));
  v17 = (PhysicalAddress.QuadPart - v13.QuadPart) >> 20;
  if ( a1 )
  {
    ++HalpSecureWriteAccessCount;
    HalpPCIConfig(v14, v17, v16, a3, v15, a4, 1);
  }
  else
  {
    ++HalpSecureReadAccessCount;
    HalpPCIConfig(v14, v17, v16, a3, v15, a4, 0);
  }
  result = 0LL;
  *a5 = a4;
  return result;
}
