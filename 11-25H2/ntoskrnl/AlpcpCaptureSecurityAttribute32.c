/*
 * XREFs of AlpcpCaptureSecurityAttribute32 @ 0x1408AE8AC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1408B1B80 (AlpcpCaptureAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408AFA20 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute32(__int64 a1, int *a2, __int64 a3)
{
  int v5; // edi
  unsigned int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+48h] [rbp-30h]

  v5 = a1;
  v10 = 0LL;
  v11 = 0;
  v8 = *a2;
  v9 = a2[2];
  v6 = a2[1];
  if ( v6 )
  {
    RtlCopyVolatileMemory(&v10, (const void *)v6, 0xCuLL);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 260);
    v11 = *(_DWORD *)(a1 + 268);
  }
  result = AlpcpCaptureSecurityAttributeInternal(v5, v8, (unsigned int)&v10, (unsigned int)&v9, a3);
  if ( (int)result >= 0 )
    a2[2] = v9;
  return result;
}
