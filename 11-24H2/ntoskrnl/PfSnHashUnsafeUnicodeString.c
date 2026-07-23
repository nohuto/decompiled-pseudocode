/*
 * XREFs of PfSnHashUnsafeUnicodeString @ 0x140A50A3C
 * Callers:
 *     PfSnScanCommandLine @ 0x140949628 (PfSnScanCommandLine.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnHashUnsafeUnicodeString(unsigned __int16 *a1, __int64 *a2)
{
  unsigned __int8 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9

  if ( *a1 && (*((_QWORD *)a1 + 1) & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *a1;
  v4 = 314159LL;
  while ( v3 >= 8 )
  {
    v4 = v2[7]
       + 37 * (v2[6] + 37 * (v2[5] + 37 * (v2[4] + 37 * (v2[3] + 37 * (v2[2] + 37 * (v2[1] + 37 * (*v2 + 37 * v4)))))));
    v2 += 8;
    v3 -= 8LL;
  }
  v5 = v3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 != 1 )
                goto LABEL_21;
              v4 = *v2++ + 37 * v4;
            }
            v4 = *v2++ + 37 * v4;
          }
          v4 = *v2++ + 37 * v4;
        }
        v4 = *v2++ + 37 * v4;
      }
      v4 = *v2++ + 37 * v4;
    }
    v4 = *v2++ + 37 * v4;
  }
  v4 = *v2 + 37 * v4;
LABEL_21:
  *a2 = v4;
  return 0LL;
}
