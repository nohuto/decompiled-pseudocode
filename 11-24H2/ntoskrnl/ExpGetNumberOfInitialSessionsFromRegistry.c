/*
 * XREFs of ExpGetNumberOfInitialSessionsFromRegistry @ 0x1407B80C8
 * Callers:
 *     ExIsMultiSessionSku @ 0x1407B7F88 (ExIsMultiSessionSku.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall ExpGetNumberOfInitialSessionsFromRegistry(_DWORD *a1)
{
  __int64 result; // rax
  ULONG v3; // [rsp+20h] [rbp-88h]
  int v4[4]; // [rsp+30h] [rbp-78h] BYREF
  const wchar_t *v5; // [rsp+40h] [rbp-68h]
  int *v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+B8h] [rbp+10h] BYREF

  v8 = 0;
  memset_0(v4, 0, 0x70uLL);
  v4[2] = 292;
  v7 = 67108868;
  v5 = L"NumberOfInitialSessions";
  v6 = &v8;
  result = RtlpQueryRegistryValues(2, (int)L"Session Manager", (int)v4, 0, v3, 1);
  if ( (int)result >= 0 )
    *a1 = v8;
  return result;
}
