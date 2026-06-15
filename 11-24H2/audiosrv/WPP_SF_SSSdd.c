/*
 * XREFs of WPP_SF_SSSdd @ 0x1800EFD38
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSSdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  const wchar_t *v8; // r8
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf

  v6 = a6;
  v7 = -1LL;
  v8 = a5;
  v10 = 10LL;
  if ( a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a6[v11] );
  }
  if ( !a6 )
    v6 = L"NULL";
  if ( a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a5[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10LL;
  }
  if ( !a5 )
    v8 = L"NULL";
  v14 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v7;
    while ( a4[v7] );
    v10 = 2 * v7 + 2;
    v14 = a4 == 0LL;
  }
  if ( v14 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_a5774a8bafb0327b6b857065801df2a8_Traceguids, 19LL, a4, v10, v8, v13, v6);
}
