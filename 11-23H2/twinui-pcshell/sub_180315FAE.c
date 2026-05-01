/*
 * XREFs of sub_180315FAE @ 0x180315FAE
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void sub_180315FAE(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, ...)
{
  __int64 v6; // [rsp+38h] [rbp+38h] BYREF
  va_list va; // [rsp+38h] [rbp+38h]
  va_list va1; // [rsp+40h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v6 = va_arg(va1, _QWORD);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va1);
  JUMPOUT(0x1800E5076LL);
}
