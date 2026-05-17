/*
 * XREFs of RtlGetImageFileMachines @ 0x180015120
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     NtQuerySection @ 0x180163C40 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x1801655D0 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x180166DF0 (NtUnmapViewOfSectionEx.c)
 */

__int64 __fastcall RtlGetImageFileMachines(const wchar_t *a1, int *a2)
{
  size_t v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // bx
  int v9; // eax
  unsigned __int64 v10; // rbx
  int v11; // esi
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  bool v15; // r14
  unsigned __int64 v16; // rsi
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  _DWORD *v21; // rdx
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
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
    v6 = RtlpDosPathNameToRelativeNtPathName(0, (unsigned int)v42, 0, (unsigned int)&v41, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  v6 = -1073741562;
LABEL_5:
  Section = v6;
  if ( v6 < 0 )
    goto LABEL_15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v41;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_15;
  Section = NtCreateSection(&Handle, 5LL, 0LL);
  if ( Section < 0 )
    goto LABEL_15;
  Section = NtQuerySection(Handle, 1LL, v48);
  if ( Section < 0 )
    goto LABEL_15;
  v7 = v49;
  v8 = v49;
  if ( (unsigned __int16)v49 == 34404 )
  {
    *a2 |= 2u;
  }
  else
  {
    v4 = (unsigned int)(unsigned __int16)v49 - 332;
    if ( (unsigned __int16)v49 == 332 )
    {
      *a2 |= 1u;
    }
    else
    {
      v4 = (unsigned int)(unsigned __int16)v49 - 452;
      if ( (unsigned __int16)v49 == 452 )
      {
        *a2 |= 4u;
      }
      else if ( (unsigned __int16)v49 == 43620 )
      {
        *a2 |= 8u;
      }
    }
  }
  if ( (BYTE3(v49) & 2) != 0 && (BYTE3(v49) & 1) != 0 && v8 == 332 )
  {
    *a2 |= 4u;
    v9 = *a2 | 2;
    *a2 = v9;
    *a2 = v9 | 8;
LABEL_15:
    v10 = v30;
    goto LABEL_91;
  }
  v11 = 43620;
  if ( v7 == -21916 || v7 == -31132 )
  {
    *(_QWORD *)&v43 = v43 & 0xFFFFFFFFFFFFFF00uLL | 6;
    if ( v7 != -31132 )
      v11 = 34404;
    DWORD2(v43) = v11;
    if ( (int)ZwMapViewOfSectionEx(Handle, -1LL, &v38) >= 0 )
    {
      if ( v8 == -31132 )
      {
        v26 = v11 - 332;
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
  v12 = 0;
  v31 = 0;
  Section = ZwMapViewOfSectionEx(Handle, -1LL, &v30);
  if ( Section < 0 )
    goto LABEL_15;
  Section = 0;
  v39 = 0LL;
  RtlImageNtHeaderEx(1, v30, 0LL, &v39);
  v5 = v35;
  v10 = v30;
  v4 = v35 + v30;
  if ( v39 + 264 > v35 + v30 || v4 <= v30 || v39 < v30 || v39 + 264 <= v39 )
    goto LABEL_44;
  if ( *(_WORD *)(v39 + 24) == 267 )
    goto LABEL_91;
  v13 = *(unsigned int *)(v39 + 80);
  v14 = (unsigned int)v13;
  if ( v13 > v35 )
    goto LABEL_44;
  v15 = 1;
  v44 = v30;
  v37 = 0LL;
  v16 = 0LL;
  v32 = 0LL;
  if ( (v30 & 3) != 0 )
  {
    v15 = (v30 & 1) == 0;
    v10 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    v44 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v4 = (unsigned int)RtlImageNtHeaderEx(1, v10, 0LL, &v37);
  if ( !v37 )
    goto LABEL_40;
  v17 = *(_WORD *)(v37 + 24);
  if ( v17 != 267 )
  {
    if ( v17 == 523 && *(_DWORD *)(v37 + 132) > 0xAu )
    {
      v18 = *(unsigned int *)(v37 + 216);
      if ( (_DWORD)v18 )
      {
        v12 = *(_DWORD *)(v37 + 220);
        v31 = v12;
        if ( v15 || (unsigned int)v18 < *(_DWORD *)(v37 + 84) )
        {
          v16 = v10 + v18;
          v32 = v10 + v18;
          v4 = 0LL;
        }
        else
        {
          v16 = RtlAddressInSectionTable(v37, v10, (unsigned int)v18);
          v32 = v16;
          v25 = 0;
          if ( !v16 )
            v25 = -1073741811;
          v4 = v25;
        }
      }
      else
      {
        v4 = 3221225474LL;
      }
      goto LABEL_40;
    }
LABEL_59:
    v4 = 3221225485LL;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(v37 + 116) <= 0xAu )
    goto LABEL_59;
  v20 = *(unsigned int *)(v37 + 200);
  if ( (_DWORD)v20 )
  {
    v12 = *(_DWORD *)(v37 + 204);
    v31 = v12;
    if ( v15 || (unsigned int)v20 < *(_DWORD *)(v37 + 84) )
    {
      v16 = v10 + v20;
      v32 = v10 + v20;
      v4 = 0LL;
    }
    else
    {
      v34 = 0;
      v40 = 0LL;
      v21 = (_DWORD *)(*(unsigned __int16 *)(v37 + 20) + v37 + 24);
      v40 = v21;
      v22 = *(unsigned __int16 *)(v37 + 6);
      v5 = 0LL;
      v34 = 0;
      while ( (unsigned int)v5 < v22 )
      {
        v23 = v21[3];
        if ( (unsigned int)v20 >= v23 && (unsigned int)v20 < v21[4] + v23 )
        {
          if ( v21 )
          {
            v16 = v20 + v10 + (unsigned int)v21[5] - (unsigned __int64)(unsigned int)v21[3];
            v45 = v16;
            goto LABEL_56;
          }
          break;
        }
        v21 += 10;
        v40 = v21;
        v5 = (unsigned int)(v5 + 1);
        v34 = v5;
      }
      v16 = 0LL;
      v45 = 0LL;
LABEL_56:
      v32 = v16;
      v24 = 0;
      if ( !v16 )
        v24 = -1073741811;
      v4 = v24;
      v12 = v31;
    }
  }
  else
  {
    v4 = 3221225474LL;
  }
LABEL_40:
  if ( (v4 & 0x80000000) != 0LL )
    v16 = 0LL;
  v32 = v16;
  v10 = v30;
  if ( v16 )
  {
    v19 = v16 + v12;
    if ( v19 <= v14 + v30 && v14 + v30 > v30 && v16 >= v30 && v19 > v16 && *(_DWORD *)v16 == v12 )
    {
      if ( v12 >= 0xD0 && *(_QWORD *)(v16 + 200) )
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
  if ( v10 )
    NtUnmapViewOfSectionEx(-1LL, v10);
  if ( Handle )
    NtClose(Handle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( *((_QWORD *)&v41 + 1) )
    RtlpSysVolFree(*((_QWORD *)&v41 + 1), v4, v5);
  return (unsigned int)Section;
}
