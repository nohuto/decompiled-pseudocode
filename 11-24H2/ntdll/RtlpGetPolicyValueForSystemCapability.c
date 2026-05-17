/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x1800B3A90
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18003C348 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     ZwQueryLicenseValue @ 0x180164880 (ZwQueryLicenseValue.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(const void **a1, UNICODE_STRING *a2)
{
  const void *Heap; // r12
  unsigned __int16 v5; // bx
  char *Atom; // rax
  char *v7; // rsi
  char *v8; // rbx
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  unsigned int v11; // ecx
  unsigned int v12; // esi
  void *v13; // r15
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // esi
  _WORD *v18; // rax
  _WORD *v19; // rdi
  __int64 v20; // rcx
  _WORD *v21; // rax
  unsigned __int16 v22; // dx
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h] BYREF
  int v26; // [rsp+90h] [rbp+28h] BYREF

  Heap = 0LL;
  LODWORD(Size) = 0;
  v26 = 0;
  v24 = 0LL;
  if ( !a1 || !a2 )
  {
    v15 = -1073741811;
LABEL_25:
    if ( !a2 )
      goto LABEL_29;
    goto LABEL_26;
  }
  v5 = *(_WORD *)a1 + 56;
  Atom = (char *)RtlpAllocateAtom(v5);
  v7 = Atom;
  if ( !Atom )
  {
    v15 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(Atom, 0, v5);
  WORD1(v24) = v5;
  *((_QWORD *)&v24 + 1) = v7;
  if ( (unsigned int)(unsigned __int16)v24 + 54 > v5 )
  {
    v15 = -1073741789;
    goto LABEL_26;
  }
  v8 = &v7[2 * ((unsigned __int64)(unsigned __int16)v24 >> 1)];
  memmove(v8, L"Security-System-Capability-", 0x36uLL);
  v9 = WORD1(v24);
  v10 = v24 + 54;
  v11 = (unsigned __int16)(v24 + 54) + 1;
  LOWORD(v24) = v24 + 54;
  if ( v11 < WORD1(v24) )
  {
    *((_WORD *)v8 + 27) = 0;
    v9 = WORD1(v24);
    v10 = v24;
  }
  v12 = *(unsigned __int16 *)a1;
  if ( (_WORD)v12 )
  {
    if ( v12 + v10 > v9 )
    {
      v15 = -1073741789;
      goto LABEL_26;
    }
    v13 = (void *)(*((_QWORD *)&v24 + 1) + 2 * ((unsigned __int64)v10 >> 1));
    memmove(v13, a1[1], *(unsigned __int16 *)a1);
    LOWORD(v24) = v12 + v24;
    if ( (unsigned int)(unsigned __int16)v24 + 1 < WORD1(v24) )
      *((_WORD *)v13 + ((unsigned __int64)v12 >> 1)) = 0;
  }
  v14 = ZwQueryLicenseValue(&v24, &v26, 0LL, 0LL, &Size);
  v15 = v14;
  if ( v14 != -1073741789 )
  {
    if ( v14 >= 0 )
      goto LABEL_29;
    goto LABEL_25;
  }
  v16 = Size;
  v17 = Size;
  Heap = (const void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)Size);
  v15 = ZwQueryLicenseValue(&v24, &v26, Heap, v16, &Size);
  if ( v15 >= 0 )
  {
    if ( v26 == 1 && v16 && (v16 & 1) == 0 )
    {
      v18 = (_WORD *)RtlpAllocateAtom(v16);
      v19 = v18;
      if ( v18 )
      {
        memmove(v18, Heap, v17);
        *a2 = 0LL;
        v20 = 0x7FFFLL;
        v21 = v19;
        do
        {
          if ( !*v21 )
            break;
          ++v21;
          --v20;
        }
        while ( v20 );
        v15 = -1073741811;
        if ( v20 )
        {
          v15 = 0;
          a2->Buffer = v19;
          v22 = 2 * (0x7FFF - v20);
          a2->Length = v22;
          a2->MaximumLength = v22 + 2;
        }
        if ( v15 >= 0 )
        {
          v15 = 0;
          goto LABEL_27;
        }
      }
      else
      {
        v15 = -1073741801;
      }
    }
    else
    {
      v15 = -1073741823;
    }
  }
LABEL_26:
  RtlFreeAnsiString(a2);
LABEL_27:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
LABEL_29:
  if ( *((_QWORD *)&v24 + 1) )
    RtlpSysVolFree(*((__int64 *)&v24 + 1));
  return (unsigned int)v15;
}
