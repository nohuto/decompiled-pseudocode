/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x1402375E0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x140438C20 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 */

void __fastcall RtlpVirtualPopShadowStack(__int64 a1, int a2, int a3)
{
  _QWORD *ExtendedFeature; // rax

  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a1 + 1232), 0xBu, 0LL);
      if ( ExtendedFeature )
      {
        if ( (*(_BYTE *)ExtendedFeature & 1) != 0 )
          ExtendedFeature[1] += (unsigned int)(8 * a2);
      }
    }
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a1 + 1256) + a1 + 1232) += (unsigned int)(8 * a3);
  }
}
