/*
 * XREFs of AVrfpLoadAndInitializeProvider @ 0x180064DAC
 * Callers:
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x1800B2C70 (RtlGetNtSystemRoot.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

char __fastcall AVrfpLoadAndInitializeProvider(__int64 a1)
{
  char v2; // di
  char v3; // r12
  char v4; // si
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 i; // rcx
  __int64 NtSystemRoot; // rax
  __int64 v9; // r12
  int Dll; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // r15
  int v16; // ecx
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h]
  _BYTE v22[128]; // [rsp+60h] [rbp-A8h] BYREF

  v21 = a1;
  v2 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  memset_thunk_772440563353939046(v22, 0, 0x80uLL);
  v3 = 0;
  v4 = 1;
  if ( (AVrfpDebug & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(unsigned __int16 *)(a1 + 16) >> 1;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
  {
    if ( *(_WORD *)(v5 + 2LL * (unsigned int)i) == 92 || *(_WORD *)(v5 + 2LL * (unsigned int)i) == 47 )
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
  *((_QWORD *)&v20 + 1) = &unk_1801CDFF0;
  LODWORD(v20) = 34078720;
  NtSystemRoot = RtlGetNtSystemRoot(i, v6, v5);
  RtlAppendUnicodeToString(&v20, NtSystemRoot);
  RtlAppendUnicodeStringToString(&v20, &SlashSystem32SlashString);
  v9 = *((_QWORD *)&v20 + 1);
  LdrpInitializeDllPath(0LL, *((_QWORD *)&v20 + 1), v22);
  Dll = LdrpLoadDll(a1 + 16, (__int64)v22, 1, (__int64)&v18);
  if ( Dll < 0 )
  {
    DbgPrint(
      "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
      *(_QWORD *)(qword_1801D28D0 + 96),
      *(_QWORD *)(a1 + 24),
      (unsigned int)Dll,
      v9);
    return 0;
  }
  v11 = v18;
  *(_QWORD *)(a1 + 32) = v18;
  v18 = 0LL;
  RtlImageNtHeaderEx(1, *(_QWORD *)(v11 + 48), 0LL, &v18);
  if ( v18 )
  {
    if ( (*(_WORD *)(v18 + 22) & 0x2000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_QWORD *)(v13 + 56);
      if ( !v14 )
      {
        DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v12);
        return 0;
      }
      v19 = 0LL;
      if ( (unsigned __int8)LdrpCallInitRoutine(v14, *(_QWORD *)(v13 + 48), 4u, (__int64)&v19) && (v15 = v19) != 0LL )
      {
        if ( *v19 == 80 )
        {
          if ( (AVrfpDebug & 8) != 0 )
            DbgPrint("AVRF: initialized provider %ws (descriptor @ %p) \n", *(_QWORD *)(a1 + 24), v19);
          *(_QWORD *)(a1 + 40) = *((_QWORD *)v15 + 1);
          *(_QWORD *)(a1 + 48) = *((_QWORD *)v15 + 2);
          *(_QWORD *)(a1 + 56) = *((_QWORD *)v15 + 3);
          *(_QWORD *)(a1 + 64) = *((_QWORD *)v15 + 9);
          *((_QWORD *)v15 + 4) = *(_QWORD *)(qword_1801D28D0 + 96);
          v16 = AVrfpVerifierFlags;
          v15[10] = AVrfpVerifierFlags;
          v15[11] = AVrfpDebug;
          *((_QWORD *)v15 + 6) = RtlpGetStackTraceAddress;
          *((_QWORD *)v15 + 7) = RtlpDebugPageHeapCreate;
          *((_QWORD *)v15 + 8) = RtlpDebugPageHeapDestroy;
          if ( AVrfpEnabledSystemWide )
            v15[10] = v16 | 0x20000;
        }
        else
        {
          v2 = 1;
          DbgPrint("AVRF: provider %ws passed an invalid descriptor @ %p \n", *(_QWORD *)(a1 + 24), v19);
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
