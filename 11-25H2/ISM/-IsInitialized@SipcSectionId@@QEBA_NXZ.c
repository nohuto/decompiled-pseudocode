/*
 * XREFs of ?IsInitialized@SipcSectionId@@QEBA_NXZ @ 0x18010D8D8
 * Callers:
 *     ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x18010B744 (-Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x18010C950 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 *     ?InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x18010D73C (-InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z.c)
 *     ?SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z @ 0x18010E604 (-SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SipcSectionId::IsInitialized(SipcSectionId *this)
{
  unsigned __int64 i; // rax

  for ( i = 0LL; i < 0x20; ++i )
  {
    if ( *((_BYTE *)this + i) )
      return 1;
  }
  return 0;
}
