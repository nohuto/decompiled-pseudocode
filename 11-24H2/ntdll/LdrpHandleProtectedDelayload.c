/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x1800096B0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpWriteBackProtectedDelayLoad @ 0x180007900 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadForwardedDll @ 0x18000B980 (LdrpLoadForwardedDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x18000F8E0 (LdrpFindLoadedDllByHandle.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800DCC30 (LdrpLogDelayLoadTrigger.c)
 *     AVrfCallAPILookupCallback @ 0x1800DE5CC (AVrfCallAPILookupCallback.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800DE6C0 (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     strlen @ 0x180167CE0 (strlen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, char *a5, int a6)
{
  __int64 v6; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r15
  char *v11; // r14
  int v12; // edi
  __int64 v13; // rbx
  size_t v14; // rax
  int LoadedDllByHandle; // edi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned int *v18; // r9
  char *v19; // r8
  __int64 v20; // r15
  _BYTE *v21; // r12
  unsigned int v22; // ebx
  _QWORD *v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 Heap; // rax
  __int64 v34; // [rsp+40h] [rbp-548h] BYREF
  int v35; // [rsp+48h] [rbp-540h]
  __int64 v36; // [rsp+50h] [rbp-538h] BYREF
  _BYTE *v37; // [rsp+58h] [rbp-530h]
  __int64 v38; // [rsp+60h] [rbp-528h] BYREF
  unsigned int *v39; // [rsp+68h] [rbp-520h]
  char *v40; // [rsp+70h] [rbp-518h]
  char *v41; // [rsp+78h] [rbp-510h]
  __int64 v42; // [rsp+80h] [rbp-508h] BYREF
  STRING SourceString; // [rsp+88h] [rbp-500h] BYREF
  void (__fastcall *v44)(__int64 *, _QWORD, __int64, _QWORD, _QWORD); // [rsp+98h] [rbp-4F0h]
  __int64 v45; // [rsp+A0h] [rbp-4E8h]
  __int64 v46; // [rsp+A8h] [rbp-4E0h]
  __int64 v47; // [rsp+B0h] [rbp-4D8h]
  __int128 v48; // [rsp+B8h] [rbp-4D0h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-4C0h]
  _BYTE v50[24]; // [rsp+D0h] [rbp-4B8h] BYREF
  unsigned int v51; // [rsp+E8h] [rbp-4A0h]
  __int64 v52; // [rsp+F0h] [rbp-498h]
  _BYTE v53[1024]; // [rsp+150h] [rbp-438h] BYREF

  v6 = a4;
  v46 = a4;
  v47 = a3;
  v39 = a2;
  v9 = (__int64)a5;
  v41 = a5;
  memset_thunk_772440563353939046(v53, 0, 0x400uLL);
  v36 = 0LL;
  v34 = 0LL;
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 48) + a2[2]);
  if ( *v10 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(*v10, &v34, 0LL);
    v35 = LoadedDllByHandle;
  }
  else
  {
    v11 = (char *)(*(_QWORD *)(a1 + 48) + a2[1]);
    v12 = a6;
    if ( !a6 )
      v12 = *(_DWORD *)(a1 + 272);
    v13 = *(_QWORD *)(a1 + 80);
    memset_thunk_772440563353939046(v50, 0, 0x80uLL);
    v51 = v12 & 0xFFFFFFFE;
    v52 = v13;
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
    LoadedDllByHandle = LdrpLoadForwardedDll(&SourceString, 3, (__int64)&v34);
    v35 = LoadedDllByHandle;
    if ( LoadedDllByHandle < 0 )
    {
      v9 = (__int64)v41;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v10 = *(_QWORD *)(v34 + 48);
      v9 = (__int64)v41;
      LdrpLogDelayLoadTrigger(a1, a2, v34, v41);
    }
    LdrpReleaseDllPath(v50);
    v6 = v46;
  }
  if ( LoadedDllByHandle < 0 )
  {
    v31 = LdrpRedirectDelayloadFailure(a1, 0, (_DWORD)a2, v47, v6, v9, LoadedDllByHandle);
    v36 = v31;
    if ( v31 && (LoadedDllByHandle == -1073740671 || LoadedDllByHandle == -1073741515) )
      LdrpWriteBackProtectedDelayLoad(a1, v9, (__int64)&v36, 1u, 0);
  }
  else
  {
    v17 = *(_QWORD *)(v34 + 48);
    if ( (unsigned int)LdrControlFlowGuardEnforced(v34, v16) )
    {
      v48 = 0LL;
      v49 = 0LL;
      if ( v17 < *((_QWORD *)&xmmword_1801E7440 + 1)
        || v17 >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
      {
        RtlpxLookupFunctionTable(v17, &v48);
      }
      else
      {
        v48 = xmmword_1801E7440;
      }
      if ( *((_QWORD *)&v48 + 1) != v17 )
        __fastfail(0x18u);
    }
    v18 = a2;
    v19 = (char *)(*(_QWORD *)(a1 + 48) + a2[3]);
    v40 = v19;
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
      Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 0x40000), 8LL * (unsigned int)v9);
      v37 = (_BYTE *)Heap;
      v18 = a2;
      if ( Heap )
      {
        v21 = (_BYTE *)Heap;
        v19 = v40;
      }
      else
      {
        v37 = v53;
        v19 = v41;
        v40 = v41;
        LODWORD(v9) = v9 - v20;
        if ( (unsigned int)v9 > 0x80 )
          LODWORD(v9) = 128;
        LODWORD(v20) = 0;
        v21 = v53;
      }
    }
    else
    {
      v21 = v53;
      v37 = v53;
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
      v24 = v19 - v21;
      v45 = v36;
      do
      {
        *v23 = 0LL;
        if ( v22 == (_DWORD)v20
          || *(_QWORD *)((char *)v23 + v24) - *(_QWORD *)(a1 + 48) < (unsigned __int64)*(unsigned int *)(a1 + 64) )
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
            v28 = v27 + v26 + 2;
            v29 = 0LL;
          }
          LODWORD(v36) = LdrpResolveProcedureAddress(a1, v34, v28, v29, 0, &v38);
          if ( (int)v36 < 0 )
            goto LABEL_34;
          if ( AvrfpAPILookupCallbacksEnabled )
            AVrfCallAPILookupCallback(*(_QWORD *)(a1 + 48), *(_QWORD *)(v25 + 48), v38, 1, (__int64)&v38);
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
          v19 = v40;
          if ( v22 == (_DWORD)v20 )
          {
            v35 = v36;
            v45 = *(_QWORD *)&v37[8 * (unsigned int)v20];
          }
        }
        ++v22;
        ++v23;
        v18 = v39;
      }
      while ( v22 < (unsigned int)v9 );
      LoadedDllByHandle = v35;
      v31 = v45;
    }
    else
    {
      v31 = v36;
    }
    if ( LoadedDllByHandle < 0 )
    {
      v31 = LdrpRedirectDelayloadFailure(a1, v34, (_DWORD)v39, v47, v46, (__int64)v41, LoadedDllByHandle);
      v36 = v31;
      if ( v31 )
      {
        if ( (unsigned int)(LoadedDllByHandle + 1073741512) <= 1
          || LoadedDllByHandle == -1073741702
          || LoadedDllByHandle == -1073740671 )
        {
          *(_QWORD *)&v21[8 * (unsigned int)v20] = v31;
        }
      }
    }
    LdrpWriteBackProtectedDelayLoad(a1, (__int64)v40, (__int64)v21, v9, v20);
    if ( v53 != v21 )
      RtlFreeHeap(LdrpHeap, 0LL, v21);
    LdrpDereferenceModule(v34);
  }
  return v31;
}
