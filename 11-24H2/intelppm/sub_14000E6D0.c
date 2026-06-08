/*
 * XREFs of sub_14000E6D0 @ 0x14000E6D0
 * Callers:
 *     sub_1400034D0 @ 0x1400034D0 (sub_1400034D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000E6D0(__int64 *BugCheckParameter4, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8[3] = 0;
  v6 = *BugCheckParameter4;
  v8[0] = a2;
  v8[1] = a3;
  v9 = a5;
  v8[2] = a4;
  result = PoFxProcessorNotification(v6, 6LL, v8);
  if ( (int)result < 0 )
    KeBugCheckEx(0x143u, 1uLL, 6uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
  return result;
}
