/*
 * XREFs of ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x1801A8064
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801A7FC4 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetPropertyValue@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DMatrix@@I@Z @ 0x180182A2C (--$GetPropertyValue@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ??$?RI@?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@QEBA_KAEBI@Z @ 0x1801A86E4 (--$-RI@-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@QEBA_KAEBI@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1801A8720 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 *     ??$GetPropertyValue@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEA_NI@Z @ 0x1801A8750 (--$GetPropertyValue@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QE.c)
 */

__int64 __fastcall DataSourcePropertySet::GetPropertyValue(
        DataSourcePropertySet *this,
        int a2,
        struct CExpressionValue *a3)
{
  __int64 v5; // rax
  int v6; // r10d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // edi
  char *v12; // rsi
  int DataType; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  _OWORD *Property; // rax
  __int64 v26; // rax
  _OWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v31; // [rsp+38h] [rbp+10h] BYREF

  v31 = a2;
  v5 = std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>::operator()<unsigned int>(
         this,
         &v31);
  v7 = *((_QWORD *)this + 3);
  v8 = 2 * (*((_QWORD *)this + 6) & v5);
  v9 = *(_QWORD *)(v7 + 8 * v8 + 8);
  if ( v9 == *((_QWORD *)this + 1) )
  {
LABEL_6:
    v9 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 8 * v8);
    while ( v6 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == v10 )
        goto LABEL_6;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  if ( v9 && v9 != *((_QWORD *)this + 1) )
  {
    v11 = *(_DWORD *)(v9 + 20);
    v12 = (char *)this + 64;
    DataType = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(v12);
    if ( !DataType )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    v17 = DataType - 17;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 17;
        if ( v19 )
        {
          v20 = v19 - 17;
          if ( v20 )
          {
            v21 = v20 - 17;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  v24 = v23 - 33;
                  if ( v24 )
                  {
                    if ( v24 != 161 )
                      return 2147500037LL;
                    Property = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                           (__int64)v12,
                                           v11);
                    *((_DWORD *)a3 + 18) = 265;
                    *(_OWORD *)a3 = *Property;
                    *((_OWORD *)a3 + 1) = Property[1];
                    *((_OWORD *)a3 + 2) = Property[2];
                    *((_OWORD *)a3 + 3) = Property[3];
                  }
                  else
                  {
                    v26 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                            (__int64)v12,
                            v11);
                    *((_DWORD *)a3 + 18) = 104;
                    *(_OWORD *)a3 = *(_OWORD *)v26;
                    *((_QWORD *)a3 + 2) = *(_QWORD *)(v26 + 16);
                  }
                  return 0LL;
                }
                v27 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                  (__int64)v12,
                                  v11);
                *((_DWORD *)a3 + 18) = 71;
              }
              else
              {
                v27 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                  (__int64)v12,
                                  v11);
                *((_DWORD *)a3 + 18) = 70;
              }
            }
            else
            {
              v27 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                (__int64)v12,
                                v11);
              *((_DWORD *)a3 + 18) = 69;
            }
            *(_OWORD *)a3 = *v27;
          }
          else
          {
            v28 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                    (__int64)v12,
                    v11);
            *((_DWORD *)a3 + 18) = 52;
            *(_QWORD *)a3 = *(_QWORD *)v28;
            *((_DWORD *)a3 + 2) = *(_DWORD *)(v28 + 8);
          }
        }
        else
        {
          v29 = (_QWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                            (__int64)v12,
                            v11);
          *((_DWORD *)a3 + 18) = 35;
          *(_QWORD *)a3 = *v29;
        }
      }
      else
      {
        *(_DWORD *)a3 = *(_DWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                     (__int64)v12,
                                     v11);
        *((_DWORD *)a3 + 18) = 18;
      }
    }
    else
    {
      *(_BYTE *)a3 = *(_BYTE *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<bool>(
                                 v12,
                                 v11,
                                 v14,
                                 v15);
      *((_DWORD *)a3 + 18) = 17;
    }
    return 0LL;
  }
  return 2147483659LL;
}
