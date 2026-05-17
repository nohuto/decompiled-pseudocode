/*
 * XREFs of EtwpProviderArrivalCallback @ 0x18001B9D0
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x18003E8EC (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     EtwpTrackBinaryForSession @ 0x18001C2A0 (EtwpTrackBinaryForSession.c)
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     EtwpTrackDebugIdForSession @ 0x1801184BC (EtwpTrackDebugIdForSession.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

ULONG __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // r15d
  unsigned __int64 v6; // rbx
  __int16 v7; // cx
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  NTSTATUS v12; // ebx
  _WORD *v13; // rdi
  unsigned int v14; // eax
  const void *v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned int v18; // r14d
  bool v19; // si
  unsigned __int64 v20; // rdi
  __int64 v21; // rbp
  __int16 v22; // ax
  __int64 v23; // rax
  int v24; // edx
  _DWORD *v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // eax
  _QWORD v29[3]; // [rsp+20h] [rbp-288h] BYREF
  __int128 v30; // [rsp+38h] [rbp-270h] BYREF
  __int64 v31; // [rsp+48h] [rbp-260h]
  _WORD v32[264]; // [rsp+50h] [rbp-258h] BYREF

  v31 = 0LL;
  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  v30 = 0LL;
  if ( v3 < *((_QWORD *)&xmmword_1801E7440 + 1)
    || v3 >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
  {
    RtlpxLookupFunctionTable(v3, (__int64)&v30);
  }
  else
  {
    v30 = xmmword_1801E7440;
    v31 = qword_1801E7450;
  }
  v6 = *((_QWORD *)&v30 + 1);
  if ( !*((_QWORD *)&v30 + 1) )
    return 87;
  v7 = *(_WORD *)(a2 + 86);
  if ( (v7 & 0x3FFF) == 2 )
  {
    v29[0] = 0LL;
    v18 = 0;
    v19 = 1;
    v20 = *((_QWORD *)&v30 + 1);
    v21 = 0LL;
    if ( (BYTE8(v30) & 3) != 0 )
    {
      v20 = *((_QWORD *)&v30 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
      v19 = (BYTE8(v30) & 1) == 0;
    }
    RtlImageNtHeaderEx(1LL, v20, 0LL, v29);
    if ( !v29[0] )
      return 87;
    v22 = *(_WORD *)(v29[0] + 24LL);
    if ( v22 == 267 )
    {
      if ( *(_DWORD *)(v29[0] + 116LL) > 6u )
      {
        v23 = *(unsigned int *)(v29[0] + 168LL);
        if ( !(_DWORD)v23 )
        {
          v24 = -1073741822;
          goto LABEL_45;
        }
        v18 = *(_DWORD *)(v29[0] + 172LL);
        if ( !v19 && (unsigned int)v23 >= *(_DWORD *)(v29[0] + 84LL) )
        {
          v26 = RtlAddressInSectionTable(v29[0], v20, (unsigned int)v23);
          v27 = 0;
          v21 = v26;
          if ( !v26 )
            v27 = -1073741811;
          v24 = v27;
          goto LABEL_45;
        }
LABEL_44:
        v21 = v20 + v23;
        v24 = 0;
LABEL_45:
        v25 = 0LL;
        if ( v24 >= 0 )
          v25 = (_DWORD *)v21;
        if ( v25 && v18 >= 0x1C )
        {
          while ( 1 )
          {
            if ( v4 >= v18 / 0x1C )
              return 232;
            if ( v25[3] == 2 && *(_DWORD *)(v6 + (unsigned int)v25[5]) == 1396986706 )
              break;
            v25 += 7;
            ++v4;
          }
          if ( v25[4] >= 0x1Cu )
            return EtwpTrackDebugIdForSession(a1);
        }
        return 87;
      }
    }
    else if ( v22 == 523 && *(_DWORD *)(v29[0] + 132LL) > 6u )
    {
      v23 = *(unsigned int *)(v29[0] + 184LL);
      if ( !(_DWORD)v23 )
      {
        v24 = -1073741822;
        goto LABEL_45;
      }
      v18 = *(_DWORD *)(v29[0] + 188LL);
      if ( !v19 && (unsigned int)v23 >= *(_DWORD *)(v29[0] + 84LL) )
      {
        v21 = RtlAddressInSectionTable(v29[0], v20, (unsigned int)v23);
        v28 = 0;
        if ( !v21 )
          v28 = -1073741811;
        v24 = v28;
        goto LABEL_45;
      }
      goto LABEL_44;
    }
    v24 = -1073741811;
    goto LABEL_45;
  }
  if ( v7 >= 0 )
    return 0;
  v29[0] = 17039360LL;
  v29[1] = v32;
  v8 = 0LL;
  if ( *((_QWORD *)&v30 + 1) == LdrpSystemDllBase )
  {
    v8 = LdrpNtDllDataTableEntry;
    goto LABEL_22;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v9 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D2460 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_21;
    v9 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v9 )
    goto LABEL_21;
  do
  {
    if ( v6 >= *(_QWORD *)(v9 - 152) )
    {
      if ( v6 <= *(_QWORD *)(v9 - 152) )
        break;
      v10 = *(_QWORD *)(v9 + 8);
      if ( (qword_1801D2460 & 1) != 0 && v10 )
      {
        v9 ^= v10;
        continue;
      }
LABEL_15:
      v9 = v10;
      continue;
    }
    v10 = *(_QWORD *)v9;
    if ( (qword_1801D2460 & 1) == 0 || !v10 )
      goto LABEL_15;
    v9 ^= v10;
  }
  while ( v9 );
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 - 48);
    v8 = v9 - 200;
    if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 276));
  }
LABEL_21:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_22:
  v12 = -1073741515;
  if ( v8 )
  {
    v12 = 0;
    v13 = (_WORD *)(v8 + 72);
    if ( v8 == -72 )
    {
      LOWORD(v29[0]) = 0;
    }
    else
    {
      v14 = (unsigned __int16)*v13;
      v15 = *(const void **)(v8 + 80);
      if ( (unsigned __int16)v14 > 0x104u )
        v14 = 260;
      LOWORD(v29[0]) = v14;
      v16 = v14;
      memmove(v32, v15, v14);
      if ( v16 + 2 <= 0x104 )
        v32[v16 >> 1] = 0;
    }
    if ( *v13 > 0x104u )
      v12 = -1073741789;
    if ( v8 != LdrpImageEntry )
      LdrpDereferenceModule(v8);
  }
  if ( v12 < 0 )
    return RtlNtStatusToDosError(v12);
  else
    return EtwpTrackBinaryForSession(a1, v29, a2 + 32);
}
