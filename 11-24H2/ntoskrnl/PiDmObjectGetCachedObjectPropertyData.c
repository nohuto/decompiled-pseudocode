/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x14099AAC0
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        int a1,
        unsigned __int16 *a2,
        ULONG_PTR a3,
        __int64 a4,
        _DWORD *a5,
        GUID *Guid,
        unsigned int a7,
        unsigned int *a8)
{
  GUID *v8; // r15
  char v9; // r14
  unsigned int v12; // esi
  DEVPROPKEY **v13; // rbx
  unsigned int v14; // r11d
  unsigned int i; // edi
  DEVPROPKEY *v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v19; // rbx
  ULONG_PTR v20; // rcx
  char *v21; // rbp
  signed __int64 v22; // rax
  signed __int64 *v23; // rbx
  signed __int64 *v24; // rdx
  unsigned int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  unsigned int v29; // ecx
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  signed __int64 v32; // rtt
  ULONG_PTR v33; // rbx
  __int64 result; // rax
  unsigned int v35; // ecx
  bool v36; // cf
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  size_t v40; // r8
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v8 = Guid;
  v9 = 0;
  v12 = -1073741802;
  switch ( a1 )
  {
    case 1:
      v13 = &PiDmCachedDeviceKeys;
      v14 = 10;
      break;
    case 3:
      v13 = &PiDmCachedDeviceInterfaceKeys;
      v14 = 1;
      break;
    case 5:
      v13 = &PiDmCachedDeviceContainerKeys;
      v14 = 3;
      break;
    default:
      return 3221225494LL;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= v14 )
      return v12;
    v16 = v13[3 * i];
    if ( *(_DWORD *)(a4 + 16) == v16->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v17 )
        break;
    }
  }
  if ( a3 )
  {
LABEL_11:
    CurrentThread = KeGetCurrentThread();
    v19 = (volatile signed __int64 *)BugCheckParameter2;
    v20 = BugCheckParameter2;
    --CurrentThread->KernelApcDisable;
    v21 = (char *)KeAbPreAcquire(v20, 0LL);
    v22 = _InterlockedCompareExchange64(v19, 17LL, 0LL);
    v23 = (signed __int64 *)BugCheckParameter2;
    if ( v22 )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v21, BugCheckParameter2);
    if ( v21 )
      v21[10] = 1;
    v24 = &v23[3 * i];
    v25 = *((_DWORD *)v24 + 28);
    if ( v25 <= 1 )
      goto LABEL_22;
    v12 = 0;
    DestinationString = 0LL;
    if ( v25 == 6 )
    {
      v26 = *((_DWORD *)v24 + 30);
      if ( v26 == 18 )
      {
        *a5 = 18;
        v27 = -1LL;
        while ( *(_WORD *)(*(_QWORD *)(v24[16] + 16) + 2 * v27++ + 2) != 0 )
          ;
        v29 = 2 * v27 + 2;
        *a8 = v29;
        if ( a7 >= v29 )
        {
          memmove(v8, *(const void **)(v24[16] + 16), v29);
          goto LABEL_22;
        }
      }
      else
      {
        if ( v26 != 13 )
        {
          v12 = -1073741595;
          goto LABEL_22;
        }
        v36 = a7 < 0x10;
        *a5 = 13;
        *a8 = 16;
        if ( !v36 )
        {
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v24[16] + 16));
          v12 = RtlGUIDFromString(&DestinationString, v8);
          goto LABEL_22;
        }
      }
    }
    else
    {
      v35 = v25 - 2;
      if ( !v35 )
      {
        v12 = -1073741275;
        goto LABEL_22;
      }
      v37 = v35 - 1;
      if ( v37 )
      {
        v39 = v37 - 1;
        if ( v39 )
        {
          if ( v39 != 1 )
          {
            v12 = -1073741595;
            goto LABEL_22;
          }
          *a5 = *((_DWORD *)v24 + 30);
          v40 = *((unsigned int *)v24 + 31);
          *a8 = v40;
          if ( a7 >= (unsigned int)v40 )
          {
            memmove(v8, (const void *)v24[16], v40);
            goto LABEL_22;
          }
        }
        else
        {
          v36 = a7 < 0x10;
          *a5 = 13;
          *a8 = 16;
          if ( !v36 )
          {
            *v8 = *(GUID *)(v24 + 15);
            goto LABEL_22;
          }
        }
      }
      else
      {
        *a5 = *((_DWORD *)v24 + 30);
        v38 = *((_DWORD *)v24 + 31);
        *a8 = v38;
        if ( a7 >= v38 )
        {
          memmove(v8, v24 + 16, v38);
          goto LABEL_22;
        }
      }
    }
    v12 = -1073741789;
LABEL_22:
    _m_prefetchw(v23);
    v30 = *v23;
    v31 = *v23 - 16;
    if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    if ( (v30 & 2) != 0
      || (v32 = *v23, v32 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v31, v30)) )
    {
      v33 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2);
    }
    else
    {
      v33 = BugCheckParameter2;
    }
    KeAbPostRelease(v33);
    KeLeaveCriticalRegionThread();
    if ( v9 )
      PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    return v12;
  }
  result = PiDmGetObject(a1, a2, &BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v9 = 1;
    goto LABEL_11;
  }
  return result;
}
