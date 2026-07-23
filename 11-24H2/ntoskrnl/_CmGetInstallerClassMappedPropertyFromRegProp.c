/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409AE2B4
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14081F520 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedProperty @ 0x1409ADBE4 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409AE104 (_CmGetInstallerClassCompoundFilters.c)
 * Callees:
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     _PnpParseIndirectInfString @ 0x1409AD7F4 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x1409AD8C4 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        _QWORD *a1,
        WCHAR *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v9; // r15
  __int64 v11; // rsi
  unsigned int v13; // r14d
  int v14; // r11d
  DEVPROPKEY **v15; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v17; // r9
  DEVPROPKEY **v18; // rdi
  int v19; // r12d
  unsigned int InstallerClassRegProp; // ebx
  __int64 v22; // rcx
  int v23; // eax
  ULONG_PTR v24; // rax
  void *Pool2; // rdi
  int v26; // eax
  int v27; // [rsp+40h] [rbp-10h] BYREF
  int v28; // [rsp+44h] [rbp-Ch] BYREF
  int v29; // [rsp+48h] [rbp-8h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v27 = 0;
  *a5 = 0;
  *v9 = 0;
  v29 = 0;
  v28 = 0;
  if ( v11 )
  {
    v13 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  v15 = &CmClassRegPropMap;
  for ( i = 0; i < 9; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v14 == (*v15)->pid )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v22 )
        break;
    }
    v15 += 3;
    v18 = 0LL;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  v19 = *((_DWORD *)v18 + 3);
  if ( v19 == 25 )
    return (unsigned int)-1073741637;
  if ( v19 == 27 )
  {
    LODWORD(a5) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, (__int64)&v27, (__int64)&v28, (__int64)&a5);
    if ( (InstallerClassRegProp & 0x80000000) != 0 )
      return InstallerClassRegProp;
    if ( v27 != *((_DWORD *)v18 + 4) )
      return (unsigned int)-1073741811;
    *v9 = 1;
    *v8 = *((_DWORD *)v18 + 2);
    if ( v13 >= *v9 )
      *(_BYTE *)v11 = -(v28 != 0);
    else
      return (unsigned int)-1073741789;
    return InstallerClassRegProp;
  }
  *v9 = v13;
  InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, v19, (__int64)&v27, v11, (__int64)v9);
  if ( InstallerClassRegProp && InstallerClassRegProp != -1073741789 )
    return InstallerClassRegProp;
  if ( v27 != *((_DWORD *)v18 + 4) )
    return (unsigned int)-1073741811;
  v23 = *((_DWORD *)v18 + 2);
  *v8 = v23;
  if ( v23 != 18 )
    return InstallerClassRegProp;
  v24 = *v9;
  LODWORD(a5) = *v9;
  if ( !InstallerClassRegProp )
  {
    if ( v13 < 2 )
      return InstallerClassRegProp;
    Pool2 = 0LL;
    if ( !v11 )
      return InstallerClassRegProp;
    goto LABEL_24;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v24, 0x52504E50u);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v26 = CmGetInstallerClassRegProp(a1, a2, a3, v19, (__int64)&v29, (__int64)Pool2, (__int64)&a5);
  if ( v26 < 0 )
  {
    InstallerClassRegProp = v26;
    goto LABEL_27;
  }
  if ( (unsigned int)a5 < 2 )
  {
LABEL_27:
    ExFreePoolWithTag(Pool2, 0);
    return InstallerClassRegProp;
  }
  v11 = (__int64)Pool2;
LABEL_24:
  if ( PnpParseIndirectInfString((_WORD *)v11) || PnpParseIndirectResourceString((_WORD *)v11) )
    *v8 = 25;
  if ( Pool2 )
    goto LABEL_27;
  return InstallerClassRegProp;
}
