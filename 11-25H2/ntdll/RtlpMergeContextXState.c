/*
 * XREFs of RtlpMergeContextXState @ 0x1800DE670
 * Callers:
 *     RtlCaptureContext2 @ 0x180122820 (RtlCaptureContext2.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpMergeContextXState(_DWORD *a1, __int64 a2)
{
  char *result; // rax
  char *v3; // r11
  __int64 v5; // r9
  char *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx

  result = (char *)(a1 + 308);
  v3 = (char *)a1 + (int)a1[312];
  if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) != 0 && (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) == 0 )
  {
    v5 = (int)a1[312];
    if ( *(_DWORD *)result <= (int)v5 && a1[309] + *(_DWORD *)result >= (int)v5 + a1[313] )
    {
      v6 = &result[v5];
      if ( &result[v5] )
      {
        if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        {
          v7 = *((_QWORD *)v6 + 1);
          if ( (v7 & 0x800) == 0 )
            return result;
          v8 = 576;
          if ( (v7 & 4) != 0 )
            v8 = MEMORY[0x7FFE060C] + 576;
          if ( (v7 & 8) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE0610];
          }
          if ( (v7 & 0x10) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE0614];
          }
          if ( (v7 & 0x20) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE0618];
          }
          if ( (v7 & 0x40) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE061C];
          }
          if ( (v7 & 0x80u) != 0LL )
          {
            if ( MEMORY[0x7FFE05F8] < 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE0620];
          }
          if ( (v7 & 0x100) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE0624];
          }
          if ( (v7 & 0x200) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE0628];
          }
          if ( (v7 & 0x400) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
              v8 = (v8 + 63) & 0xFFFFFFC0;
            v8 += MEMORY[0x7FFE062C];
          }
          if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
            v8 = (v8 + 63) & 0xFFFFFFC0;
          v9 = v8;
        }
        else
        {
          v9 = MEMORY[0x7FFE0448];
        }
        result = &v6[v9 - 512];
        if ( result )
        {
          v10 = *((_QWORD *)v3 + 154);
          if ( a2 )
          {
            *((_QWORD *)v3 + 154) = v10 | 0x800;
            *(_QWORD *)result = 1LL;
            *((_QWORD *)result + 1) = a2;
          }
          else
          {
            *((_QWORD *)v3 + 154) = v10 & 0xFFFFFFFFFFFFF7FFuLL;
            *(_QWORD *)result = 0LL;
            *((_QWORD *)result + 1) = 0LL;
          }
        }
      }
    }
  }
  return result;
}
