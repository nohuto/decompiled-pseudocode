/*
 * XREFs of SeDuplicateTokenAndAddOriginClaim @ 0x140AA9F14
 * Callers:
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeDuplicateTokenAndAddOriginClaim(__int64 a1, _DWORD *a2, int a3, PVOID *a4)
{
  int v7; // ebx
  __int64 v8; // r9
  PVOID v9; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int128 v15; // [rsp+68h] [rbp-18h]

  Object = 0LL;
  v14 = 0;
  v12[1] = 0LL;
  v13 = 0;
  v12[2] = 0LL;
  v12[0] = 48LL;
  v15 = 0LL;
  v7 = SepDuplicateToken(a1, (int)v12, 0, 1, 0, 0, 0, &Object);
  if ( v7 >= 0 )
  {
    LOBYTE(v8) = 1;
    v7 = SepAddTokenOriginClaim(a2, a3, (__int64)Object, v8);
    if ( v7 >= 0 )
    {
      *a4 = Object;
      return (unsigned int)v7;
    }
    v9 = Object;
  }
  else
  {
    v9 = 0LL;
    Object = 0LL;
  }
  if ( v9 )
    ObfDereferenceObject(v9);
  return (unsigned int)v7;
}
