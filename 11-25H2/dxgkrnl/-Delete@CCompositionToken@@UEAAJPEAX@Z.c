/*
 * XREFs of ?Delete@CCompositionToken@@UEAAJPEAX@Z @ 0x1400445B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionToken::Delete(CCompositionToken *this, void *a2)
{
  (*(void (__fastcall **)(char *, void *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, a2);
  return 0LL;
}
