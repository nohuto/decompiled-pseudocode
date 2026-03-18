/*
 * XREFs of MiStoreEvictThread @ 0x140365C20
 * Callers:
 *     <none>
 * Callees:
 *     MiStoreEvictPageFile @ 0x14020E830 (MiStoreEvictPageFile.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     MiStoreAttemptContractPageFile @ 0x140365ED4 (MiStoreAttemptContractPageFile.c)
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 *     KeDisableTimer2 @ 0x1403C01A8 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  struct _KEVENT *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KEVENT *i; // r12
  int v8; // r15d
  __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  KIRQL v12; // al
  unsigned __int8 v13; // bl
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rdi
  _QWORD v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v18[144]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object[4]; // [rsp+E8h] [rbp-20h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+108h] [rbp+0h] BYREF

  memset_0(v18, 0, 0x88uLL);
  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    KiInitializeTimer2(v18, 0LL, 0LL, 8LL);
    v17[1] = -1LL;
    v17[0] = 0LL;
    KeSetTimer2(v18, -600000000LL, 600000000LL, v17);
    Object[1] = v18;
    Object[0] = (PVOID)(v3 + 1352);
    v4 = (struct _KEVENT *)(v3 + 1328);
    Object[2] = (PVOID)(v3 + 1328);
    for ( i = (struct _KEVENT *)Object[KeWaitForMultipleObjects(
                                         3u,
                                         Object,
                                         WaitAny,
                                         WrVirtualMemory,
                                         0,
                                         0,
                                         0LL,
                                         &WaitBlockArray)];
          i != (struct _KEVENT *)(v3 + 1352);
          i = (struct _KEVENT *)Object[KeWaitForMultipleObjects(
                                         3u,
                                         Object,
                                         WaitAny,
                                         WrVirtualMemory,
                                         0,
                                         0,
                                         0LL,
                                         &WaitBlockArray)] )
    {
      if ( i == v4 )
        KeResetEvent(v4);
      while ( 1 )
      {
        v8 = *(_DWORD *)(v3 + 1216);
        v9 = 0LL;
        v10 = *(_DWORD *)(v3 + 18520);
        if ( v10 )
        {
          do
          {
            v11 = *(_QWORD *)(v3 + 8 * v9 + 18528);
            if ( (*(_BYTE *)(v11 + 172) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8 * v9 + 18528));
              if ( *(_DWORD *)(v11 + 168) >= 0x100u )
                LODWORD(v9) = v9 - 1;
            }
            v9 = (unsigned int)(v9 + 1);
          }
          while ( (unsigned int)v9 < v10 );
        }
        v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1312));
        v13 = v12;
        if ( v8 == *(_DWORD *)(v3 + 1216) )
          break;
        MiReleaseSpinLockExclusive((_DWORD *)(v3 + 1312), v12);
      }
      if ( v8 )
      {
        *(_DWORD *)(v3 + 1216) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1392), 0, 0);
      }
      MiReleaseSpinLockExclusive((_DWORD *)(v3 + 1312), v13);
      if ( i == (struct _KEVENT *)v18 )
      {
        v14 = *(_DWORD *)(v3 + 18520);
        if ( v14 )
        {
          v15 = v3 + 18528;
          v16 = v14;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v15 + 172LL) & 0x40) != 0 )
              MiStoreAttemptContractPageFile();
            v15 += 8LL;
            --v16;
          }
          while ( v16 );
        }
      }
      v4 = (struct _KEVENT *)(v3 + 1328);
    }
    LOBYTE(v6) = 1;
    LOBYTE(v5) = 1;
    KeDisableTimer2(v18, v5, v6, 0LL);
  }
}
