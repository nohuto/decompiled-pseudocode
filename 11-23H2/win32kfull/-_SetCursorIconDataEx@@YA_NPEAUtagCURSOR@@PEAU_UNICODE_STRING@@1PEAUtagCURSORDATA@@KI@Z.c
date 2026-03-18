/*
 * XREFs of ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C004A78C
 * Callers:
 *     NtUserSetCursorIconDataEx @ 0x1C0049940 (NtUserSetCursorIconDataEx.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C035C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     GreReferenceObject @ 0x1C00260F4 (GreReferenceObject.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     GreDereferenceObject @ 0x1C0049FA8 (GreDereferenceObject.c)
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C004DAA0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C008F36C (AllocateUnicodeString.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

char __fastcall _SetCursorIconDataEx(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size,
        unsigned int DpiDependentMetric)
{
  unsigned int DpiForSystem; // eax
  AtomicExecutionCheck *v11; // rcx
  unsigned int v12; // r12d
  struct _UNICODE_STRING *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentThreadWin32Thread; // rax
  PWSTR Buffer; // r10
  __int64 v21; // r9
  __int64 v22; // rdx
  WCHAR *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  WCHAR v26; // r11
  int v27; // r11d
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  void *v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  int *v34; // r12
  void **v35; // r15
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r10
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r14
  int v53; // eax
  int v54; // ebx
  __int64 v55; // rsi
  PERESOURCE *v56; // rax
  __int64 v57; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v59; // rbx
  HSURF v60; // rcx
  __int64 v61; // rcx
  HSURF v62; // rcx
  HSURF v63; // rcx
  __int64 v64; // rcx
  HBITMAP v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  HSURF v70; // rcx
  char v71; // [rsp+20h] [rbp-F8h]
  _DWORD *v72; // [rsp+50h] [rbp-C8h]
  _QWORD v73[2]; // [rsp+60h] [rbp-B8h] BYREF
  PWSTR v74; // [rsp+70h] [rbp-A8h]
  __int64 v75; // [rsp+78h] [rbp-A0h]
  __int64 v76; // [rsp+80h] [rbp-98h]
  char *v77; // [rsp+88h] [rbp-90h]
  __int128 v78; // [rsp+90h] [rbp-88h]
  __int128 v79; // [rsp+A0h] [rbp-78h]
  __int128 v80; // [rsp+B0h] [rbp-68h]
  __int128 v81; // [rsp+C0h] [rbp-58h]
  __int64 v82; // [rsp+120h] [rbp+8h]

  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( !DpiDependentMetric )
  {
    DpiForSystem = GetDpiForSystem(a1, a2);
    DpiDependentMetric = GetDpiDependentMetric(7LL, DpiForSystem);
  }
  v72 = (_DWORD *)((char *)a1 + 80);
  v11 = (AtomicExecutionCheck *)*((unsigned int *)a1 + 20);
  LODWORD(v11) = (unsigned int)v11 & 0xFFFFF7FF;
  *((_DWORD *)a1 + 20) = (_DWORD)v11;
  v73[0] = (char *)a4 + 24;
  v12 = (unsigned int)v11 | *((_DWORD *)a4 + 6);
  if ( (*((_DWORD *)a4 + 6) & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v13 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  v77 = (char *)a1 + 56;
  if ( !a3->Length )
  {
    *v13 = *a3;
    goto LABEL_13;
  }
  if ( (unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
  {
LABEL_13:
    if ( a2->Buffer )
    {
      AtomicExecutionCheck::EnforceConsistency(v11);
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v17, v16, v18);
      ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
      v71 = 1;
      Buffer = a2->Buffer;
      v21 = 2147483646LL;
      v76 = 2147483646LL;
      v74 = Buffer;
      v22 = 256LL;
      v75 = 256LL;
      v23 = (WCHAR *)&gawchAtomScratch;
      v24 = 0LL;
      v25 = 2LL;
      while ( v22 )
      {
        if ( !v21 || (v26 = *Buffer) == 0 )
        {
          v27 = 0;
          goto LABEL_21;
        }
        v74 = ++Buffer;
        *v23++ = v26;
        v75 = --v22;
        v76 = --v21;
        ++v24;
      }
      --v23;
      --v24;
      v27 = -2147483643;
LABEL_21:
      *v23 = 0;
      *((_WORD *)a1 + 36) = v27 < 0 ? 0 : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
      v28 = PsGetCurrentThreadWin32Thread(v24, v22, v25);
      --*(_DWORD *)(v28 + 48);
      if ( !*((_WORD *)a1 + 36) )
      {
        if ( (v12 & 8) == 0 )
        {
          v29 = *((_QWORD *)a4 + 4);
          if ( v29 )
            GreDeleteObject(v29);
          v30 = *((_QWORD *)a4 + 5);
          if ( v30 )
            GreDeleteObject(v30);
        }
        if ( !v13->Length )
          return 0;
        Win32FreePool(*((void **)a1 + 8));
        goto LABEL_32;
      }
    }
    if ( (v12 & 8) != 0 )
    {
      if ( (_DWORD)Size )
        v31 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)Size, 1969451861LL);
      else
        v31 = 0LL;
      if ( !v31 )
      {
        if ( v13->Length )
        {
          Win32FreePool(*((void **)a1 + 8));
          *((_QWORD *)a1 + 8) = 0LL;
          v13->Length = 0;
          *((_WORD *)a1 + 29) = 0;
        }
        v32 = *((unsigned __int16 *)a1 + 36);
        if ( (_WORD)v32 )
        {
          UserDeleteAtom(v32);
          *((_WORD *)a1 + 36) = 0;
        }
        return 0;
      }
    }
    else
    {
      v31 = 0LL;
    }
    v33 = (unsigned int)(*(_DWORD *)v73[0] | *v72);
    *v72 = v33;
    *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
    *((_DWORD *)a1 + 19) = DpiDependentMetric;
    if ( (v33 & 8) != 0 )
    {
      v34 = (int *)((char *)a1 + 88);
      *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
      *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
      *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
      v35 = (void **)((char *)a1 + 96);
      *((_QWORD *)a1 + 12) = v31;
      memmove(v31, *((const void **)a4 + 13), (unsigned int)Size);
      v36 = *((_QWORD *)a1 + 12);
      v37 = v36 + *((_QWORD *)a4 + 14);
      *((_QWORD *)a1 + 13) = v37;
      v38 = v36 + *((_QWORD *)a4 + 15);
      *((_QWORD *)a1 + 14) = v38;
      v39 = 0;
      v40 = *((_DWORD *)a1 + 23);
      if ( v40 > 0 )
      {
        v41 = 0LL;
        do
        {
          v42 = *(_DWORD *)(v41 + v37);
          if ( v42 < 0 || v42 >= *v34 )
            goto LABEL_54;
          ++v39;
          v41 += 4LL;
        }
        while ( v39 < v40 );
      }
      v43 = 0;
      if ( v40 > 0 )
      {
        v44 = 0LL;
        do
        {
          if ( (unsigned int)(100 * *(_DWORD *)(v44 + v38)) >= 6 )
            break;
          ++v43;
          v44 += 4LL;
        }
        while ( v43 < v40 );
      }
      if ( v43 == v40 )
      {
LABEL_54:
        v45 = 87LL;
LABEL_55:
        UserSetLastError(v45);
        Win32FreePool(*v35);
        *v35 = 0LL;
        *((_QWORD *)a1 + 13) = 0LL;
        *((_QWORD *)a1 + 14) = 0LL;
        *v34 = 0;
        *((_DWORD *)a1 + 23) = 0;
        *((_DWORD *)a1 + 30) = 0;
        return 0;
      }
      v46 = 0;
      if ( *v34 > 0 )
      {
        v47 = 0LL;
        v82 = 0LL;
        while ( 1 )
        {
          v48 = HMValidateHandle(*(_QWORD *)((char *)*v35 + v47), 3u);
          v52 = v48;
          if ( !v48 )
            break;
          v53 = *(_DWORD *)(v48 + 80);
          if ( (v53 & 8) != 0
            || (v53 & 0x40) == 0
            || PsGetCurrentProcess(v50, v49, v51) != gpepCSRSS && !*(_QWORD *)(v52 + 24) )
          {
            break;
          }
          *(_QWORD *)((char *)*v35 + v82) = 0LL;
          v73[0] = (char *)*v35 + 8 * v46;
          v73[1] = v52;
          HMAssignmentLock(v73, 0LL);
          ++v46;
          v47 = v82 + 8;
          v82 += 8LL;
          if ( v46 >= *v34 )
            goto LABEL_95;
        }
        v54 = v46 - 1;
        if ( v54 >= 0 )
        {
          v55 = 8LL * v54;
          do
          {
            HMAssignmentUnlock((char *)*v35 + v55);
            v55 -= 8LL;
            --v54;
          }
          while ( v54 >= 0 );
        }
        v45 = 1402LL;
        goto LABEL_55;
      }
LABEL_95:
      *((_QWORD *)a1 + 6) = a1;
      if ( (*v72 & 0x40) == 0 )
      {
        v68 = *((_QWORD *)a1 + 3);
        if ( !v68 )
        {
          *((_QWORD *)a1 + 4) = gpcurFirst;
          gpcurFirst = (__int64)a1;
LABEL_100:
          *v72 |= 0x100u;
          return 1;
        }
        if ( (*v72 & 4) != 0 )
        {
          *((_QWORD *)a1 + 4) = *(_QWORD *)(v68 + 736);
          *(_QWORD *)(v68 + 736) = a1;
          goto LABEL_100;
        }
      }
      return 1;
    }
    v56 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v33, v72, a3, v31, v71, v12);
    if ( !ExIsResourceAcquiredSharedLite(*v56) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v57 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v57 = *ThreadWin32Thread;
    if ( (*(_DWORD *)(v57 + 1272) & 0x8000000) != 0 )
      v57 = *(_QWORD *)(v57 + 1520);
    v59 = *(_QWORD *)(v57 + 424);
    *((_QWORD *)a4 + 6) = 0LL;
    *(_OWORD *)((char *)a4 + 56) = 0LL;
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
    *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    v60 = (HSURF)*((_QWORD *)a4 + 4);
    if ( v60 && (int)GreReferenceObject(v60) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 4));
      v61 = *((_QWORD *)a4 + 5);
      if ( v61 )
        GreDeleteObject(v61);
      return 0;
    }
    v62 = (HSURF)*((_QWORD *)a4 + 5);
    if ( v62 && (int)GreReferenceObject(v62) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v63 = (HSURF)*((_QWORD *)a4 + 4);
    }
    else
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( *((_DWORD *)a1 + 36) )
        {
          v64 = *((_QWORD *)a4 + 4);
          if ( v64 )
          {
            if ( !*((_QWORD *)a4 + 5)
              || (unsigned int)GreExtGetObjectW(v64)
              && (unsigned int)GreExtGetObjectW(*((_QWORD *)a4 + 5))
              && (DWORD2(v80) == SDWORD2(v78) >> 1 || DWORD2(v80) == DWORD2(v78))
              && SDWORD1(v80) >= SDWORD1(v78) )
            {
              *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
              v65 = (HBITMAP)*((_QWORD *)a4 + 5);
              *((_QWORD *)a1 + 12) = v65;
              *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v65);
              GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
              GreIncQuotaCount(v59);
              v66 = *((_QWORD *)a1 + 12);
              if ( v66 )
              {
                GreSetBitmapOwner(v66, 0LL);
                GreIncQuotaCount(v59);
              }
              v67 = *((_QWORD *)a1 + 16);
              if ( v67 )
              {
                GreSetBitmapOwner(v67, 0LL);
                GreIncQuotaCount(v59);
              }
              goto LABEL_95;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v70 = (HSURF)*((_QWORD *)a4 + 4);
      if ( v70 )
        GreDereferenceObject(v70, 0);
      v63 = (HSURF)*((_QWORD *)a4 + 5);
    }
    if ( v63 )
      GreDereferenceObject(v63, 0);
    return 0;
  }
  if ( (v12 & 8) == 0 )
  {
    v14 = *((_QWORD *)a4 + 4);
    if ( v14 )
      GreDeleteObject(v14);
    v15 = *((_QWORD *)a4 + 5);
    if ( v15 )
      GreDeleteObject(v15);
  }
LABEL_32:
  *((_QWORD *)a1 + 8) = 0LL;
  v13->Length = 0;
  *((_WORD *)a1 + 29) = 0;
  return 0;
}
