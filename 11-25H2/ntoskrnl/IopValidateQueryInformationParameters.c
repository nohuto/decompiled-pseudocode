/*
 * XREFs of IopValidateQueryInformationParameters @ 0x140988620
 * Callers:
 *     IoQueryInformationByName @ 0x1409870E0 (IoQueryInformationByName.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
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
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // cx

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
    if ( *(_QWORD *)(v8 + 784) && ((v14 = *(_WORD *)(v8 + 1772), v14 == 332) || v14 == 452) )
    {
      if ( a5 )
      {
        if ( (a4 & 3) == 0 )
        {
          v12 = a5 + a4 - 1;
          if ( v12 < 0x7FFFFFFF0000LL && a4 <= v12 )
          {
            v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              *(_BYTE *)a4 = *(_BYTE *)a4;
              a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( a4 != v13 );
            return 0LL;
          }
          goto LABEL_25;
        }
LABEL_26:
        ExRaiseDatatypeMisalignment();
      }
    }
    else if ( a5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + a6) - 1) & (unsigned int)a4) == 0 )
      {
        v10 = a5 + a4 - 1;
        if ( v10 < 0x7FFFFFFF0000LL && a4 <= v10 )
        {
          v11 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)a4 = *(_BYTE *)a4;
            a4 = (a4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( a4 != v11 );
          return 0LL;
        }
LABEL_25:
        ExRaiseAccessViolation();
      }
      goto LABEL_26;
    }
    return 0LL;
  }
  return 3221225476LL;
}
