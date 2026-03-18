/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x14039CC98
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1402D3EC4 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x14039C56C (_BmlGetPathModeListForPathTargetModes.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x14039CBEC (BmlUnPinAllPathsPartialModalityFromSource.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmlUnPinPartialPathModalityOnPath(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v11; // rbp
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // r15d
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  int v19; // ebp
  __int64 result; // rax
  __int64 v21; // r9
  __int64 v22; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+10h]

  v3 = a3;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2972;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2973;
  }
  v6 = 120 * v3;
  v7 = *(_QWORD *)(120 * v3 + a1 + 16);
  v8 = *(unsigned int *)(v7 + 28);
  v9 = *(unsigned int *)(v7 + 24);
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), *(_DWORD *)(v7 + 24), *(_DWORD *)(v7 + 28));
  v11 = Path;
  if ( Path )
  {
    v12 = *((_DWORD *)Path + 29) == 254;
    v23 = *(_QWORD *)(a2 + 48);
    v13 = *(_QWORD *)(v23 + 488);
    v22 = v13;
    if ( !v12 )
    {
      v14 = a2 + 96;
      LOBYTE(v14) = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v13 + 88))(
              (a2 + 96) & -(__int64)(a2 != -289),
              (unsigned int)v9,
              (unsigned int)v8,
              v14);
      if ( v15 < 0 )
      {
        WdLogSingleEntry4(
          3LL,
          v3,
          a2,
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
        WdLogGlobalForLineNumber = 3019;
        return (unsigned int)v15;
      }
      v13 = v22;
    }
    if ( *((_DWORD *)v11 + 28) != 254 )
    {
      v21 = a2 + 96;
      LOBYTE(v21) = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v13 + 72))(
              (a2 + 96) & -(__int64)(a2 != -289),
              *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
              *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL),
              v21);
      if ( v15 < 0 )
      {
        WdLogSingleEntry4(
          3LL,
          v3,
          a2,
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
          *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
        WdLogGlobalForLineNumber = 3040;
        return (unsigned int)v15;
      }
    }
    v16 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v11 + 12));
    v18 = v16;
    if ( *(_QWORD *)(v16 + 144)
      && (LOBYTE(v17) = 1,
          v19 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v23 + 504) + 56LL))(
                  v16 & -(__int64)(v16 != -137LL),
                  v17),
          v19 < 0) )
    {
      WdLogSingleEntry4(
        3LL,
        a3,
        a2,
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
      WdLogGlobalForLineNumber = 3063;
    }
    else
    {
      v19 = 0;
    }
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 88));
    return (unsigned int)v19;
  }
  else
  {
    WdLogSingleEntry4(3LL, v3, a2, v9, v8);
    result = 3223192345LL;
    WdLogGlobalForLineNumber = 2986;
  }
  return result;
}
