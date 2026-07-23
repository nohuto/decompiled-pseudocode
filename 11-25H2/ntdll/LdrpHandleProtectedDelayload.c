/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x180022ED0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180023540 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800239B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     AVrfCallAPILookupCallback @ 0x1800DC4EC (AVrfCallAPILookupCallback.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800DC5E0 (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     strlen @ 0x180169260 (strlen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r15
  char *v11; // r14
  int v12; // edi
  __int64 v13; // rbx
  size_t v14; // rax
  int Status; // edi
  void *v16; // rbx
  int v17; // eax
  unsigned int *v18; // r9
  char *v19; // r8
  __int64 v20; // r15
  __int64 *v21; // r12
  unsigned int v22; // ebx
  __int64 *v23; // rdi
  signed __int64 v24; // r13
  _QWORD *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r8
  const char *v28; // rax
  ULONG v29; // r9d
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 *Heap; // rax
  PVOID v34; // [rsp+40h] [rbp-548h] BYREF
  NTSTATUS v35; // [rsp+48h] [rbp-540h]
  __int64 v36; // [rsp+50h] [rbp-538h] BYREF
  __int64 *v37; // [rsp+58h] [rbp-530h]
  __int64 v38; // [rsp+60h] [rbp-528h] BYREF
  int v39[2]; // [rsp+68h] [rbp-520h]
  __int64 v40; // [rsp+70h] [rbp-518h]
  __int64 v41; // [rsp+78h] [rbp-510h]
  __int64 v42; // [rsp+80h] [rbp-508h] BYREF
  ANSI_STRING SourceString; // [rsp+88h] [rbp-500h] BYREF
  void (__fastcall *v44)(__int64 *, _QWORD, __int64, _QWORD, _QWORD); // [rsp+98h] [rbp-4F0h]
  __int64 v45; // [rsp+A0h] [rbp-4E8h]
  __int64 v46; // [rsp+A8h] [rbp-4E0h]
  int v47[2]; // [rsp+B0h] [rbp-4D8h]
  __int128 v48; // [rsp+B8h] [rbp-4D0h]
  __int64 v49; // [rsp+C8h] [rbp-4C0h]
  int v50[8]; // [rsp+D0h] [rbp-4B8h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-498h]
  _BYTE BaseAddress[1024]; // [rsp+150h] [rbp-438h] BYREF

  v6 = a4;
  v46 = a4;
  *(_QWORD *)v47 = a3;
  *(_QWORD *)v39 = a2;
  v9 = a5;
  v41 = a5;
  memset_thunk_772440563353939046(BaseAddress, 0, 0x400uLL);
  v36 = 0LL;
  v34 = 0LL;
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 48) + a2[2]);
  if ( *v10 )
  {
    Status = LdrpFindLoadedDllByHandle(*v10, &v34, 0LL);
    v35 = Status;
  }
  else
  {
    v11 = (char *)(*(_QWORD *)(a1 + 48) + a2[1]);
    v12 = a6;
    if ( !a6 )
      v12 = *(_DWORD *)(a1 + 272);
    v13 = *(_QWORD *)(a1 + 80);
    memset_thunk_772440563353939046(v50, 0, 0x80uLL);
    v50[6] = v12 & 0xFFFFFFFE;
    v51 = v13;
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = v11;
    if ( v11 )
    {
      v14 = strlen(v11);
      if ( v14 >= 0xFFFF )
        LOWORD(v14) = -2;
      SourceString.Length = v14;
      SourceString.MaximumLength = v14 + 1;
    }
    Status = LdrpLoadForwardedDll(&SourceString, (int)v50, a1, (PVOID)a1, 3, (__int64)&v34);
    v35 = Status;
    if ( Status < 0 )
    {
      v9 = v41;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v10 = *((_QWORD *)v34 + 6);
      v9 = v41;
      LdrpLogDelayLoadTrigger(a1, a2, v34, v41);
    }
    LdrpReleaseDllPath(v50);
    v6 = v46;
  }
  if ( Status < 0 )
  {
    v31 = LdrpRedirectDelayloadFailure(a1, 0, (int)a2, v47[0], v6, v9, Status);
    v36 = v31;
    if ( v31 && (Status == -1073740671 || Status == -1073741515) )
      LdrpWriteBackProtectedDelayLoad(a1, v9, (unsigned int)&v36, 1, 0);
  }
  else
  {
    v16 = (void *)*((_QWORD *)v34 + 6);
    LOBYTE(v17) = LdrControlFlowGuardEnforced();
    if ( v17 )
    {
      v48 = 0LL;
      v49 = 0LL;
      if ( (unsigned __int64)v16 < *((_QWORD *)&xmmword_1801E9430 + 1)
        || (unsigned __int64)v16 >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                  + (unsigned __int64)(unsigned int)qword_1801E9440 )
      {
        RtlpxLookupFunctionTable(v16);
      }
      else
      {
        v48 = xmmword_1801E9430;
      }
      if ( *((void **)&v48 + 1) != v16 )
        __fastfail(0x18u);
    }
    v18 = a2;
    v19 = (char *)(*(_QWORD *)(a1 + 48) + a2[3]);
    v40 = (__int64)v19;
    v20 = (v9 - (__int64)v19) >> 3;
    LODWORD(v9) = 0;
    if ( *(_QWORD *)v19 )
    {
      do
        v9 = (unsigned int)(v9 + 1);
      while ( *(_QWORD *)&v19[8 * v9] );
    }
    if ( (unsigned int)v9 > 0x80 )
    {
      Heap = (__int64 *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v9);
      v37 = Heap;
      v18 = a2;
      if ( Heap )
      {
        v21 = Heap;
        v19 = (char *)v40;
      }
      else
      {
        v37 = (__int64 *)BaseAddress;
        v19 = (char *)v41;
        v40 = v41;
        LODWORD(v9) = v9 - v20;
        if ( (unsigned int)v9 > 0x80 )
          LODWORD(v9) = 128;
        LODWORD(v20) = 0;
        v21 = (__int64 *)BaseAddress;
      }
    }
    else
    {
      v21 = (__int64 *)BaseAddress;
      v37 = (__int64 *)BaseAddress;
    }
    if ( g_ShimsEnabled )
      v44 = (void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD, _QWORD))(__ROR8__(
                                                                                g_pfnSE_GetProcAddressForCaller,
                                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v44 = 0LL;
    v22 = 0;
    if ( (_DWORD)v9 )
    {
      v23 = v21;
      v24 = v19 - (char *)v21;
      v45 = v36;
      do
      {
        *v23 = 0LL;
        if ( v22 == (_DWORD)v20
          || *(__int64 *)((char *)v23 + v24) - *(_QWORD *)(a1 + 48) < (unsigned __int64)*(unsigned int *)(a1 + 64) )
        {
          v25 = v34;
          *(_QWORD *)&SourceString.Length = v34;
          v42 = 0LL;
          v38 = 0LL;
          v26 = *(_QWORD *)(a1 + 48);
          v27 = *(_QWORD *)(v26 + v18[4] + 8 * ((__int64)&v19[8LL * v22 - (v26 + v18[3])] >> 3));
          if ( v27 < 0 )
          {
            v28 = 0LL;
            v29 = (unsigned __int16)v27;
          }
          else
          {
            v28 = (const char *)(v27 + v26 + 2);
            v29 = 0;
          }
          LODWORD(v36) = LdrpResolveProcedureAddress(a1, v34, v28, v29, 0, &v38);
          if ( (int)v36 < 0 )
            goto LABEL_34;
          if ( AvrfpAPILookupCallbacksEnabled )
            AVrfCallAPILookupCallback(*(_QWORD *)(a1 + 48), v25[6], v38, 1, (__int64)&v38);
          if ( v44 )
          {
            v42 = 0LL;
            v30 = v38;
            v44(&v42, *(_QWORD *)&SourceString.Length, v38, *(_QWORD *)(a1 + 48), 0LL);
            if ( v42 )
              v30 = v42;
          }
          else
          {
LABEL_34:
            v30 = v38;
          }
          *v23 = v30;
          v21 = v37;
          v19 = (char *)v40;
          if ( v22 == (_DWORD)v20 )
          {
            v35 = v36;
            v45 = v37[(unsigned int)v20];
          }
        }
        ++v22;
        ++v23;
        v18 = *(unsigned int **)v39;
      }
      while ( v22 < (unsigned int)v9 );
      Status = v35;
      v31 = v45;
    }
    else
    {
      v31 = v36;
    }
    if ( Status < 0 )
    {
      v31 = LdrpRedirectDelayloadFailure(a1, (int)v34, v39[0], v47[0], v46, v41, Status);
      v36 = v31;
      if ( v31 )
      {
        if ( (unsigned int)(Status + 1073741512) <= 1 || Status == -1073741702 || Status == -1073740671 )
          v21[(unsigned int)v20] = v31;
      }
    }
    LdrpWriteBackProtectedDelayLoad(a1, v40, (_DWORD)v21, v9, v20);
    if ( BaseAddress != (_BYTE *)v21 )
      RtlFreeHeap(LdrpHeap, 0, v21);
    LdrpDereferenceModule(v34);
  }
  return v31;
}
