/*
 * XREFs of WPP_SF_SSd @ 0x1800EAEB0
 * Callers:
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EA384 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_SSd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  const wchar_t *v5; // r10
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // r8
  bool v10; // zf
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = a5;
  v6 = -1LL;
  v7 = 10LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10LL;
  }
  if ( !a5 )
    v5 = L"NULL";
  v10 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v7 = 2 * v6 + 2;
    v10 = a4 == 0LL;
  }
  if ( v10 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, a2, a4, v7, v5, v9, va);
}
