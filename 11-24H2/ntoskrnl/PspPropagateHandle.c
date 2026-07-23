/*
 * XREFs of PspPropagateHandle @ 0x140A275D4
 * Callers:
 *     PspUpdateCreateInfo @ 0x140A27330 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 */

__int64 __fastcall PspPropagateHandle(char a1, void **a2, __int64 *a3)
{
  void *v3; // r10
  struct _KPROCESS *Process; // r11
  __int64 result; // rax

  v3 = *a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  result = 0LL;
  if ( a1 )
    return ObDuplicateObject((__int64)Process, v3, Process, a3, 0, 0, 2, 0);
  *a3 = (__int64)v3;
  *a2 = 0LL;
  return result;
}
