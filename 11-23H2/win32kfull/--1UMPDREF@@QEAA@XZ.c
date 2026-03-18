/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C02C6828
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C02CCFB0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0298F2C (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker((UMPDOBJ *)*this) )
      Win32FreePool(*this);
  }
}
