/*
 * XREFs of PiDevCfgCopyObjectProperties @ 0x14099AE24
 * Callers:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072A318 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x14099A308 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14099A464 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x14099AD60 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C7EF0 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CD438 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyKeys @ 0x1409917C0 (_PnpGetObjectPropertyKeys.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409920EC (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgSetObjectProperty @ 0x140A7620C (PiDevCfgSetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyObjectProperties(
        _QWORD *a1,
        WCHAR *a2,
        unsigned int a3,
        __int64 a4,
        ULONG a5,
        WCHAR *a6,
        int a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  _QWORD *v11; // rax
  unsigned int v12; // r12d
  int ObjectPropertyKeys; // eax
  int ObjectProperty; // ebx
  void *v20; // r15
  int GenericStorePropertyKeys; // eax
  void *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // rax
  HANDLE v28; // r9
  HANDLE v29; // rcx
  int v30; // eax
  int v31; // [rsp+20h] [rbp-69h]
  int v32; // [rsp+20h] [rbp-69h]
  ULONG v33; // [rsp+60h] [rbp-29h]
  int v34; // [rsp+64h] [rbp-25h] BYREF
  __int64 v35; // [rsp+68h] [rbp-21h]
  char *Pool2; // [rsp+70h] [rbp-19h]
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  HANDLE v38; // [rsp+80h] [rbp-9h] BYREF
  _QWORD *v39; // [rsp+88h] [rbp-1h]
  unsigned int v41; // [rsp+E8h] [rbp+5Fh] BYREF

  v11 = *(_QWORD **)&PiPnpRtlCtx;
  v12 = 0;
  v39 = *(_QWORD **)&PiPnpRtlCtx;
  Handle = 0LL;
  v38 = 0LL;
  v41 = 0;
  v34 = 1;
  a5 = 0;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( ObjectProperty < 0 )
      goto LABEL_7;
    v11 = v39;
  }
  if ( a8 || (ObjectProperty = PnpOpenObjectRegKey(v11, a6, a7, 33554433, 0, (__int64)&v38), ObjectProperty >= 0) )
  {
    if ( a3 )
    {
      v25 = (__int64)Handle;
      if ( a4 )
        v25 = a4;
      ObjectPropertyKeys = PnpGetObjectPropertyKeys((__int64)a1, (__int64)a2, a3, v25, v31, 0, 0LL, 0, (__int64)&v41);
    }
    else
    {
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys((__int64)a1, a4, 0LL, 0, 0LL, 0, &v41);
    }
    ObjectProperty = ObjectPropertyKeys;
    if ( (int)(ObjectPropertyKeys + 0x80000000) < 0 || ObjectPropertyKeys == -1073741789 )
    {
      if ( !v41 )
      {
        ObjectProperty = 0;
        goto LABEL_7;
      }
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v20 = Pool2;
      if ( !Pool2 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_7;
      }
      if ( a3 )
      {
        v26 = (__int64)Handle;
        if ( a4 )
          v26 = a4;
        GenericStorePropertyKeys = PnpGetObjectPropertyKeys(
                                     (__int64)a1,
                                     (__int64)a2,
                                     a3,
                                     v26,
                                     v32,
                                     0,
                                     (__int64)Pool2,
                                     v41,
                                     (__int64)&v41);
      }
      else
      {
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys((__int64)a1, a4, 0LL, 0, (__int64)Pool2, v41, &v41);
      }
      ObjectProperty = GenericStorePropertyKeys;
      if ( GenericStorePropertyKeys < 0 )
        goto LABEL_19;
      v33 = 256;
      v22 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v22 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_19;
      }
      while ( 1 )
      {
        if ( v12 >= v41 )
        {
LABEL_53:
          ExFreePoolWithTag(v22, 0);
LABEL_54:
          v20 = Pool2;
LABEL_19:
          ExFreePoolWithTag(v20, 0);
          break;
        }
        if ( !a9 || (unsigned __int8)guard_dispatch_icall_no_overrides(&Pool2[20 * v12], a10, v23, v24) )
        {
          v27 = (__int64)&Pool2[20 * v12];
          v35 = v27;
          if ( a3 )
          {
            v28 = Handle;
            if ( a4 )
              v28 = (HANDLE)a4;
            ObjectProperty = PnpGetObjectProperty(
                               a1,
                               a2,
                               a3,
                               v28,
                               0LL,
                               v27,
                               &v34,
                               (const wchar_t *)v22,
                               v33,
                               (__int64)&a5,
                               a11);
            if ( ObjectProperty == -1073741822 )
              goto LABEL_39;
          }
          else
          {
            ObjectProperty = PnpGetGenericStoreProperty((__int64)a1, a4, 0LL, v27, &v34, v22, v33, &a5);
          }
          if ( ObjectProperty == -1073741789 )
          {
            if ( a5 <= v33 )
            {
              ObjectProperty = -1073741595;
              goto LABEL_53;
            }
            ExFreePoolWithTag(v22, 0);
            v33 = a5;
            v22 = (void *)ExAllocatePool2(0x100uLL);
            if ( !v22 )
            {
              ObjectProperty = -1073741670;
              goto LABEL_54;
            }
            ObjectProperty = 0;
            --v12;
          }
          else
          {
            if ( ObjectProperty < 0 )
              goto LABEL_53;
            v29 = v38;
            if ( a8 )
              v29 = a8;
            v30 = PiDevCfgSetObjectProperty((_DWORD)v39, 0, (_DWORD)a6, a7, (__int64)v29);
            ObjectProperty = v30;
            if ( v30 == -1073741790 )
            {
LABEL_39:
              ObjectProperty = 0;
              goto LABEL_50;
            }
            if ( v30 < 0 )
              goto LABEL_53;
          }
        }
LABEL_50:
        ++v12;
      }
    }
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    ZwClose(v38);
  return (unsigned int)ObjectProperty;
}
