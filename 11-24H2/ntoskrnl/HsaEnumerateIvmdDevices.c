/*
 * XREFs of HsaEnumerateIvmdDevices @ 0x14056FFA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHsaCreateReservedDevice @ 0x14056EBB8 (HalpHsaCreateReservedDevice.c)
 */

__int64 __fastcall HsaEnumerateIvmdDevices(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD *v8; // r14
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *ReservedDevice; // rax

  v5 = *(_QWORD *)(a1 + 208);
  if ( *a2 >= *(_DWORD *)v5 )
  {
    v8 = (_QWORD *)(v5 + 8);
    v9 = 0LL;
    v10 = *(_QWORD **)(v5 + 8);
    while ( v10 != v8 && (unsigned int)v9 < **(_DWORD **)(a1 + 208) )
    {
      ReservedDevice = HalpHsaCreateReservedDevice(*(unsigned __int16 *)(a1 + 160), (__int64)v10);
      *(_QWORD *)(a3 + 8 * v9) = ReservedDevice;
      if ( !ReservedDevice )
        return 3221225626LL;
      v10 = (_QWORD *)*v10;
      v9 = (unsigned int)(v9 + 1);
    }
    result = 0LL;
    *a2 = **(_DWORD **)(a1 + 208);
  }
  else
  {
    *a2 = *(_DWORD *)v5;
    return 3221225507LL;
  }
  return result;
}
