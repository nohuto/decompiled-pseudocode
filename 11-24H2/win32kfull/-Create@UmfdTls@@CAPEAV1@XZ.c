/*
 * XREFs of ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1401601C0
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B30C8 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400B339C (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140160078 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x140160100 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x140160228 (-Create@UmfdUMBuffer@@SAPEAV1@XZ.c)
 */

struct UmfdTls *UmfdTls::Create(void)
{
  _OWORD *v0; // rbx
  struct UmfdUMBuffer *v1; // rax

  v0 = EngAllocMem(0, 0x38u, 0x6C744446u);
  if ( !v0 )
    return (struct UmfdTls *)v0;
  *v0 = 0LL;
  v0[1] = 0LL;
  v0[2] = 0LL;
  *((_QWORD *)v0 + 6) = 0LL;
  *((_DWORD *)v0 + 2) = -1;
  v1 = UmfdUMBuffer::Create();
  *(_QWORD *)v0 = v1;
  if ( v1 )
    return (struct UmfdTls *)v0;
  UmfdTls::Destroy((void **)v0);
  return 0LL;
}
