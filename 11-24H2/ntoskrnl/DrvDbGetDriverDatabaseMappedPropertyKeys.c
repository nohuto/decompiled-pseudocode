/*
 * XREFs of DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14082237C
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1408BB400 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     DrvDbGetDriverDatabaseCompositeMappedPropertyKeys @ 0x14082226C (DrvDbGetDriverDatabaseCompositeMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x140822D0C (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x140928D98 (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // r14
  __int64 v8; // rsi
  unsigned int v10; // edi
  int DriverDatabaseCompositeMappedPropertyKeys; // ebx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // ecx
  int v15; // edx
  HANDLE *p_Handle; // [rsp+20h] [rbp-50h]
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v20[2]; // [rsp+60h] [rbp-10h] BYREF
  HANDLE v21; // [rsp+B0h] [rbp+40h]

  v21 = a3;
  v6 = a6;
  v19 = 0LL;
  v8 = a4;
  Handle = 0LL;
  *a6 = 0;
  v10 = a5;
  v20[0] = 0LL;
  LODWORD(a6) = 0;
  if ( !a3 )
  {
    p_Handle = &Handle;
    DriverDatabaseCompositeMappedPropertyKeys = DrvDbOpenDriverDatabaseRegKey(a1, a2, 1LL, 0LL);
    if ( DriverDatabaseCompositeMappedPropertyKeys < 0 )
      goto LABEL_31;
    a3 = Handle;
  }
  DriverDatabaseCompositeMappedPropertyKeys = DrvDbGetDriverDatabaseCompositeMappedPropertyKeys(
                                                a1,
                                                a2,
                                                (__int64)a3,
                                                a4,
                                                (int)p_Handle,
                                                v8,
                                                a5,
                                                v6);
  if ( DriverDatabaseCompositeMappedPropertyKeys >= 0 )
  {
    v12 = *v6;
    if ( (_DWORD)v12 )
    {
      if ( v8 )
        v8 += 20 * v12;
      if ( (unsigned int)v12 <= a5 )
        v10 = a5 - v12;
      else
        v10 = 0;
    }
    DriverDatabaseCompositeMappedPropertyKeys = DrvDbFindDatabaseNode(a1, a2, &v19);
    if ( DriverDatabaseCompositeMappedPropertyKeys >= 0 )
    {
      if ( (*(_DWORD *)(v19 + 64) & 0x10) != 0 )
      {
        DriverDatabaseCompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(
                                                      a1,
                                                      *(_QWORD *)(a1 + 40),
                                                      1,
                                                      a2,
                                                      1,
                                                      0,
                                                      (__int64)v20,
                                                      0LL,
                                                      0LL);
        if ( DriverDatabaseCompositeMappedPropertyKeys < 0 )
          goto LABEL_31;
        DriverDatabaseCompositeMappedPropertyKeys = DrvDbGetRegValueMappedPropertyKeys(
                                                      v14,
                                                      v20[0],
                                                      (unsigned int)&off_14000C7E0,
                                                      4,
                                                      v8,
                                                      v10,
                                                      (__int64)&a6);
        if ( DriverDatabaseCompositeMappedPropertyKeys < 0 )
          goto LABEL_31;
        if ( (_DWORD)a6 )
        {
          if ( v8 )
            v8 += 20LL * (unsigned int)a6;
          if ( (unsigned int)a6 <= v10 )
            v10 -= (unsigned int)a6;
          else
            v10 = 0;
          v13 = *v6 + (_DWORD)a6;
          if ( v13 < *v6 )
          {
            *v6 = 0;
            DriverDatabaseCompositeMappedPropertyKeys = -1073741675;
            goto LABEL_31;
          }
          *v6 = v13;
        }
        if ( (*(_DWORD *)(v19 + 64) & 4) != 0 )
        {
          DriverDatabaseCompositeMappedPropertyKeys = 0;
          goto LABEL_31;
        }
      }
      v15 = (int)Handle;
      if ( v21 )
        v15 = (int)v21;
      DriverDatabaseCompositeMappedPropertyKeys = DrvDbGetRegValueMappedPropertyKeys(
                                                    v13,
                                                    v15,
                                                    (unsigned int)&off_14000C600,
                                                    12,
                                                    v8,
                                                    v10,
                                                    (__int64)v6);
      if ( DriverDatabaseCompositeMappedPropertyKeys >= 0 && a5 < *v6 )
        DriverDatabaseCompositeMappedPropertyKeys = -1073741789;
    }
  }
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( v20[0] )
    ZwClose(v20[0]);
  return (unsigned int)DriverDatabaseCompositeMappedPropertyKeys;
}
