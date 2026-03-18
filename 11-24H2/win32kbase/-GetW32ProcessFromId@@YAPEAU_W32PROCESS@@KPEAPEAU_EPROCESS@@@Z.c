/*
 * XREFs of ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1400BA7E0
 * Callers:
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C4E28 (HmgDecProcessHandleCountFastOpt.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C4F84 (HmgIncProcessHandleCountExFast.c)
 * Callees:
 *     <none>
 */

struct _W32PROCESS *__fastcall GetW32ProcessFromId(int a1, struct _EPROCESS **a2)
{
  void *v2; // rdi
  __int64 v4; // rcx
  struct _W32PROCESS *result; // rax

  v2 = (void *)a1;
  *a2 = 0LL;
  if ( a1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    result = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v4);
  }
  else
  {
    if ( PsLookupProcessByProcessId(v2, a2) < 0 )
      return 0LL;
    result = (struct _W32PROCESS *)PsGetProcessWin32Process(*a2);
  }
  if ( result )
  {
    if ( !*(_QWORD *)result )
      return 0LL;
  }
  return result;
}
