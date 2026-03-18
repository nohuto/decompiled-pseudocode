/*
 * XREFs of VidMmGetDevicePagingQueue @ 0x140044370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmGetDevicePagingQueue(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int64 result; // rax

  v5 = 32LL * a2;
  *a3 = *(_QWORD *)(v5 + *(_QWORD *)(a1 + 72));
  result = *(_QWORD *)(a1 + 72);
  *a4 = *(_QWORD *)(result + v5 + 8);
  return result;
}
