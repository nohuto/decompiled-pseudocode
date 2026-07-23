/*
 * XREFs of MiZeroPageThread @ 0x140691640
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     ZwWaitForSingleObject @ 0x1406A7430 (ZwWaitForSingleObject.c)
 *     MiCreatePerNodeZeroingConductor @ 0x1407FF8C0 (MiCreatePerNodeZeroingConductor.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

NTSTATUS __fastcall MiZeroPageThread(__int64 a1)
{
  unsigned int v2; // r14d
  void *v3; // r15
  void *v4; // r12
  int v5; // r9d
  unsigned int v6; // eax
  _QWORD *v7; // rdx
  __int16 v8; // r8
  int v9; // esi
  __int64 v10; // rbp
  unsigned int v11; // ebx
  NTSTATUS result; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  HANDLE *v15; // rdi
  HANDLE v16; // rsi
  PVOID Object[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-88h] BYREF

  *(_DWORD *)(a1 + 16980) = 1;
  v2 = 1;
  v3 = (void *)(a1 + 88);
  v4 = (void *)(a1 + 112);
  do
  {
    v5 = 0;
    v6 = 0;
    if ( KeNumberNodes )
    {
      v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 15288LL);
      do
      {
        if ( !*v7 && *(v7 - 39) )
        {
          *v7 = 1LL;
          ++v5;
        }
        v8 = KeNumberNodes;
        v7 += 7152;
        ++v6;
      }
      while ( v6 < (unsigned __int16)KeNumberNodes );
      if ( v5 )
      {
        if ( v2 )
        {
          v9 = 1;
          *(_DWORD *)(a1 + 16948) = v5 + 2 * v5 + 1;
        }
        else
        {
          v9 = 0;
        }
        v10 = *(_QWORD *)(a1 + 16);
        v11 = 0;
        if ( v8 )
        {
          do
          {
            if ( *(_QWORD *)(v10 + 15288) == 1LL && (int)MiCreatePerNodeZeroingConductor(a1, v11, v2) < 0 )
            {
              *(_QWORD *)(v10 + 15288) = 0LL;
              if ( v9 )
                v9 += 3;
            }
            ++v11;
            v10 += 57216LL;
          }
          while ( v11 < (unsigned __int16)KeNumberNodes );
        }
        if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16948), -v9) == v9 )
          KeSetEvent((PRKEVENT)(a1 + 16952), 0, 0);
      }
    }
    Object[0] = v3;
    Object[1] = v4;
    v2 = 0;
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( result );
  v13 = 0;
  v14 = *(_QWORD *)(a1 + 16);
  if ( KeNumberNodes )
  {
    v15 = (HANDLE *)(v14 + 15288);
    do
    {
      v16 = *v15;
      if ( *v15 )
      {
        ZwWaitForSingleObject(*v15, 0, 0LL);
        ObCloseHandle(v16, 0);
      }
      result = (unsigned __int16)KeNumberNodes;
      v15 += 7152;
      ++v13;
    }
    while ( v13 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
