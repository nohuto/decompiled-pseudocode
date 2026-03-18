/*
 * XREFs of MiWaitForAvailablePages @ 0x1403BEAEC
 * Callers:
 *     MiDelayFaultingThread @ 0x1403BF998 (MiDelayFaultingThread.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

NTSTATUS __fastcall MiWaitForAvailablePages(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  _DWORD *v3; // rsi
  KIRQL v7; // al
  unsigned __int64 v8; // r8
  unsigned __int8 v9; // r14
  int v10; // edi
  PVOID *p_Object; // rbx
  ULONG v12; // ebp
  __int64 v13; // rdi
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]

  v16 = 0LL;
  v3 = (_DWORD *)(a1 + 16192);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16192));
  v8 = *(_QWORD *)(a1 + 18688);
  v9 = v7;
  v10 = a3 & 2;
  if ( v10 )
    v8 += *(_QWORD *)(a1 + 18304);
  if ( v8 >= 0x420 )
  {
    MiReleaseSpinLockExclusive(v3, v7);
    return -1;
  }
  else
  {
    Object = (PVOID)(a1 + 16264);
    if ( v10 )
      v16 = a1 + 18344;
    p_Object = &Object;
    v12 = (v10 != 0) + 1;
    v13 = v12;
    do
    {
      KeResetEvent((PRKEVENT)*p_Object++);
      --v13;
    }
    while ( v13 );
    MiReleaseSpinLockExclusive(v3, v9);
    return KeWaitForMultipleObjects(v12, &Object, WaitAny, WrFreePage, 0, 0, a2, 0LL);
  }
}
