/*
 * XREFs of ?AsyncCloseNtHandle@DXGSWAPCHAIN@@CAXPEAX@Z @ 0x1401F7920
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall DXGSWAPCHAIN::AsyncCloseNtHandle(void *a1)
{
  struct _KPROCESS *v2; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = (struct _KPROCESS *)*((_QWORD *)a1 + 4);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v2, &ApcState);
  ObCloseHandle(*((HANDLE *)a1 + 5), 1);
  KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObject(*((PVOID *)a1 + 4));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
