/*
 * XREFs of MiSetFaultPacketDirectives @ 0x140429F2C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiValidVirtualizationFault @ 0x14042845C (MiValidVirtualizationFault.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetFaultPacketDirectives(__int64 a1, int a2, __int64 a3)
{
  if ( a2 == -1073741801 )
  {
    if ( a3 )
    {
      *(_QWORD *)(a1 + 128) = a3;
      *(_QWORD *)(a1 + 144) = 1LL;
    }
    else
    {
      *(_DWORD *)(a1 + 80) |= 1u;
    }
  }
  else if ( a2 == -1073740748 )
  {
    *(_DWORD *)(a1 + 80) |= 2u;
  }
}
