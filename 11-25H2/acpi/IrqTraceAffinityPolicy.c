/*
 * XREFs of IrqTraceAffinityPolicy @ 0x1400BEF1C
 * Callers:
 *     IrqPolicyGetDevicePolicy @ 0x1400B3440 (IrqPolicyGetDevicePolicy.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400363B0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140036458 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     IrqpAllocateInstancePath @ 0x140096288 (IrqpAllocateInstancePath.c)
 */

void __fastcall IrqTraceAffinityPolicy(PDEVICE_OBJECT Pdo, unsigned __int16 a2, __int16 a3, __int64 a4)
{
  int v6; // esi
  ULONG_PTR v8; // r9
  ULONG v9; // edi
  wchar_t *v10; // rbx
  __int64 v11; // r9
  __int16 v12; // [rsp+30h] [rbp-79h] BYREF
  int v13; // [rsp+34h] [rbp-75h] BYREF
  ULONG v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  PVOID P; // [rsp+48h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-59h] BYREF
  _DWORD *v18; // [rsp+70h] [rbp-39h]
  int v19; // [rsp+78h] [rbp-31h]
  int v20; // [rsp+7Ch] [rbp-2Dh]
  wchar_t *v21; // [rsp+80h] [rbp-29h]
  _DWORD v22[2]; // [rsp+88h] [rbp-21h] BYREF
  int *v23; // [rsp+90h] [rbp-19h]
  int v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+9Ch] [rbp-Dh]
  __int16 *v26; // [rsp+A0h] [rbp-9h]
  int v27; // [rsp+A8h] [rbp-1h]
  int v28; // [rsp+ACh] [rbp+3h]
  __int64 *v29; // [rsp+B0h] [rbp+7h]
  int v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+BCh] [rbp+13h]
  ULONG *v32; // [rsp+C0h] [rbp+17h]
  int v33; // [rsp+C8h] [rbp+1Fh]
  int v34; // [rsp+CCh] [rbp+23h]

  v15 = 0LL;
  v6 = a2;
  if ( dword_140088280 && tlgKeywordOn((__int64)&dword_140088280) )
  {
    if ( (_WORD)v6 == 4 )
      v9 = RtlNumberOfSetBitsUlongPtr(v8);
    else
      v9 = 0;
    P = 0LL;
    IrqpAllocateInstancePath(Pdo, (__int64)&v15);
    v10 = (wchar_t *)P;
    if ( (unsigned int)dword_140088280 > 5 && tlgKeywordOn((__int64)&dword_140088280) )
    {
      v20 = 0;
      v22[1] = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v18 = v22;
      v22[0] = (unsigned __int16)v15;
      v23 = &v13;
      v26 = &v12;
      v29 = &v15;
      v32 = &v14;
      v19 = 2;
      v27 = 2;
      v30 = 8;
      v21 = v10;
      v13 = v6;
      v24 = 4;
      v12 = a3;
      v15 = a4;
      v14 = v9;
      v33 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140088280,
        (unsigned __int8 *)dword_14007D1B3,
        4LL,
        v11,
        8u,
        &v17);
    }
    if ( v10 != &word_140076618 )
      ExFreePoolWithTag(v10, 0);
  }
}
