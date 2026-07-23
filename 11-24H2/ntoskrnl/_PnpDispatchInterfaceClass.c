/*
 * XREFs of _PnpDispatchInterfaceClass @ 0x1408B9700
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14044453C (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmDeleteInterfaceClass @ 0x140819500 (_CmDeleteInterfaceClass.c)
 *     _CmGetMatchingCommonClassList @ 0x14081BF40 (_CmGetMatchingCommonClassList.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14081F984 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x14081FA8C (_CmGetInterfaceClassMappedPropertyKeys.c)
 *     _CmGetInterfaceClassMappedPropertyLocales @ 0x14081FC8C (_CmGetInterfaceClassMappedPropertyLocales.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x14082031C (_CmSetInterfaceClassMappedProperty.c)
 *     _CmValidateInstallerClassName @ 0x1408B54C0 (_CmValidateInstallerClassName.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1408B99E8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmCreateInterfaceClass @ 0x1409C3C28 (_CmCreateInterfaceClass.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140A1AF98 (_CmOpenInterfaceClassRegKey.c)
 */

__int64 __fastcall PnpDispatchInterfaceClass(__int64 a1, const WCHAR *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  int v6; // edi
  int v7; // esi
  __int128 *v8; // r8
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r10
  _DWORD *v19; // r15
  int v20; // ebp
  __int64 v21; // r12
  _DWORD *v22; // r13
  __int64 v23; // r14
  unsigned int InterfaceClassMappedPropertyFromRegValue; // ecx
  __int64 v25; // rdx
  unsigned int InterfaceClass; // eax
  int i; // r8d
  __int64 v29; // rdx
  int v30; // [rsp+40h] [rbp-48h]
  __int128 v31; // [rsp+48h] [rbp-40h] BYREF

  v5 = 0LL;
  v6 = (int)a2;
  v7 = a1;
  v8 = 0LL;
  v31 = 0LL;
  v9 = a4 - 1;
  if ( !v9 )
  {
    InterfaceClass = CmValidateInstallerClassName(a1, a2);
LABEL_20:
    InterfaceClassMappedPropertyFromRegValue = InterfaceClass;
    return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    InterfaceClass = CmOpenInterfaceClassRegKey(
                       a1,
                       (_DWORD)a2,
                       0,
                       0,
                       *(_DWORD *)a5,
                       *(_BYTE *)(a5 + 4),
                       *(_QWORD *)(a5 + 8),
                       a5 + 16);
    goto LABEL_20;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    InterfaceClass = CmCreateInterfaceClass(
                       a1,
                       (_DWORD)a2,
                       *(_DWORD *)a5,
                       (int)a5 + 8,
                       a5 + 16,
                       *(_DWORD *)(a5 + 20) & 0xFFFF0000);
    goto LABEL_20;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    InterfaceClass = CmDeleteInterfaceClass(a1, (__int64)a2, *(_DWORD *)a5 & 0xFFFF0000);
    goto LABEL_20;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v31 = *(_QWORD *)a5;
      v5 = PnpCmMatchCallbackRoutine;
      v8 = &v31;
      *((_QWORD *)&v31 + 1) = *(_QWORD *)(a5 + 8);
    }
    InterfaceClass = CmGetMatchingCommonClassList(
                       a1,
                       4,
                       (__int64)v5,
                       (__int64)v8,
                       *(_QWORD *)(a5 + 16),
                       *(_DWORD *)(a5 + 24),
                       *(_QWORD *)(a5 + 32),
                       *(_DWORD *)(a5 + 40) & 0xFFFF0000);
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    InterfaceClass = CmGetInterfaceClassMappedPropertyKeys(
                       a1,
                       (int)a2,
                       *(_QWORD *)a5,
                       0,
                       *(_QWORD *)(a5 + 24),
                       *(_DWORD *)(a5 + 32),
                       *(unsigned int **)(a5 + 40));
    goto LABEL_20;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    InterfaceClass = CmGetInterfaceClassMappedPropertyLocales(
                       a1,
                       (__int64)a2,
                       0LL,
                       *(_QWORD *)(a5 + 8),
                       *(_WORD **)(a5 + 16),
                       *(_DWORD *)(a5 + 24),
                       *(_DWORD **)(a5 + 32));
    goto LABEL_20;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      InterfaceClassMappedPropertyFromRegValue = -1073741811;
      return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
    }
    InterfaceClass = CmSetInterfaceClassMappedProperty(
                       a1,
                       (int)a2,
                       *(_QWORD *)a5,
                       *(_QWORD *)(a5 + 8),
                       *(_QWORD *)(a5 + 16),
                       *(_DWORD *)(a5 + 24),
                       *(_QWORD *)(a5 + 32),
                       *(_DWORD *)(a5 + 40));
    goto LABEL_20;
  }
  v17 = *(_QWORD *)(a5 + 8);
  v18 = *(_QWORD *)a5;
  v19 = *(_DWORD **)(a5 + 48);
  v20 = *(_DWORD *)(a5 + 40);
  v21 = *(_QWORD *)(a5 + 32);
  v22 = *(_DWORD **)(a5 + 24);
  v23 = *(_QWORD *)(a5 + 16);
  InterfaceClassMappedPropertyFromRegValue = -1073741802;
  *v19 = 0;
  v30 = v18;
  if ( !v17 )
  {
    while ( !(_DWORD)v8 )
    {
      if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface
        && *(_DWORD *)(v23 + 16) == DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
      {
        v25 = *(_QWORD *)v23 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
        if ( *(_QWORD *)v23 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
          v25 = *(_QWORD *)(v23 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
        if ( !v25 )
        {
          InterfaceClassMappedPropertyFromRegValue = CmGetInterfaceClassMappedPropertyFromRegValue(
                                                       v7,
                                                       v6,
                                                       v18,
                                                       v23,
                                                       (__int64)v22,
                                                       v21,
                                                       v20,
                                                       (__int64)v19);
          if ( InterfaceClassMappedPropertyFromRegValue != -1073741802 )
            return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
          LODWORD(v18) = v30;
          break;
        }
      }
      LODWORD(v8) = 1;
    }
    for ( i = 0; !i; i = 1 )
    {
      if ( *(_DWORD *)(v23 + 16) == DEVPKEY_NAME.pid )
      {
        v29 = *(_QWORD *)v23 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
        if ( *(_QWORD *)v23 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
          v29 = *(_QWORD *)(v23 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
        if ( !v29 )
        {
          InterfaceClass = CmGetInterfaceClassMappedPropertyFromComposite(v7, v6, v18, v23, v22, v21, v20, v19);
          goto LABEL_20;
        }
      }
    }
  }
  return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
}
