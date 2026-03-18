/*
 * XREFs of ?AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z @ 0x1400CEAFC
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1400CEA60 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DirectComposition::AllocateAndInitializeCriticalSection(
        DirectComposition *this,
        struct DirectComposition::CCriticalSection **a2)
{
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rdi
  NTSTATUS v5; // ebx

  *(_QWORD *)this = 0LL;
  v3 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, sizeof(struct _ERESOURCE));
    v5 = ExInitializeResourceLite(v4);
    if ( v5 >= 0 )
      *(_QWORD *)this = v4;
    else
      GreDeleteFastMutex((char *)v4);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
