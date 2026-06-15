/*
 * XREFs of ServiceDeviceEventCallback @ 0x18014E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ServiceDeviceEvent @ 0x180064F0C (ServiceDeviceEvent.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010A510 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall ServiceDeviceEventCallback(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const WCHAR *v4; // rbp
  _WORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r14d
  HANDLE ProcessHeap; // rax
  unsigned int v12; // ebx
  char *v13; // rax
  void *v14; // rsi
  const char *v15; // r9
  int v16; // ecx
  HANDLE v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (const WCHAR *)(a4 + 24);
  if ( a4 == -24 )
    return 13;
  v7 = (_WORD *)(a4 + 24);
  v8 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v8 )
    return 13;
  v9 = (2 * (0x7FFFFFFF - v8)) & -(__int64)(v8 != 0);
  v10 = v9 + 32;
  if ( (int)v9 + 32 < (unsigned int)v9 )
    return 13;
  ProcessHeap = GetProcessHeap();
  v12 = 8;
  v13 = (char *)HeapAlloc(ProcessHeap, 8u, v10);
  v14 = v13;
  if ( v13 )
  {
    *(_DWORD *)v13 = v10;
    *(_QWORD *)(v13 + 4) = 5LL;
    *(_OWORD *)(v13 + 12) = *(_OWORD *)(a4 + 8);
    if ( !LCMapStringEx(&LocaleName, 0x100u, v4, -1, (LPWSTR)v13 + 14, v10 - 30, 0LL, 0LL, 0LL) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2A3,
        (__int64)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
        v15);
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        v12 = 13;
LABEL_16:
        v17 = GetProcessHeap();
        HeapFree(v17, 0, v14);
        return v12;
      }
      v16 = 32772;
    }
    else
    {
      v16 = 0x8000;
    }
    v12 = ServiceDeviceEvent(v16, (__int64)v14);
    goto LABEL_16;
  }
  return v12;
}
