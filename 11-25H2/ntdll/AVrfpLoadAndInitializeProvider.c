/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x1800D04C4
 * Callers:
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x18006C630 (RtlGetNtSystemRoot.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // di
  char v3; // r12
  char v4; // si
  __int64 v5; // r8
  unsigned int i; // ecx
  const WCHAR *NtSystemRoot; // rax
  wchar_t *Buffer; // r12
  int Dll; // eax
  PIMAGE_NT_HEADERS v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64); // rcx
  _DWORD *v14; // r15
  int v15; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h]
  _BYTE v21[128]; // [rsp+60h] [rbp-A8h] BYREF

  v20 = a1;
  v2 = 0;
  v18 = 0LL;
  OutHeaders = 0LL;
  Destination = 0LL;
  memset_thunk_772440563353939046(v21, 0, 0x80uLL);
  v3 = 0;
  v4 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 24);
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 16) >> 1; ++i )
  {
    if ( *(_WORD *)(v5 + 2LL * i) == 92 || *(_WORD *)(v5 + 2LL * i) == 47 )
    {
      v3 = 1;
      break;
    }
  }
  if ( v3 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), v5);
    return 0;
  }
  Destination.Buffer = (wchar_t *)&unk_1801CFFF0;
  *(_DWORD *)&Destination.Length = 34078720;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlAppendUnicodeToString(&Destination, NtSystemRoot);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  Buffer = Destination.Buffer;
  LdrpInitializeDllPath(0LL, Destination.Buffer, v21);
  Dll = LdrpLoadDll((unsigned __int16 *)(a1 + 16), (int)v21, 1, (__int64)&OutHeaders);
  if ( Dll < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      *(_QWORD *)(qword_1801D4950 + 96),
      *(_QWORD *)(a1 + 24),
      (unsigned int)Dll,
      Buffer);
    return 0;
  }
  v10 = OutHeaders;
  *(_QWORD *)(a1 + 32) = OutHeaders;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)v10->OptionalHeader.ImageBase, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    if ( (OutHeaders->FileHeader.Characteristics & 0x2000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
      v12 = *(_QWORD *)(a1 + 32);
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v12 + 56);
      if ( !v13 )
      {
        DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v11);
        return 0;
      }
      v18 = 0LL;
      if ( (unsigned __int8)LdrpCallInitRoutine(v13, *(_QWORD *)(v12 + 48), 4u, (__int64)&v18) && (v14 = v18) != 0LL )
      {
        if ( *v18 == 80 )
        {
          if ( (AVrfpDebug & 8) != 0 )
            DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *(_QWORD *)(a1 + 24), v18);
          *(_QWORD *)(a1 + 40) = *((_QWORD *)v14 + 1);
          *(_QWORD *)(a1 + 48) = *((_QWORD *)v14 + 2);
          *(_QWORD *)(a1 + 56) = *((_QWORD *)v14 + 3);
          *(_QWORD *)(a1 + 64) = *((_QWORD *)v14 + 9);
          *((_QWORD *)v14 + 4) = *(_QWORD *)(qword_1801D4950 + 96);
          v15 = AVrfpVerifierFlags;
          v14[10] = AVrfpVerifierFlags;
          v14[11] = AVrfpDebug;
          *((_QWORD *)v14 + 6) = RtlpGetStackTraceAddress;
          *((_QWORD *)v14 + 7) = RtlpDebugPageHeapCreate;
          *((_QWORD *)v14 + 8) = RtlpDebugPageHeapDestroy;
          if ( AVrfpEnabledSystemWide )
            v14[10] = v15 | 0x20000;
        }
        else
        {
          v2 = 1;
          DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *(_QWORD *)(a1 + 24), v18);
        }
      }
      else
      {
        v2 = 1;
        DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
      }
    }
    else
    {
      DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
      v2 = 1;
    }
  }
  else
  {
    v2 = 1;
  }
  if ( v2 )
    return 0;
  return v4;
}
