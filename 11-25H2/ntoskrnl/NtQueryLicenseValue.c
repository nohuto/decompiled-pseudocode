/*
 * XREFs of NtQueryLicenseValue @ 0x14097DEE0
 * Callers:
 *     ExpGetNtProductTypeFromLicenseValue @ 0x1407A7AFC (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x140C44F1C (MiMemoryLicense.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     ntoskrnl_27 @ 0x14097E210 (ntoskrnl_27.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryLicenseValue(unsigned __int64 a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r15
  int v8; // edi
  char PreviousMode; // dl
  _DWORD *v10; // r13
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
  UNICODE_STRING v28; // [rsp+58h] [rbp-50h] BYREF
  int v29; // [rsp+B0h] [rbp+8h] BYREF
  _DWORD *v30; // [rsp+B8h] [rbp+10h]
  void *v31; // [rsp+C0h] [rbp+18h]
  unsigned int v32; // [rsp+C8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v5 = a4;
  v28 = 0LL;
  v8 = 0;
  P = 0LL;
  v29 = 0;
  memset(Size, 0, sizeof(Size));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a1 && (v10 = a5) != 0LL && (a3 || !a4) )
  {
    if ( a4 > 0x800000 )
    {
      v8 = -1073741801;
    }
    else if ( PreviousMode )
    {
      v11 = 0x7FFFFFFF0000LL;
      v12 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v12 = a1;
      v13 = *(_DWORD *)v12;
      *(_DWORD *)&v28.Length = *(_DWORD *)v12;
      v14 = *(wchar_t **)(v12 + 8);
      v28.Buffer = v14;
      if ( v14 && (_WORD)v13 && (v13 & 1) == 0 )
      {
        if ( ((unsigned __int8)v14 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        P = Pool2;
        if ( Pool2 )
        {
          v16 = (wchar_t *)Pool2;
          memmove(Pool2, v28.Buffer, v28.Length);
          v28.Buffer = v16;
          if ( a2 )
          {
            v17 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
              v17 = (__int64)a2;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            v29 = *a2;
          }
          if ( !a3 || !(_DWORD)v5 )
            goto LABEL_24;
          v18 = (unsigned __int64)a3;
          v19 = (unsigned __int64)a3 + v5 - 1;
          if ( v19 >= 0x7FFFFFFF0000LL || (unsigned __int64)a3 > v19 )
            ExRaiseAccessViolation();
          v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v18 = *(_BYTE *)v18;
            v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v18 != v20 );
          *(_QWORD *)&Size[1] = ExAllocatePool2(0x100uLL);
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
        if ( qword_140FD7480 )
          v22 = guard_dispatch_icall_no_overrides(Blink);
        else
          v22 = SLQueryLicenseValueInternal(
                  (__int64)Blink,
                  &v28,
                  (__int64)&v29,
                  *(__int64 *)&Size[1],
                  v5,
                  (__int64)Size);
        v23 = v22;
        v8 = v22;
        if ( a2 )
          *a2 = v29;
        v24 = Size[0];
        *v10 = Size[0];
        if ( v23 >= 0 && a3 )
        {
          if ( (unsigned int)v5 < v24 )
            v8 = -1073741789;
          else
            memmove(a3, *(const void **)&Size[1], v24);
        }
      }
    }
    else
    {
      v8 = ntoskrnl_27(a1, (int)a2, (int)a3, a4, (__int64)a5);
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
  return (unsigned int)v8;
}
