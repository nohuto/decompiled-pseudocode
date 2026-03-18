/*
 * XREFs of GetNVMeRegisterAddress @ 0x14002D6F4
 * Callers:
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNVMeRegisterAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 result; // rax
  unsigned int i; // r9d
  __int64 v7; // r8
  bool v8; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a2 + 52);
  result = 0LL;
  if ( v3 )
  {
    for ( i = 0; i < v3; ++i )
    {
      v7 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v7 + 16LL * i) == a3 )
      {
        v8 = *(_BYTE *)(v7 + 16LL * i + 12) == 0;
        return StorPortGetDeviceBase(
                 a1,
                 *(unsigned int *)(a2 + 8),
                 *(unsigned int *)(a2 + 4),
                 *(_QWORD *)(v7 + 16LL * i),
                 *(_DWORD *)(v7 + 16LL * i + 8),
                 v8);
      }
    }
  }
  return result;
}
