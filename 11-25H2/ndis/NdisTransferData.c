/*
 * XREFs of NdisTransferData @ 0x1400A4EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisTransferData(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(a2 + 104))(
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  *a1 = result;
  return result;
}
