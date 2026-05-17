/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x1800D4B80
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800796F0 (RtlpUnwindPrologue.c)
 *     RtlpUnwindEpilogue @ 0x18011A578 (RtlpUnwindEpilogue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpVirtualPopShadowStack(_DWORD *a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  __int64 v3; // r9
  char *v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rax

  result = a1[12] & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    v2 = a1 + 308;
    result = (unsigned int)(MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
    if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) != 0 && (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) == 0 )
    {
      v3 = (int)a1[312];
      if ( *v2 <= (int)v3 && a1[309] + a1[308] >= (int)v3 + a1[313] )
      {
        v4 = (char *)v2 + v3;
        if ( (_DWORD *)((char *)v2 + v3) )
        {
          if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
          {
            v5 = *((_QWORD *)v4 + 1);
            if ( (v5 & 0x800) == 0 )
              return result;
            v6 = 576;
            if ( (v5 & 4) != 0 )
              v6 = MEMORY[0x7FFE060C] + 576;
            if ( (v5 & 8) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE0610];
            }
            if ( (v5 & 0x10) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE0614];
            }
            if ( (v5 & 0x20) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE0618];
            }
            if ( (v5 & 0x40) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE061C];
            }
            if ( (v5 & 0x80u) != 0LL )
            {
              if ( MEMORY[0x7FFE05F8] < 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE0620];
            }
            if ( (v5 & 0x100) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE0624];
            }
            if ( (v5 & 0x200) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE0628];
            }
            if ( (v5 & 0x400) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
                v6 = (v6 + 63) & 0xFFFFFFC0;
              v6 += MEMORY[0x7FFE062C];
            }
            if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
              v6 = (v6 + 63) & 0xFFFFFFC0;
            v7 = v6;
          }
          else
          {
            v7 = MEMORY[0x7FFE0448];
          }
          result = (__int64)&v4[v7 - 512];
          if ( result )
          {
            if ( (*(_BYTE *)result & 1) != 0 )
              *(_QWORD *)(result + 8) += 8LL;
          }
        }
      }
    }
  }
  return result;
}
