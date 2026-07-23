/*
 * XREFs of LocalGetStringForSid @ 0x140A66038
 * Callers:
 *     GetPrintableOperandValue @ 0x140866288 (GetPrintableOperandValue.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForRelativeAttribute @ 0x140AA5150 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     LocalConvertSidToStringSidW @ 0x140866440 (LocalConvertSidToStringSidW.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall LocalGetStringForSid(PSID Sid, wchar_t **a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  size_t v12; // rdi
  wchar_t *v13; // rax
  int v15; // eax
  const wchar_t *v16; // r8
  int v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v18 = 0LL;
  if ( Sid && a2 )
  {
    v9 = LookupSidInTable(0LL, Sid, a3, a4, v17, a6, &v18);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(unsigned int *)(v9 + 12);
    }
    else
    {
      if ( !v18 )
      {
        v15 = LocalConvertSidToStringSidW(Sid, a2);
        if ( v15 < 0 )
          return RtlNtStatusToDosError(v15);
        return v6;
      }
      v11 = 2LL;
    }
    v12 = 2 * v11 + 2;
    v13 = (wchar_t *)SddlpAlloc(v12);
    *a2 = v13;
    if ( v13 )
    {
      v16 = (const wchar_t *)(v10 + 2);
      if ( !v10 )
        v16 = L"SA";
      wcscpy_s(v13, v12 >> 1, v16);
    }
    else
    {
      return 8;
    }
    return v6;
  }
  return 87LL;
}
