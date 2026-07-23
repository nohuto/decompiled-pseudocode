/*
 * XREFs of _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740
 * Callers:
 *     _PnpCtxOpenContextNodeBaseKey @ 0x140817D34 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1409AE93C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     PiDevCfgInitMigrationContext @ 0x1409CD29C (PiDevCfgInitMigrationContext.c)
 * Callees:
 *     _PnpGetEnumSecurityDescriptor @ 0x140820DEC (_PnpGetEnumSecurityDescriptor.c)
 *     _SysCtxRegCreateTree @ 0x140928A64 (_SysCtxRegCreateTree.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x140A221B0 (_SysCtxGetCachedContextBaseKey.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxGetCachedNodeBaseKey(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int v4; // r10d
  __int64 v7; // r11
  unsigned int v8; // esi
  __int64 result; // rax
  void *EnumSecurityDescriptor; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r12d
  const wchar_t *v15; // r15
  int CachedContextBaseKey; // esi
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h] BYREF

  v4 = a3;
  v18 = 0LL;
  v19 = 0LL;
  v7 = a1;
  v8 = 1;
  result = 0LL;
  EnumSecurityDescriptor = 0LL;
  if ( a3 == 5 )
  {
    v11 = a2[8];
  }
  else
  {
    if ( a3 != 9 )
    {
      switch ( a3 )
      {
        case 1:
          v13 = 1LL;
          goto LABEL_27;
        case 2:
          v13 = 2LL;
          goto LABEL_27;
        case 3:
          v13 = 3LL;
LABEL_27:
          result = SysCtxGetCachedContextBaseKey(a2[7], v13, &v18);
          goto LABEL_14;
        case 4:
          v12 = a2[7];
          if ( *(_QWORD *)(v12 + 48) )
            v18 = *(_QWORD *)(v12 + 48);
          else
            result = 3221225524LL;
LABEL_14:
          if ( (int)result < 0 )
            return result;
          goto LABEL_7;
        case 6:
          v11 = a2[9];
          goto LABEL_6;
        case 7:
          v11 = a2[10];
          goto LABEL_6;
        case 8:
          v11 = a2[11];
          goto LABEL_6;
        case 10:
          v11 = a2[13];
          goto LABEL_6;
        case 11:
          v11 = a2[14];
          goto LABEL_6;
        case 12:
          v11 = a2[15];
          goto LABEL_6;
        case 13:
          v11 = a2[16];
          goto LABEL_6;
        case 14:
          v11 = a2[17];
          goto LABEL_6;
        case 15:
          v11 = a2[18];
          goto LABEL_6;
        default:
          return 3221225485LL;
      }
    }
    v11 = a2[12];
  }
LABEL_6:
  v18 = v11;
LABEL_7:
  if ( v18 )
  {
    *a4 = v18;
  }
  else
  {
    v14 = v4 - 1;
    switch ( v4 )
    {
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
        switch ( v4 )
        {
          case 1:
          case 2:
          case 3:
          case 4:
            return 3221225485LL;
          case 5:
            v8 = 4;
            v15 = L"Enum";
            EnumSecurityDescriptor = PnpGetEnumSecurityDescriptor();
            if ( EnumSecurityDescriptor )
              goto LABEL_46;
            result = 3221225701LL;
            break;
          case 6:
            v8 = 4;
            v15 = L"Services";
            goto LABEL_46;
          case 7:
            v8 = 4;
            v15 = L"Control\\Class";
            goto LABEL_46;
          case 8:
            v8 = 4;
            v15 = L"Control\\DeviceClasses";
            goto LABEL_46;
          case 9:
            v15 = L"Control\\DeviceInterfaces";
            v8 = 4;
            if ( !*(_BYTE *)(v7 + 4) )
              v15 = L"Control\\DeviceClasses";
            goto LABEL_46;
          case 10:
            v8 = 4;
            v15 = L"Control\\DeviceContainers";
            goto LABEL_46;
          case 11:
            v8 = 4;
            v15 = L"Control\\DevicePanels";
            goto LABEL_46;
          case 12:
            v8 = 4;
            v15 = L"Control\\CriticalDeviceDatabase";
            goto LABEL_46;
          case 13:
            v8 = 4;
            v15 = L"Control\\CoDeviceInstallers";
            goto LABEL_46;
          case 14:
            v8 = 4;
            v15 = L"Hardware Profiles";
            goto LABEL_46;
          case 15:
            v15 = L"HardwareConfig";
LABEL_46:
            CachedContextBaseKey = SysCtxGetCachedContextBaseKey(a2[7], v8, &v19);
            if ( CachedContextBaseKey >= 0 )
            {
              CachedContextBaseKey = SysCtxRegCreateTree(a2[7], v19, v15, 0LL, 0x2000000, 0LL);
              if ( CachedContextBaseKey >= 0 )
              {
                switch ( v14 )
                {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                    CachedContextBaseKey = -1073741811;
                    goto LABEL_62;
                  case 4:
                    v17 = v18;
                    a2[8] = v18;
                    break;
                  case 5:
                    v17 = v18;
                    a2[9] = v18;
                    break;
                  case 6:
                    v17 = v18;
                    a2[10] = v18;
                    break;
                  case 7:
                    v17 = v18;
                    a2[11] = v18;
                    break;
                  case 8:
                    v17 = v18;
                    a2[12] = v18;
                    break;
                  case 9:
                    v17 = v18;
                    a2[13] = v18;
                    break;
                  case 10:
                    v17 = v18;
                    a2[14] = v18;
                    break;
                  case 11:
                    v17 = v18;
                    a2[15] = v18;
                    break;
                  case 12:
                    v17 = v18;
                    a2[16] = v18;
                    break;
                  case 13:
                    v17 = v18;
                    a2[17] = v18;
                    break;
                  case 14:
                    v17 = v18;
                    a2[18] = v18;
                    break;
                  default:
                    goto LABEL_66;
                }
                *a4 = v17;
              }
            }
LABEL_62:
            if ( EnumSecurityDescriptor )
              ExFreePoolWithTag(EnumSecurityDescriptor, 0);
            result = (unsigned int)CachedContextBaseKey;
            break;
          default:
            goto LABEL_66;
        }
        break;
      default:
LABEL_66:
        result = 3221225485LL;
        break;
    }
  }
  return result;
}
