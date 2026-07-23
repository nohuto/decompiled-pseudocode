/*
 * XREFs of DrvDbSetDeviceIdMappedProperty @ 0x140924D44
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1409254C0 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140823BCC (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140980664 (DrvDbSetDeviceIdDriverInfMatches.c)
 */

__int64 __fastcall DrvDbSetDeviceIdMappedProperty(int a1, int a2, void *a3, __int64 a4, int a5, int *a6, int a7)
{
  HANDLE v7; // r10
  int v9; // r9d
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 i; // rdx
  __int64 **v17; // r14
  __int64 *v18; // r8
  __int64 v19; // rcx
  int v20; // edi
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0LL;
  v9 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  if ( v9 == 2 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  for ( i = 0LL; ; i = 1LL )
  {
    if ( (_DWORD)i )
      return (unsigned int)-1073741802;
    v17 = &(&off_140002170)[5 * i];
    v18 = *v17;
    if ( *((_DWORD *)*v17 + 4) == v9 )
    {
      v19 = *v18 - *(_QWORD *)a4;
      if ( *v18 == *(_QWORD *)a4 )
        v19 = v18[1] - *(_QWORD *)(a4 + 8);
      if ( !v19 )
        break;
    }
  }
  if ( !v17 )
    return (unsigned int)-1073741802;
  v20 = a5;
  if ( a5 != *((_DWORD *)v17 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( a3
    || (v21 = DrvDbOpenObjectRegKey(a1, 0, 5, a2, 3, 0, (__int64)&Handle, 0LL, 0LL), v7 = Handle, v14 = v21, v21 >= 0) )
  {
    if ( *(_DWORD *)(a4 + 16) != 3 )
      goto LABEL_37;
    v22 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v22 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v22 )
    {
LABEL_37:
      if ( a3 )
        v7 = a3;
      v23 = DrvDbSetRegValueMappedProperty(v19, (__int64)v7, (__int64)v17, v20, a6, a7);
    }
    else
    {
      if ( v20 == 8210 )
      {
        if ( !a6 || !a7 )
        {
LABEL_30:
          v14 = -1073741811;
          goto LABEL_18;
        }
      }
      else if ( v20 || a6 || a7 )
      {
        goto LABEL_30;
      }
      if ( a3 )
        v7 = a3;
      v23 = DrvDbSetDeviceIdDriverInfMatches(v19, v7);
    }
    v7 = Handle;
    v14 = v23;
  }
LABEL_18:
  if ( v7 )
    ZwClose(v7);
  return v14;
}
