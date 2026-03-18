/*
 * XREFs of SetDpiDepSysMet @ 0x140055970
 * Callers:
 *     InitLoadResources @ 0x14005548C (InitLoadResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetDpiDepSysMet(__int64 a1, int a2)
{
  int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdi

  v2 = a2;
  v3 = (int)a1;
  if ( a2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 19LL, a2, (int)a1, 0LL, 0LL, 0LL, 0);
    v2 = 1;
  }
  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 19928);
  v5 = *(_DWORD *)(v4 + 4 * v3 + 2284);
  result = W32GetUserSessionState(v4);
  v7 = *(_QWORD *)(result + 19928);
  *(_DWORD *)(v7 + 4 * v3 + 2284) = v2;
  if ( v2 != v5 )
  {
    v8 = 2;
    v9 = 4 * v3 + 2524;
    do
    {
      result = W32GetUserSessionState(v7);
      ++v8;
      v7 = *(_QWORD *)(result + 19928);
      *(_DWORD *)(v9 + v7) = -1;
      v9 += 120LL;
    }
    while ( v8 < 0x12 );
  }
  return result;
}
