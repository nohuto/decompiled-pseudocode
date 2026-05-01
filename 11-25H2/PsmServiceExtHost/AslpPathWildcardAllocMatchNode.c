/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x1800A5734
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A4854 (AslPathWildcardFindNext.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlUShortAdd @ 0x18009EAF0 (RtlUShortAdd.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5AC4 (AslpPathWildcardFreeMatchNode.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1800A5E90 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x1800A5F30 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1800A5FF8 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1800A60A4 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        unsigned __int16 *a1,
        _WORD *a2,
        _WORD *a3,
        int a4,
        __int64 a5,
        unsigned __int16 a6)
{
  int v8; // edi
  unsigned int v9; // eax
  PVOID Heap; // rax
  __int16 v11; // bx
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  while ( 1 )
  {
    *((_QWORD *)a1 + 2) = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *((_QWORD *)a1 + 2) = a3 + 1;
  if ( !a3[1] )
  {
    v8 = a4 != 0 ? -1073741638 : -1073741197;
LABEL_22:
    AslpPathWildcardFreeMatchNode(a1);
    return (unsigned int)v8;
  }
  if ( !a4 )
  {
    v8 = -1073741565;
    goto LABEL_22;
  }
  LOWORD(v17) = *a2;
  v8 = RtlUShortAdd(v17, a6, (__int16 *)&v17);
  if ( v8 < 0 )
    goto LABEL_21;
  v8 = RtlUShortAdd(v17, 4, (__int16 *)&v17);
  if ( v8 < 0 )
    goto LABEL_21;
  v9 = (unsigned __int16)v17;
  a1[1] = v17;
  *a1 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  *((_QWORD *)a1 + 1) = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_22;
  }
  v8 = RtlUnicodeStringCopy(a1, a2);
  if ( v8 < 0 )
    goto LABEL_21;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) != 92 )
  {
    v13 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v8 = RtlUnicodeStringValidateDestWorker(a1, &v13, &v17, &v18);
    if ( v8 >= 0 )
    {
      v11 = v18;
      v14 = 0LL;
      v8 = RtlWideCharArrayCopyStringWorker(
             (int)v13 + 2 * (int)v18,
             (int)v17 - (int)v18,
             (unsigned int)&v14,
             (unsigned int)L"\\",
             0x7FFFLL);
      *a1 = 2 * (v14 + v11);
    }
    if ( v8 < 0 )
      goto LABEL_21;
  }
  if ( a5 && a6 && (v8 = RtlUnicodeStringCbCatStringN(a1, a5, a6), v8 < 0)
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 64,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)a1,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v8 = ZwOpenFile((PHANDLE)a1 + 3, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u),
        v8 < 0) )
  {
LABEL_21:
    AslLogCallPrintf(1LL);
    goto LABEL_22;
  }
  return (unsigned int)v8;
}
