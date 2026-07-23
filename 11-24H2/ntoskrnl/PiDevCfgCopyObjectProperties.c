/*
 * XREFs of PiDevCfgCopyObjectProperties @ 0x1409CD594
 * Callers:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140727F68 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1409CCA78 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1409CCBD4 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1409CD4D0 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyKeys @ 0x14097C800 (_PnpGetObjectPropertyKeys.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgSetObjectProperty @ 0x140A70328 (PiDevCfgSetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rax
  HANDLE v26; // r9
  HANDLE v27; // rcx
  int v28; // eax
  int v29; // [rsp+20h] [rbp-69h]
  int v30; // [rsp+20h] [rbp-69h]
  ULONG v31; // [rsp+60h] [rbp-29h]
  int v32; // [rsp+64h] [rbp-25h] BYREF
  __int64 v33; // [rsp+68h] [rbp-21h]
  char *Pool2; // [rsp+70h] [rbp-19h]
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  HANDLE v36; // [rsp+80h] [rbp-9h] BYREF
  _QWORD *v37; // [rsp+88h] [rbp-1h]
  unsigned int v39; // [rsp+E8h] [rbp+5Fh] BYREF

  v11 = *(_QWORD **)&PiPnpRtlCtx;
  v12 = 0;
  v37 = *(_QWORD **)&PiPnpRtlCtx;
  Handle = 0LL;
  v36 = 0LL;
  v39 = 0;
  v32 = 1;
  a5 = 0;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( ObjectProperty < 0 )
      goto LABEL_7;
    v11 = v37;
  }
  if ( a8 || (ObjectProperty = PnpOpenObjectRegKey(v11, a6, a7, 33554433, 0, (__int64)&v36), ObjectProperty >= 0) )
  {
    if ( a3 )
    {
      v23 = (__int64)Handle;
      if ( a4 )
        v23 = a4;
      ObjectPropertyKeys = PnpGetObjectPropertyKeys((__int64)a1, (__int64)a2, a3, v23, v29, 0, 0LL, 0, (__int64)&v39);
    }
    else
    {
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys((__int64)a1, a4, 0LL, 0, 0LL, 0, &v39);
    }
    ObjectProperty = ObjectPropertyKeys;
    if ( (int)(ObjectPropertyKeys + 0x80000000) < 0 || ObjectPropertyKeys == -1073741789 )
    {
      if ( !v39 )
      {
        ObjectProperty = 0;
        goto LABEL_7;
      }
      Pool2 = (char *)ExAllocatePool2(0x100uLL, 20LL * v39, 0x63647050u);
      v20 = Pool2;
      if ( !Pool2 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_7;
      }
      if ( a3 )
      {
        v24 = (__int64)Handle;
        if ( a4 )
          v24 = a4;
        GenericStorePropertyKeys = PnpGetObjectPropertyKeys(
                                     (__int64)a1,
                                     (__int64)a2,
                                     a3,
                                     v24,
                                     v30,
                                     0,
                                     (__int64)Pool2,
                                     v39,
                                     (__int64)&v39);
      }
      else
      {
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys((__int64)a1, a4, 0LL, 0, (__int64)Pool2, v39, &v39);
      }
      ObjectProperty = GenericStorePropertyKeys;
      if ( GenericStorePropertyKeys < 0 )
        goto LABEL_19;
      v31 = 256;
      v22 = (void *)ExAllocatePool2(0x100uLL, 0x100uLL, 0x63647050u);
      if ( !v22 )
      {
        ObjectProperty = -1073741670;
        goto LABEL_19;
      }
      while ( 1 )
      {
        if ( v12 >= v39 )
        {
LABEL_53:
          ExFreePoolWithTag(v22, 0);
LABEL_54:
          v20 = Pool2;
LABEL_19:
          ExFreePoolWithTag(v20, 0);
          break;
        }
        if ( !a9 || (unsigned __int8)guard_dispatch_icall_no_overrides(&Pool2[20 * v12], a10) )
        {
          v25 = (__int64)&Pool2[20 * v12];
          v33 = v25;
          if ( a3 )
          {
            v26 = Handle;
            if ( a4 )
              v26 = (HANDLE)a4;
            ObjectProperty = PnpGetObjectProperty(
                               a1,
                               a2,
                               a3,
                               v26,
                               0LL,
                               v25,
                               &v32,
                               (const wchar_t *)v22,
                               v31,
                               (__int64)&a5,
                               a11);
            if ( ObjectProperty == -1073741822 )
              goto LABEL_39;
          }
          else
          {
            ObjectProperty = PnpGetGenericStoreProperty((__int64)a1, a4, 0LL, v25, &v32, v22, v31, &a5);
          }
          if ( ObjectProperty == -1073741789 )
          {
            if ( a5 <= v31 )
            {
              ObjectProperty = -1073741595;
              goto LABEL_53;
            }
            ExFreePoolWithTag(v22, 0);
            v31 = a5;
            v22 = (void *)ExAllocatePool2(0x100uLL, a5, 0x63647050u);
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
            v27 = v36;
            if ( a8 )
              v27 = a8;
            v28 = PiDevCfgSetObjectProperty((_DWORD)v37, 0, (_DWORD)a6, a7, (__int64)v27);
            ObjectProperty = v28;
            if ( v28 == -1073741790 )
            {
LABEL_39:
              ObjectProperty = 0;
              goto LABEL_50;
            }
            if ( v28 < 0 )
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
  if ( v36 )
    ZwClose(v36);
  return (unsigned int)ObjectProperty;
}
