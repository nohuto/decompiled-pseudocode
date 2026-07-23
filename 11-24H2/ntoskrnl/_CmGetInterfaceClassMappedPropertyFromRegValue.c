/*
 * XREFs of _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1408B99E8
 * Callers:
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x14081FA8C (_CmGetInterfaceClassMappedPropertyKeys.c)
 *     _PnpDispatchInterfaceClass @ 0x1408B9700 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  __int64 v10; // r12
  int v12; // ebx
  int v13; // esi
  unsigned int v14; // r8d
  int v15; // r10d
  DEVPROPKEY **v16; // rdx
  DEVPROPKEY *v17; // r11
  DEVPROPKEY **v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v26; // edi
  int v27; // [rsp+40h] [rbp-30h] BYREF
  int v28; // [rsp+44h] [rbp-2Ch] BYREF
  HANDLE v29; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  _DWORD *v31; // [rsp+58h] [rbp-18h]
  _DWORD *v32; // [rsp+60h] [rbp-10h]

  v10 = a6;
  v32 = a5;
  *a5 = 0;
  v12 = 0;
  *a8 = 0;
  v31 = a8;
  v28 = 0;
  Handle = 0LL;
  v29 = 0LL;
  if ( a6 )
  {
    v13 = a7;
    v10 = -(__int64)(a7 != 0) & a6;
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 < 2 )
    return (unsigned int)-1073741264;
  v15 = 0;
  v16 = &off_140B3CE50;
  do
  {
    v17 = *v16;
    v18 = v16;
    if ( v14 == (*v16)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v18 = 0LL;
    ++v15;
    v16 += 2;
  }
  while ( !v15 );
  if ( !v18 )
    return (unsigned int)-1073741264;
  if ( v14 == 2 )
  {
    v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v20 )
    {
      if ( !a3 )
      {
        v12 = CmOpenCommonClassRegKey(a1, a2, 64, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( v12 < 0 )
          goto LABEL_22;
        a3 = Handle;
      }
      v12 = 0;
      if ( a1 && (v21 = *(_QWORD *)(a1 + 224)) != 0 )
        v22 = *(_QWORD *)(v21 + 8);
      else
        v22 = 0LL;
      v23 = RegRtlOpenKeyTransacted(a3, L"Properties", 0LL, 1LL, &v29, v22);
      if ( v23 == -1073741772 )
        goto LABEL_19;
      if ( v23 == -1073741444 )
        goto LABEL_21;
      if ( v23 < 0 )
LABEL_19:
        v12 = v23;
      if ( v12 == -1073741772 )
      {
LABEL_21:
        v12 = -1073741275;
        goto LABEL_22;
      }
      if ( v12 >= 0 )
      {
        v27 = v13;
        v26 = PnpCtxRegQueryValue(v24, v29, L"Default", &v28, v10, &v27);
        ZwClose(v29);
        if ( v26 != -1073741772 && v26 != -1073741444 )
        {
          if ( !v26 || v26 == -1073741789 )
          {
            *v31 = v27;
            *v32 = 18;
            if ( v26 || !v13 )
              v12 = -1073741789;
          }
          else
          {
            v12 = v26;
          }
          goto LABEL_22;
        }
        goto LABEL_21;
      }
LABEL_22:
      if ( Handle )
        ZwClose(Handle);
    }
  }
  return (unsigned int)v12;
}
