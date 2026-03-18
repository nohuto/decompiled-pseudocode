/*
 * XREFs of NtGdiGetPhysicalMonitorFromTarget @ 0x140322840
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z @ 0x1401FBC0C (-CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall NtGdiGetPhysicalMonitorFromTarget(struct _LUID a1, __int64 a2, void **a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  struct _LUID v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = a1;
  if ( !a3 )
    return 3221225485LL;
  v7 = 0LL;
  result = CreatePhysicalMonitor(&v6, a2, &v7);
  v5 = result;
  if ( (int)result >= 0 )
  {
    ProbeForWrite(a3, 8uLL, 1u);
    *a3 = v7;
    return v5;
  }
  return result;
}
