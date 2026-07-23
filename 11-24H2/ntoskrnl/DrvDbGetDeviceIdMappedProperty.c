/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x1409256C0
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1409254C0 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140924CFC (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140925AF4 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140925BB0 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14097EBEC (DrvDbGetDeviceIdDriverInfMatches.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        unsigned __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        char *a6,
        unsigned int a7,
        _DWORD *a8)
{
  void *v8; // rbx
  unsigned __int64 v10; // r15
  int v11; // r10d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // di
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  int v19; // eax
  __int64 v20; // rcx
  int RegValueMappedProperty; // ebx
  char v22; // al
  unsigned int v23; // ecx
  int v25; // ecx
  int v26; // edx
  __int64 v27; // rax
  int ObjectDatabaseNodeName; // eax
  int i; // edx
  __int64 v30; // rax
  HANDLE v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // [rsp+28h] [rbp-38h]
  int v35; // [rsp+28h] [rbp-38h]
  int v36; // [rsp+50h] [rbp-10h] BYREF
  int v37; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp+40h]
  char v40; // [rsp+B8h] [rbp+58h]

  v39 = a1;
  v8 = a3;
  Handle = 0LL;
  v10 = a1;
  v36 = 0;
  *a5 = 0;
  *a8 = 0;
  v11 = *(_DWORD *)(a4 + 16);
  v37 = 0;
  v40 = 0;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      a1 = 0xBADB47CC74A2E194uLL;
      v12 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
        v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v12 )
      {
        v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
          v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        v14 = 1;
        if ( !v13 )
          goto LABEL_9;
        goto LABEL_52;
      }
    }
LABEL_45:
    for ( i = 0; !i; i = 1 )
    {
      if ( *((_DWORD *)&DEVPKEY_DeviceId_DriverInfMatches + 4) == v11 )
      {
        v33 = DEVPKEY_DeviceId_DriverInfMatches - *(_QWORD *)a4;
        if ( DEVPKEY_DeviceId_DriverInfMatches == *(_QWORD *)a4 )
          v33 = *(&DEVPKEY_DeviceId_DriverInfMatches + 1) - *(_QWORD *)(a4 + 8);
        if ( !v33 )
        {
          if ( &off_140002170 )
          {
            if ( !a3 )
            {
              RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v10, a2, 1, 0, (__int64)&Handle, 0LL);
              if ( RegValueMappedProperty < 0 )
                goto LABEL_27;
              LODWORD(v8) = (_DWORD)Handle;
            }
            RegValueMappedProperty = DrvDbGetRegValueMappedProperty(
                                       v33,
                                       (int)v8,
                                       (int)&off_140002170,
                                       (int)a5,
                                       a6,
                                       a7,
                                       (__int64)a8);
            goto LABEL_27;
          }
          break;
        }
      }
    }
    return (unsigned int)-1073741802;
  }
  v27 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v27 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( !v27 )
  {
    *a5 = 18;
    ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 5LL, a2, a6, a7 >> 1, a8);
    RegValueMappedProperty = ObjectDatabaseNodeName;
    if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
      *a8 *= 2;
    goto LABEL_27;
  }
  v30 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
    v30 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v30 )
    goto LABEL_45;
LABEL_52:
  v14 = 0;
LABEL_9:
  if ( (*(_WORD *)a2 != 64
     || (v15 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL
     || (v16 = v15 + 1) == 0LL
     || v16 == (wchar_t *)a2)
    && !*(_QWORD *)(v10 + 48) )
  {
    v17 = (_QWORD *)(v10 + 16);
    v18 = *(_QWORD **)(v10 + 16);
    if ( v18 == v17 )
    {
LABEL_30:
      RegValueMappedProperty = -1073741772;
      goto LABEL_27;
    }
    while ( 1 )
    {
      v19 = DrvDbOpenObjectRegKey(v39, (_DWORD)v18, 5, a2, 1, 0, (__int64)&Handle, 0LL, 0LL);
      RegValueMappedProperty = v19;
      if ( v19 >= 0 )
      {
        v40 = 1;
        LOBYTE(v35) = v14;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(v20, Handle, &a6[v37], (a7 - v37) >> 1, &v36, v35);
        ZwClose(Handle);
        Handle = 0LL;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_32;
        if ( RegValueMappedProperty != -1073741275 )
        {
          if ( RegValueMappedProperty != -1073741789 )
          {
            v22 = 1;
            goto LABEL_26;
          }
LABEL_32:
          v25 = 2 * v36 - 2;
          if ( (unsigned int)(2 * v36) <= 2 )
            v25 = 2 * v36;
          if ( a6 )
          {
            v26 = v37;
            if ( v25 + v37 < a7 )
              v26 = v25 + v37;
            v37 = v26;
          }
          *a8 += v25;
          goto LABEL_18;
        }
      }
      else if ( v19 != -1073741772 )
      {
        v22 = v40;
        goto LABEL_26;
      }
      RegValueMappedProperty = 0;
LABEL_18:
      v18 = (_QWORD *)*v18;
      if ( v18 == (_QWORD *)(v39 + 16) )
      {
        v22 = v40;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_20;
LABEL_26:
        if ( RegValueMappedProperty != -1073741789 )
          goto LABEL_27;
LABEL_20:
        if ( !v22 )
          goto LABEL_30;
        if ( *a8 )
        {
          *a5 = 8210;
          v23 = *a8 + 2;
          *a8 = v23;
          if ( a6 && v23 <= a7 )
            *(_WORD *)&a6[2 * ((unsigned __int64)v23 >> 1) - 2] = 0;
          else
            RegValueMappedProperty = -1073741789;
        }
        else
        {
          RegValueMappedProperty = -1073741275;
        }
        goto LABEL_27;
      }
    }
  }
  v31 = 0LL;
  if ( v8 != (void *)-1LL )
    v31 = v8;
  if ( !v31 )
  {
    RegValueMappedProperty = DrvDbOpenObjectRegKey(v10, 0, 5, a2, 1, 0, (__int64)&Handle, 0LL, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_27;
    v31 = Handle;
  }
  LOBYTE(v34) = v14;
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(a1, v31, a6, a7 >> 1, &v36, v34);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v32 = 2 * v36;
    *a5 = 8210;
    *a8 = v32;
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
