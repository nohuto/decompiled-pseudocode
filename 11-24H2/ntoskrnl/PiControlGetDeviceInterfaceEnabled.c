/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1408CD650
 * Callers:
 *     NtPlugPlayControl @ 0x1408CD400 (NtPlugPlayControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDC30 (PiControlCopyUserModeCallersBuffer.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  ULONG_PTR v4; // rsi
  _WORD *v7; // rbp
  int v8; // r12d
  __int64 v9; // rdi
  _WORD *v10; // rax
  _WORD *v11; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rcx
  _WORD *v14; // rax
  int v15; // eax
  unsigned __int16 v16; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v18; // r9d
  unsigned __int16 *v19; // r10
  unsigned __int16 v20; // dx
  int v21; // r11d
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v23; // rax
  ULONG_PTR *v24; // rax
  ULONG_PTR v25; // rbx
  struct _KTHREAD *v26; // rax
  char *v27; // rdi
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  _WORD *Pool2; // rax
  __int64 *Buffer; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-A8h] BYREF
  char v35[8]; // [rsp+58h] [rbp-A0h] BYREF
  _WORD *v36; // [rsp+60h] [rbp-98h]
  int i; // [rsp+68h] [rbp-90h]
  int v38; // [rsp+6Ch] [rbp-8Ch]

  v4 = *a2;
  if ( (unsigned __int16)(v4 - 1) <= 0x3EFu && (v4 & 1) == 0 && !*((_DWORD *)a2 + 4) )
  {
    if ( a4 )
    {
      Pool2 = (_WORD *)ExAllocatePool2(0x101uLL, v4, 0x20207050u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v8 = PiControlCopyUserModeCallersBuffer(Pool2, a4, 1);
      if ( v8 < 0 )
      {
LABEL_52:
        ExFreePoolWithTag(v7, 0);
        return (unsigned int)v8;
      }
    }
    else
    {
      v7 = (_WORD *)*((_QWORD *)a2 + 1);
    }
    v8 = 0;
    if ( (unsigned int)v4 >= 2 && v7 )
    {
      if ( *v7 )
      {
        v9 = v4 >> 1;
        if ( v7[v9 - 1] )
        {
          if ( v4 > v4 - 2 || v7[v9] )
          {
            v10 = (_WORD *)ExAllocatePool2(0x100uLL, v4 + 2, 0x75737050u);
            v11 = v10;
            if ( !v10 )
            {
              v8 = -1073741670;
              goto LABEL_42;
            }
            memmove(v10, v7, v4);
            v11[v9] = 0;
          }
          else
          {
            v11 = v7;
          }
        }
        else
        {
          v11 = v7;
        }
      }
      else
      {
        v11 = v7;
      }
    }
    else
    {
      v11 = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiDmDeviceInterfaceManager, 1u);
    v34 = 0LL;
    memset_0(v35, 0, 0x68uLL);
    Buffer = &v34;
    if ( !v11 )
      goto LABEL_50;
    v36 = v11;
    v13 = 0x7FFFLL;
    v38 = dword_140F8AB50;
    v14 = v11;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v15 = -1073741811;
    if ( v13 )
    {
      v15 = 0;
      v16 = 2 * (0x7FFF - v13);
    }
    else
    {
      v16 = 0;
    }
    if ( v15 < 0 || dword_140F8AB50 == 3 && v16 <= 8u )
      goto LABEL_50;
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v21 = v20 >> 1;
    Flink = CurrentServerSiloGlobals[75].Flink;
    for ( i = 0; v21; v18 = (unsigned __int16)v23 + 65599 * v18 )
    {
      v23 = *v19++;
      --v21;
      if ( (unsigned int)v23 >= 0x61 )
      {
        if ( (unsigned int)v23 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v23 >= 0xC0u )
            LOWORD(v23) = *((_WORD *)&Flink->Flink
                          + (v23 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v23 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v23 >> 8))))
                        + v23;
        }
        else
        {
          LOWORD(v23) = v23 - 32;
        }
      }
    }
    i = v18;
    v24 = (ULONG_PTR *)RtlLookupElementGenericTableAvl(&Table, &Buffer);
    if ( v24 && (v25 = *v24) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      ExReleaseResourceLite(&PiDmDeviceInterfaceManager);
      KeLeaveCriticalRegionThread();
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v27 = (char *)KeAbPreAcquire(v25, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v25, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v25, 0, v27, v25);
      if ( v27 )
        v27[10] = 1;
      *((_BYTE *)a2 + 20) = *(_QWORD *)(v25 + 40) != 0LL;
      _m_prefetchw((const void *)v25);
      v28 = *(_QWORD *)v25;
      v29 = *(_QWORD *)v25 - 16LL;
      if ( (*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v29 = 0LL;
      if ( (v28 & 2) != 0
        || (v30 = *(_QWORD *)v25, v30 != _InterlockedCompareExchange64((volatile signed __int64 *)v25, v29, v28)) )
      {
        ExfReleasePushLock((_QWORD *)v25);
      }
      KeAbPostRelease(v25);
      KeLeaveCriticalRegionThread();
      PiDmObjectRelease((PVOID)v25);
    }
    else
    {
LABEL_50:
      ExReleaseResourceLite(&PiDmDeviceInterfaceManager);
      KeLeaveCriticalRegionThread();
      v8 = -1073741772;
    }
    if ( v11 && (_WORD)v4 && v7 && v7 != v11 )
      ExFreePoolWithTag(v11, 0);
LABEL_42:
    if ( !a4 || !v7 )
      return (unsigned int)v8;
    goto LABEL_52;
  }
  return 3221225485LL;
}
