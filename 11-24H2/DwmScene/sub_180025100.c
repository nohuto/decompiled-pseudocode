/*
 * XREFs of sub_180025100 @ 0x180025100
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180025100(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 272);
  if ( *a2 != v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 224LL))(*(_QWORD *)(a1 + 272));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 296LL))(v2);
  }
  return result;
}
