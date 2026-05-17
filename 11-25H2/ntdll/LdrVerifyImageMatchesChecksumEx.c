/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x180113590
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x18015FE90 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     RtlImageRvaToSection @ 0x1800E1760 (RtlImageRvaToSection.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180144D70 (LdrVerifyMappedImageMatchesChecksum.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationFile @ 0x180163440 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x180165530 (NtMakeTemporaryObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // r15
  _DWORD *v5; // rsi
  bool v6; // zf
  char v7; // r13
  __int64 result; // rax
  int v9; // edi
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned int v15; // ecx
  char v16; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  int v19; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+78h] [rbp-90h]
  _DWORD *v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h]
  char *v26; // [rsp+A0h] [rbp-68h]
  __int128 v27; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-40h]

  v20 = a2;
  Handle = 0LL;
  if ( *(_DWORD *)a2 != 64 )
    return 3221225712LL;
  v4 = (_BYTE *)(a2 + 4);
  v23 = a2 + 4;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v5 = (_DWORD *)(a2 + 24);
  if ( (*v4 & 2) == 0 )
    v5 = &unk_1801887E0;
  v22 = v5;
  v6 = (v5[7] & 0x1000000) == 0;
  v21 = v5[7] & 0x1000000;
  v19 = v21;
  v16 = !v6;
  v7 = a1 & 1;
  v26 = (char *)(v5 + 4);
  result = NtCreateSection(&Handle, (unsigned int)v5[2], *((_QWORD *)v5 + 2));
  if ( (int)result >= 0 )
  {
    v17 = 0LL;
    v24 = 0LL;
    v9 = ZwMapViewOfSection(Handle, -1LL, &v17, 0LL, 0LL, 0LL, &v24, 1, 0, 16);
    if ( v9 >= 0 )
    {
      if ( v7 )
        goto LABEL_42;
      v28 = 0LL;
      v29 = 0LL;
      v27 = 0LL;
      v9 = NtQueryInformationFile(a1, &v27, &v28, 24LL, 5);
      if ( v9 >= 0 )
      {
        if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v17, v24, DWORD2(v28)) )
          v9 = -1073741279;
        if ( v9 >= 0 )
        {
LABEL_42:
          if ( (*v4 & 5) != 0 )
          {
            v23 = 0LL;
            v9 = RtlImageNtHeaderEx(0, v17, v24, &v23);
            if ( v9 >= 0 )
            {
              if ( (*v4 & 4) != 0 )
                *(_WORD *)(a2 + 56) = *(_WORD *)(v23 + 22);
              if ( (*v4 & 1) != 0 )
              {
                if ( *(_QWORD *)(a2 + 8) )
                {
                  v20 = 0LL;
                  v25 = 0LL;
                  v19 = 0;
                  v10 = RtlImageDirectoryEntryToData(v17, v16, 1u, &v19);
                  v25 = v10;
                  if ( v10 )
                  {
                    v11 = 0LL;
                    v20 = 0LL;
                    while ( *(_DWORD *)(v10 + 12) )
                    {
                      v12 = *(_DWORD *)(v10 + 12);
                      if ( v21 )
                      {
                        v13 = v17 + v12;
                      }
                      else
                      {
                        v14 = v17;
                        v20 = v17;
                        v13 = v11;
                        if ( !v11 || (v15 = *(_DWORD *)(v11 + 12), v12 < v15) || v12 >= *(_DWORD *)(v11 + 16) + v15 )
                        {
                          v13 = RtlImageRvaToSection(v23, v17, v12);
                          v14 = v20;
                        }
                        if ( v13 )
                        {
                          v11 = v13;
                          v20 = v13;
                          v13 = v14 + v12 - *(_DWORD *)(v13 + 12) + *(unsigned int *)(v13 + 20);
                        }
                      }
                      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 8))(*(_QWORD *)(a2 + 16), v13);
                      v10 += 20LL;
                      v25 = v10;
                    }
                  }
                }
              }
            }
          }
        }
      }
      NtUnmapViewOfSection(-1LL);
    }
    if ( v9 < 0 || v5 == (_DWORD *)&unk_1801887E0 )
    {
      if ( *(_QWORD *)v26 && (*(_BYTE *)(*(_QWORD *)v26 + 24LL) & 0x10) != 0 )
        NtMakeTemporaryObject(Handle);
      NtClose(Handle);
    }
    else
    {
      *(_QWORD *)v5 = Handle;
    }
    return (unsigned int)v9;
  }
  return result;
}
