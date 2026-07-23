/*
 * XREFs of TpCallbackIndependent @ 0x1800D80E0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     NtAlpcSetInformation @ 0x1801643F0 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 v5; // rdi
  __int64 v6; // rax
  signed __int32 v7; // r8d
  int v8; // eax
  signed __int32 v9; // edx
  signed __int32 v10; // r9d
  void *v12; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  int PortInformation; // [rsp+38h] [rbp+10h] BYREF
  signed __int64 v15; // [rsp+40h] [rbp+18h]

  WorkerFactoryInformation = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  v1 = *(_QWORD *)(a1 + 184);
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 144);
  else
    v2 = *(_QWORD *)(a1 + 128);
  if ( !v2 )
    return -1073741811;
  if ( TppPoolpSerializedPool == (PVOID)v2 )
    return 0;
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 420));
  _m_prefetchw((const void *)(v2 + 8));
  v3 = *(_QWORD *)(v2 + 8);
  v15 = v3;
  do
  {
    LODWORD(v15) = ((__int16)v3 + 1) ^ (v3 ^ ((__int16)v3 + 1)) & 0xFFFF0000;
    v4 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8), v15, v3);
    v15 = v3;
  }
  while ( v4 != v3 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v5 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v5 && (*(_BYTE *)(v5 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 216);
      v7 = *(_DWORD *)(v5 + 284);
      if ( !v6 || (v8 = *(_DWORD *)(v6 + 440)) == 0 )
        v8 = MEMORY[0x7FFE03C0];
      v9 = v8 + *(_DWORD *)(*(_QWORD *)(v5 + 216) + 420LL);
      v10 = v8 + v9;
      if ( v7 >= v9 && v7 <= v8 + v10 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 284), v10, v7) )
      {
        v12 = *(void **)(v5 + 272);
        PortInformation = v8 + v9;
        NtAlpcSetInformation(v12, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  WorkerFactoryInformation = 2;
  return NtSetInformationWorkerFactory(*(HANDLE *)(v2 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
}
