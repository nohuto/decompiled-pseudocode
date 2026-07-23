/*
 * XREFs of _PnpDispatchInstallerClass @ 0x1409ADA00
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14044453C (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmCreateInstallerClass @ 0x1408183B4 (_CmCreateInstallerClass.c)
 *     _CmDeleteInstallerClass @ 0x140819158 (_CmDeleteInstallerClass.c)
 *     _CmGetMatchingCommonClassList @ 0x14081BF40 (_CmGetMatchingCommonClassList.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14081F520 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyLocales @ 0x14081F854 (_CmGetInstallerClassMappedPropertyLocales.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081FF04 (_CmSetInstallerClassMappedProperty.c)
 *     _CmValidateInstallerClassName @ 0x1408B54C0 (_CmValidateInstallerClassName.c)
 *     _CmGetInstallerClassMappedProperty @ 0x1409ADBE4 (_CmGetInstallerClassMappedProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x1409AE8F4 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall PnpDispatchInstallerClass(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // r8
  __int128 *v6; // rbx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int InstallerClassMappedProperty; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    InstallerClassMappedProperty = CmSetInstallerClassMappedProperty(
                                                     a1,
                                                     (__int64)a2,
                                                     *(void **)a5,
                                                     *((_QWORD *)a5 + 1),
                                                     *((_QWORD *)a5 + 2),
                                                     a5[6],
                                                     *((_QWORD *)a5 + 4),
                                                     a5[10]);
                  else
                    InstallerClassMappedProperty = -1073741811;
                }
                else
                {
                  InstallerClassMappedProperty = CmGetInstallerClassMappedProperty(
                                                   a1,
                                                   (_DWORD)a2,
                                                   *(_QWORD *)a5,
                                                   *((_QWORD *)a5 + 1),
                                                   *((_QWORD *)a5 + 2),
                                                   *((_QWORD *)a5 + 3),
                                                   *((_QWORD *)a5 + 4),
                                                   a5[10],
                                                   *((_QWORD *)a5 + 6));
                }
              }
              else
              {
                InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyLocales(
                                                 a1,
                                                 (__int64)a2,
                                                 0LL,
                                                 *((_QWORD *)a5 + 1),
                                                 *((_WORD **)a5 + 2),
                                                 a5[6],
                                                 *((_DWORD **)a5 + 4));
              }
            }
            else
            {
              InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyKeys(
                                               a1,
                                               (int)a2,
                                               *(_QWORD *)a5,
                                               0,
                                               *((_QWORD *)a5 + 3),
                                               a5[8],
                                               *((unsigned int **)a5 + 5));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              v5 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *((_QWORD *)a5 + 1);
            }
            InstallerClassMappedProperty = CmGetMatchingCommonClassList(
                                             a1,
                                             2,
                                             (__int64)v5,
                                             (__int64)v6,
                                             *((_QWORD *)a5 + 2),
                                             a5[6],
                                             *((_QWORD *)a5 + 4),
                                             a5[10] & 0xFFFF0000);
          }
        }
        else
        {
          InstallerClassMappedProperty = CmDeleteInstallerClass(a1, (__int64)a2, *a5 & 0xFFFF0000);
        }
      }
      else
      {
        InstallerClassMappedProperty = CmCreateInstallerClass(
                                         a1,
                                         (__int64)a2,
                                         *a5,
                                         (HANDLE *)a5 + 1,
                                         (_BYTE *)a5 + 16,
                                         a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      InstallerClassMappedProperty = CmOpenInstallerClassRegKey(
                                       a1,
                                       (_DWORD)a2,
                                       0,
                                       0,
                                       *a5,
                                       *((_BYTE *)a5 + 4),
                                       *((_QWORD *)a5 + 1),
                                       (__int64)(a5 + 4));
    }
  }
  else
  {
    InstallerClassMappedProperty = CmValidateInstallerClassName(a1, a2);
  }
  return PnpMapCmStatusToDispatchStatus(InstallerClassMappedProperty);
}
