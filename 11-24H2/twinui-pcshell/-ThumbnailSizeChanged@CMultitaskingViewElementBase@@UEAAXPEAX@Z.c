/*
 * XREFs of ?ThumbnailSizeChanged@CMultitaskingViewElementBase@@UEAAXPEAX@Z @ 0x1804C5630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewElementBase::ThumbnailSizeChanged(CMultitaskingViewElementBase *this, void *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = &v2[*((_QWORD *)this + 3)];
  while ( v2 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*v2 + 480LL))(*v2, a2);
    ++v2;
  }
}
