/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800D3B60
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     RtlEqualUnicodeString @ 0x1800A7500 (RtlEqualUnicodeString.c)
 *     LdrpInitializeDllPath @ 0x1800AD900 (LdrpInitializeDllPath.c)
 *     LdrpObtainLockedEnclave @ 0x1800D40D0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D41F0 (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D42F8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D4A30 (LdrpAllocatePlaceHolder.c)
 *     RtlGetImageEnclaveConfig @ 0x18011C97C (RtlGetImageEnclaveConfig.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18011CC38 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrLoadEnclaveModule(PVOID BaseAddress, PWSTR DllPath, PUNICODE_STRING DllName)
{
  bool v6; // di
  __int64 v7; // rdx
  __int64 locked; // rax
  _QWORD *v9; // rsi
  NTSTATUS PlaceHolder; // ebx
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *i; // r15
  __int64 v16; // rdx
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v18; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v20[80]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v22; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v23[16]; // [rsp+1B0h] [rbp+B0h] BYREF

  memset_thunk_772440563353939046(v20, 0, 0x50uLL);
  memset_thunk_772440563353939046(v23, 0, 0x80uLL);
  v6 = 0;
  v18 = 0;
  memset_thunk_772440563353939046(&String1, 0, 0x110uLL);
  LOBYTE(v7) = 1;
  locked = LdrpObtainLockedEnclave(BaseAddress, v7);
  v9 = (_QWORD *)locked;
  if ( !locked )
    return -1073741664;
  if ( *(_DWORD *)(locked + 56) == 16 )
  {
    LdrpInitializeDllPath(DllName->Buffer, (__int64)DllPath, (__int64)v23);
    if ( v9[11] || (v12 = v9 + 12, (_QWORD *)*v12 != v12) )
    {
      PlaceHolder = -1073741800;
    }
    else
    {
      *(_DWORD *)&String1.Length = 0x1000000;
      String1.Buffer = (wchar_t *)&v22;
      v22 = 0;
      v17 = 0x800000;
      PlaceHolder = LdrpPreprocessDllName(&DllName->Length, &String1, 0LL, &v17);
      if ( PlaceHolder >= 0 )
      {
        v19 = 0LL;
        PlaceHolder = LdrpAllocatePlaceHolder(
                        (unsigned int)&String1,
                        (unsigned int)v23,
                        v17,
                        7,
                        0LL,
                        (__int64)&v19,
                        (__int64)&v18);
        if ( PlaceHolder >= 0 )
        {
          v13 = v19;
          *(_QWORD *)(v19[22] + 176LL) = v9;
          v14 = (_QWORD *)v9[13];
          if ( (_QWORD *)*v14 != v12 )
            __fastfail(3u);
          *v13 = v12;
          v13[1] = v14;
          *v14 = v13;
          v9[13] = v13;
          if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_180172CF0, 1u) )
          {
            v9[15] = v13;
          }
          else if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_180172CE0, 1u) )
          {
            v9[16] = v13;
          }
          for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
          {
            PlaceHolder = LdrpLoadEnclaveModule(i[22]);
            if ( PlaceHolder < 0 )
              goto LABEL_22;
          }
          PlaceHolder = RtlGetImageEnclaveConfig(*(PVOID *)(v9[14] + 48LL), v20);
          if ( PlaceHolder >= 0 )
          {
            PlaceHolder = v18;
            v6 = (v20[8] & 2) != 0;
          }
        }
      }
    }
  }
  else
  {
    PlaceHolder = -1073741664;
  }
LABEL_22:
  LdrpCleanupEnclaveLoadState(v9, (unsigned int)PlaceHolder);
  LdrpUnlockAndDereferenceEnclave(v9);
  LdrpReleaseDllPath(v23);
  LOBYTE(v16) = v6;
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)PlaceHolder, v16);
  return PlaceHolder;
}
