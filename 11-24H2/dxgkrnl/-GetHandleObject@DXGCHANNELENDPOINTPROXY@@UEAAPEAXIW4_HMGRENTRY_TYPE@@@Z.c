/*
 * XREFs of ?GetHandleObject@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1403BF3F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::GetHandleObject(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  int v9; // ecx

  v3 = 0LL;
  if ( *(struct _KTHREAD **)(a1 + 96) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 522;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_HandleTableMutex.IsOwner()", 522LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (a2 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 56) )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60)
      && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0 )
    {
      v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F;
      if ( v9 )
      {
        if ( a3 == v9 )
        {
          return *(_QWORD *)(v8 + 16LL * v7);
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  return v3;
}
