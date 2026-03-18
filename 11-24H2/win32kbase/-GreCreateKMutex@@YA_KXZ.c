/*
 * XREFs of ?GreCreateKMutex@@YA_KXZ @ 0x14019DAE4
 * Callers:
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x1401C2C8C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

struct _KMUTANT *GreCreateKMutex(void)
{
  struct _KMUTANT *v0; // rax
  struct _KMUTANT *v1; // rbx

  v0 = (struct _KMUTANT *)Win32AllocPoolImpl(64LL, 0x38uLL, 0x6D736647u);
  v1 = v0;
  if ( v0 )
    KeInitializeMutex(v0, 0);
  return v1;
}
