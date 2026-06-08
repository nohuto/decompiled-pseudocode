/*
 * XREFs of sub_14002C3B4 @ 0x14002C3B4
 * Callers:
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140028658 @ 0x140028658 (sub_140028658.c)
 */

__int64 __fastcall sub_14002C3B4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  char v5[8]; // [rsp+38h] [rbp-19h] BYREF
  int v6; // [rsp+40h] [rbp-11h]
  const wchar_t *v7; // [rsp+48h] [rbp-9h]
  __int64 *v8; // [rsp+50h] [rbp-1h]
  int v9; // [rsp+58h] [rbp+7h]
  __int64 v10; // [rsp+B8h] [rbp+67h] BYREF
  unsigned int v11; // [rsp+C0h] [rbp+6Fh] BYREF
  int v12; // [rsp+C4h] [rbp+73h]

  v12 = HIDWORD(a2);
  v11 = 0;
  v10 = 4294967288LL;
  sub_140010680(v5, 0, 0x70uLL);
  v8 = &v10;
  v6 = 292;
  v7 = L"Capabilities";
  v9 = 184549376;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
              v5,
              0LL,
              0LL) < 0 )
  {
    sub_140028658(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"Capabilities",
      &v11);
    result = v11;
  }
  else
  {
    result = v10;
  }
  *a3 = result;
  return result;
}
