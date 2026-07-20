/*
 * XREFs of SmpHandleConnectionRequest @ 0x1400061A0
 * Callers:
 *     SmpApiCallback @ 0x140005960 (SmpApiCallback.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     SmpReleaseControlBlock @ 0x140005FF0 (SmpReleaseControlBlock.c)
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140007A20 (SmpSearchKnownSubSysDatabase.c)
 *     SmpLookupControlBlock @ 0x140007B60 (SmpLookupControlBlock.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 *     SmpGetProcessMuSessionId @ 0x140007D90 (SmpGetProcessMuSessionId.c)
 *     SmpCreateKnownSubSys @ 0x140007FB0 (SmpCreateKnownSubSys.c)
 *     SmpAddKnownSubSys @ 0x140009AB0 (SmpAddKnownSubSys.c)
 *     SmpCheckSubSysStatus @ 0x14000B880 (SmpCheckSubSysStatus.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpDeleteSubSys @ 0x140019398 (SmpDeleteSubSys.c)
 *     SmpDisposeSubSysSynch @ 0x14001942C (SmpDisposeSubSysSynch.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

char __fastcall SmpHandleConnectionRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // bl
  _DWORD *v6; // rsi
  HANDLE *v7; // r15
  __int64 KnownSubSys; // r14
  char v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD **v14; // rdx
  _QWORD *v15; // rax
  unsigned int v16; // r8d
  _QWORD *v17; // rcx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  char v22; // r10
  __int64 v23; // rbx
  HANDLE *v24; // r8
  int v25; // r9d
  int *v26; // rdi
  char *Heap; // rax
  __int64 v28; // r8
  int v29; // eax
  HANDLE v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  int v34; // edi
  __int64 v35; // r8
  __int64 v36; // r8
  signed __int64 v37; // rcx
  _WORD *v38; // rdx
  __int16 v39; // ax
  _WORD *v40; // rax
  __int64 v41; // rdi
  HANDLE *v42; // rcx
  char v44; // [rsp+60h] [rbp-A0h]
  char v45; // [rsp+61h] [rbp-9Fh]
  int v46; // [rsp+64h] [rbp-9Ch]
  unsigned int v47; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+80h] [rbp-80h]
  _QWORD **v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  _DWORD v56[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v57; // [rsp+B8h] [rbp-48h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v62; // [rsp+E8h] [rbp-18h]
  __int128 v63; // [rsp+F8h] [rbp-8h]
  __int128 v64; // [rsp+108h] [rbp+8h]
  _DWORD v65[3]; // [rsp+120h] [rbp+20h] BYREF
  int v66; // [rsp+12Ch] [rbp+2Ch]
  __int64 v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  __int128 v69; // [rsp+140h] [rbp+40h]
  __int128 v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+60h]
  _BYTE v72[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v73[160]; // [rsp+1B0h] [rbp+B0h] BYREF

  v52 = a3;
  LODWORD(v54) = 0;
  v53 = 0LL;
  *(_QWORD *)&v64 = 0LL;
  v5 = 0;
  DWORD2(v64) = 0;
  LOBYTE(v50) = 0;
  v6 = (_DWORD *)(a2 + 40);
  v7 = 0LL;
  KnownSubSys = 0LL;
  v60 = a1;
  v9 = 1;
  v59 = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v62 = 0LL;
  v47 = 0;
  v63 = 0LL;
  v56[1] = 0;
  v46 = 0;
  v44 = 0;
  if ( *(_QWORD *)(a2 + 8) == SmpUniqueProcessId || a4 )
  {
    v23 = 0LL;
    goto LABEL_50;
  }
  *((_QWORD *)&v62 + 1) = 0LL;
  DWORD2(v63) = 0;
  *(_QWORD *)&v63 = 0LL;
  LODWORD(v62) = 48;
  v64 = 0LL;
  if ( (int)NtAlpcOpenSenderProcess(&Handle, a1, a2) < 0 )
  {
    v9 = 0;
    v23 = 0LL;
    Handle = 0LL;
    goto LABEL_48;
  }
  SmpGetProcessMuSessionId(Handle, &v47);
  v56[0] = 0;
  v57 = 0LL;
  v58 = *(_QWORD *)(a2 + 8);
  v10 = SmpSearchKnownSubSysDatabase(v47, v56);
  if ( v10 )
    goto LABEL_33;
  v11 = SmpLookupControlBlock(v47);
  v7 = (HANDLE *)v11;
  if ( !v11 )
    goto LABEL_33;
  v12 = *(_QWORD *)(a2 + 8);
  v55 = *(_QWORD *)(v11 + 16);
  if ( *(_QWORD *)(v55 + 8) == v12 )
  {
    KnownSubSys = SmpCreateKnownSubSys(1LL);
    LODWORD(v53) = 0;
    v57 = &v53;
    v54 = SmpKnownSubSysTable + 24LL * (v47 & 0x1F);
    RtlAcquireSRWLockExclusive(v54 + 16, 3LL * (v47 & 0x1F), v13);
    v14 = (_QWORD **)v54;
    v51 = (_QWORD **)v54;
LABEL_8:
    v15 = *v14;
    v16 = v47;
    while ( v15 != v14 )
    {
      if ( *((_DWORD *)v15 - 2) == v47 )
      {
        v17 = v15 - 9;
        BaseAddress = v15 - 9;
        if ( v15 == (_QWORD *)72 )
          break;
        while ( 1 )
        {
          if ( (v17[1] & 1) != 0 )
          {
            if ( !(unsigned int)SmpCheckSubSysStatus() )
            {
              _InterlockedIncrement(v18);
              SmpWaitForStatusChange(v18, 0LL, &v53);
              if ( (*((_BYTE *)BaseAddress + 8) & 4) != 0 )
              {
                SmpDereferenceKnownSubSys(BaseAddress);
                v14 = v51;
                goto LABEL_8;
              }
              SmpDereferenceKnownSubSys(BaseAddress);
              v14 = v51;
              v18 = (volatile signed __int32 *)BaseAddress;
              v16 = v47;
            }
            v15 = (_QWORD *)*((_QWORD *)v18 + 9);
          }
          else
          {
            v15 = (_QWORD *)*v15;
          }
          if ( v15 != v14 )
          {
            v17 = v15 - 9;
            BaseAddress = v15 - 9;
            if ( *((_DWORD *)v15 - 2) == v16 )
              continue;
          }
          goto LABEL_21;
        }
      }
      v15 = (_QWORD *)*v15;
    }
LABEL_21:
    if ( !*(_DWORD *)v55 && *(_QWORD *)(v55 + 8) == *(_QWORD *)(a2 + 8) )
    {
      v10 = SmpSearchKnownSubSysDatabase(v16, v56);
      v56[0] = 1;
      LODWORD(v58) = *v6;
      if ( v10 )
      {
        SmpLogFailure("SmpHandleConnectionRequest", 1016LL, 0LL);
        v9 = 0;
      }
      else
      {
        v10 = SmpSearchKnownSubSysDatabase(v47, v56);
        if ( v10 )
        {
          SmpLogFailure("SmpHandleConnectionRequest", 1026LL, 0LL);
          v9 = 0;
        }
        else if ( KnownSubSys )
        {
          *(_DWORD *)(KnownSubSys + 64) = v47;
          v10 = KnownSubSys;
          v19 = KnownSubSys;
          *(_QWORD *)(KnownSubSys + 32) = Handle;
          *(_DWORD *)(KnownSubSys + 24) = *v6;
          KnownSubSys = 0LL;
          Handle = 0LL;
          SmpAddKnownSubSys(&v53, v19);
          v5 = 1;
        }
        else
        {
          SmpLogFailure("SmpHandleConnectionRequest", 1036LL, 0LL);
          v9 = 0;
        }
      }
    }
    v20 = v54 + 16;
    if ( (_DWORD)v53 == 1 )
      RtlReleaseSRWLockShared(v20);
    else
      RtlReleaseSRWLockExclusive(v20);
    goto LABEL_33;
  }
  if ( *(_QWORD *)(v11 + 56) != v12 )
  {
LABEL_33:
    v21 = 0;
    goto LABEL_34;
  }
  v21 = 8;
  v5 = 1;
LABEL_34:
  v45 = v5;
  v22 = v5;
  v44 = v5;
  v23 = v10;
  v51 = (_QWORD **)v7;
  v24 = v7;
  LODWORD(BaseAddress) = v21;
  v25 = v21;
  v46 = v21;
  if ( v10 )
  {
    v44 = v22;
    LOBYTE(v46) = v21;
    if ( !v9 )
    {
LABEL_48:
      v26 = 0LL;
      goto LABEL_60;
    }
    if ( (*(_BYTE *)(v10 + 8) & 1) == 0 )
    {
      LODWORD(v58) = *v6;
      v56[0] = 1;
      v57 = 0LL;
      KnownSubSys = SmpSearchKnownSubSysDatabase(v47, v56);
      if ( KnownSubSys )
      {
        v9 = 0;
        SmpLogFailure("SmpHandleConnectionRequest", 1100LL, 0LL);
        v44 = v45;
        LOBYTE(v46) = (_BYTE)BaseAddress;
        goto LABEL_48;
      }
      v25 = (int)BaseAddress;
      v24 = v7;
      v22 = v45;
    }
    _m_prefetchw((const void *)(v10 + 8));
    v44 = v22;
    v7 = v24;
    v46 = v25;
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 8), 2u) & 2) != 0 )
    {
      v9 = 0;
      SmpLogFailure("SmpHandleConnectionRequest", 1120LL, 0LL);
      v7 = (HANDLE *)v51;
      v44 = v45;
      LOBYTE(v46) = (_BYTE)BaseAddress;
      goto LABEL_48;
    }
  }
  else if ( !v9 )
  {
    goto LABEL_48;
  }
LABEL_50:
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x28uLL);
  v26 = (int *)Heap;
  if ( Heap )
  {
    RtlInitializeSRWLock(Heap + 24);
    v26[2] = 0;
    if ( v23 )
    {
      v29 = v46 | 0x10;
      *((_QWORD *)v26 + 4) = v23;
      LOBYTE(v46) = v46 | 0x10;
    }
    else
    {
      v30 = Handle;
      if ( v46 )
        v30 = v7;
      *((_QWORD *)v26 + 4) = v30;
      v29 = v46;
    }
    *v26 = v29;
    *(_DWORD *)(v52 + 4) |= 0x20000000u;
    *((_QWORD *)v26 + 2) = 0LL;
    RtlAcquireSRWLockExclusive(v26 + 6, 0LL, v28);
  }
  else
  {
    v9 = 0;
    v31 = (unsigned __int8)v50;
    if ( v44 )
      v31 = 1;
    v50 = v31;
  }
LABEL_60:
  v32 = NtAlpcAcceptConnectPort(&v59, v60, 0LL, 0LL, 0LL, v26, a2, v52, v9);
  if ( !v9 )
    goto LABEL_92;
  if ( v32 >= 0 )
  {
    v26[1] = *(_DWORD *)(AlpcGetMessageAttribute(v52, 0x20000000LL) + 16);
    *((_QWORD *)v26 + 2) = v59;
    LOBYTE(v32) = RtlReleaseSRWLockExclusive(v26 + 6);
    if ( v23 )
    {
      v52 = 0LL;
      HIWORD(v66) = 0;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
      v71 = 0LL;
      *(_WORD *)(a2 + 282) = 0;
      RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(a2 + 44));
      v65[0] = 0;
      v66 = 257;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
      v71 = 0LL;
      v65[1] = 12;
      v65[2] = 1;
      v67 = 288LL;
      v34 = NtAlpcConnectPort(&v52, &DestinationString, 0LL, v65, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v34 >= 0 )
      {
        *(_QWORD *)(v23 + 40) = v52;
      }
      else
      {
        memset_0(v72, 0, 0xE0uLL);
        if ( DestinationString.Buffer )
        {
          v36 = 64LL;
          v37 = (char *)DestinationString.Buffer - v73;
          v38 = v73;
          do
          {
            if ( v36 == -2147483582 )
              break;
            v39 = *(_WORD *)((char *)v38 + v37);
            if ( !v39 )
              break;
            *v38++ = v39;
            --v36;
          }
          while ( v36 );
          v40 = v38 - 1;
          if ( v36 )
            v40 = v38;
          *v40 = 0;
        }
        SmpInternalLogFailure((__int64)"SmpHandleConnectionRequest", 1252, v34, (__int64)v72);
      }
      if ( v7 )
        NtSetEvent(v7[5], 0LL);
      if ( (*(_BYTE *)(v23 + 8) & 1) != 0 )
        v6 = (_DWORD *)(a2 + 8);
      v41 = SmpKnownSubSysTable + 24LL * (*(_DWORD *)(v23 + 64) & 0x1F);
      RtlAcquireSRWLockExclusive(v41 + 16, v33, v35);
      if ( (*(_BYTE *)(v23 + 8) & 1) != 0 )
        *(_OWORD *)(v23 + 48) = *(_OWORD *)v6;
      else
        *(_DWORD *)(v23 + 24) = *v6;
      RtlReleaseSRWLockExclusive(v41 + 16);
      if ( *(_QWORD *)(v23 + 16) )
      {
        v42 = (HANDLE *)_InterlockedExchange64((volatile __int64 *)(v23 + 16), 0LL);
        if ( v42 )
        {
          if ( *(_DWORD *)v42 )
            NtSetEvent(v42[1], 0LL);
          else
            SmpDisposeSubSysSynch(v42);
        }
      }
      LOBYTE(v32) = RtlWakeAllConditionVariable(&SmpSubSysReadyCondition);
      v23 = 0LL;
    }
    else if ( (v46 & 8) != 0 )
    {
      LOBYTE(v32) = 0;
      v7 = 0LL;
    }
    else if ( Handle )
    {
      LOBYTE(v32) = 0;
      Handle = 0LL;
    }
LABEL_92:
    if ( !(_BYTE)v50 )
      goto LABEL_96;
    goto LABEL_93;
  }
  LOBYTE(v32) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v26);
  if ( !v44 )
    goto LABEL_92;
LABEL_93:
  if ( v23 )
    SmpDeleteSubSys((PVOID)v23);
  LOBYTE(v32) = SmpDestroyControlBlock(v7);
LABEL_96:
  if ( Handle )
    LOBYTE(v32) = NtClose(Handle);
  if ( v23 )
    LOBYTE(v32) = SmpDereferenceKnownSubSys((PVOID)v23);
  if ( KnownSubSys )
    LOBYTE(v32) = SmpDereferenceKnownSubSys((PVOID)KnownSubSys);
  if ( v7 )
    LOBYTE(v32) = SmpReleaseControlBlock((char *)v7);
  return v32;
}
