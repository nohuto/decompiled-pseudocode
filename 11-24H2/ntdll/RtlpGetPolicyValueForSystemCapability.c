/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x180080330
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18001C5C8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     ZwQueryLicenseValue @ 0x180162C40 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(const void **a1, _UNICODE_STRING *a2)
{
  PVOID Heap; // r12
  unsigned __int16 v5; // bx
  wchar_t *Atom; // rax
  wchar_t *v7; // rsi
  wchar_t *v8; // rbx
  unsigned __int16 MaximumLength; // r8
  unsigned __int16 Length; // dx
  unsigned int v11; // ecx
  unsigned int v12; // esi
  wchar_t *v13; // r15
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  ULONG v16; // edi
  ULONG v17; // esi
  _WORD *v18; // rax
  _WORD *v19; // rdi
  __int64 v20; // rcx
  _WORD *v21; // rax
  unsigned __int16 v22; // dx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-38h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+18h] BYREF
  ULONG Type; // [rsp+90h] [rbp+28h] BYREF

  Heap = 0LL;
  DataSize = 0;
  Type = 0;
  ValueName = 0LL;
  if ( !a1 || !a2 )
  {
    v15 = -1073741811;
LABEL_25:
    if ( !a2 )
      goto LABEL_29;
    goto LABEL_26;
  }
  v5 = *(_WORD *)a1 + 56;
  Atom = (wchar_t *)RtlpAllocateAtom(v5);
  v7 = Atom;
  if ( !Atom )
  {
    v15 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(Atom, 0, v5);
  ValueName.MaximumLength = v5;
  ValueName.Buffer = v7;
  if ( (unsigned int)ValueName.Length + 54 > v5 )
  {
    v15 = -1073741789;
    goto LABEL_26;
  }
  v8 = &v7[(unsigned __int64)ValueName.Length >> 1];
  memmove(v8, L"Security-System-Capability-", 0x36uLL);
  MaximumLength = ValueName.MaximumLength;
  Length = ValueName.Length + 54;
  v11 = (unsigned __int16)(ValueName.Length + 54) + 1;
  ValueName.Length += 54;
  if ( v11 < ValueName.MaximumLength )
  {
    v8[27] = 0;
    MaximumLength = ValueName.MaximumLength;
    Length = ValueName.Length;
  }
  v12 = *(unsigned __int16 *)a1;
  if ( (_WORD)v12 )
  {
    if ( v12 + Length > MaximumLength )
    {
      v15 = -1073741789;
      goto LABEL_26;
    }
    v13 = &ValueName.Buffer[(unsigned __int64)Length >> 1];
    memmove(v13, a1[1], *(unsigned __int16 *)a1);
    ValueName.Length += v12;
    if ( (unsigned int)ValueName.Length + 1 < ValueName.MaximumLength )
      v13[(unsigned __int64)v12 >> 1] = 0;
  }
  v14 = ZwQueryLicenseValue(&ValueName, &Type, 0LL, 0, &DataSize);
  v15 = v14;
  if ( v14 != -1073741789 )
  {
    if ( v14 >= 0 )
      goto LABEL_29;
    goto LABEL_25;
  }
  v16 = DataSize;
  v17 = DataSize;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, DataSize);
  v15 = ZwQueryLicenseValue(&ValueName, &Type, Heap, v16, &DataSize);
  if ( v15 >= 0 )
  {
    if ( Type == 1 && v16 && (v16 & 1) == 0 )
    {
      v18 = RtlpAllocateAtom(v16);
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_29:
  if ( ValueName.Buffer )
    RtlpSysVolFree(ValueName.Buffer);
  return (unsigned int)v15;
}
