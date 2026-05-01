/*
 * XREFs of ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1801ABB0C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800D45E8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x18005DF04 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x1802D24B6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Write(
        wil::details_abi::UsageIndexProperty *this,
        char **a2,
        char *a3)
{
  char *v4; // rbx
  unsigned __int16 *v7; // r14
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  unsigned __int8 *v10; // rdi
  bool result; // al
  char *v12; // r14
  char *v13; // r8
  rsize_t v14; // r9
  rsize_t v15; // rdx
  __int16 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v12 = v4 + 2;
    if ( v4 + 2 > a3 )
      return 0;
    v13 = (char *)&v16;
    v16 = *((_WORD *)this + 2);
    v14 = 2LL;
    v15 = 2LL;
    goto LABEL_19;
  }
  if ( *((_BYTE *)this + 2) == 2 )
  {
    v12 = v4 + 4;
    if ( v4 + 4 > a3 )
      return 0;
    v15 = 4LL;
    v13 = (char *)this + 4;
    v14 = 4LL;
LABEL_19:
    memcpy_s(v4, v15, v13, v14);
    v4 = v12;
  }
  if ( *(_WORD *)this )
  {
    v7 = (unsigned __int16 *)((char *)this + 8);
  }
  else
  {
    if ( v4 + 2 > a3 )
      return 0;
    v7 = (unsigned __int16 *)((char *)this + 8);
    memcpy_s(v4, a3 - v4, (char *)this + 8, 2uLL);
    v4 += 2;
  }
  v8 = *v7;
  if ( &v4[v8] <= a3 )
  {
    v9 = *((_QWORD *)this + 3);
    v10 = (unsigned __int8 *)(a3 - v4);
    if ( v8 )
    {
      if ( !v4 )
        goto LABEL_12;
      if ( v9 && (unsigned __int64)v10 >= v8 )
      {
        memcpy_0(v4, *((const void **)this + 3), (unsigned int)v8);
        goto LABEL_11;
      }
      memset_0(v4, 0, (size_t)v10);
      if ( v9 )
      {
        if ( (unsigned __int64)v10 >= v8 )
          goto LABEL_11;
        *(_DWORD *)_o__errno(this, a2) = 34;
      }
      else
      {
LABEL_12:
        *(_DWORD *)_o__errno(this, a2) = 22;
      }
      invalid_parameter_noinfo();
    }
LABEL_11:
    result = 1;
    *a2 = &v4[*((unsigned __int16 *)this + 4)];
    return result;
  }
  return 0;
}
