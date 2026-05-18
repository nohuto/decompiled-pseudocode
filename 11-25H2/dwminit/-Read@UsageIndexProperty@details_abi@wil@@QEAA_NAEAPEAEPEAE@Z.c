/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180007458
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180005E90 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180007CCC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800080C0 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800030BA (_invalid_parameter_noinfo.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char v3; // al
  unsigned __int16 *v4; // r9
  wil::details_abi::UsageIndexProperty *v7; // rbx
  unsigned __int16 *v8; // rdi
  unsigned __int16 v9; // ax
  __int16 v10; // ax
  unsigned __int16 *v11; // rdi
  unsigned __int16 *v12; // rsi
  unsigned __int8 *v13; // rcx
  bool result; // al

  v3 = *((_BYTE *)this + 2);
  v4 = (unsigned __int16 *)*a2;
  v7 = this;
  if ( v3 == 1 )
  {
    v8 = v4 + 1;
    if ( v4 + 1 > (unsigned __int16 *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    if ( v4 )
    {
      v9 = *v4;
    }
    else
    {
      *(_DWORD *)_o__errno(this) = 22;
      invalid_parameter_noinfo();
      v9 = 0;
    }
    *((_DWORD *)v7 + 1) = v9;
    goto LABEL_14;
  }
  if ( v3 != 2 )
    goto LABEL_15;
  v8 = v4 + 2;
  if ( v4 + 2 > (unsigned __int16 *)a3 )
    return 0;
  *((_QWORD *)this + 2) = v4;
  this = (wil::details_abi::UsageIndexProperty *)((char *)this + 4);
  if ( !this )
    goto LABEL_13;
  if ( !v4 )
  {
    *(_DWORD *)this = 0;
LABEL_13:
    *(_DWORD *)_o__errno(this) = 22;
    invalid_parameter_noinfo();
    goto LABEL_14;
  }
  *(_DWORD *)this = *(_DWORD *)v4;
LABEL_14:
  v4 = v8;
LABEL_15:
  v10 = *(_WORD *)v7;
  v11 = (unsigned __int16 *)((char *)v7 + 8);
  *((_WORD *)v7 + 4) = *(_WORD *)v7;
  if ( v10 )
    goto LABEL_23;
  v12 = v4 + 1;
  if ( v4 + 1 > (unsigned __int16 *)a3 )
    return 0;
  if ( v7 == (wil::details_abi::UsageIndexProperty *)-8LL )
  {
LABEL_21:
    *(_DWORD *)_o__errno(this) = 22;
    invalid_parameter_noinfo();
    goto LABEL_22;
  }
  if ( !v4 )
  {
    *v11 = 0;
    goto LABEL_21;
  }
  *v11 = *v4;
LABEL_22:
  v4 = v12;
LABEL_23:
  v13 = (unsigned __int8 *)v4 + *v11;
  if ( v13 > a3 )
    return 0;
  *((_QWORD *)v7 + 3) = v4;
  result = 1;
  *a2 = v13;
  return result;
}
