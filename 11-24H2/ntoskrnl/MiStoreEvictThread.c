/*
 * XREFs of MiStoreEvictThread @ 0x140476E20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiStoreEvictPageFile @ 0x140337B90 (MiStoreEvictPageFile.c)
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     MiStoreAttemptContractPageFile @ 0x1404770D4 (MiStoreAttemptContractPageFile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *P)
{
  int v2; // ebx
  __int64 v3; // rsi
  struct _KEVENT *v4; // rbx
  struct _KEVENT *i; // r12
  int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  KIRQL v10; // al
  unsigned __int8 v11; // bl
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD v15[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v16[144]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object[4]; // [rsp+E8h] [rbp-20h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+108h] [rbp+0h] BYREF

  memset_0(v16, 0, 0x88uLL);
  KeWaitForSingleObject(P + 2, WrKernel, 0, 0, 0LL);
  v2 = P[8];
  v3 = *(_QWORD *)P;
  ExFreePoolWithTag(P, 0);
  if ( !v2 )
  {
    KiInitializeTimer2((unsigned __int64)v16, 0LL, 0LL, 8);
    v15[1] = -1LL;
    v15[0] = 0LL;
    KeSetTimer2((__int64)v16, (LARGE_INTEGER)-600000000LL, 600000000LL, (__int64)v15);
    Object[1] = v16;
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
        v6 = *(_DWORD *)(v3 + 1216);
        v7 = 0LL;
        v8 = *(_DWORD *)(v3 + 18520);
        if ( v8 )
        {
          do
          {
            v9 = *(_QWORD *)(v3 + 8 * v7 + 18528);
            if ( (*(_BYTE *)(v9 + 172) & 0x40) != 0 )
            {
              MiStoreEvictPageFile(*(_QWORD *)(v3 + 8 * v7 + 18528));
              if ( *(_DWORD *)(v9 + 168) >= 0x100u )
                LODWORD(v7) = v7 - 1;
            }
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < v8 );
        }
        v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1312));
        v11 = v10;
        if ( v6 == *(_DWORD *)(v3 + 1216) )
          break;
        MiReleaseSpinLockExclusive((_DWORD *)(v3 + 1312), v10);
      }
      if ( v6 )
      {
        *(_DWORD *)(v3 + 1216) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1392), 0, 0);
      }
      MiReleaseSpinLockExclusive((_DWORD *)(v3 + 1312), v11);
      if ( i == (struct _KEVENT *)v16 )
      {
        v12 = *(_DWORD *)(v3 + 18520);
        if ( v12 )
        {
          v13 = v3 + 18528;
          v14 = v12;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v13 + 172LL) & 0x40) != 0 )
              MiStoreAttemptContractPageFile();
            v13 += 8LL;
            --v14;
          }
          while ( v14 );
        }
      }
      v4 = (struct _KEVENT *)(v3 + 1328);
    }
    KeDisableTimer2((__int64)v16, 1, 1, 0LL);
  }
}
