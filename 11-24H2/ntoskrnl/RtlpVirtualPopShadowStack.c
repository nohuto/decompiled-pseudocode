/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x140282050
 * Callers:
 *     RtlpxVirtualUnwind @ 0x14027F030 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x140442050 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140281BD0 (RtlLocateExtendedFeature.c)
 */

void __fastcall RtlpVirtualPopShadowStack(__int64 a1, int a2, int a3)
{
  __int64 ExtendedFeature; // rax

  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature = RtlLocateExtendedFeature(a1 + 1232, 11);
      if ( ExtendedFeature )
      {
        if ( (*(_BYTE *)ExtendedFeature & 1) != 0 )
          *(_QWORD *)(ExtendedFeature + 8) += (unsigned int)(8 * a2);
      }
    }
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a1 + 1256) + a1 + 1232) += (unsigned int)(8 * a3);
  }
}
