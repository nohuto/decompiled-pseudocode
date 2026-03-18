/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x140A9400C
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1403D7814 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14045BEC8 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     VslFreeSecureImageIat @ 0x1404B1A3C (VslFreeSecureImageIat.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  void *v1; // rbx
  unsigned __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 112) )
  {
    v2 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    CurrentThread = KeGetCurrentThread();
    v4 = v2;
    v5 = *(_QWORD *)((*(_QWORD *)(v2 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
    MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
    v6 = *(_QWORD *)(v5 + 88);
    if ( v6 )
    {
      v1 = *(void **)(v6 + 16);
      *(_QWORD *)(v6 + 16) = 0LL;
    }
    MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
    if ( (MiFlags & 0x8000) != 0 )
    {
      v8 = VslFreeSecureImageIat(*(_QWORD *)((*(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64));
      if ( v8 < 0 )
        KeBugCheckEx(0x1Au, 0x1085uLL, v4, v8, 0LL);
    }
    MiWalkEntireImage(v4, qword_140E2D510, 8u, 0xFFFFFFFF);
  }
  else
  {
    v7 = *(_QWORD *)(MiGetBaseLoaderPortion(a1) + 280);
    if ( !v7 )
      return;
    v1 = *(void **)(v7 + 16);
    *(_QWORD *)(v7 + 16) = 0LL;
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
