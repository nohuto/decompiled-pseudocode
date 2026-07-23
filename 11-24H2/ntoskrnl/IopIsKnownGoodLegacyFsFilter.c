/*
 * XREFs of IopIsKnownGoodLegacyFsFilter @ 0x1403B3C38
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140712050 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

bool __fastcall IopIsKnownGoodLegacyFsFilter(const void **a1)
{
  __int16 v1; // bp
  const void **v2; // rdi
  unsigned int i; // ebx

  v1 = *(_WORD *)a1;
  v2 = (const void **)&off_140002060;
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_WORD *)v2 - 4) == v1 && !memcmp(*v2, a1[1], *((unsigned __int16 *)v2 - 4)) )
      break;
    v2 += 2;
  }
  return i < 3;
}
