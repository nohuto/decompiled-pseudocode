/*
 * XREFs of NtQueryLicenseValue @ 0x1409604B0
 * Callers:
 *     ExpGetNtProductTypeFromLicenseValue @ 0x1407B73EC (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x140C5838C (MiMemoryLicense.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SLQueryLicenseValueInternal @ 0x1407B9E3C (SLQueryLicenseValueInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     ntoskrnl_27 @ 0x1409607E0 (ntoskrnl_27.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  ULONG_PTR v5; // r15
  NTSTATUS v8; // edi
  char PreviousMode; // dl
  PULONG v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  wchar_t *v14; // rcx
  void *Pool2; // rax
  wchar_t *v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r10
  struct _LIST_ENTRY *Blink; // rcx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  _DWORD Size[3]; // [rsp+44h] [rbp-64h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  UNICODE_STRING v28[5]; // [rsp+58h] [rbp-50h] BYREF
  ULONG v29; // [rsp+B0h] [rbp+8h] BYREF
  PULONG v30; // [rsp+B8h] [rbp+10h]
  PVOID v31; // [rsp+C0h] [rbp+18h]
  ULONG v32; // [rsp+C8h] [rbp+20h]

  v32 = DataSize;
  v31 = Data;
  v30 = Type;
  v5 = DataSize;
  v28[0] = 0LL;
  v8 = 0;
  P = 0LL;
  v29 = 0;
  memset(Size, 0, sizeof(Size));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ValueName && (v10 = ResultDataSize) != 0LL && (Data || !DataSize) )
  {
    if ( DataSize > 0x800000 )
    {
      v8 = -1073741801;
    }
    else if ( PreviousMode )
    {
      v11 = 0x7FFFFFFF0000LL;
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
        v12 = (__int64)ValueName;
      v13 = *(_DWORD *)v12;
      *(_DWORD *)&v28[0].Length = *(_DWORD *)v12;
      v14 = *(wchar_t **)(v12 + 8);
      v28[0].Buffer = v14;
      if ( v14 && (_WORD)v13 && (v13 & 1) == 0 )
      {
        if ( ((unsigned __int8)v14 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned __int16)v13, 0x20534C53u);
        P = Pool2;
        if ( Pool2 )
        {
          v16 = (wchar_t *)Pool2;
          memmove(Pool2, v28[0].Buffer, v28[0].Length);
          v28[0].Buffer = v16;
          if ( Type )
          {
            v17 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)Type < 0x7FFFFFFF0000LL )
              v17 = (__int64)Type;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            v29 = *Type;
          }
          if ( !Data || !(_DWORD)v5 )
            goto LABEL_24;
          v18 = (unsigned __int64)Data;
          v19 = (unsigned __int64)Data + v5 - 1;
          if ( (unsigned __int64)Data > v19 || v19 >= 0x7FFFFFFF0000LL )
            ExRaiseAccessViolation();
          v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v18 = *(_BYTE *)v18;
            v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v18 != v20 );
          *(_QWORD *)&Size[1] = ExAllocatePool2(0x100uLL, v5, 0x20534C53u);
          if ( !*(_QWORD *)&Size[1] )
          {
            v8 = -1073741801;
          }
          else
          {
LABEL_24:
            if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
              v11 = (__int64)v10;
            *(_DWORD *)v11 = *(_DWORD *)v11;
            Size[0] = *v10;
          }
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 >= 0 )
      {
        Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
        if ( qword_140FD8490 )
          v22 = guard_dispatch_icall_no_overrides(Blink, v28);
        else
          v22 = SLQueryLicenseValueInternal((__int64)Blink, v28, (__int64)&v29, *(__int64 *)&Size[1], v5, (__int64)Size);
        v23 = v22;
        v8 = v22;
        if ( Type )
          *Type = v29;
        v24 = Size[0];
        *v10 = Size[0];
        if ( v23 >= 0 && Data )
        {
          if ( (unsigned int)v5 < v24 )
            v8 = -1073741789;
          else
            memmove(Data, *(const void **)&Size[1], v24);
        }
      }
    }
    else
    {
      v8 = ntoskrnl_27((int)ValueName, (int)Type, (int)Data, DataSize, (__int64)ResultDataSize);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return v8;
}
