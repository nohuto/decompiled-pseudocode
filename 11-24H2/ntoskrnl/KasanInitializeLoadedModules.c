/*
 * XREFs of KasanInitializeLoadedModules @ 0x140C28B50
 * Callers:
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 * Callees:
 *     KasanDriverLoadImageInternal @ 0x1404B24C0 (KasanDriverLoadImageInternal.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KasanInitializeLoadedModules(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  int ImageInternal; // eax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (_QWORD *)(a1 + 16);
  while ( v1 != v2 )
  {
    ImageInternal = KasanDriverLoadImageInternal((__int64)v1, 1);
    if ( ImageInternal < 0 )
      KeBugCheckEx(0x1F1u, 4uLL, 7uLL, (ULONG_PTR)v1, ImageInternal);
    v1 = (_QWORD *)*v1;
  }
}
