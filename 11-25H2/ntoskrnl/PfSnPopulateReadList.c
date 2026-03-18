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
  int Event; // eax
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
  __int64 v36; // rdi
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  char v40; // [rsp+58h] [rbp-B0h] BYREF
  bool v41; // [rsp+59h] [rbp-AFh]
  int v42; // [rsp+5Ch] [rbp-ACh]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  char *v44; // [rsp+68h] [rbp-A0h]
  char *i; // [rsp+70h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  int v48; // [rsp+88h] [rbp-80h]
  int v49; // [rsp+8Ch] [rbp-7Ch]
  __int64 v50; // [rsp+90h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-68h]
  char *v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v56[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-30h]
  int v59; // [rsp+E0h] [rbp-28h]
  int v60; // [rsp+E4h] [rbp-24h]
  __int128 v61; // [rsp+E8h] [rbp-20h]
  _OWORD v62[3]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  Pool2 = 0LL;
  memset(v62, 0, sizeof(v62));
  v3 = a1;
  v43 = a1;
  v4 = 0;
  v56[1] = 0;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_KPROCESS **)(v1 + 16);
  v60 = 0;
  v46 = v1;
  v47 = v5;
  v40 = 0;
  Handle = 0LL;
  KiStackAttachProcess(v6, 0, (__int64)v62);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  v56[0] = 48;
  v57 = 0LL;
  v59 = 512;
  --CurrentThread->KernelApcDisable;
  v58 = 0LL;
  v61 = 0LL;
  Event = NtCreateEvent((unsigned __int64)&Handle, 2031619LL, (__int64)v56, NotificationEvent, 0);
  if ( Event < 0 )
    goto LABEL_34;
  v10 = *(unsigned int **)v5;
  v11 = *(_DWORD *)(v3 + 40);
  v50 = 0LL;
  v12 = *(_DWORD *)(v5 + 100) & 7;
  v13 = (char *)v10 + v10[21];
  v14 = (char *)v10 + v10[23];
  v15 = (char *)v10 + v10[25];
  v44 = v13;
  v54 = *(_QWORD *)(v5 + 64);
  v52 = *(_QWORD *)(v5 + 72);
  v16 = *(_DWORD *)(v5 + 96) & 7 | (8 * (v12 | 8));
  v53 = v14;
  for ( i = v15; ; v15 = i )
  {
    while ( 1 )
    {
      v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
      v42 = v4;
      if ( v4 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_35;
      v17 = &v13[32 * v4];
      v18 = *((_DWORD *)v17 + 5);
      if ( (v18 & 1) == 0 )
        break;
LABEL_42:
      if ( v40 )
      {
        v36 = *(_QWORD *)(v5 + 56) + 56LL * v4;
        v37 = *(_DWORD *)(v36 + 48);
        if ( (v37 & 1) != 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v36 + 32));
          *(_DWORD *)(v36 + 48) &= ~1u;
          v37 = *(_DWORD *)(v36 + 48);
          *(_QWORD *)(v36 + 32) = 0LL;
        }
        if ( (v37 & 2) != 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v36 + 40));
          *(_DWORD *)(v36 + 48) &= ~2u;
          v37 = *(_DWORD *)(v36 + 48);
          *(_QWORD *)(v36 + 40) = 0LL;
        }
        if ( (v37 & 4) != 0 )
        {
          PfpOpenHandleClose(v36, *(_QWORD *)(v5 + 8));
          *(_OWORD *)v36 = 0LL;
          *(_OWORD *)(v36 + 16) = 0LL;
          *(_QWORD *)(v36 + 24) |= 0x200000000uLL;
          *(_DWORD *)(v36 + 48) &= ~4u;
        }
        v40 = 0;
      }
      v1 = v46;
      v13 = v44;
      v15 = i;
      if ( Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v13 = v44;
        v15 = i;
        Pool2 = 0LL;
      }
    }
    v19 = *(_DWORD *)(v3 + 44) & 1;
    v41 = 0;
    v49 = v19;
    if ( v19 )
    {
      v20 = ((unsigned __int8)v11 & BYTE1(v18) & 0x7F) == 0;
    }
    else
    {
      v20 = !_BitScanForward((unsigned int *)&v38, (v18 >> 8) & 0x7F);
      if ( v20 )
        v38 = 7;
      v39 = v11 & (1 << v38);
      v48 = v38;
      v41 = v39 != 0;
      if ( ((unsigned __int8)v11 & (unsigned __int8)(v18 >> 1) & 0x7F) != 0 )
        goto LABEL_8;
      v41 = v39 != 0;
      v20 = v39 == 0;
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
      v5 = v47;
      v4 = v42;
LABEL_41:
      v3 = v43;
      goto LABEL_42;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      break;
    v24 = v49;
    *Pool2 = 0LL;
    *((_DWORD *)Pool2 + 2) = 0;
    *((_DWORD *)Pool2 + 3) = v24;
    RtlInitUnicodeString(&DestinationString, &v23[*((unsigned int *)v22 + 6) + 1]);
    v4 = v42;
    v25 = (int)v22;
    v5 = v47;
    if ( (int)PfSnGetSectionObject(
                v47,
                v25,
                (unsigned int)&DestinationString,
                (_DWORD)v17,
                v11,
                v42,
                v24,
                (__int64)Handle,
                (__int64)&v50,
                (__int64)&v40) < 0 )
      goto LABEL_41;
    v26 = 0;
    v27 = 1;
    if ( v41 )
    {
      v26 = 1;
      Pool2[(unsigned int)(*((_DWORD *)Pool2 + 2))++ + 2] = 0LL;
      v27 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 16LL) != 0LL;
    }
    v28 = *(int *)v17;
    v29 = 0;
    v30 = v28 + *((_DWORD *)v17 + 1);
    v42 = 0;
    v9 = v30;
    v31 = v28;
    if ( v28 < v30 )
    {
      v32 = v53;
      v33 = v41;
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
              v42 = 1;
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
          v29 = v42;
          break;
        }
      }
    }
    if ( *((_DWORD *)Pool2 + 2) == 1 && v41 && v27 && !v29 )
      goto LABEL_41;
    v1 = v46;
    Pool2[2] |= v16;
    *Pool2 = v50;
    v35 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
    *(_QWORD *)(v54 + 8 * v35) = Pool2;
    Pool2 = 0LL;
    _InterlockedAdd((volatile signed __int32 *)(v1 + 36), v26);
    if ( v40 )
    {
      *(_DWORD *)(v52 + 4 * v35) = v4;
      v40 = 0;
    }
    else
    {
      *(_DWORD *)(v52 + 4 * v35) = -1;
    }
    v3 = v43;
    v13 = v44;
  }
  v4 = v42;
  Event = -1073741670;
  v1 = v46;
  v5 = v47;
LABEL_34:
  *(_DWORD *)(v1 + 40) = Event;
LABEL_35:
  if ( v40 )
  {
    LOBYTE(v9) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56LL * v4, v5, v9);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v62, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
