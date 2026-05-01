/*
 * XREFs of ?Free@RtlNameValueArray@@QEAAXXZ @ 0x180136D10
 * Callers:
 *     PiiFilterCreate @ 0x180136DFC (PiiFilterCreate.c)
 *     PiiFilterDelete @ 0x1802CD4EC (PiiFilterDelete.c)
 * Callees:
 *     ?Clear@RtlNameValueArray@@QEAAXXZ @ 0x180136D54 (-Clear@RtlNameValueArray@@QEAAXXZ.c)
 */

void __fastcall RtlNameValueArray::Free(RtlNameValueArray *this)
{
  void *v2; // r8

  RtlNameValueArray::Clear(this);
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    RtlFreeHeap(*(HANDLE *)this, 0, v2);
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
}
