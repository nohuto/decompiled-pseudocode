/*
 * XREFs of IopFindLegacyBusDeviceNode @ 0x140A904E8
 * Callers:
 *     IoTranslateBusAddress @ 0x1405A1EA0 (IoTranslateBusAddress.c)
 *     IopDuplicateDetection @ 0x140722BDC (IopDuplicateDetection.c)
 *     IopSetupArbiterAndTranslators @ 0x140A65728 (IopSetupArbiterAndTranslators.c)
 *     PnpReleaseResourcesInternal @ 0x140A89864 (PnpReleaseResourcesInternal.c)
 *     IopChildToRootTranslation @ 0x140A9031C (IopChildToRootTranslation.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopFindLegacyBusDeviceNode(int a1, unsigned int a2)
{
  PVOID v2; // r8
  int v3; // eax
  _QWORD **v4; // r10
  _QWORD *i; // rax

  v2 = IopRootDeviceNode;
  if ( a1 < 18 && a1 != 15 && a1 > -1 )
  {
    v3 = 1;
    if ( a1 != 2 )
      v3 = a1;
    v4 = (_QWORD **)((char *)&IopLegacyBusInformationTable + 16 * v3);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a2 )
        return i - 78;
      if ( *((_DWORD *)i - 43) > a2 )
        return v2;
    }
  }
  return v2;
}
