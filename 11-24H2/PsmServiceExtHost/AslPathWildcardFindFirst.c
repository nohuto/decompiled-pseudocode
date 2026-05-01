/*
 * XREFs of AslPathWildcardFindFirst @ 0x1800A4510
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A880 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1800636A8 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     ULongLongMult @ 0x180092168 (ULongLongMult.c)
 *     AslDoesFileExistNtPath @ 0x18009D734 (AslDoesFileExistNtPath.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     RtlStringCbCopyNW @ 0x18009ED04 (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x18009EDE0 (RtlUShortAdd.c)
 *     AslPathCleanUstr @ 0x1800A3E88 (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x1800A4B44 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A5A24 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A5CC0 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5DB4 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x1800A5E10 (AslpPathWildcardMakeLeaves.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(_WORD *a1, ULONGLONG a2, const wchar_t *a3, _QWORD *a4)
{
  WCHAR *v8; // r15
  int matched; // ebx
  unsigned __int64 v10; // rbx
  WCHAR *Heap; // rax
  int Leaves; // eax
  WCHAR *Buffer; // rcx
  PVOID v14; // rdi
  int v15; // eax
  int v16; // esi
  ULONGLONG v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  ULONGLONG v21; // r14
  int v22; // r11d
  void *v23; // r8
  void *v24; // rcx
  PVOID v25; // rax
  PVOID v26; // rbx
  _QWORD *v27; // rdi
  void *v28; // r8
  ULONGLONG v29; // r14
  ULONGLONG v30; // rcx
  __int64 v31; // rbx
  ULONGLONG v32; // rax
  ULONGLONG v33; // rdx
  ULONGLONG v34; // rcx
  ULONGLONG v35; // rbx
  ULONGLONG v36; // r10
  void *v37; // r8
  void *v38; // rcx
  PVOID v39; // rax
  PVOID v40; // rsi
  ULONGLONG v41; // rcx
  _OWORD *v42; // rdx
  _DWORD *v43; // [rsp+30h] [rbp-50h] BYREF
  ULONGLONG pullResult; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v47; // [rsp+60h] [rbp-20h] BYREF
  __int128 v48; // [rsp+70h] [rbp-10h]
  ULONGLONG Size; // [rsp+B8h] [rbp+38h] BYREF

  Size = a2;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *a4 = 0LL;
  *a1 = 0;
  v43 = 0LL;
  LOWORD(Size) = 0;
  UnicodeString = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  matched = RtlDosPathNameToNtPathName_U_WithStatus(a3, &UnicodeString, 0LL, 0LL);
  if ( matched < 0 )
    goto LABEL_59;
  matched = AslPathCleanUstr(&UnicodeString.Length);
  if ( matched < 0 )
    goto LABEL_59;
  matched = RtlUShortAdd(UnicodeString.Length, 4, (__int16 *)&Size);
  if ( matched < 0 )
    goto LABEL_59;
  v10 = (unsigned __int16)Size;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)Size);
  v8 = Heap;
  if ( Heap )
  {
    matched = RtlStringCbCopyNW(Heap, v10, (__int64)UnicodeString.Buffer, UnicodeString.Length);
    if ( matched < 0 )
      goto LABEL_59;
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      matched = -1073741767;
      AslLogCallPrintf(1LL);
      goto LABEL_60;
    }
    if ( Leaves == 1 )
    {
      Buffer = UnicodeString.Buffer;
      *a4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        matched = -2147483642;
        goto LABEL_60;
      }
      matched = RtlStringCchCopyW(a1, 260LL, (__int64)a3);
      if ( matched >= 0 )
      {
        matched = 0;
        goto LABEL_60;
      }
LABEL_59:
      AslLogCallPrintf(1LL);
      goto LABEL_60;
    }
    v43 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
    v14 = v43;
    if ( !v43 )
      goto LABEL_11;
    v15 = wcsncmp(a3, L"\\??\\", 4uLL);
    v16 = -1073741811;
    *v43 = v15 != 0;
    *((_QWORD *)v14 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v14 + 1) = 0LL;
    *((_OWORD *)v14 + 2) = 0LL;
    *((_OWORD *)v14 + 3) = 0LL;
    *((_QWORD *)v14 + 2) = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v14 + 5) = 0LL;
    *((_QWORD *)v14 + 6) = 16LL;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_QWORD *)v14 + 7) = 0LL;
    *((_QWORD *)v14 + 3) = 32LL;
    v17 = *((_QWORD *)v14 + 5);
    if ( v17 < 8 )
    {
      v18 = *((_QWORD *)v14 + 6);
      v19 = v18 - 1;
      v20 = v18 + 7;
      if ( v20 < 8 )
      {
        matched = -1073741675;
      }
      else
      {
        v21 = v20 & ~v19;
        Size = 0LL;
        if ( ULongLongMult(v17, 0x20uLL, &pullResult) < 0 || ULongLongMult(v21, *((_QWORD *)v14 + 3), &Size) < 0 )
        {
          matched = v22;
        }
        else
        {
          v23 = (void *)*((_QWORD *)v14 + 7);
          v24 = (void *)*((_QWORD *)v14 + 2);
          if ( v23 )
          {
            v26 = RtlReAllocateHeap(v24, 0, v23, Size);
          }
          else
          {
            v25 = RtlAllocateHeap(v24, 0, Size);
            v26 = v25;
            if ( v25 )
              memset_0(v25, 0, Size);
          }
          if ( v26 )
          {
            *((_QWORD *)v14 + 5) = v21;
            *((_QWORD *)v14 + 7) = v26;
            matched = 0;
          }
          else
          {
            matched = -1073741801;
          }
        }
        if ( !matched )
          goto LABEL_35;
      }
    }
    else
    {
      matched = -1073741811;
    }
    v28 = (void *)*((_QWORD *)v14 + 7);
    if ( v28 )
      RtlFreeHeap(*((HANDLE *)v14 + 2), 0, v28);
    *((_OWORD *)v14 + 1) = 0LL;
    *((_OWORD *)v14 + 2) = 0LL;
    *((_OWORD *)v14 + 3) = 0LL;
    if ( matched < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_59;
    }
LABEL_35:
    v27 = v43;
    RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v43 + 1));
    matched = AslpPathWildcardAllocMatchNode(
                (unsigned int)&v47,
                (unsigned int)&DestinationString,
                *((_QWORD *)v43 + 1),
                1,
                0LL,
                0);
    if ( matched < 0 )
      goto LABEL_59;
    v29 = *((_QWORD *)v43 + 4);
    if ( v29 < *((_QWORD *)v43 + 5) )
    {
      v36 = 0LL;
    }
    else
    {
      v30 = v29 + 1;
      if ( v29 + 1 <= *((_QWORD *)v43 + 5) )
      {
LABEL_58:
        matched = v16;
        goto LABEL_59;
      }
      v31 = *((_QWORD *)v43 + 6) - 1LL;
      v32 = v31 + v30;
      if ( v31 + v30 < v30 )
      {
LABEL_57:
        v16 = -1073741675;
        goto LABEL_58;
      }
      v33 = *((_QWORD *)v43 + 3);
      v34 = *((_QWORD *)v43 + 5);
      v35 = v32 & ~v31;
      Size = 0LL;
      if ( ULongLongMult(v34, v33, &pullResult) < 0 || ULongLongMult(v35, *((_QWORD *)v43 + 3), &Size) < 0 )
      {
        matched = -1073741675;
      }
      else
      {
        v37 = (void *)*((_QWORD *)v43 + 7);
        v38 = (void *)*((_QWORD *)v43 + 2);
        if ( v37 )
        {
          v40 = RtlReAllocateHeap(v38, 0, v37, Size);
        }
        else
        {
          v39 = RtlAllocateHeap(v38, 0, Size);
          v40 = v39;
          if ( v39 )
            memset_0(v39, 0, Size);
        }
        v36 = 0LL;
        if ( v40 )
        {
          *((_QWORD *)v43 + 5) = v35;
          matched = 0;
          v27[7] = v40;
        }
        else
        {
          matched = -1073741801;
        }
      }
      if ( matched )
        goto LABEL_59;
    }
    v41 = v27[3];
    Size = v36;
    if ( ULongLongMult(v41, v29, &Size) >= 0 )
    {
      v42 = (_OWORD *)(v27[7] + Size);
      if ( (unsigned __int64)v42 >= v27[7] )
      {
        *v42 = v47;
        v42[1] = v48;
        ++v27[4];
        *a4 = v27;
        v47 = 0LL;
        v48 = 0LL;
        matched = AslPathWildcardFindNext(a1, 260LL, v27);
        goto LABEL_60;
      }
    }
    goto LABEL_57;
  }
LABEL_11:
  matched = -1073741801;
LABEL_60:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    AslFree(NtCurrentPeb()->ProcessHeap, v8);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v43);
    AslpPathWildcardFreeMatchNode(&v47);
    *a4 = 0LL;
  }
  return (unsigned int)matched;
}
