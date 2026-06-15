/*
 * XREFs of WPP_SF_dS @ 0x1800C4690
 * Callers:
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180082230 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dS(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5)
{
  const wchar_t *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  v5 = a5;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a5 )
    v5 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, 25LL, &v9, 4LL, v5, v7, 0LL);
}
