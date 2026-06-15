/*
 * XREFs of McTemplateU0z_EtwEventWriteTransfer @ 0x180046B8C
 * Callers:
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18013466C (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0z_EtwEventWriteTransfer(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  int v4; // eax
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v8 = v4;
  v9 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v7 = a3;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)L"NULL",
           (unsigned int)&EndpointCharacteristics_CreateInstance_Task_Start,
           (_DWORD)a3,
           2,
           (__int64)v6);
}
