/*
 * XREFs of PsspWalkHandleTable @ 0x1800C425C
 * Callers:
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 * Callees:
 *     PsspDumpObject_Event @ 0x18010A9F0 (PsspDumpObject_Event.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwQueryObject @ 0x180161E90 (ZwQueryObject.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspWalkHandleTable(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        char a4,
        __int64 (__fastcall *a5)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int),
        __int64 a6)
{
  unsigned int v6; // esi
  __int64 v8; // rbx
  NTSTATUS result; // eax
  unsigned int v11; // r15d
  __int64 v12; // rdx
  unsigned int v13; // edi
  char v14; // r13
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v22)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  _QWORD v24[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[8]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *String1; // [rsp+C8h] [rbp-38h]
  _OWORD v27[3]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v28; // [rsp+1A0h] [rbp+A0h]
  _BYTE v29[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v30; // [rsp+1C0h] [rbp+C0h]

  v22 = a5;
  v6 = a3;
  v21 = a6;
  v8 = a1;
  v23 = a1;
  v28 = 0LL;
  memset(v27, 0, sizeof(v27));
  memset_thunk_772440563353939046(v25, 0, 0xA8uLL);
  result = (unsigned int)memset_thunk_772440563353939046(v29, 0, 0x210uLL);
  memset(v24, 0, sizeof(v24));
  v11 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v12 = *a2;
      LODWORD(v17) = 2;
      v13 = 0;
      v14 = 0;
      Handle = 0LL;
      v19 = 0;
      if ( (int)ZwDuplicateObject(v8, v12, -1LL, &Handle, 0, 0, v17) < 0 )
        goto LABEL_20;
      v13 = 4;
      if ( (int)ZwQueryObject(Handle, 2LL, v25, 168LL, 0LL) >= 0 )
        break;
      result = NtClose(Handle);
LABEL_22:
      ++v11;
      ++a2;
      if ( v11 >= v6 )
        return result;
    }
    if ( (a4 & 8) != 0 )
    {
      memset_thunk_772440563353939046(v29, 0, 0x210uLL);
      v16 = 0;
      if ( wcsicmp(String1, L"File") && (int)ZwQueryObject(Handle, 1LL, v29, 528LL, 0LL) < 0 )
        v30 = 0;
    }
    else
    {
      v16 = 0;
    }
    if ( (a4 & 0x10) != 0 && (int)ZwQueryObject(Handle, 0LL, v27, 56LL, 0LL) >= 0 )
      v13 = 20;
    v19 = 0;
    if ( (a4 & 0x20) != 0 )
    {
      while ( v16 < 6 )
      {
        if ( !wcsicmp(String1, (&off_180173C20)[3 * v16]) )
        {
          if ( ((int (__fastcall *)(HANDLE, _QWORD *, __int64, int *))*(&funcs_1800C4467 + 3 * v16))(
                 Handle,
                 v24,
                 64LL,
                 &v19) >= 0 )
          {
            if ( v19 )
            {
              v14 = (char)(&off_180173C20)[3 * v16 + 1];
              v13 |= 0x20u;
            }
          }
          break;
        }
        ++v16;
      }
      v6 = a3;
    }
    NtClose(Handle);
LABEL_20:
    LOBYTE(v15) = v14;
    result = v22(
               v21,
               v13,
               *a2,
               v15,
               (unsigned __int64)v25 & -(__int64)((v13 & 4) != 0),
               (unsigned __int64)v29 & -(__int64)((v13 & 4) != 0),
               (unsigned __int64)v27 & -(__int64)((v13 & 0x10) != 0),
               (unsigned __int64)v24 & -(__int64)((v13 & 0x20) != 0),
               v19 & (unsigned int)-((v13 & 0x20) != 0));
    if ( !(_BYTE)result )
      return result;
    v8 = v23;
    goto LABEL_22;
  }
  return result;
}
