/*
 * XREFs of McTemplateU0zd_EtwEventWriteTransfer @ 0x180046C14
 * Callers:
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18013466C (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0zd_EtwEventWriteTransfer(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  int v5; // eax
  _BYTE v7[16]; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int *v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  v11 = &v13;
  v12 = 4LL;
  if ( !a3 )
    a3 = L"NULL";
  v8 = a3;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)L"NULL",
           (unsigned int)&EndpointCharacteristics_CreateInstance_Task_Stop,
           (_DWORD)a3,
           3,
           (__int64)v7);
}
