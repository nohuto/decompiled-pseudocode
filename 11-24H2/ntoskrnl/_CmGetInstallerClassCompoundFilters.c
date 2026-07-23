/*
 * XREFs of _CmGetInstallerClassCompoundFilters @ 0x1409AE104
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409ADE0C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409AE2B4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFilters(
        _QWORD *a1,
        WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v10; // r15d
  const DEVPROPKEY *v12; // r14
  int v13; // ebx
  HANDLE v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r12
  int v19; // r13d
  int InstallerClassMappedPropertyFromRegProp; // eax
  __int64 v22; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v24; // [rsp+A8h] [rbp+20h] BYREF

  Handle = 0LL;
  v24 = 0LL;
  v10 = (int)a2;
  if ( *(_DWORD *)(a4 + 16) != 20 )
    goto LABEL_2;
  v22 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v22 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
  v12 = &DEVPKEY_DeviceClass_UpperFilters;
  if ( v22 )
LABEL_2:
    v12 = &DEVPKEY_DeviceClass_LowerFilters;
  if ( a3 )
  {
    v14 = a3;
    Handle = a3;
  }
  else
  {
    v13 = CmOpenCommonClassRegKey(a1, a2, 32, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v13 < 0 )
      goto LABEL_12;
    v14 = Handle;
  }
  if ( a1 && (v15 = a1[28]) != 0 )
    v16 = *(_QWORD *)(v15 + 8);
  else
    v16 = 0LL;
  v17 = RegRtlOpenKeyTransacted((__int64)v14, L"Filters", 0, 0x2001Fu, &v24, v16);
  v18 = a8;
  v13 = v17;
  v19 = a7;
  if ( v17 < 0
    || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassCompoundFiltersWorker(
                                                    (__int64)a1,
                                                    v10,
                                                    (int)Handle,
                                                    (__int64)v24,
                                                    a4,
                                                    (__int64)v12,
                                                    a5,
                                                    a6,
                                                    a7,
                                                    a8),
        InstallerClassMappedPropertyFromRegProp == -1073741772)
    || InstallerClassMappedPropertyFromRegProp == -1073741444
    || InstallerClassMappedPropertyFromRegProp == -1073741275 )
  {
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                (_DWORD)a1,
                                                v10,
                                                (_DWORD)Handle,
                                                (_DWORD)v12,
                                                (__int64)a5,
                                                a6,
                                                v19,
                                                v18);
  }
  else if ( InstallerClassMappedPropertyFromRegProp >= 0 )
  {
    goto LABEL_12;
  }
  v13 = InstallerClassMappedPropertyFromRegProp;
LABEL_12:
  if ( Handle && !a3 )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  return (unsigned int)v13;
}
