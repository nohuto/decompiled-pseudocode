/*
 * XREFs of RtlGetImageFileMachines @ 0x1800594E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenFile @ 0x1801622F0 (NtOpenFile.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     NtQuerySection @ 0x1801626B0 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x180164040 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x180165860 (NtUnmapViewOfSectionEx.c)
 */

__int64 __fastcall RtlGetImageFileMachines(const wchar_t *a1, int *a2)
{
  size_t v3; // rax
  int v4; // eax
  __int16 v5; // cx
  __int16 v6; // bx
  int v7; // eax
  unsigned __int64 v8; // rbx
  int v9; // esi
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  bool v13; // r14
  unsigned __int64 v14; // rsi
  int v15; // edx
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  _DWORD *v20; // rdx
  unsigned int v21; // r10d
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // esi
  int v27; // esi
  NTSTATUS Section; // [rsp+50h] [rbp-198h]
  unsigned __int64 v30; // [rsp+60h] [rbp-188h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-180h]
  unsigned __int64 v32; // [rsp+70h] [rbp-178h]
  HANDLE Handle; // [rsp+80h] [rbp-168h] BYREF
  int v34; // [rsp+88h] [rbp-160h]
  unsigned __int64 v35; // [rsp+90h] [rbp-158h]
  HANDLE FileHandle; // [rsp+98h] [rbp-150h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-138h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-130h] BYREF
  _DWORD *v40; // [rsp+C0h] [rbp-128h]
  __int128 v41; // [rsp+D0h] [rbp-118h] BYREF
  _QWORD v42[2]; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-F8h]
  unsigned __int64 v44; // [rsp+100h] [rbp-E8h]
  unsigned __int64 v45; // [rsp+108h] [rbp-E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp-C8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+160h] [rbp-88h] BYREF
  _BYTE v48[48]; // [rsp+170h] [rbp-78h] BYREF
  __int128 v49; // [rsp+1A0h] [rbp-48h]

  v41 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  Handle = 0LL;
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  *a2 = 0;
  v42[0] = 0LL;
  v42[1] = a1;
  if ( !a1 )
    goto LABEL_4;
  v3 = wcslen(a1);
  if ( v3 <= 0x7FFE )
  {
    LOWORD(v42[0]) = 2 * v3;
    WORD1(v42[0]) = 2 * v3 + 2;
LABEL_4:
    v4 = RtlpDosPathNameToRelativeNtPathName(0, (unsigned int)v42, 0, (unsigned int)&v41, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  v4 = -1073741562;
LABEL_5:
  Section = v4;
  if ( v4 < 0 )
    goto LABEL_15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v41;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_15;
  Section = NtCreateSection(&Handle, 5LL, 0LL, 0LL);
  if ( Section < 0 )
    goto LABEL_15;
  Section = NtQuerySection(Handle, 1LL, v48);
  if ( Section < 0 )
    goto LABEL_15;
  v5 = v49;
  v6 = v49;
  switch ( (unsigned __int16)v49 )
  {
    case 0x8664u:
      *a2 |= 2u;
      break;
    case 0x14Cu:
      *a2 |= 1u;
      break;
    case 0x1C4u:
      *a2 |= 4u;
      break;
    case 0xAA64u:
      *a2 |= 8u;
      break;
  }
  if ( (BYTE3(v49) & 2) != 0 && (BYTE3(v49) & 1) != 0 && v6 == 332 )
  {
    *a2 |= 4u;
    v7 = *a2 | 2;
    *a2 = v7;
    *a2 = v7 | 8;
LABEL_15:
    v8 = v30;
    goto LABEL_91;
  }
  v9 = 43620;
  if ( v5 == -21916 || v5 == -31132 )
  {
    *(_QWORD *)&v43 = v43 & 0xFFFFFFFFFFFFFF00uLL | 6;
    if ( v5 != -31132 )
      v9 = 34404;
    DWORD2(v43) = v9;
    if ( (int)ZwMapViewOfSectionEx(Handle, -1LL, &v38) >= 0 )
    {
      if ( v6 == -31132 )
      {
        v26 = v9 - 332;
        if ( v26 )
        {
          v27 = v26 - 120;
          if ( v27 )
          {
            if ( v27 == 43168 )
              *a2 |= 8u;
          }
          else
          {
            *a2 |= 4u;
          }
        }
        else
        {
          *a2 |= 1u;
        }
      }
      else
      {
        *a2 |= 2u;
      }
      NtUnmapViewOfSectionEx(-1LL, v38);
    }
  }
  if ( (*(_BYTE *)a2 & 2) == 0 )
    goto LABEL_15;
  v10 = 0;
  v31 = 0;
  Section = ZwMapViewOfSectionEx(Handle, -1LL, &v30);
  if ( Section < 0 )
    goto LABEL_15;
  Section = 0;
  v39 = 0LL;
  RtlImageNtHeaderEx(1, v30, 0LL, &v39);
  v8 = v30;
  if ( v39 + 264 > v35 + v30 || v35 + v30 <= v30 || v39 < v30 || v39 + 264 <= v39 )
    goto LABEL_44;
  if ( *(_WORD *)(v39 + 24) == 267 )
    goto LABEL_91;
  v11 = *(unsigned int *)(v39 + 80);
  v12 = (unsigned int)v11;
  if ( v11 > v35 )
    goto LABEL_44;
  v13 = 1;
  v44 = v30;
  v37 = 0LL;
  v14 = 0LL;
  v32 = 0LL;
  if ( (v30 & 3) != 0 )
  {
    v13 = (v30 & 1) == 0;
    v8 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    v44 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v15 = RtlImageNtHeaderEx(1, v8, 0LL, &v37);
  if ( !v37 )
    goto LABEL_40;
  v16 = *(_WORD *)(v37 + 24);
  if ( v16 != 267 )
  {
    if ( v16 == 523 && *(_DWORD *)(v37 + 132) > 0xAu )
    {
      v17 = *(unsigned int *)(v37 + 216);
      if ( (_DWORD)v17 )
      {
        v10 = *(_DWORD *)(v37 + 220);
        v31 = v10;
        if ( v13 || (unsigned int)v17 < *(_DWORD *)(v37 + 84) )
        {
          v14 = v8 + v17;
          v32 = v8 + v17;
          v15 = 0;
        }
        else
        {
          v14 = RtlAddressInSectionTable(v37, v8, (unsigned int)v17);
          v32 = v14;
          v25 = 0;
          if ( !v14 )
            v25 = -1073741811;
          v15 = v25;
        }
      }
      else
      {
        v15 = -1073741822;
      }
      goto LABEL_40;
    }
LABEL_59:
    v15 = -1073741811;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(v37 + 116) <= 0xAu )
    goto LABEL_59;
  v19 = *(unsigned int *)(v37 + 200);
  if ( (_DWORD)v19 )
  {
    v10 = *(_DWORD *)(v37 + 204);
    v31 = v10;
    if ( v13 || (unsigned int)v19 < *(_DWORD *)(v37 + 84) )
    {
      v14 = v8 + v19;
      v32 = v8 + v19;
      v15 = 0;
    }
    else
    {
      v34 = 0;
      v40 = 0LL;
      v20 = (_DWORD *)(*(unsigned __int16 *)(v37 + 20) + v37 + 24);
      v40 = v20;
      v21 = *(unsigned __int16 *)(v37 + 6);
      v22 = 0;
      v34 = 0;
      while ( v22 < v21 )
      {
        v23 = v20[3];
        if ( (unsigned int)v19 >= v23 && (unsigned int)v19 < v20[4] + v23 )
        {
          if ( v20 )
          {
            v14 = v19 + v8 + (unsigned int)v20[5] - (unsigned __int64)(unsigned int)v20[3];
            v45 = v14;
            goto LABEL_56;
          }
          break;
        }
        v20 += 10;
        v40 = v20;
        v34 = ++v22;
      }
      v14 = 0LL;
      v45 = 0LL;
LABEL_56:
      v32 = v14;
      v24 = 0;
      if ( !v14 )
        v24 = -1073741811;
      v15 = v24;
      v10 = v31;
    }
  }
  else
  {
    v15 = -1073741822;
  }
LABEL_40:
  if ( v15 < 0 )
    v14 = 0LL;
  v32 = v14;
  v8 = v30;
  if ( v14 )
  {
    v18 = v14 + v10;
    if ( v18 <= v12 + v30 && v12 + v30 > v30 && v14 >= v30 && v18 > v14 && *(_DWORD *)v14 == v10 )
    {
      if ( v10 >= 0xD0 && *(_QWORD *)(v14 + 200) )
      {
        *a2 &= ~2u;
        *a2 |= 0x10u;
      }
      goto LABEL_91;
    }
LABEL_44:
    Section = -1073741701;
  }
LABEL_91:
  if ( v8 )
    NtUnmapViewOfSectionEx(-1LL, v8);
  if ( Handle )
    NtClose(Handle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( *((_QWORD *)&v41 + 1) )
    RtlpSysVolFree(*((__int64 *)&v41 + 1));
  return (unsigned int)Section;
}
