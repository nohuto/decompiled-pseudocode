/*
 * XREFs of NVMeFreeHostMemoryBuffer @ 0x14001DB68
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerRemove @ 0x140010BF0 (NVMeControllerRemove.c)
 * Callees:
 *     NVMeSetHostMemoryBuffer @ 0x140006A20 (NVMeSetHostMemoryBuffer.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeFreeHostMemoryBuffer(__int64 a1)
{
  unsigned int *v1; // r9
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // r11
  _DWORD *v7; // rdx
  __int64 v8; // r9
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-B0h]
  _BYTE v11[8]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v12[120]; // [rsp+48h] [rbp-90h] BYREF

  v1 = *(unsigned int **)(a1 + 3720);
  LODWORD(Size) = v1[1];
  NVMeSetHostMemoryBuffer(a1, 0, 0, *v1, v1 + 2, Size);
  v3 = *(_QWORD *)(a1 + 3720);
  v4 = 8LL;
  v5 = *(_DWORD *)(v3 + 4) >> 4;
  if ( v5 > 8 || (v4 = v5) != 0 )
  {
    v6 = (unsigned int)v4;
    v7 = (_DWORD *)(v3 + 16);
    do
    {
      *(_QWORD *)&v11[(_QWORD)v7 - v3 - 16] = *((_QWORD *)v7 - 1);
      *(_DWORD *)&v12[(_QWORD)v7 - v3 - 16] = *v7;
      v7 += 4;
      --v6;
    }
    while ( v6 );
  }
  StorPortExtendedFunction(70LL, a1, v11, v4);
  result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 3720), v8);
  *(_QWORD *)(a1 + 3720) = 0LL;
  return result;
}
