/*
 * XREFs of BmlUnPinSourceMode @ 0x14039CA88
 * Callers:
 *     BmlFunctionalizePath @ 0x1402C6040 (BmlFunctionalizePath.c)
 *     _BmlGetPathModeListForPath @ 0x14039C1C8 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x14039CBEC (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  int v15; // ebp

  v3 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3120;
  }
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, (unsigned __int16)v3);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(120 * v3 + a1 + 16);
    v8 = *(unsigned int *)(v7 + 28);
    v9 = *(unsigned int *)(v7 + 24);
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), *(_DWORD *)(v7 + 24), *(_DWORD *)(v7 + 28));
    v11 = Path;
    if ( Path )
    {
      v13 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
      if ( *(_QWORD *)(v13 + 144)
        && (LOBYTE(v12) = 1,
            v15 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v14 + 496) + 48LL))(
                    v13 & -(__int64)(v13 != -137LL),
                    v12),
            v15 < 0) )
      {
        WdLogSingleEntry4(
          3LL,
          v11,
          a2,
          *(unsigned int *)(*((_QWORD *)v11 + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)v11 + 12) + 24LL));
        WdLogGlobalForLineNumber = 3168;
      }
      else
      {
        v15 = 0;
      }
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 88));
      return (unsigned int)v15;
    }
    else
    {
      WdLogSingleEntry4(3LL, v3, a2, v9, v8);
      result = 3223192345LL;
      WdLogGlobalForLineNumber = 3140;
    }
  }
  return result;
}
