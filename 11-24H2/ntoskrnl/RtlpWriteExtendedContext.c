/*
 * XREFs of RtlpWriteExtendedContext @ 0x14092013C
 * Callers:
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x1403D5250 (RtlpValidateContextFlags.c)
 *     RtlpGetLegacyContextLength @ 0x1404E7220 (RtlpGetLegacyContextLength.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall RtlpWriteExtendedContext(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  char v9; // bl
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // [rsp+30h] [rbp-18h] BYREF
  int v17; // [rsp+34h] [rbp-14h]
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0;
  v16 = 0;
  result = RtlpValidateContextFlags(a4, (__int64)&v18);
  v17 = result;
  if ( (int)result >= 0 )
  {
    v9 = v18;
    if ( (v18 & 4) != 0 )
      return 3221225659LL;
    RtlpGetLegacyContextLength(a4, 0LL, &v16);
    if ( (v9 & 1) != 0 )
    {
      v10 = a2 + (int)a3[2];
      if ( a3[3] )
      {
        if ( ((v16 - 1) & (unsigned int)v10) != 0 )
          goto LABEL_22;
        v11 = v10 + (unsigned int)a3[3] - 1LL;
        if ( v10 > v11 || v11 >= 0x7FFFFFFF0000LL )
          goto LABEL_21;
        v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v10 = *(_BYTE *)v10;
          v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v10 != v12 );
        v9 = v18;
      }
    }
    if ( (v9 & 2) == 0 )
      goto LABEL_23;
    v13 = a2 + (int)a3[4];
    if ( !a3[5] )
      goto LABEL_23;
    if ( (v13 & 0x3F) == 0 )
    {
      v14 = v13 + (unsigned int)a3[5] - 1LL;
      if ( v13 <= v14 && v14 < 0x7FFFFFFF0000LL )
      {
        v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v13 = *(_BYTE *)v13;
          v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v13 != v15 );
LABEL_23:
        result = RtlpCopyExtendedContext(1u, a2, (__int64)a3, a4, a5, 0LL);
        v17 = result;
        return result;
      }
LABEL_21:
      ExRaiseAccessViolation();
    }
LABEL_22:
    ExRaiseDatatypeMisalignment();
  }
  return result;
}
