/*
 * XREFs of MiDeleteHardwareAccelerators @ 0x140691B9C
 * Callers:
 *     MmAcceleratorCallbackRoutine @ 0x140800960 (MmAcceleratorCallbackRoutine.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiWakeAllZeroConductors @ 0x140690FE4 (MiWakeAllZeroConductors.c)
 *     MiUnlinkAccelerator @ 0x140692120 (MiUnlinkAccelerator.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall MiDeleteHardwareAccelerators(__int64 a1, int a2)
{
  int v4; // r15d
  int v5; // r13d
  KIRQL v6; // al
  unsigned __int8 v7; // r12
  __int64 i; // rbx
  __int64 v9; // r14
  __int64 v10; // rdx
  PVOID v11; // rcx
  PVOID *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF

  p_P = &P;
  P = &P;
  v4 = 0;
  v17 = 0LL;
  v5 = 0;
  v18 = 0LL;
  v6 = ExAcquireSpinLockExclusive(&dword_140E375A8);
  v7 = v6;
  if ( a2 )
  {
    byte_140E37594 = 1;
    MiReleaseSpinLockExclusive(&dword_140E375A8, v6);
    MiWakeAllZeroConductors();
    ExAcquireSpinLockExclusive(&dword_140E375A8);
  }
  for ( i = qword_140E37580; (__int64 *)i != &qword_140E37580; i = v9 )
  {
    v9 = *(_QWORD *)i;
    if ( a2 || *(_QWORD *)(i + 16) == a1 )
    {
      v5 = 1;
      if ( *(_DWORD *)(i + 48) )
      {
        *(_DWORD *)(i + 52) |= 1u;
        if ( !a2 )
        {
          HIDWORD(v17) = 0;
          *((_QWORD *)&v18 + 1) = &v18;
          v10 = 2LL;
          WORD4(v17) = 263;
          *(_QWORD *)&v18 = &v18;
          BYTE10(v17) = 6;
          do
          {
            *(_QWORD *)&v17 = *(_QWORD *)(i + 40);
            --v10;
          }
          while ( v10 );
          v4 = 1;
          *(_QWORD *)(i + 40) = &v17;
          break;
        }
      }
      else
      {
        MiUnlinkAccelerator(i);
        v14 = p_P;
        if ( *p_P != &P )
LABEL_21:
          __fastfail(3u);
        *(_QWORD *)(i + 8) = p_P;
        *(_QWORD *)i = &P;
        *v14 = i;
        p_P = (PVOID *)i;
        if ( !a2 )
          break;
      }
    }
  }
  MiReleaseSpinLockExclusive(&dword_140E375A8, v7);
  if ( v4 )
  {
    MiWakeAllZeroConductors();
    KeWaitForGate((__int64)&v17 + 8, 19LL);
  }
  while ( 1 )
  {
    v11 = P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_21;
    v13 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_21;
    P = *(PVOID *)P;
    *(_QWORD *)(v13 + 8) = &P;
    ExFreePoolWithTag(v11, 0);
  }
  if ( !a2 && v5 && a1 )
    return (PVOID *)AccelCloseResource(a1);
  if ( qword_140E375A0 )
  {
    result = (PVOID *)AccelDestroyOffloadWorkspace(qword_140E375A0);
    qword_140E375A0 = 0LL;
  }
  return result;
}
