/*
 * XREFs of GetLongPathNameW @ 0x14001CE70
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001B934 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     InternalGetFileAttributesW @ 0x14001C06C (InternalGetFileAttributesW.c)
 *     FindLFNorSFN_U @ 0x14001CDA0 (FindLFNorSFN_U.c)
 *     SkipPathTypeIndicator_U @ 0x14001D32C (SkipPathTypeIndicator_U.c)
 *     SetErrorMode @ 0x14001DB90 (SetErrorMode.c)
 *     FindClose @ 0x14001DCE4 (FindClose.c)
 *     InternalFindFirstFileExW @ 0x14001DDF8 (InternalFindFirstFileExW.c)
 *     memmove_0 @ 0x14001EF93 (memmove_0.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall GetLongPathNameW(WCHAR *Name, WCHAR *a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v6; // edi
  const WCHAR *v7; // r13
  unsigned int v9; // r14d
  __int16 *v10; // rax
  SIZE_T v11; // rdi
  WCHAR *Heap; // rax
  __int16 *v13; // r14
  char *v14; // r15
  _BYTE *v15; // r12
  __int64 v16; // rax
  unsigned int v17; // edi
  size_t v18; // rbx
  __int16 v19; // bx
  void *FirstFile; // rax
  __int64 v21; // rax
  size_t v22; // rbx
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // [rsp+30h] [rbp-2D8h]
  unsigned int v26; // [rsp+34h] [rbp-2D4h]
  void *Src; // [rsp+38h] [rbp-2D0h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-2C8h]
  PVOID v29; // [rsp+48h] [rbp-2C0h]
  __int16 *v30; // [rsp+50h] [rbp-2B8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-2B0h]
  WCHAR *v32; // [rsp+60h] [rbp-2A8h]
  void *v33; // [rsp+68h] [rbp-2A0h]
  char v34[44]; // [rsp+70h] [rbp-298h] BYREF
  wchar_t Str[274]; // [rsp+9Ch] [rbp-26Ch] BYREF

  v3 = a3;
  v28 = a3;
  v6 = 0;
  v25 = 0;
  Src = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  memset_0(v34, 0, 0x250uLL);
  if ( !Name )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  v9 = SetErrorMode(32769LL);
  v26 = v9;
  if ( (unsigned int)InternalGetFileAttributesW(Name) != -1 )
  {
    v10 = (__int16 *)SkipPathTypeIndicator_U(Name);
    if ( !v10 || !*v10 || !(unsigned int)FindLFNorSFN_U(v10, (__int16 **)&Src, &v30) )
    {
      v24 = wcslen(Name);
      v6 = v24;
      v25 = v24;
      if ( (unsigned int)v3 > v24 && a2 )
      {
        if ( a2 != Name )
          memmove_0(a2, Name, 2LL * (v24 + 1));
      }
      else
      {
        v6 = v24 + 1;
        v25 = v24 + 1;
      }
      goto LABEL_45;
    }
    v11 = 2LL * ((unsigned int)wcslen(Name) + 1);
    Heap = (WCHAR *)RtlAllocateHeap(
                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                      KernelBaseGlobalData + 0x200000,
                      v11);
    v7 = Heap;
    BaseAddress = Heap;
    if ( !Heap )
    {
      RtlSetLastWin32Error(8u);
      v6 = 0;
      goto LABEL_45;
    }
    memmove_0(Heap, Name, v11);
    Src = (void *)&v7[((_BYTE *)Src - (_BYTE *)Name) >> 1];
    v13 = (__int16 *)&v7[((char *)v30 - (char *)Name) >> 1];
    v30 = v13;
    v14 = (char *)a2;
    v32 = a2;
    if ( !(_DWORD)v3 || !a2 )
      goto LABEL_18;
    if ( a2 >= Name )
    {
      if ( a2 < &Name[v11 / 2] )
      {
LABEL_15:
        v29 = RtlAllocateHeap(
                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                KernelBaseGlobalData + 0x200000,
                2 * v3);
        if ( !v29 )
        {
          RtlSetLastWin32Error(8u);
          v6 = 0;
          v7 = (const WCHAR *)BaseAddress;
LABEL_44:
          v9 = v26;
          goto LABEL_45;
        }
        v14 = (char *)v29;
        v32 = (WCHAR *)v29;
        v13 = v30;
        v7 = (const WCHAR *)BaseAddress;
LABEL_18:
        v15 = v7;
        v33 = (void *)v7;
        v6 = 0;
        while ( 1 )
        {
          v16 = ((_BYTE *)Src - v15) >> 1;
          v17 = v16 + v6;
          if ( (_DWORD)v16 && v28 > v17 )
          {
            v18 = 2LL * (unsigned int)v16;
            memmove_0(v14, v15, v18);
            v14 += v18;
            v32 = (WCHAR *)v14;
          }
          v19 = *v13;
          *v13 = 0;
          FirstFile = (void *)InternalFindFirstFileExW(v7);
          *v13 = v19;
          if ( FirstFile == (void *)-1LL )
            break;
          FindClose(FirstFile);
          LODWORD(v21) = wcslen(Str);
          if ( (_DWORD)v21 )
            Src = Str;
          else
            v21 = ((char *)v13 - (_BYTE *)Src) >> 1;
          v6 = v21 + v17;
          v25 = v6;
          if ( v28 > v6 && a2 )
          {
            v22 = 2LL * (unsigned int)v21;
            memmove_0(v14, Src, v22);
            v14 += v22;
            v32 = (WCHAR *)v14;
          }
          v15 = v13;
          v33 = v13;
          if ( !*v13 || !(unsigned int)FindLFNorSFN_U(v13, (__int16 **)&Src, &v30) )
            goto LABEL_33;
          v13 = v30;
        }
        v6 = 0;
        v25 = 0;
LABEL_33:
        if ( v6 )
        {
          v23 = wcslen((const wchar_t *)v15);
          v6 += v23;
          v25 = v6;
          if ( v28 > v6 && a2 )
          {
            memmove_0(v14, v15, 2LL * (unsigned int)(v23 + 1));
            if ( v29 )
              memmove_0(a2, v29, 2LL * (v6 + 1));
          }
          else
          {
            v25 = ++v6;
          }
        }
        goto LABEL_44;
      }
      if ( a2 >= Name )
        goto LABEL_18;
    }
    if ( &a2[v3] < Name )
      goto LABEL_18;
    goto LABEL_15;
  }
LABEL_45:
  if ( v7 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    v6 = v25;
  }
  if ( v29 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v29);
    v6 = v25;
  }
  SetErrorMode(v9);
  return v6;
}
