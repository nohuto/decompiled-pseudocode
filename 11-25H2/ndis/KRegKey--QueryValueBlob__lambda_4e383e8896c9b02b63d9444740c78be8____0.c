/*
 * XREFs of KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8____0 @ 0x140142A1C
 * Callers:
 *     ndisEtwCaptureMiniportDriverData @ 0x1400A0C6C (ndisEtwCaptureMiniportDriverData.c)
 * Callees:
 *     KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___ @ 0x1401428A4 (KRegKey--QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8____0(
        HANDLE *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  NTSTATUS result; // eax
  _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"InstallTimestamp";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    v6.Buffer = L"InstallTimestamp";
    v6.Length = 2 * (0x7FFF - v3);
    v6.MaximumLength = v6.Length + 2;
    return KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___(a1, &v6, a3);
  }
  return result;
}
