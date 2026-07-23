/*
 * XREFs of PfSnPopulateReadList @ 0x1408C1D90
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x1404FD850 (wcsncmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     PfSnGetSectionObject @ 0x1408C237C (PfSnGetSectionObject.c)
 *     PsSetCurrentThreadPrefetching @ 0x1408C2900 (PsSetCurrentThreadPrefetching.c)
 *     PfpOpenHandleClose @ 0x1408C2D04 (PfpOpenHandleClose.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1408C2F48 (PfSnCleanupPrefetchSectionInfo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *Pool2; // r12
  __int64 v3; // r15
  unsigned __int32 v4; // r14d
  __int64 v5; // rsi
  _KPROCESS *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rax
  int v11; // r13d
  int v12; // ebx
  char *v13; // rdx
  char *v14; // rcx
  char *v15; // r9
  unsigned int v16; // ebx
  char *v17; // rdi
  unsigned int v18; // edx
  int v19; // ecx
  bool v20; // zf
  __int64 *v21; // r15
  __int64 *v22; // rsi
  const wchar_t *v23; // r14
  int v24; // r15d
  unsigned int v25; // r9d
  BOOL v26; // r11d
  __int64 v27; // rcx
  int v28; // r10d
  int v29; // eax
  __int64 v30; // rdx
  char *v31; // r10
  bool v32; // di
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  char v39; // [rsp+58h] [rbp-B0h] BYREF
  bool v40; // [rsp+59h] [rbp-AFh]
  int v41; // [rsp+5Ch] [rbp-ACh]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  char *v43; // [rsp+68h] [rbp-A0h]
  char *i; // [rsp+70h] [rbp-98h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  int v47; // [rsp+88h] [rbp-80h]
  int v48; // [rsp+8Ch] [rbp-7Ch]
  __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  HANDLE EventHandle; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h]
  char *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v56[3]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  Pool2 = 0LL;
  memset(v56, 0, sizeof(v56));
  v3 = a1;
  v42 = a1;
  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_KPROCESS **)(v1 + 16);
  *(&ObjectAttributes.Attributes + 1) = 0;
  v45 = v1;
  v46 = v5;
  v39 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v6, 0, (__int64)v56);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v8 < 0 )
    goto LABEL_34;
  v10 = *(unsigned int **)v5;
  v11 = *(_DWORD *)(v3 + 40);
  v49 = 0LL;
  v12 = *(_DWORD *)(v5 + 100) & 7;
  v13 = (char *)v10 + v10[21];
  v14 = (char *)v10 + v10[23];
  v15 = (char *)v10 + v10[25];
  v43 = v13;
  v53 = *(_QWORD *)(v5 + 64);
  v51 = *(_QWORD *)(v5 + 72);
  v16 = *(_DWORD *)(v5 + 96) & 7 | (8 * (v12 | 8));
  v52 = v14;
  for ( i = v15; ; v15 = i )
  {
    while ( 1 )
    {
      v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
      v41 = v4;
      if ( v4 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_35;
      v17 = &v13[32 * v4];
      v18 = *((_DWORD *)v17 + 5);
      if ( (v18 & 1) == 0 )
        break;
LABEL_42:
      if ( v39 )
      {
        v35 = *(_QWORD *)(v5 + 56) + 56LL * v4;
        v36 = *(_DWORD *)(v35 + 48);
        if ( (v36 & 1) != 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v35 + 32));
          *(_DWORD *)(v35 + 48) &= ~1u;
          v36 = *(_DWORD *)(v35 + 48);
          *(_QWORD *)(v35 + 32) = 0LL;
        }
        if ( (v36 & 2) != 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v35 + 40));
          *(_DWORD *)(v35 + 48) &= ~2u;
          v36 = *(_DWORD *)(v35 + 48);
          *(_QWORD *)(v35 + 40) = 0LL;
        }
        if ( (v36 & 4) != 0 )
        {
          PfpOpenHandleClose(v35, *(_QWORD *)(v5 + 8));
          *(_OWORD *)v35 = 0LL;
          *(_OWORD *)(v35 + 16) = 0LL;
          *(_QWORD *)(v35 + 24) |= 0x200000000uLL;
          *(_DWORD *)(v35 + 48) &= ~4u;
        }
        v39 = 0;
      }
      v1 = v45;
      v13 = v43;
      v15 = i;
      if ( Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v13 = v43;
        v15 = i;
        Pool2 = 0LL;
      }
    }
    v19 = *(_DWORD *)(v3 + 44) & 1;
    v40 = 0;
    v48 = v19;
    if ( v19 )
    {
      v20 = ((unsigned __int8)v11 & BYTE1(v18) & 0x7F) == 0;
    }
    else
    {
      v20 = !_BitScanForward((unsigned int *)&v37, (v18 >> 8) & 0x7F);
      if ( v20 )
        v37 = 7;
      v38 = v11 & (1 << v37);
      v47 = v37;
      v40 = v38 != 0;
      if ( ((unsigned __int8)v11 & (unsigned __int8)(v18 >> 1) & 0x7F) != 0 )
        goto LABEL_8;
      v40 = v38 != 0;
      v20 = v38 == 0;
    }
    if ( v20 )
      goto LABEL_42;
LABEL_8:
    v21 = (__int64 *)(v5 + 40);
    v22 = *(__int64 **)(v5 + 40);
    v23 = (const wchar_t *)&v15[*((unsigned int *)v17 + 3)];
    while ( 1 )
    {
      if ( v22 == v21 )
        goto LABEL_40;
      if ( !wcsncmp(v23, (const wchar_t *)v22[2], *((unsigned int *)v22 + 6)) && v23[*((unsigned int *)v22 + 6)] == 92 )
        break;
      v22 = (__int64 *)*v22;
    }
    if ( !v22 )
    {
LABEL_40:
      v5 = v46;
      v4 = v41;
LABEL_41:
      v3 = v42;
      goto LABEL_42;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      break;
    v24 = v48;
    *Pool2 = 0LL;
    *((_DWORD *)Pool2 + 2) = 0;
    *((_DWORD *)Pool2 + 3) = v24;
    RtlInitUnicodeString(&DestinationString, &v23[*((unsigned int *)v22 + 6) + 1]);
    v4 = v41;
    v5 = v46;
    if ( (int)PfSnGetSectionObject(v46, v11, v41, v24, EventHandle, (__int64)&v49, (__int64)&v39) < 0 )
      goto LABEL_41;
    v25 = 0;
    v26 = 1;
    if ( v40 )
    {
      v25 = 1;
      Pool2[(unsigned int)(*((_DWORD *)Pool2 + 2))++ + 2] = 0LL;
      v26 = *(_QWORD *)(*(_QWORD *)(v49 + 40) + 16LL) != 0LL;
    }
    v27 = *(int *)v17;
    v28 = 0;
    v29 = v27 + *((_DWORD *)v17 + 1);
    v41 = 0;
    v9 = v29;
    v30 = v27;
    if ( v27 < v29 )
    {
      v31 = v52;
      v32 = v40;
      while ( 1 )
      {
        v33 = *(_DWORD *)&v31[8 * v30 + 4];
        if ( (v33 & 1) == 0 )
        {
          if ( (v33 & 8) != 0 && !v26 )
          {
LABEL_24:
            if ( *(_DWORD *)&v31[8 * v30] || !v32 )
            {
              Pool2[(unsigned int)(*((_DWORD *)Pool2 + 2))++ + 2] = (unsigned __int64)*(unsigned int *)&v31[8 * v30] << 9;
              ++v25;
            }
            else
            {
              v41 = 1;
            }
            goto LABEL_26;
          }
          if ( _bittest(&v11, (v33 >> 4) & 7) )
          {
            if ( v24 )
            {
              if ( (v33 & 2) != 0 )
                goto LABEL_24;
            }
            else if ( (v33 & 4) != 0 )
            {
              goto LABEL_24;
            }
          }
        }
LABEL_26:
        if ( ++v30 >= v9 )
        {
          v28 = v41;
          break;
        }
      }
    }
    if ( *((_DWORD *)Pool2 + 2) == 1 && v40 && v26 && !v28 )
      goto LABEL_41;
    v1 = v45;
    Pool2[2] |= v16;
    *Pool2 = v49;
    v34 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
    *(_QWORD *)(v53 + 8 * v34) = Pool2;
    Pool2 = 0LL;
    _InterlockedAdd((volatile signed __int32 *)(v1 + 36), v25);
    if ( v39 )
    {
      *(_DWORD *)(v51 + 4 * v34) = v4;
      v39 = 0;
    }
    else
    {
      *(_DWORD *)(v51 + 4 * v34) = -1;
    }
    v3 = v42;
    v13 = v43;
  }
  v4 = v41;
  v8 = -1073741670;
  v1 = v45;
  v5 = v46;
LABEL_34:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_35:
  if ( v39 )
  {
    LOBYTE(v9) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56LL * v4, v5, v9);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v56, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
