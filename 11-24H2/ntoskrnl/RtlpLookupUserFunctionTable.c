/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x140280BA0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14027EDF0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x140281A20 (RtlpLookupUserFunctionTableInverted.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x140281D74 (RtlpLookupDynamicUserFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     MmGetImageInformation @ 0x140837878 (MmGetImageInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  _QWORD v12[8]; // [rsp+28h] [rbp-40h] BYREF
  char v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( !result )
  {
    result = RtlpLookupDynamicUserFunctionTable(a1, a2);
    v5 = result;
    if ( !result )
    {
      v14 = 0LL;
      v12[0] = 0LL;
      if ( (int)MmGetImageInformation(a1, &v14, v12, &v13) >= 0 )
      {
        LOBYTE(v6) = 1;
        v7 = v14;
        v5 = RtlImageDirectoryEntryToData(v14, v6, 3LL, a2 + 20);
        if ( v5 )
        {
          v9 = *(_DWORD *)(a2 + 20);
          if ( v9 && (v10 = v9, v9 == 12 * (v9 / 0xCuLL)) )
          {
            if ( (v5 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = v9 + v5;
            if ( v10 + v5 < v5 || v11 > 0x7FFFFFFF0000LL )
              v7 = v14;
          }
          else
          {
            v5 = 0LL;
          }
        }
        else
        {
          *(_DWORD *)(a2 + 20) = 0;
        }
        v8 = v12[0];
      }
      else
      {
        v7 = 0LL;
        v8 = 0;
      }
      *(_QWORD *)(a2 + 8) = v7;
      *(_DWORD *)(a2 + 16) = v8;
      *(_QWORD *)a2 = v5;
      if ( !v5 )
        *(_DWORD *)(a2 + 20) = 0;
      return v5;
    }
  }
  return result;
}
