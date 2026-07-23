/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800A66CC
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 *     LdrpResFileSize @ 0x1800A3598 (LdrpResFileSize.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A4B20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResReadFile @ 0x1800A65C0 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800A6680 (LdrpResSetFilePointer.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpResSearchResourceHandle(
        char *FileHandle,
        int a2,
        __int64 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // di
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r15
  int result; // eax
  ULONG v14; // ebx
  unsigned int v15; // eax
  unsigned __int16 v16; // cx
  unsigned int v17; // r12d
  ULONG v18; // edi
  PVOID Heap; // rax
  int File; // edi
  _DWORD *v21; // rbx
  int v22; // edx
  unsigned int v23; // ecx
  unsigned __int64 v24; // r14
  char *v25; // r12
  _DWORD *v26; // r12
  __int64 v27; // r14
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // [rsp+70h] [rbp-4E8h]
  unsigned __int16 v31; // [rsp+74h] [rbp-4E4h] BYREF
  PVOID BaseAddress[2]; // [rsp+78h] [rbp-4E0h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-4D0h]
  int v34; // [rsp+8Ch] [rbp-4CCh]
  int v35; // [rsp+90h] [rbp-4C8h]
  __int64 v36; // [rsp+98h] [rbp-4C0h] BYREF
  int v37; // [rsp+A0h] [rbp-4B8h]
  __int64 *v38; // [rsp+A8h] [rbp-4B0h]
  void *v39; // [rsp+B0h] [rbp-4A8h]
  _QWORD v40[2]; // [rsp+B8h] [rbp-4A0h] BYREF
  char *v41; // [rsp+C8h] [rbp-490h]
  unsigned __int64 *v42; // [rsp+D0h] [rbp-488h]
  unsigned __int64 *v43; // [rsp+D8h] [rbp-480h]
  __int64 v44; // [rsp+E0h] [rbp-478h]
  _UNICODE_STRING LocaleName; // [rsp+E8h] [rbp-470h] BYREF
  int v46; // [rsp+100h] [rbp-458h] BYREF
  unsigned __int16 v47; // [rsp+104h] [rbp-454h]
  unsigned __int16 v48; // [rsp+106h] [rbp-452h]
  unsigned __int16 v49; // [rsp+114h] [rbp-444h]
  __int16 v50; // [rsp+118h] [rbp-440h]
  unsigned int v51; // [rsp+174h] [rbp-3E4h]
  unsigned int v52; // [rsp+184h] [rbp-3D4h]
  unsigned int v53; // [rsp+188h] [rbp-3D0h]
  int v54; // [rsp+18Ch] [rbp-3CCh]
  unsigned int v55; // [rsp+198h] [rbp-3C0h]
  int v56; // [rsp+19Ch] [rbp-3BCh]
  _WORD v57[30]; // [rsp+210h] [rbp-348h] BYREF
  unsigned int v58; // [rsp+24Ch] [rbp-30Ch]
  unsigned __int16 v59[264]; // [rsp+250h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+460h] [rbp-F8h] BYREF

  v35 = a4;
  v38 = a3;
  v8 = a2;
  v34 = a2;
  v41 = FileHandle;
  v43 = a5;
  v42 = a6;
  v39 = a7;
  v44 = a8;
  memset_thunk_772440563353939046(v57, 0, 0x40uLL);
  v36 = 0LL;
  v59[1] = 0;
  memset_thunk_772440563353939046(v59, 0, 0x206uLL);
  BaseAddress[0] = (PVOID)4456514;
  BaseAddress[1] = L"LdrpResSearchResourceHandle Enter";
  v40[0] = 4325440LL;
  v40[1] = L"LdrpResSearchResourceHandle Exit";
  LocaleName = 0LL;
  memset_thunk_772440563353939046(Src, 0, 0xACuLL);
  v31 = 0;
  memset_thunk_772440563353939046(&v46, 0, 0x108uLL);
  v10 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v28 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)BaseAddress, *(unsigned __int8 *)v28);
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( (unsigned __int64)(FileHandle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    v30 = -1073741811;
    Heap = 0LL;
    goto LABEL_54;
  }
  v37 = v8 & 0x1000;
  result = LdrpResFileSize(FileHandle, &v36);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(FileHandle, 0LL, v57, 0x40u);
  if ( result < 0 )
    return result;
  if ( v57[0] != 23117 )
    goto LABEL_69;
  v33 = v58;
  if ( (v8 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v58 + 264 < v58 )
      goto LABEL_69;
    if ( v58 > 0x10000000 )
      goto LABEL_69;
    if ( v58 + 264 <= v58 )
      goto LABEL_69;
    v14 = v36;
    if ( (unsigned __int64)v58 + 264 >= (unsigned int)v36 )
      goto LABEL_69;
  }
  else
  {
    v14 = v36;
  }
  result = LdrpResReadFile(FileHandle, v58, &v46, 0x108u);
  if ( result < 0 )
    return result;
  if ( v46 != 17744 )
    goto LABEL_69;
  if ( v50 == 267 )
  {
    v15 = v47;
    if ( v47 != 332 )
    {
      if ( (unsigned __int16)(v47 - 448) > 4u )
        goto LABEL_69;
      v29 = 21;
      LOWORD(v15) = v47 - 448;
      if ( !_bittest(&v29, v15) )
        goto LABEL_69;
    }
    if ( v51 > 2 && v54 )
    {
      v16 = v49;
      if ( v49 >= 0x78u )
      {
        v17 = v53;
        goto LABEL_19;
      }
LABEL_69:
      File = -1073741701;
LABEL_70:
      v30 = File;
      Heap = 0LL;
      goto LABEL_54;
    }
LABEL_86:
    File = -1073741687;
    goto LABEL_70;
  }
  if ( v50 != 523 || v47 != 0xAA64 && v47 != 0x8664 )
    goto LABEL_69;
  if ( v52 <= 2 || !v56 )
    goto LABEL_86;
  v16 = v49;
  if ( v49 < 0x88u )
    goto LABEL_69;
  v17 = v55;
LABEL_19:
  if ( !v17 )
    return -1073741687;
  if ( !v48 )
    goto LABEL_69;
  v18 = 40 * v48;
  if ( v18 + v33 + v16 + 24 > v14 )
    goto LABEL_69;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  BaseAddress[0] = Heap;
  if ( !Heap )
  {
    File = -1073741801;
    v30 = -1073741801;
    goto LABEL_54;
  }
  File = LdrpResReadFile(FileHandle, v49 + 24 + v33, BaseAddress[0], v18);
  v30 = File;
  if ( File >= 0 )
  {
    v21 = BaseAddress[0];
    v22 = 0;
    if ( v48 )
    {
      do
      {
        v23 = v21[3];
        if ( v17 >= v23 && v17 < v21[4] + v23 )
          break;
        v21 += 10;
        ++v22;
      }
      while ( v22 < v48 );
    }
    if ( v22 < v48 && (v24 = v17 + (unsigned int)v21[5] - (unsigned __int64)(unsigned int)v21[3]) != 0 )
    {
      v25 = v41;
      File = LdrpResSetFilePointer(v41, v24);
      v30 = File;
      if ( File >= 0 )
      {
        if ( v35 == 3 )
        {
          if ( (v34 & 0x20) != 0 )
          {
            v59[0] = 1;
            v59[2] = 0;
          }
          else
          {
            File = LdrResFallbackLangList(0LL, 0LL, *((_WORD *)v38 + 8), v34, v59);
            v30 = File;
            if ( File < 0 && v37 )
              goto LABEL_35;
          }
        }
        File = LdrpResSearchResourceInsideDirectory(
                 0LL,
                 v25,
                 (unsigned int)v36,
                 v24,
                 (__int64)&v46,
                 (__int64)v21,
                 v38,
                 v35,
                 (__int64)v59,
                 v43,
                 v42,
                 v34,
                 &v31);
        v30 = File;
        if ( File >= 0 )
        {
          v26 = (_DWORD *)v44;
          if ( v44 )
          {
            if ( !v31 )
            {
              LODWORD(v27) = 0;
              goto LABEL_49;
            }
            LocaleName.Buffer = Src;
            LocaleName.MaximumLength = 172;
            File = RtlLcidToLocaleName(v31, &LocaleName, 2u, 0);
            v30 = File;
            if ( File >= 0 )
            {
              v27 = -1LL;
              do
                ++v27;
              while ( Src[v27] );
LABEL_49:
              if ( (unsigned int)v27 < *v26 && v39 )
              {
                memmove(v39, Src, 2LL * (unsigned int)v27);
                *v26 = v27 + 1;
                *((_WORD *)v39 + (unsigned int)v27) = 0;
                Heap = BaseAddress[0];
              }
              else
              {
                *v26 = v27 + 1;
                File = -1073741789;
                v30 = -1073741789;
                Heap = BaseAddress[0];
              }
              goto LABEL_54;
            }
          }
        }
      }
    }
    else
    {
      File = -1073741701;
      v30 = -1073741701;
    }
  }
LABEL_35:
  Heap = BaseAddress[0];
LABEL_54:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v30;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    File = v30;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      File = v30;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v40, *(unsigned __int8 *)v12);
  }
  return File;
}
