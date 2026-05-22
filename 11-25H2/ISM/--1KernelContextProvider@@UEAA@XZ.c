/*
 * XREFs of ??1KernelContextProvider@@UEAA@XZ @ 0x1801087F0
 * Callers:
 *     ??_EKernelContextProvider@@UEAAPEAXI@Z @ 0x180108830 (--_EKernelContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KernelContextProvider::~KernelContextProvider(KernelContextProvider *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SystemContextProvider::~SystemContextProvider(this);
}
