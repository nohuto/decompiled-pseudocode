/*
 * XREFs of WPP_SF_SSdd @ 0x1800F01C0
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_SSdd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  const wchar_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rdx
  bool v10; // zf
  va_list va; // [rsp+A8h] [rbp+30h] BYREF

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
  return EtwTraceMessage(a1, 43LL, &WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids, 20LL, a4, v7, v5, v9, va);
}
