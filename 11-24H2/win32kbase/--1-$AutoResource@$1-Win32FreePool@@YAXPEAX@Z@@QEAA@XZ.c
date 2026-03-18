/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401CD76C
 * Callers:
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x14014D984 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 *     EtwTraceTrappedAppContainerRender @ 0x1401CD9B0 (EtwTraceTrappedAppContainerRender.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x14021B928 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(char **a1)
{
  char *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *a1 = 0LL;
  }
}
