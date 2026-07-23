/*
 * XREFs of IopValidateQueryInformationParameters @ 0x140958CB0
 * Callers:
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     IoQueryInformationByName @ 0x1409590B0 (IoQueryInformationByName.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall IopValidateQueryInformationParameters(
        char a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        signed int a6)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int16 v9; // cx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)a6 >= 0x54 )
    return 3221225475LL;
  v6 = *((unsigned __int8 *)IopQueryOperationLength + a6);
  if ( !(_BYTE)v6 )
    return 3221225475LL;
  if ( a5 >= v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v7 = a3;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    v8 = *(_QWORD *)(a2 + 184);
    if ( *(_QWORD *)(v8 + 784) && ((v9 = *(_WORD *)(v8 + 1772), v9 == 332) || v9 == 452) )
    {
      if ( a5 )
      {
        if ( (a4 & 3) == 0 )
        {
          v13 = a5 + a4 - 1;
          if ( a4 <= v13 && v13 < 0x7FFFFFFF0000LL )
          {
            v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              *(_BYTE *)a4 = *(_BYTE *)a4;
              a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( a4 != v14 );
            return 0LL;
          }
          goto LABEL_28;
        }
LABEL_29:
        ExRaiseDatatypeMisalignment();
      }
    }
    else if ( a5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + a6) - 1) & (unsigned int)a4) == 0 )
      {
        v11 = a5 + a4 - 1;
        if ( a4 <= v11 && v11 < 0x7FFFFFFF0000LL )
        {
          v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)a4 = *(_BYTE *)a4;
            a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( a4 != v12 );
          return 0LL;
        }
LABEL_28:
        ExRaiseAccessViolation();
      }
      goto LABEL_29;
    }
    return 0LL;
  }
  return 3221225476LL;
}
