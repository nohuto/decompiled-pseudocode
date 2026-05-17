/*
 * XREFs of TpCallbackMayRunLong @ 0x180043D00
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180043E20 (TppFastAlpcAdjustConcurrencyCount.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpCallbackMayRunLong(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  signed __int32 v4; // edi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v12; // [rsp+38h] [rbp+10h]

  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter();
LABEL_20:
    v10 = -1073741811;
    v9 = -1073741811;
    goto LABEL_15;
  }
  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 144);
  else
    v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
    goto LABEL_20;
  if ( TppPoolpSerializedPool != v3 )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)(v3 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 420));
    _m_prefetchw((const void *)(v3 + 8));
    v5 = *(_QWORD *)(v3 + 8);
    v12 = v5;
    do
    {
      LODWORD(v12) = ((__int16)v5 + 1) ^ (v5 ^ ((__int16)v5 + 1)) & 0xFFFF0000;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), v12, v5);
      v12 = v5;
    }
    while ( v6 != v5 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v7 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 1;
    if ( v7 )
      TppFastAlpcAdjustConcurrencyCount(v7);
    result = 0LL;
    if ( !v4 )
    {
      v11 = 1;
      return NtSetInformationWorkerFactory(*(_QWORD *)(v3 + 56), 9LL, &v11);
    }
    return result;
  }
  v9 = -1073741637;
  v10 = -1073741637;
LABEL_15:
  result = 0LL;
  if ( v9 != -1073741637 )
    return v10;
  return result;
}
