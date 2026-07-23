/*
 * XREFs of MiWaitForAvailablePages @ 0x1402618C0
 * Callers:
 *     MiDelayFaultingThread @ 0x140260C98 (MiDelayFaultingThread.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 */

NTSTATUS __fastcall MiWaitForAvailablePages(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rsi
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  KIRQL v10; // r14
  int v11; // edi
  PVOID *p_Object; // rbx
  ULONG v13; // ebp
  __int64 v14; // rdi
  __int64 v15; // rdx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h]

  v18 = 0LL;
  v3 = a1 + 16192;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
  v9 = *(_QWORD *)(a1 + 18688);
  v10 = v7;
  v11 = a3 & 2;
  if ( v11 )
  {
    v8 = *(_QWORD *)(a1 + 18304);
    v9 += v8;
  }
  if ( v9 >= 0x420 )
  {
    LOBYTE(v8) = v7;
    MiReleaseSpinLockExclusive(v3, v8);
    return -1;
  }
  else
  {
    Object = (PVOID)(a1 + 16264);
    if ( v11 )
      v18 = a1 + 18344;
    p_Object = &Object;
    v13 = (v11 != 0) + 1;
    v14 = v13;
    do
    {
      KeResetEvent((PRKEVENT)*p_Object++);
      --v14;
    }
    while ( v14 );
    LOBYTE(v15) = v10;
    MiReleaseSpinLockExclusive(v3, v15);
    return KeWaitForMultipleObjects(v13, &Object, WaitAny, WrFreePage, 0, 0, a2, 0LL);
  }
}
