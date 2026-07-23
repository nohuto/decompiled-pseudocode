/*
 * XREFs of PsspWalkHandleTable @ 0x1800BBE1C
 * Callers:
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 * Callees:
 *     PsspDumpObject_Event @ 0x180105560 (PsspDumpObject_Event.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwQueryObject @ 0x180160250 (ZwQueryObject.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspWalkHandleTable(
        HANDLE SourceProcessHandle,
        unsigned int *a2,
        unsigned int a3,
        char a4,
        __int64 (__fastcall *a5)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int),
        __int64 a6)
{
  unsigned int v6; // esi
  HANDLE v8; // rbx
  NTSTATUS result; // eax
  unsigned int v11; // r15d
  void *v12; // rdx
  unsigned int v13; // edi
  char v14; // r13
  __int64 v15; // r9
  unsigned int v16; // ebx
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // [rsp+68h] [rbp-98h]
  HANDLE v22; // [rsp+70h] [rbp-90h]
  _QWORD v23[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE ObjectInformation[8]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *String1; // [rsp+C8h] [rbp-38h]
  _OWORD v26[3]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v27; // [rsp+1A0h] [rbp+A0h]
  _BYTE v28[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v29; // [rsp+1C0h] [rbp+C0h]

  v21 = a5;
  v6 = a3;
  v20 = a6;
  v8 = SourceProcessHandle;
  v22 = SourceProcessHandle;
  v27 = 0LL;
  memset(v26, 0, sizeof(v26));
  memset_thunk_772440563353939046(ObjectInformation, 0, 0xA8uLL);
  result = (unsigned int)memset_thunk_772440563353939046(v28, 0, 0x210uLL);
  memset(v23, 0, sizeof(v23));
  v11 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v12 = (void *)*a2;
      v13 = 0;
      v14 = 0;
      TargetHandle = 0LL;
      v18 = 0;
      if ( ZwDuplicateObject(v8, v12, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u) < 0 )
        goto LABEL_20;
      v13 = 4;
      if ( ZwQueryObject(TargetHandle, ObjectTypeInformation, ObjectInformation, 0xA8u, 0LL) >= 0 )
        break;
      result = NtClose(TargetHandle);
LABEL_22:
      ++v11;
      ++a2;
      if ( v11 >= v6 )
        return result;
    }
    if ( (a4 & 8) != 0 )
    {
      memset_thunk_772440563353939046(v28, 0, 0x210uLL);
      v16 = 0;
      if ( wcsicmp(String1, L"File") && ZwQueryObject(TargetHandle, ObjectNameInformation, v28, 0x210u, 0LL) < 0 )
        v29 = 0;
    }
    else
    {
      v16 = 0;
    }
    if ( (a4 & 0x10) != 0 && ZwQueryObject(TargetHandle, ObjectBasicInformation, v26, 0x38u, 0LL) >= 0 )
      v13 = 20;
    v18 = 0;
    if ( (a4 & 0x20) != 0 )
    {
      while ( v16 < 6 )
      {
        if ( !wcsicmp(String1, (&off_180172BF0)[3 * v16]) )
        {
          if ( ((int (__fastcall *)(HANDLE, _QWORD *, __int64, int *))*(&funcs_1800BC027 + 3 * v16))(
                 TargetHandle,
                 v23,
                 64LL,
                 &v18) >= 0 )
          {
            if ( v18 )
            {
              v14 = (char)(&off_180172BF0)[3 * v16 + 1];
              v13 |= 0x20u;
            }
          }
          break;
        }
        ++v16;
      }
      v6 = a3;
    }
    NtClose(TargetHandle);
LABEL_20:
    LOBYTE(v15) = v14;
    result = v21(
               v20,
               v13,
               *a2,
               v15,
               (unsigned __int64)ObjectInformation & -(__int64)((v13 & 4) != 0),
               (unsigned __int64)v28 & -(__int64)((v13 & 4) != 0),
               (unsigned __int64)v26 & -(__int64)((v13 & 0x10) != 0),
               (unsigned __int64)v23 & -(__int64)((v13 & 0x20) != 0),
               v18 & (unsigned int)-((v13 & 0x20) != 0));
    if ( !(_BYTE)result )
      return result;
    v8 = v22;
    goto LABEL_22;
  }
  return result;
}
