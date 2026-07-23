/*
 * XREFs of PfSnPopulateReadList @ 0x140953450
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     PfSnGetSectionObject @ 0x140953A3C (PfSnGetSectionObject.c)
 *     PsSetCurrentThreadPrefetching @ 0x140953FC0 (PsSetCurrentThreadPrefetching.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1409545D4 (PfSnCleanupPrefetchSectionInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v25; // edx
  unsigned int v26; // r9d
  BOOL v27; // r11d
  __int64 v28; // rcx
  int v29; // r10d
  int v30; // eax
  __int64 v31; // rdx
  char *v32; // r10
  bool v33; // di
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  char v42; // [rsp+58h] [rbp-B0h] BYREF
  bool v43; // [rsp+59h] [rbp-AFh]
  int v44; // [rsp+5Ch] [rbp-ACh]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  char *v46; // [rsp+68h] [rbp-A0h]
  char *i; // [rsp+70h] [rbp-98h]
  __int64 v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  int v50; // [rsp+88h] [rbp-80h]
  int v51; // [rsp+8Ch] [rbp-7Ch]
  __int64 v52; // [rsp+90h] [rbp-78h] BYREF
  HANDLE EventHandle; // [rsp+98h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-68h]
  char *v55; // [rsp+A8h] [rbp-60h]
  __int64 v56; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v59[3]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  Pool2 = 0LL;
  memset(v59, 0, sizeof(v59));
  v3 = a1;
  v45 = a1;
  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_KPROCESS **)(v1 + 16);
  *(&ObjectAttributes.Attributes + 1) = 0;
  v48 = v1;
  v49 = v5;
  v42 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v6, 0, (__int64)v59);
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
  v52 = 0LL;
  v12 = *(_DWORD *)(v5 + 100) & 7;
  v13 = (char *)v10 + v10[21];
  v14 = (char *)v10 + v10[23];
  v15 = (char *)v10 + v10[25];
  v46 = v13;
  v56 = *(_QWORD *)(v5 + 64);
  v54 = *(_QWORD *)(v5 + 72);
  v16 = *(_DWORD *)(v5 + 96) & 7 | (8 * (v12 | 8));
  v55 = v14;
  for ( i = v15; ; v15 = i )
  {
    while ( 1 )
    {
      v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
      v44 = v4;
      if ( v4 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_35;
      v17 = &v13[32 * v4];
      v18 = *((_DWORD *)v17 + 5);
      if ( (v18 & 1) == 0 )
        break;
LABEL_42:
      if ( v42 )
      {
        v38 = *(_QWORD *)(v5 + 56) + 56LL * v4;
        v39 = *(_DWORD *)(v38 + 48);
        if ( (v39 & 1) != 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v38 + 32));
          *(_DWORD *)(v38 + 48) &= ~1u;
          v39 = *(_DWORD *)(v38 + 48);
          *(_QWORD *)(v38 + 32) = 0LL;
        }
        if ( (v39 & 2) != 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v38 + 40));
          *(_DWORD *)(v38 + 48) &= ~2u;
          v39 = *(_DWORD *)(v38 + 48);
          *(_QWORD *)(v38 + 40) = 0LL;
        }
        if ( (v39 & 4) != 0 )
        {
          PfpOpenHandleClose(v38, *(_QWORD *)(v5 + 8));
          *(_OWORD *)v38 = 0LL;
          *(_OWORD *)(v38 + 16) = 0LL;
          *(_QWORD *)(v38 + 24) |= 0x200000000uLL;
          *(_DWORD *)(v38 + 48) &= ~4u;
        }
        v42 = 0;
      }
      v1 = v48;
      v13 = v46;
      v15 = i;
      if ( Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v13 = v46;
        v15 = i;
        Pool2 = 0LL;
      }
    }
    v19 = *(_DWORD *)(v3 + 44) & 1;
    v43 = 0;
    v51 = v19;
    if ( v19 )
    {
      v20 = ((unsigned __int8)v11 & BYTE1(v18) & 0x7F) == 0;
    }
    else
    {
      v20 = !_BitScanForward((unsigned int *)&v40, (v18 >> 8) & 0x7F);
      if ( v20 )
        v40 = 7;
      v41 = v11 & (1 << v40);
      v50 = v40;
      v43 = v41 != 0;
      if ( ((unsigned __int8)v11 & (unsigned __int8)(v18 >> 1) & 0x7F) != 0 )
        goto LABEL_8;
      v43 = v41 != 0;
      v20 = v41 == 0;
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
      v5 = v49;
      v4 = v44;
LABEL_41:
      v3 = v45;
      goto LABEL_42;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, (unsigned int)(8 * *((_DWORD *)v17 + 2) + 24), 0x4C506343u);
    if ( !Pool2 )
      break;
    v24 = v51;
    *Pool2 = 0LL;
    *((_DWORD *)Pool2 + 2) = 0;
    *((_DWORD *)Pool2 + 3) = v24;
    RtlInitUnicodeString(&DestinationString, &v23[*((unsigned int *)v22 + 6) + 1]);
    v4 = v44;
    v25 = (int)v22;
    v5 = v49;
    if ( (int)PfSnGetSectionObject(
                v49,
                v25,
                (unsigned int)&DestinationString,
                (_DWORD)v17,
                v11,
                v44,
                v24,
                (__int64)EventHandle,
                (__int64)&v52,
                (__int64)&v42) < 0 )
      goto LABEL_41;
    v26 = 0;
    v27 = 1;
    if ( v43 )
    {
      v26 = 1;
      Pool2[(unsigned int)(*((_DWORD *)Pool2 + 2))++ + 2] = 0LL;
      v27 = *(_QWORD *)(*(_QWORD *)(v52 + 40) + 16LL) != 0LL;
    }
    v28 = *(int *)v17;
    v29 = 0;
    v30 = v28 + *((_DWORD *)v17 + 1);
    v44 = 0;
    v9 = v30;
    v31 = v28;
    if ( v28 < v30 )
    {
      v32 = v55;
      v33 = v43;
      while ( 1 )
      {
        v34 = *(_DWORD *)&v32[8 * v31 + 4];
        if ( (v34 & 1) == 0 )
        {
          if ( (v34 & 8) != 0 && !v27 )
          {
LABEL_24:
            if ( *(_DWORD *)&v32[8 * v31] || !v33 )
            {
              Pool2[(unsigned int)(*((_DWORD *)Pool2 + 2))++ + 2] = (unsigned __int64)*(unsigned int *)&v32[8 * v31] << 9;
              ++v26;
            }
            else
            {
              v44 = 1;
            }
            goto LABEL_26;
          }
          if ( _bittest(&v11, (v34 >> 4) & 7) )
          {
            if ( v24 )
            {
              if ( (v34 & 2) != 0 )
                goto LABEL_24;
            }
            else if ( (v34 & 4) != 0 )
            {
              goto LABEL_24;
            }
          }
        }
LABEL_26:
        if ( ++v31 >= v9 )
        {
          v29 = v44;
          break;
        }
      }
    }
    if ( *((_DWORD *)Pool2 + 2) == 1 && v43 && v27 && !v29 )
      goto LABEL_41;
    v1 = v48;
    Pool2[2] |= v16;
    *Pool2 = v52;
    v35 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
    *(_QWORD *)(v56 + 8 * v35) = Pool2;
    Pool2 = 0LL;
    _InterlockedAdd((volatile signed __int32 *)(v1 + 36), v26);
    if ( v42 )
    {
      *(_DWORD *)(v54 + 4 * v35) = v4;
      v42 = 0;
    }
    else
    {
      *(_DWORD *)(v54 + 4 * v35) = -1;
    }
    v3 = v45;
    v13 = v46;
  }
  v4 = v44;
  v8 = -1073741670;
  v1 = v48;
  v5 = v49;
LABEL_34:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_35:
  if ( v42 )
  {
    LOBYTE(v9) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56LL * v4, v5, v9);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread();
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v59, 0, v36, v37);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
