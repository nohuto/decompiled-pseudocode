/*
 * XREFs of bSetFntCacheReg @ 0x1C0018C84
 * Callers:
 *     InitFNTCache @ 0x1C0018810 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x1C0019FA4 (bServicingStackModifiedFonts.c)
 *     EngCloseFNTCache @ 0x1C001B2CC (EngCloseFNTCache.c)
 *     EngFntCacheFault @ 0x1C0289C80 (EngFntCacheFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  DestinationString = 0LL;
  if ( a1 >= 3 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, off_1C030A360[a1]);
  v3 = SGDGetSessionState(v2);
  return ZwSetValueKey(*(HANDLE *)(*(_QWORD *)(v3 + 32) + 19408LL), &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
