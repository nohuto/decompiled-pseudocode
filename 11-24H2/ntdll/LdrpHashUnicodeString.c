/*
 * XREFs of LdrpHashUnicodeString @ 0x180090C40
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertDataTableEntry @ 0x180090B20 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadKnownDll @ 0x180091340 (LdrpLoadKnownDll.c)
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180091C68 (LdrpMapDllFullPath.c)
 *     LdrpAddRedirectedFunction @ 0x18015EFF0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  unsigned int v1; // r9d
  int v2; // r10d
  unsigned __int16 *i; // r11
  unsigned __int64 v4; // rax

  v1 = 0;
  if ( !a1 )
    return 0x80000000LL;
  v2 = *a1 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)a1 + 1); v2; v1 = (unsigned __int16)v4 + 65599 * v1 )
  {
    v4 = *i++;
    --v2;
    if ( (unsigned int)v4 >= 0x61 )
    {
      if ( (unsigned int)v4 > 0x7A )
      {
        if ( qword_1801CC038 )
        {
          if ( (unsigned __int16)v4 >= 0xC0u )
            LOWORD(v4) = *(_WORD *)(qword_1801CC038
                                  + 2
                                  * ((v4 & 0xF)
                                   + *(unsigned __int16 *)(qword_1801CC038
                                                         + 2LL
                                                         * (((unsigned __int8)v4 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                              + 2 * (v4 >> 8))))))
                       + v4;
        }
      }
      else
      {
        LOWORD(v4) = v4 - 32;
      }
    }
  }
  if ( v1 )
    return v1;
  else
    return 0x80000000LL;
}
