/*
 * XREFs of DrvDbGetDriverPackageSignerName @ 0x140822C44
 * Callers:
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbGetRegValueMappedProperty @ 0x140925BB0 (DrvDbGetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverPackageSignerName(__int64 a1, __int64 a2, int a3, void *a4, int a5, unsigned int *a6)
{
  unsigned int *v6; // rbx
  unsigned int v8; // edx
  __int64 (**v9)[3]; // r8
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+5Ch] [rbp+14h]

  v16 = HIDWORD(a2);
  v14 = HIDWORD(a1);
  v6 = a6;
  v13 = 0;
  v15 = 0;
  v8 = 0;
  *a6 = 0;
  while ( 1 )
  {
    if ( v8 >= 0x29 )
      return 3221225701LL;
    v9 = &off_14000C880 + 5 * v8;
    v10 = (__int64 *)*v9;
    if ( LODWORD((**v9)[2]) == 7 )
    {
      v11 = *v10 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *v10 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v11 = v10[1] + 0x4524B8338B5D1E6CLL;
      if ( !v11 )
        break;
    }
    ++v8;
  }
  if ( !v9 )
    return 3221225701LL;
  result = DrvDbGetRegValueMappedProperty((int)&v15, a3, (int)v9, (int)&v13, a4, 2 * a5, (__int64)&v15);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741789 )
    *v6 = v15 >> 1;
  return result;
}
