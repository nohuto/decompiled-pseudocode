/*
 * XREFs of GetFinalPathNameByHandleW @ 0x14001B934
 * Callers:
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140017580 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     BasepGetFileRedirectionStatus @ 0x14001D50C (BasepGetFileRedirectionStatus.c)
 * Callees:
 *     BasepGetFileNameInformation @ 0x14001AE8C (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001AFB0 (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001B0E4 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001B4A0 (BasepGetVolumeGUIDFromNTName.c)
 *     StringCchCatW @ 0x14001BF08 (StringCchCatW.c)
 *     StringCchCopyW @ 0x14001BF94 (StringCchCopyW.c)
 *     GetLongPathNameW @ 0x14001CE70 (GetLongPathNameW.c)
 *     memmove_0 @ 0x14001EF93 (memmove_0.c)
 */

__int64 __fastcall GetFinalPathNameByHandleW(HANDLE Handle, STRSAFE_LPWSTR pszDest, int a3, int a4)
{
  STRSAFE_LPWSTR v4; // r12
  unsigned int v6; // esi
  ULONG v7; // ecx
  int v8; // r8d
  unsigned __int16 v9; // cx
  int v10; // r9d
  unsigned __int16 v11; // ax
  int v12; // r14d
  ULONG v13; // ecx
  size_t v14; // rbx
  wchar_t *v15; // rdi
  size_t v16; // rbx
  int v17; // ebx
  const wchar_t *v18; // rcx
  const wchar_t *v19; // rcx
  const wchar_t *v20; // rcx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // r12d
  PVOID Heap; // rax
  wchar_t *v25; // r14
  const wchar_t *v26; // rdi
  const wchar_t *v27; // r15
  const wchar_t *v28; // r8
  size_t v29; // rbx
  unsigned int v30; // r12d
  unsigned int LongPathNameW; // ebx
  int v32; // ebx
  int v33; // eax
  const wchar_t *v34; // rcx
  __int64 v35; // rbx
  size_t v36; // rax
  int v37; // eax
  size_t v38; // rcx
  unsigned int v39; // eax
  const wchar_t *v40; // r8
  size_t v41; // r11
  PVOID BaseAddress; // [rsp+20h] [rbp-28h] BYREF
  STRSAFE_LPCWSTR v44; // [rsp+28h] [rbp-20h] BYREF
  wchar_t *Str; // [rsp+30h] [rbp-18h] BYREF
  PVOID v46[2]; // [rsp+38h] [rbp-10h] BYREF
  STRSAFE_LPCWSTR pszSrc; // [rsp+90h] [rbp+48h] BYREF
  STRSAFE_LPWSTR v48; // [rsp+98h] [rbp+50h]
  size_t cchDest; // [rsp+A0h] [rbp+58h]
  int v50; // [rsp+A8h] [rbp+60h]

  v50 = a4;
  LODWORD(cchDest) = a3;
  v48 = pszDest;
  v4 = pszDest;
  v44 = 0LL;
  pszSrc = 0LL;
  v6 = 0;
  Str = 0LL;
  if ( Handle == (HANDLE)-1LL )
  {
    v7 = 6;
LABEL_3:
    RtlSetLastWin32Error(v7);
    return v6;
  }
  v8 = a4 & 1;
  if ( (a4 & 2) != 0 )
    v8 = 2;
  v9 = (a4 & 1) + 1;
  if ( (a4 & 2) == 0 )
    v9 = a4 & 1;
  v10 = a4 & 4;
  v11 = v9 + 1;
  if ( !v10 )
    v11 = v9;
  if ( v11 > 1u )
  {
    v7 = 87;
    goto LABEL_3;
  }
  v12 = 0;
  if ( !v10 )
    v12 = v8;
  if ( !v11 )
    v12 = 3;
  if ( (unsigned int)BasepGetObjectNTName(Handle, (const void ***)&Str)
    && (unsigned int)BasepGetFileNameInformation(Handle, FileNameInformation, &pszSrc) )
  {
    if ( *pszSrc == 92 )
    {
      v14 = wcslen(Str);
      if ( wcslen(pszSrc) < v14 )
      {
        v15 = Str;
        v16 = wcslen(Str);
        v15[v16 - wcslen(pszSrc)] = 0;
        switch ( v12 )
        {
          case 1:
            v17 = 0;
            if ( !(unsigned int)BasepGetVolumeGUIDFromNTName(Str, &v44) )
            {
              if ( LODWORD(KeGetPcr()->Unused1[0]) != 1 )
                goto LABEL_78;
              v13 = 3;
              goto LABEL_20;
            }
            break;
          case 2:
            v17 = 0;
            v44 = Str;
            Str = 0LL;
            break;
          case 3:
            v17 = 0;
            if ( !(unsigned int)BasepGetVolumeDosLetterNameFromNTName(v15, &v44) )
              goto LABEL_78;
            break;
          default:
            v17 = 0;
            break;
        }
        if ( (v50 & 8) == 0 )
        {
          v46[0] = 0LL;
          BaseAddress = 0LL;
          if ( (unsigned int)BasepGetFileNameInformation(Handle, FileNormalizedNameInformation, v46) )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)pszSrc);
          }
          else
          {
            if ( LODWORD(KeGetPcr()->Unused1[0]) != 87
              && LODWORD(KeGetPcr()->Unused1[0]) != 124
              && LODWORD(KeGetPcr()->Unused1[0]) != 50 )
            {
              goto LABEL_78;
            }
            if ( (v12 & 0xFFFFFFFD) != 0 )
              goto LABEL_48;
            v18 = v44;
            if ( Str )
              v18 = Str;
            if ( !(unsigned int)BasepGetVolumeDosLetterNameFromNTName(v18, &BaseAddress)
              && LODWORD(KeGetPcr()->Unused1[0]) == 8 )
            {
              goto LABEL_78;
            }
            v19 = (const wchar_t *)BaseAddress;
            if ( !BaseAddress )
            {
              v20 = v44;
              if ( Str )
                v20 = Str;
              if ( !(unsigned int)BasepGetVolumeGUIDFromNTName(v20, &BaseAddress) )
                goto LABEL_78;
              v19 = (const wchar_t *)BaseAddress;
              if ( !BaseAddress )
LABEL_48:
                v19 = v44;
            }
            v21 = wcslen(v19);
            v22 = wcslen(pszSrc);
            v23 = 2 * (cchDest + v21 + v22) + 2;
            Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v23);
            v46[0] = Heap;
            v25 = (wchar_t *)Heap;
            if ( !Heap )
            {
              if ( BaseAddress )
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
              v13 = 8;
              goto LABEL_20;
            }
            v26 = (const wchar_t *)BaseAddress;
            v27 = v44;
            v28 = v44;
            if ( BaseAddress )
              v28 = (const wchar_t *)BaseAddress;
            v29 = (unsigned __int64)v23 >> 1;
            StringCchCopyW((STRSAFE_LPWSTR)Heap, v29, v28);
            StringCchCatW(v25, v29, pszSrc);
            v30 = v23 >> 1;
            LongPathNameW = GetLongPathNameW(v25, v25);
            if ( !LongPathNameW )
            {
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v46[0]);
              if ( BaseAddress )
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
              goto LABEL_78;
            }
            if ( LongPathNameW >= v30 )
            {
              if ( v26 )
              {
                v32 = LongPathNameW - wcslen(v26);
                v33 = 0;
                if ( v27 )
                  v33 = wcslen(v27);
                LongPathNameW = v33 + v32;
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
              }
              v6 = LongPathNameW + 1;
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v46[0]);
              v13 = 0;
              goto LABEL_20;
            }
            v34 = v26;
            if ( !v26 )
              v34 = v27;
            v35 = (unsigned int)wcslen(v34);
            v36 = wcslen(v25);
            memmove_0(v25, &v25[v35], 2 * (1 - v35 + v36));
            v17 = 0;
            if ( v26 )
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)pszSrc);
            v4 = v48;
          }
          pszSrc = (STRSAFE_LPCWSTR)v46[0];
        }
        if ( v44 )
          v17 = wcslen(v44);
        v37 = wcslen(pszSrc);
        v38 = (unsigned int)cchDest;
        v6 = v17 + v37;
        v39 = v17 + v37 + 1;
        if ( v39 <= (unsigned int)cchDest )
        {
          v40 = v44;
          *v4 = 0;
          v41 = v38;
          if ( v40 )
            StringCchCopyW(v4, v38, v40);
          StringCchCatW(v4, v41, pszSrc);
          goto LABEL_78;
        }
        v6 = v39;
        v13 = 8;
        goto LABEL_20;
      }
      v13 = 161;
    }
    else
    {
      v13 = 5;
    }
LABEL_20:
    RtlSetLastWin32Error(v13);
  }
LABEL_78:
  if ( Str )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Str);
  if ( pszSrc )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)pszSrc);
  if ( v44 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)v44);
  return v6;
}
