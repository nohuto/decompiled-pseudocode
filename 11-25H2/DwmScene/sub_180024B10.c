/*
 * XREFs of sub_180024B10 @ 0x180024B10
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180024B10(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
    result = *(unsigned int *)(a1 + 3544);
    *(_DWORD *)(*a2 + 104LL) = result;
  }
  return result;
}
