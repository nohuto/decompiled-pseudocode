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

__int64 __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        unsigned int a2,
        __int64 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // di
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 result; // rax
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned __int16 v17; // cx
  unsigned int v18; // r12d
  unsigned int v19; // edi
  __int64 Heap; // rax
  int File; // edi
  _DWORD *v22; // rbx
  int v23; // edx
  unsigned int v24; // ecx
  unsigned __int64 v25; // r14
  char *v26; // r12
  _DWORD *v27; // r12
  __int64 v28; // r14
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // [rsp+70h] [rbp-4E8h]
  unsigned __int16 v32; // [rsp+74h] [rbp-4E4h] BYREF
  __int64 v33[2]; // [rsp+78h] [rbp-4E0h] BYREF
  unsigned int v34; // [rsp+88h] [rbp-4D0h]
  unsigned int v35; // [rsp+8Ch] [rbp-4CCh]
  int v36; // [rsp+90h] [rbp-4C8h]
  __int64 v37; // [rsp+98h] [rbp-4C0h] BYREF
  int v38; // [rsp+A0h] [rbp-4B8h]
  __int64 *v39; // [rsp+A8h] [rbp-4B0h]
  void *v40; // [rsp+B0h] [rbp-4A8h]
  _QWORD v41[2]; // [rsp+B8h] [rbp-4A0h] BYREF
  char *v42; // [rsp+C8h] [rbp-490h]
  unsigned __int64 *v43; // [rsp+D0h] [rbp-488h]
  unsigned __int64 *v44; // [rsp+D8h] [rbp-480h]
  __int64 v45; // [rsp+E0h] [rbp-478h]
  __int128 v46; // [rsp+E8h] [rbp-470h] BYREF
  int v47; // [rsp+100h] [rbp-458h] BYREF
  unsigned __int16 v48; // [rsp+104h] [rbp-454h]
  unsigned __int16 v49; // [rsp+106h] [rbp-452h]
  unsigned __int16 v50; // [rsp+114h] [rbp-444h]
  __int16 v51; // [rsp+118h] [rbp-440h]
  unsigned int v52; // [rsp+174h] [rbp-3E4h]
  unsigned int v53; // [rsp+184h] [rbp-3D4h]
  unsigned int v54; // [rsp+188h] [rbp-3D0h]
  int v55; // [rsp+18Ch] [rbp-3CCh]
  unsigned int v56; // [rsp+198h] [rbp-3C0h]
  int v57; // [rsp+19Ch] [rbp-3BCh]
  _WORD v58[30]; // [rsp+210h] [rbp-348h] BYREF
  unsigned int v59; // [rsp+24Ch] [rbp-30Ch]
  unsigned __int16 v60[264]; // [rsp+250h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+460h] [rbp-F8h] BYREF

  v36 = a4;
  v39 = a3;
  v8 = a2;
  v35 = a2;
  v42 = Handle;
  v44 = a5;
  v43 = a6;
  v40 = a7;
  v45 = a8;
  memset_thunk_772440563353939046(v58, 0, 0x40uLL);
  v37 = 0LL;
  v60[1] = 0;
  memset_thunk_772440563353939046(v60, 0, 0x206uLL);
  v33[0] = 4456514LL;
  v33[1] = (__int64)L"LdrpResSearchResourceHandle Enter";
  v41[0] = 4325440LL;
  v41[1] = L"LdrpResSearchResourceHandle Exit";
  v46 = 0LL;
  memset_thunk_772440563353939046(Src, 0, 0xACuLL);
  v32 = 0;
  memset_thunk_772440563353939046(&v47, 0, 0x108uLL);
  v11 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v13 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v29 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v29 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v33, *(unsigned __int8 *)v29);
  }
  else
  {
    v13 = 2147353476LL;
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    v31 = -1073741811;
    Heap = 0LL;
    goto LABEL_54;
  }
  v38 = v8 & 0x1000;
  result = LdrpResFileSize((__int64)Handle, &v37);
  if ( (int)result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, (__int64)v58, 64);
  if ( (int)result < 0 )
    return result;
  if ( v58[0] != 23117 )
    goto LABEL_69;
  v34 = v59;
  if ( (v8 & 0x1000) != 0 )
  {
    if ( (unsigned __int64)v59 + 264 < v59 )
      goto LABEL_69;
    if ( v59 > 0x10000000 )
      goto LABEL_69;
    if ( v59 + 264 <= v59 )
      goto LABEL_69;
    v15 = v37;
    if ( (unsigned __int64)v59 + 264 >= (unsigned int)v37 )
      goto LABEL_69;
  }
  else
  {
    v15 = v37;
  }
  result = LdrpResReadFile(Handle, v59, (__int64)&v47, 264);
  if ( (int)result < 0 )
    return result;
  if ( v47 != 17744 )
    goto LABEL_69;
  if ( v51 == 267 )
  {
    v16 = v48;
    if ( v48 != 332 )
    {
      if ( (unsigned __int16)(v48 - 448) > 4u )
        goto LABEL_69;
      v30 = 21;
      LOWORD(v16) = v48 - 448;
      if ( !_bittest(&v30, v16) )
        goto LABEL_69;
    }
    if ( v52 > 2 && v55 )
    {
      v17 = v50;
      if ( v50 >= 0x78u )
      {
        v18 = v54;
        goto LABEL_19;
      }
LABEL_69:
      File = -1073741701;
LABEL_70:
      v31 = File;
      Heap = 0LL;
      goto LABEL_54;
    }
LABEL_86:
    File = -1073741687;
    goto LABEL_70;
  }
  if ( v51 != 523 || v48 != 0xAA64 && v48 != 0x8664 )
    goto LABEL_69;
  if ( v53 <= 2 || !v57 )
    goto LABEL_86;
  v17 = v50;
  if ( v50 < 0x88u )
    goto LABEL_69;
  v18 = v56;
LABEL_19:
  if ( !v18 )
    return 3221225609LL;
  if ( !v49 )
    goto LABEL_69;
  v19 = 40 * v49;
  if ( v19 + v34 + v17 + 24 > v15 )
    goto LABEL_69;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v19);
  v33[0] = Heap;
  if ( !Heap )
  {
    File = -1073741801;
    v31 = -1073741801;
    goto LABEL_54;
  }
  File = LdrpResReadFile(Handle, v50 + 24 + v34, v33[0], v19);
  v31 = File;
  if ( File >= 0 )
  {
    v22 = (_DWORD *)v33[0];
    v23 = 0;
    if ( v49 )
    {
      do
      {
        v24 = v22[3];
        if ( v18 >= v24 && v18 < v22[4] + v24 )
          break;
        v22 += 10;
        ++v23;
      }
      while ( v23 < v49 );
    }
    if ( v23 < v49 && (v25 = v18 + (unsigned int)v22[5] - (unsigned __int64)(unsigned int)v22[3]) != 0 )
    {
      v26 = v42;
      File = LdrpResSetFilePointer((__int64)v42, v25);
      v31 = File;
      if ( File >= 0 )
      {
        if ( v36 == 3 )
        {
          if ( (v35 & 0x20) != 0 )
          {
            v60[0] = 1;
            v60[2] = 0;
          }
          else
          {
            File = LdrResFallbackLangList(0LL, 0, *((_WORD *)v39 + 8), v35, v60);
            v31 = File;
            if ( File < 0 && v38 )
              goto LABEL_35;
          }
        }
        File = LdrpResSearchResourceInsideDirectory(
                 0LL,
                 v26,
                 (unsigned int)v37,
                 v25,
                 (__int64)&v47,
                 (__int64)v22,
                 v39,
                 v36,
                 (__int64)v60,
                 v44,
                 v43,
                 v35,
                 &v32);
        v31 = File;
        if ( File >= 0 )
        {
          v27 = (_DWORD *)v45;
          if ( v45 )
          {
            if ( !v32 )
            {
              LODWORD(v28) = 0;
              goto LABEL_49;
            }
            *((_QWORD *)&v46 + 1) = Src;
            WORD1(v46) = 172;
            File = RtlLcidToLocaleName(v32, &v46, 2LL, 0LL);
            v31 = File;
            if ( File >= 0 )
            {
              v28 = -1LL;
              do
                ++v28;
              while ( Src[v28] );
LABEL_49:
              if ( (unsigned int)v28 < *v27 && v40 )
              {
                memmove(v40, Src, 2LL * (unsigned int)v28);
                *v27 = v28 + 1;
                *((_WORD *)v40 + (unsigned int)v28) = 0;
                Heap = v33[0];
              }
              else
              {
                *v27 = v28 + 1;
                File = -1073741789;
                v31 = -1073741789;
                Heap = v33[0];
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
      v31 = -1073741701;
    }
  }
LABEL_35:
  Heap = v33[0];
LABEL_54:
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v10);
    File = v31;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    File = v31;
  }
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
      File = v31;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v41, *(unsigned __int8 *)v13);
  }
  return (unsigned int)File;
}
