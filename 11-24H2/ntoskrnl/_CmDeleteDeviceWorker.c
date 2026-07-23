/*
 * XREFs of _CmDeleteDeviceWorker @ 0x1409AA048
 * Callers:
 *     _CmDeleteDevice @ 0x1408189D8 (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmRemoveDeviceFromContainer @ 0x14081AD60 (_CmRemoveDeviceFromContainer.c)
 *     _CmRaiseDeleteEvent @ 0x14081CA00 (_CmRaiseDeleteEvent.c)
 *     _CmRemovePanelDevice @ 0x14081E14C (_CmRemovePanelDevice.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmSetDeviceMappedProperty @ 0x140980AE0 (_CmSetDeviceMappedProperty.c)
 *     _CmGetMatchingDeviceList @ 0x1409AA61C (_CmGetMatchingDeviceList.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409AA710 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteDeviceRegKey @ 0x1409AAB2C (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceInterface @ 0x1409AABD0 (_CmDeleteDeviceInterface.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409AB838 (_CmGetDeviceMappedPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(_QWORD *a1, WCHAR *a2, __int16 a3)
{
  _WORD *v5; // r13
  void *v6; // r14
  wchar_t *Pool2; // rsi
  ULONG v8; // r15d
  int DeviceContainerIdFromBase; // ebx
  int DeviceRegProp; // eax
  int v11; // r15d
  int ObjectProperty; // eax
  _WORD *v13; // rdi
  int MatchingFilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  _WORD *v16; // r15
  _WORD *v17; // rdi
  int MatchingDeviceList; // eax
  int v19; // r9d
  unsigned int *v20; // r15
  unsigned int v21; // edi
  const WCHAR *v22; // r15
  unsigned int v23; // edi
  int DeviceMappedPropertyKeys; // eax
  unsigned int j; // edi
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned int i; // eax
  __int64 v34; // rax
  ULONG v35; // [rsp+40h] [rbp-C0h]
  unsigned int v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  int v42[2]; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v44[3]; // [rsp+8Ch] [rbp-74h] BYREF
  _OWORD v45[2]; // [rsp+98h] [rbp-68h] BYREF
  wchar_t v46[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v47[40]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)v42 = a2;
  Handle = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v38 = 0;
  Pool2 = 0LL;
  v39 = 0;
  v8 = 0;
  v44[0] = 0;
  v36 = 0;
  v43 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  DeviceContainerIdFromBase = CmOpenDeviceRegKey((__int64)a1, (__int64)a2, 16, 0, 33619970, 0, (__int64)&Handle, 0LL);
  if ( DeviceContainerIdFromBase >= 0 )
  {
    v36 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      (__int64)a1,
                      (__int64)a2,
                      (__int64)Handle,
                      0x25u,
                      (__int64)v44,
                      (__int64)v46,
                      (__int64)&v36,
                      0);
    DeviceContainerIdFromBase = DeviceRegProp;
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp == -1073741275 )
        goto LABEL_5;
      goto LABEL_41;
    }
    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(a1, a2, v46, v47);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = CmRemoveDeviceFromContainer((__int64)a1, (__int64)v47, (__int64)v46, (__int64)a2);
      if ( DeviceContainerIdFromBase >= 0 )
      {
LABEL_5:
        while ( 1 )
        {
          v35 = v8;
          v11 = (int)a2;
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             1u,
                             Handle,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelId,
                             &v43,
                             Pool2,
                             v35,
                             (__int64)&v36,
                             0);
          DeviceContainerIdFromBase = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          v8 = v36;
          Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v36, 0x52504E50u);
          if ( !Pool2 )
          {
            DeviceContainerIdFromBase = -1073741801;
            goto LABEL_39;
          }
        }
        if ( ObjectProperty >= 0 )
        {
          if ( v43 != 18 || v36 < 2 || Pool2[((unsigned __int64)v36 >> 1) - 1] )
          {
            DeviceContainerIdFromBase = -1073741823;
LABEL_39:
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            goto LABEL_41;
          }
          DeviceContainerIdFromBase = CmRemovePanelDevice((__int64)a1, (__int64)Pool2, (__int64)a2);
          if ( DeviceContainerIdFromBase < 0 )
            goto LABEL_39;
        }
        else if ( ObjectProperty != -1073741275 )
        {
          goto LABEL_39;
        }
        for ( i = 0; ; i = v38 )
        {
          v13 = v5;
          MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                                  (_DWORD)a1,
                                                  0,
                                                  v11,
                                                  0,
                                                  0LL,
                                                  0LL,
                                                  (__int64)v5,
                                                  i,
                                                  (__int64)&v38,
                                                  0);
          DeviceContainerIdFromBase = MatchingFilteredDeviceInterfaceList;
          if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
            break;
          v30 = 2LL * v38;
          if ( v30 > 0xFFFFFFFF )
          {
            DeviceContainerIdFromBase = -1073741811;
            goto LABEL_35;
          }
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          v5 = (_WORD *)ExAllocatePool2(0x100uLL, (unsigned int)v30, 0x52504E50u);
          if ( !v5 )
          {
            DeviceContainerIdFromBase = -1073741801;
            goto LABEL_35;
          }
        }
        if ( !MatchingFilteredDeviceInterfaceList )
        {
          if ( v38 && *v5 )
          {
            do
            {
              CmDeleteDeviceInterface(a1, v13, 0LL);
              v28 = -1LL;
              do
                ++v28;
              while ( v13[v28] );
              v13 += v28 + 1;
            }
            while ( *v13 );
          }
          v15 = 0;
          v16 = 0LL;
          while ( 1 )
          {
            v17 = v16;
            MatchingDeviceList = CmGetMatchingDeviceList(
                                   (_DWORD)a1,
                                   (unsigned int)&CmMatchLastKnownParentCallback,
                                   v42[0],
                                   (_DWORD)v16,
                                   v15,
                                   (__int64)&v39,
                                   0);
            DeviceContainerIdFromBase = MatchingDeviceList;
            if ( MatchingDeviceList != -1073741789 )
              break;
            v31 = 2LL * v39;
            if ( v31 > 0xFFFFFFFF )
            {
LABEL_90:
              DeviceContainerIdFromBase = -1073741811;
              goto LABEL_33;
            }
            if ( v16 )
              ExFreePoolWithTag(v16, 0);
            P = (PVOID)ExAllocatePool2(0x100uLL, (unsigned int)v31, 0x52504E50u);
            v16 = P;
            if ( !P )
            {
LABEL_96:
              DeviceContainerIdFromBase = -1073741801;
              goto LABEL_33;
            }
            v15 = v39;
          }
          P = v16;
          if ( !MatchingDeviceList )
          {
            P = v16;
            if ( v39 )
            {
              P = v16;
              if ( *v16 )
              {
                P = v16;
                do
                {
                  PnpSetObjectProperty(
                    (__int64)a1,
                    (__int64)v17,
                    1,
                    0LL,
                    0LL,
                    (__int64)DEVPKEY_Device_LastKnownParent,
                    0,
                    0LL,
                    0,
                    0);
                  v34 = -1LL;
                  do
                    ++v34;
                  while ( v17[v34] );
                  v17 += v34 + 1;
                }
                while ( *v17 );
              }
            }
            v20 = (unsigned int *)v45;
            v21 = 0;
            v45[0] = _mm_load_si128((const __m128i *)&_xmm);
            v45[1] = _mm_load_si128((const __m128i *)&_xmm);
            while ( v21 < 8 )
            {
              v27 = CmDeleteDeviceRegKey(a1, *(_QWORD *)v42, *v20, 0LL);
              DeviceContainerIdFromBase = v27;
              if ( v27 && v27 != -1073741772 && v27 != -1073741811 && v27 != -1073741637 )
              {
                if ( v27 < 0 )
                  goto LABEL_33;
                break;
              }
              ++v21;
              ++v20;
            }
            v22 = *(const WCHAR **)v42;
            v6 = 0LL;
            v23 = 0;
            v37 = 0;
            while ( 1 )
            {
              LOBYTE(v19) = 1;
              DeviceMappedPropertyKeys = CmGetDeviceMappedPropertyKeys(
                                           (_DWORD)a1,
                                           (_DWORD)v22,
                                           (_DWORD)Handle,
                                           v19,
                                           (__int64)v6,
                                           v23,
                                           (__int64)&v37);
              DeviceContainerIdFromBase = DeviceMappedPropertyKeys;
              if ( DeviceMappedPropertyKeys != -1073741789 )
                break;
              v23 = v37;
              v32 = 20LL * v37;
              if ( v32 > 0xFFFFFFFF )
                goto LABEL_90;
              if ( v6 )
                ExFreePoolWithTag(v6, 0);
              v6 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v32, 0x52504E50u);
              if ( !v6 )
                goto LABEL_96;
            }
            if ( !DeviceMappedPropertyKeys || DeviceMappedPropertyKeys == -1073741275 )
            {
              for ( j = 0; j < v37; ++j )
              {
                v26 = CmSetDeviceMappedProperty((__int64)a1, v22, Handle, 0LL, (__int64)v6 + 20 * j, 0, 0LL, 0);
                DeviceContainerIdFromBase = v26;
                if ( v26 && v26 != -1073741275 && v26 != -1073741790 && v26 != -1073741802 && v26 != -1073741637 )
                {
                  if ( v26 < 0 )
                    goto LABEL_33;
                  break;
                }
              }
              DeviceContainerIdFromBase = CmDeleteDeviceRegKey(a1, v22, 16LL, 0LL);
              if ( DeviceContainerIdFromBase >= 0 )
                CmRaiseDeleteEvent((__int64)a1, (__int64)v22, 1u);
            }
          }
LABEL_33:
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
LABEL_35:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_39;
      }
    }
  }
LABEL_41:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceContainerIdFromBase;
}
