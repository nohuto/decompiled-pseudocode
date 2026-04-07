/*
 * XREFs of ?SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z @ 0x180073330
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1800F636C (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDWriteText::SetFont(CDWriteText *this, const struct tagLOGFONTW *a2)
{
  if ( memcmp_0((char *)this + 56, a2, 0x5CuLL) )
  {
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)&a2->lfHeight;
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a2->lfWeight;
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a2->lfFaceName[2];
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a2->lfFaceName[10];
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)&a2->lfFaceName[18];
    *((_QWORD *)this + 17) = *(_QWORD *)&a2->lfFaceName[26];
    *((_DWORD *)this + 36) = *(_DWORD *)&a2->lfFaceName[30];
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 21) + 24LL))((char *)this - 168, 4096LL);
  }
}
