/*
 * XREFs of RtlCopyToUser @ 0x1403D00E8
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1401998D0 (NtUserChangeWindowMessageFilterEx.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x140348020 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x14026E3F4 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead_0(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
