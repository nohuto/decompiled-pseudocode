/*
 * XREFs of IopSetDeviceSecurityDescriptors @ 0x140A5243C
 * Callers:
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A524DC (IopSetDeviceSecurityDescriptor.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptors(void **a1, void **a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v7; // edi
  void **v10; // rbx
  unsigned int v11; // eax
  void **v12; // rsi

  v7 = 0;
  v10 = a2;
  PsReferenceSiloContext(a2);
  do
  {
    v11 = IopSetDeviceSecurityDescriptor((_DWORD)v10, a3, a4, a5, a6);
    v12 = (void **)v10[3];
    if ( v10 == a1 )
      v7 = v11;
    if ( v12 )
      PsReferenceSiloContext(v10[3]);
    ObfDereferenceObject(v10);
    v10 = v12;
  }
  while ( v12 );
  return v7;
}
