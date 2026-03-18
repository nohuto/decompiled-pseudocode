/*
 * XREFs of ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4
 * Callers:
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14012C850 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserSetCursorIconDataEx @ 0x14029D140 (NtUserSetCursorIconDataEx.c)
 * Callees:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140013840 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreReferenceObject @ 0x14002C9F4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14009347C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     AllocateUnicodeString @ 0x1401E85D0 (AllocateUnicodeString.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

char __fastcall _SetCursorIconDataEx(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size,
        unsigned int a6)
{
  void *v8; // r12
  unsigned int DpiDependentMetric; // r13d
  unsigned int DpiForSystem; // eax
  unsigned int v11; // r15d
  int v12; // eax
  char v13; // r15
  struct _UNICODE_STRING *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r10
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // r8d
  __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // r9
  int v35; // ecx
  int v36; // r14d
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r15
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rcx
  int v44; // r14d
  __int64 v45; // rbx
  __int64 v46; // r12
  HSURF *v47; // r14
  HSURF v48; // rcx
  Gre::Base **v49; // r15
  __int64 v50; // rcx
  HSURF v51; // rcx
  HSURF v52; // rcx
  HSURF v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  HSURF v61; // rcx
  _QWORD v62[4]; // [rsp+30h] [rbp-B8h] BYREF
  _OWORD v63[2]; // [rsp+50h] [rbp-98h] BYREF
  _DWORD v64[12]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v65[72]; // [rsp+A0h] [rbp-48h] BYREF
  struct _UNICODE_STRING *v67; // [rsp+100h] [rbp+18h]

  v67 = a3;
  v62[0] = a4;
  v8 = 0LL;
  memset(v63, 0, sizeof(v63));
  memset(v64, 0, 32);
  DpiDependentMetric = a6;
  if ( !a6 )
  {
    DpiForSystem = GetDpiForSystem((__int64)a1);
    DpiDependentMetric = GetDpiDependentMetric(7, DpiForSystem);
    a3 = v67;
  }
  v11 = *((_DWORD *)a1 + 20) & 0xFFFFF7FF;
  *((_DWORD *)a1 + 20) = v11;
  v12 = *((_DWORD *)a4 + 6);
  v13 = v12 | v11;
  if ( (v12 & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v14 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  v62[3] = (char *)a1 + 56;
  if ( !a3->Length )
  {
    *v14 = *a3;
    goto LABEL_13;
  }
  if ( (unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
  {
LABEL_13:
    if ( a2->Buffer )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v65);
      UserSessionState = W32GetUserSessionState(v18, v17);
      *((_WORD *)a1 + 36) = (int)RtlStringCchCopyW((char *)(UserSessionState + 41780), 256LL, (char *)a2->Buffer) < 0
                          ? 0
                          : UserAddAtomEx(v20, 0LL, 2LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v65);
      if ( !*((_WORD *)a1 + 36) )
      {
        if ( (v13 & 8) == 0 )
        {
          v21 = *((_QWORD *)a4 + 4);
          if ( v21 )
            GreDeleteObject(v21);
          v22 = *((_QWORD *)a4 + 5);
          if ( v22 )
            GreDeleteObject(v22);
        }
        if ( !v14->Length )
          return 0;
        Win32FreePool(*((void **)a1 + 8));
        goto LABEL_25;
      }
    }
    if ( (v13 & 8) != 0 )
    {
      if ( (_DWORD)Size )
        v8 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)Size, 1969451861LL);
      if ( !v8 )
      {
        if ( v14->Length )
        {
          Win32FreePool(*((void **)a1 + 8));
          *((_QWORD *)a1 + 8) = 0LL;
          v14->Length = 0;
          *((_WORD *)a1 + 29) = 0;
        }
        v23 = *((unsigned __int16 *)a1 + 36);
        if ( (_WORD)v23 )
        {
          UserDeleteAtom(v23);
          *((_WORD *)a1 + 36) = 0;
        }
        return 0;
      }
    }
    v24 = (unsigned int)(*((_DWORD *)a4 + 6) | *((_DWORD *)a1 + 20));
    *((_DWORD *)a1 + 20) = v24;
    *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
    *((_DWORD *)a1 + 19) = DpiDependentMetric;
    if ( (v24 & 8) != 0 )
    {
      *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
      *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
      *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
      *((_QWORD *)a1 + 12) = v8;
      RtlCopyVolatileMemory(v8, *((const void **)a4 + 13), (unsigned int)Size);
      v25 = *((_QWORD *)a1 + 12);
      v26 = v25 + *((_QWORD *)a4 + 14);
      *((_QWORD *)a1 + 13) = v26;
      v27 = v25 + *((_QWORD *)a4 + 15);
      *((_QWORD *)a1 + 14) = v27;
      v28 = 0;
      v29 = *((_DWORD *)a1 + 23);
      if ( v29 > 0 )
      {
        v30 = 0LL;
        do
        {
          v31 = *(_DWORD *)(v30 + v26);
          if ( v31 < 0 || v31 >= *((_DWORD *)a1 + 22) )
            goto LABEL_45;
          ++v28;
          v30 += 4LL;
        }
        while ( v28 < v29 );
      }
      v32 = 0LL;
      v33 = *((_DWORD *)a1 + 23);
      if ( v29 > 0 )
      {
        v34 = 0LL;
        do
        {
          v33 = *((_DWORD *)a1 + 23);
          if ( (unsigned int)(100 * *(_DWORD *)(v34 + v27)) >= 6 )
            break;
          v32 = (unsigned int)(v32 + 1);
          v34 += 4LL;
        }
        while ( (int)v32 < v29 );
      }
      if ( (_DWORD)v32 == v33 )
      {
LABEL_45:
        v35 = 87;
LABEL_46:
        UserSetLastError(v35);
        Win32FreePool(*((void **)a1 + 12));
        *((_QWORD *)a1 + 12) = 0LL;
        *((_QWORD *)a1 + 13) = 0LL;
        *((_QWORD *)a1 + 14) = 0LL;
        *((_QWORD *)a1 + 11) = 0LL;
        *((_DWORD *)a1 + 30) = 0;
        return 0;
      }
      v36 = 0;
      if ( *((int *)a1 + 22) > 0 )
      {
        v37 = 0LL;
        while ( 1 )
        {
          LOBYTE(v32) = 3;
          v38 = HMValidateHandleWithDescriptor(*(_QWORD *)(v37 + *((_QWORD *)a1 + 12)), v32);
          v40 = v38;
          if ( !v38 )
            break;
          v41 = *(_DWORD *)(v38 + 80);
          if ( (v41 & 8) != 0 )
            break;
          if ( (v41 & 0x40) == 0 )
            break;
          v42 = *(_QWORD *)(W32GetUserGdiSessionState(v39) + 40);
          if ( PsGetCurrentProcess(v43) != v42 && !*(_QWORD *)(v40 + 24) )
            break;
          *(_QWORD *)(v37 + *((_QWORD *)a1 + 12)) = 0LL;
          v62[0] = *((_QWORD *)a1 + 12) + 8LL * v36;
          v62[1] = v40;
          HMAssignmentLock(v62, 0LL);
          ++v36;
          v37 += 8LL;
          if ( v36 >= *((_DWORD *)a1 + 22) )
            goto LABEL_81;
        }
        v44 = v36 - 1;
        if ( v44 >= 0 )
        {
          v45 = 8LL * v44;
          do
          {
            HMAssignmentUnlock(v45 + *((_QWORD *)a1 + 12));
            v45 -= 8LL;
            --v44;
          }
          while ( v44 >= 0 );
        }
        v35 = 1402;
        goto LABEL_46;
      }
LABEL_81:
      *((_QWORD *)a1 + 6) = a1;
      v56 = *((unsigned int *)a1 + 20);
      if ( (v56 & 0x40) == 0 )
      {
        v57 = *((_QWORD *)a1 + 3);
        if ( !v57 )
        {
          v58 = *(_QWORD *)(W32GetUserSessionState(v56, v32) + 36336);
          *((_QWORD *)a1 + 4) = v58;
          *(_QWORD *)(W32GetUserSessionState(v58, v59) + 36336) = a1;
LABEL_86:
          *((_DWORD *)a1 + 20) |= 0x100u;
          return 1;
        }
        if ( (v56 & 4) != 0 )
        {
          *((_QWORD *)a1 + 4) = *(_QWORD *)(v57 + 728);
          *(_QWORD *)(v57 + 728) = a1;
          goto LABEL_86;
        }
      }
      return 1;
    }
    v46 = *((_QWORD *)_GetCurrentLogicalCursorThread(v24, (__int64)a2) + 58);
    *((_QWORD *)a4 + 6) = 0LL;
    *(_OWORD *)((char *)a4 + 56) = 0LL;
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
    *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    v47 = (HSURF *)((char *)a4 + 32);
    v48 = (HSURF)*((_QWORD *)a4 + 4);
    v49 = (Gre::Base **)((char *)a4 + 32);
    if ( v48 )
    {
      if ( (int)GreReferenceObject(v48) < 0 )
      {
        GreDeleteObject(*v47);
        v50 = *((_QWORD *)a4 + 5);
        if ( v50 )
          GreDeleteObject(v50);
        return 0;
      }
      v49 = (Gre::Base **)(v62[0] + 32LL);
    }
    v51 = (HSURF)*((_QWORD *)a4 + 5);
    if ( v51 && (int)GreReferenceObject(v51) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v52 = *v47;
    }
    else
    {
      if ( *((_DWORD *)a1 + 35)
        && *((_DWORD *)a1 + 36)
        && *v49
        && (!*((_QWORD *)a4 + 5)
         || (unsigned int)GreExtGetObjectW(*v49, 32LL, v63)
         && (unsigned int)GreExtGetObjectW(*((Gre::Base **)a4 + 5), 32LL, v64)
         && (v64[2] == SDWORD2(v63[0]) >> 1 || v64[2] == DWORD2(v63[0]))
         && v64[1] >= SDWORD1(v63[0])) )
      {
        *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
        v53 = (HSURF)*((_QWORD *)a4 + 5);
        *((_QWORD *)a1 + 12) = v53;
        *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v53);
        GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
        GreIncQuotaCount(v46);
        v54 = *((_QWORD *)a1 + 12);
        if ( v54 )
        {
          GreSetBitmapOwner(v54, 0LL);
          GreIncQuotaCount(v46);
        }
        v55 = *((_QWORD *)a1 + 16);
        if ( v55 )
        {
          GreSetBitmapOwner(v55, 0LL);
          GreIncQuotaCount(v46);
        }
        goto LABEL_81;
      }
      UserSetLastError(87);
      v61 = (HSURF)*((_QWORD *)a4 + 4);
      if ( v61 )
        GreDereferenceObject(v61, 0);
      v52 = (HSURF)*((_QWORD *)a4 + 5);
    }
    if ( v52 )
      GreDereferenceObject(v52, 0);
    return 0;
  }
  if ( (v13 & 8) == 0 )
  {
    v15 = *((_QWORD *)a4 + 4);
    if ( v15 )
      GreDeleteObject(v15);
    v16 = *((_QWORD *)a4 + 5);
    if ( v16 )
      GreDeleteObject(v16);
  }
LABEL_25:
  *((_QWORD *)a1 + 8) = 0LL;
  v14->Length = 0;
  *((_WORD *)a1 + 29) = 0;
  return 0;
}
