/*
 * XREFs of LdrpApplyPatchImage @ 0x18011A970
 * Callers:
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x1800149E0 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpApplyPatchImageCommon @ 0x180160F58 (LdrpApplyPatchImageCommon.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpApplyPatchImage(__int64 a1)
{
  void *v2; // rcx
  char *v3; // r15
  __int64 v4; // r12
  bool v5; // al
  int v6; // r8d
  _QWORD *v7; // rsi
  int ProcedureAddress; // ebx
  int v9; // edx
  int v11; // eax
  int v12; // eax
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+40h] [rbp-40h]
  PVOID BaseAddress; // [rsp+50h] [rbp-30h] BYREF
  char *v16; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-20h] BYREF

  BaseAddress = 0LL;
  memset(v17, 0, 12);
  v2 = *(void **)(a1 + 184);
  v3 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  LdrpFindLoadedDllByHandle(v2, (__int64 *)&BaseAddress, 0LL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 200LL);
  v5 = LdrInitState < 3 || *(_DWORD *)(a1 + 276) == 1;
  v6 = *(_DWORD *)(a1 + 304);
  v7 = BaseAddress;
  if ( v6 != 2 && !v5 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__PatchMainCallout__", 0, &v16);
    if ( ProcedureAddress == -1073741267 )
      goto LABEL_25;
    *(_QWORD *)((char *)v17 + 4) = 0LL;
    v3 = v16;
    v6 = *(_DWORD *)(a1 + 304);
    LODWORD(v17[0]) = 1;
  }
  *(_QWORD *)&v13 = 2LL;
  *((_QWORD *)&v13 + 1) = -1LL;
  v9 = 0;
  *(_QWORD *)&v14 = v7[6];
  *((_QWORD *)&v14 + 1) = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    if ( v6 == 1 )
    {
      DWORD1(v13) = 1;
      ProcedureAddress = LdrpApplyPatchImageCommon(&v13, v4);
      if ( ProcedureAddress < 0 )
        goto LABEL_11;
      *(_DWORD *)(a1 + 304) = 2;
      HIDWORD(v17[0]) = 0;
      ProcedureAddress = ((__int64 (__fastcall *)(_QWORD *, __int64))v3)(v17, 12LL);
      if ( ProcedureAddress < 0 )
        goto LABEL_26;
      v9 = DWORD1(v13);
    }
    DWORD1(v13) = v9 & 0xFFFFFFFC | 2;
    if ( (int)LdrpApplyPatchImageCommon(&v13, v4) >= 0 )
    {
      HIDWORD(v17[0]) = 1;
      v12 = ((__int64 (__fastcall *)(_QWORD *, __int64))v3)(v17, 12LL);
      ProcedureAddress = v12;
      if ( v12 < 0 )
      {
        LdrpLogEtwHotPatchStatus(
          (unsigned __int16 *)(LdrpImageEntry + 88),
          (__int64)v7,
          (unsigned __int16 *)(a1 + 72),
          v12,
          6);
        __fastfail(0x44u);
      }
      goto LABEL_13;
    }
    HIDWORD(v17[0]) = 2;
    v11 = ((__int64 (__fastcall *)(_QWORD *, __int64))v3)(v17, 12LL);
    ProcedureAddress = v11;
    if ( v11 < 0 )
    {
      LdrpLogEtwHotPatchStatus(
        (unsigned __int16 *)(LdrpImageEntry + 88),
        (__int64)v7,
        (unsigned __int16 *)(a1 + 72),
        v11,
        7);
      __fastfail(0x44u);
    }
    *((_DWORD *)v7 + 76) = 4;
LABEL_25:
    if ( ProcedureAddress >= 0 )
      goto LABEL_14;
    goto LABEL_26;
  }
  DWORD1(v13) = (v6 == 1) | 2;
  ProcedureAddress = LdrpApplyPatchImageCommon(&v13, v4);
  if ( ProcedureAddress >= 0 )
  {
    *(_DWORD *)(a1 + 304) = 2;
LABEL_13:
    *((_DWORD *)v7 + 76) = 3;
    v7[37] = *(_QWORD *)(a1 + 48);
    goto LABEL_14;
  }
  if ( *(_DWORD *)(a1 + 304) == 1 )
LABEL_11:
    *(_DWORD *)(a1 + 304) = 4;
LABEL_26:
  LdrpLogEtwHotPatchStatus(
    (unsigned __int16 *)(LdrpImageEntry + 88),
    (__int64)v7,
    (unsigned __int16 *)(a1 + 72),
    ProcedureAddress,
    4);
LABEL_14:
  if ( v7 )
    LdrpDereferenceModule((char *)v7);
  return (unsigned int)ProcedureAddress;
}
