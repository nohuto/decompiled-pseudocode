/*
 * XREFs of DrvDbSetRegValueMappedProperty @ 0x140823BCC
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140823408 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140823538 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140924D44 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall DrvDbSetRegValueMappedProperty(__int64 a1, __int64 a2, __int64 a3, int a4, int *a5, int a6)
{
  int v6; // ecx
  int *v7; // rcx
  int v8; // eax
  __int64 result; // rax
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  v10 = 0;
  if ( a4 )
  {
    if ( a4 == 5 )
    {
      if ( a6 != 2 )
        return 3221225485LL;
      v6 = *(unsigned __int16 *)a5;
    }
    else
    {
      if ( a4 != 17 )
      {
        v7 = a5;
        v8 = a6;
        return PnpCtxRegSetValue(v7, a2, *(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 24), v7, v8);
      }
      if ( a6 != 1 )
        return 3221225485LL;
      LOBYTE(v6) = *(_BYTE *)a5 == 0xFF;
    }
    v10 = v6;
    v8 = 4;
    v7 = &v10;
    return PnpCtxRegSetValue(v7, a2, *(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 24), v7, v8);
  }
  result = PnpCtxRegDeleteValue(0LL, a2, *(_QWORD *)(a3 + 16));
  if ( (_DWORD)result == -1073741772 )
    return 3221226021LL;
  return result;
}
