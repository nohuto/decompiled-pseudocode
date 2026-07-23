/*
 * XREFs of _CmSetInstallerClassMappedProperty @ 0x14081FF04
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x1408192B0 (_CmDeleteInstallerClassWorker.c)
 *     _PnpDispatchInstallerClass @ 0x1409ADA00 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14081E990 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegProp @ 0x1408201BC (_CmSetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B6F54 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A937F0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  unsigned int v11; // ebx
  __int64 v12; // rdi
  int v13; // r12d
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int i; // edx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  int CachedContextBaseKey; // eax
  __int64 v26; // rcx
  unsigned int j; // edx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v11 = -1073741802;
  if ( a4 )
    return v11;
  v12 = a5;
  while ( 1 )
  {
    v13 = a8;
    v14 = a7;
    v15 = a6;
    if ( (unsigned int)a4 >= 9 )
      goto LABEL_11;
    v16 = (__int64)*(&CmClassRegPropMap + 3 * a4);
    if ( v16 && *(_DWORD *)(a5 + 16) == *(_DWORD *)(v16 + 16) )
    {
      v17 = *(_QWORD *)a5 - *(_QWORD *)v16;
      if ( *(_QWORD *)a5 == *(_QWORD *)v16 )
        v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v16 + 8);
      if ( !v17 )
        break;
    }
    a4 = (unsigned int)(a4 + 1);
  }
  v11 = CmSetInstallerClassMappedPropertyFromRegProp(a1, a2, (_DWORD)a3, a5, a6, a7, a8);
  if ( v11 != -1073741802 )
    return v11;
LABEL_11:
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xD )
      goto LABEL_23;
    v19 = (__int64)*(&off_140B3F2F0 + 4 * i);
    if ( *(_DWORD *)(v12 + 16) == *(_DWORD *)(v19 + 16) )
    {
      v20 = *(_QWORD *)v12 - *(_QWORD *)v19;
      if ( *(_QWORD *)v12 == *(_QWORD *)v19 )
        v20 = *(_QWORD *)(v12 + 8) - *(_QWORD *)(v19 + 8);
      if ( !v20 )
        break;
    }
  }
  if ( v15 < 2 )
    v21 = CmDeleteInstallerClassMappedPropertyFromRegValue(a1, a2, a3, v12);
  else
    v21 = CmSetInstallerClassMappedPropertyFromRegValue(a1, a2, (_DWORD)a3, v12, v15, v14, v13);
  v11 = v21;
  if ( v21 >= 0 )
  {
LABEL_41:
    PnpObjectRaisePropertyChangeEvent(a1, a2, 2, (_DWORD)a3, 0LL, v12);
    return v11;
  }
  if ( v21 != -1073741802 )
    return v11;
LABEL_23:
  if ( *(_DWORD *)(v12 + 16) != 2 )
    goto LABEL_43;
  v22 = *(_QWORD *)v12 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
  if ( *(_QWORD *)v12 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
    v22 = *(_QWORD *)(v12 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
  if ( v22 )
    goto LABEL_43;
  if ( v15 < 2 )
  {
    v11 = 0;
    v31 = 0LL;
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 13LL, &v31);
    if ( CachedContextBaseKey < 0 )
    {
      v11 = CachedContextBaseKey;
      goto LABEL_40;
    }
    v24 = PnpCtxRegDeleteValue(v26, v31, a2);
    if ( v24 != -1073741772 && v24 != -1073741444 )
      goto LABEL_38;
  }
  else
  {
    v31 = 0LL;
    if ( v15 != 8210 )
    {
      v11 = -1073741811;
      goto LABEL_40;
    }
    v11 = PnpCtxGetCachedContextBaseKey(a1, 13LL, &v31);
    if ( (v11 & 0x80000000) == 0 )
    {
      v24 = PnpCtxRegSetValue(v23, v31, a2, 7LL, v14, v13);
      if ( v24 == -1073741444 )
      {
        v11 = -1073741595;
        goto LABEL_40;
      }
      v11 = 0;
LABEL_38:
      if ( v24 < 0 )
        v11 = v24;
    }
  }
LABEL_40:
  if ( (v11 & 0x80000000) == 0 )
    goto LABEL_41;
  if ( v11 == -1073741802 )
  {
LABEL_43:
    for ( j = 0; j < 4; ++j )
    {
      v28 = (__int64)*(&off_140B3D9D0 + 2 * j);
      if ( *(_DWORD *)(v12 + 16) == *(_DWORD *)(v28 + 16) )
      {
        v29 = *(_QWORD *)v12 - *(_QWORD *)v28;
        if ( *(_QWORD *)v12 == *(_QWORD *)v28 )
          v29 = *(_QWORD *)(v12 + 8) - *(_QWORD *)(v28 + 8);
        if ( !v29 )
          return (unsigned int)-1073741790;
      }
    }
  }
  return v11;
}
