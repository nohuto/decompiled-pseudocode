/*
 * XREFs of WPP_SF_SSdSddd @ 0x1800EB0B8
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800E77D8 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSdSddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rax
  const wchar_t *v8; // r8
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf

  v7 = -1LL;
  v8 = a5;
  v10 = 10LL;
  if ( a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(a7 + 2 * v11) );
  }
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
  return EtwTraceMessage(a1, 43LL, &WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, 18LL, a4, v10, v8, v13, &a6);
}
