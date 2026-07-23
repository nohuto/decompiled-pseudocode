/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x14025AB80
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140259000 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x14025ACD0 (RtlpLookupUserFunctionTableInverted.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x14025BA28 (RtlpLookupDynamicUserFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MmGetImageInformation @ 0x140898318 (MmGetImageInformation.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v5; // rsi
  PVOID v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11[8]; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseOfImage; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( !result )
  {
    result = RtlpLookupDynamicUserFunctionTable(a1, a2);
    v5 = (char *)result;
    if ( !result )
    {
      BaseOfImage = 0LL;
      v11[0] = 0LL;
      if ( (int)MmGetImageInformation(a1, &BaseOfImage, v11, &v12) >= 0 )
      {
        v6 = BaseOfImage;
        v5 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 3u, (PULONG)(a2 + 20));
        if ( v5 )
        {
          v8 = *(_DWORD *)(a2 + 20);
          if ( v8 && (v9 = v8, v8 == 12 * (v8 / 0xCuLL)) )
          {
            if ( ((unsigned __int8)v5 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v10 = (unsigned __int64)&v5[v8];
            if ( &v5[v9] < v5 || v10 > 0x7FFFFFFF0000LL )
              v6 = BaseOfImage;
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
        v7 = v11[0];
      }
      else
      {
        v6 = 0LL;
        v7 = 0;
      }
      *(_QWORD *)(a2 + 8) = v6;
      *(_DWORD *)(a2 + 16) = v7;
      *(_QWORD *)a2 = v5;
      if ( !v5 )
        *(_DWORD *)(a2 + 20) = 0;
      return (__int64)v5;
    }
  }
  return result;
}
