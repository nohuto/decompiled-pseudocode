/*
 * XREFs of AlpcpCaptureSecurityAttribute32 @ 0x140A0C624
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140899420 (AlpcpCaptureAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute32(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+48h] [rbp-30h]

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
  result = AlpcpCaptureSecurityAttributeInternal(a1, v8, (__int64)&v10, &v9, a3);
  if ( (int)result >= 0 )
    a2[2] = v9;
  return result;
}
