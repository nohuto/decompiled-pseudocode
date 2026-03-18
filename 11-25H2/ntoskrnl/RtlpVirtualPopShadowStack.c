/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x1403F2600
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1403F21D0 (RtlpUnwindEpilogue.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpVirtualPopShadowStack(_DWORD *a1, int a2, int a3)
{
  _DWORD *v5; // r9
  __int64 v6; // r10
  char *v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx

  if ( a2 )
  {
    if ( (a1[12] & 0x100040) == 0x100040 )
    {
      v5 = a1 + 308;
      if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) != 0
        && (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) == 0 )
      {
        v6 = (int)a1[312];
        if ( *v5 <= (int)v6 && a1[309] + *v5 >= (int)v6 + a1[313] )
        {
          v7 = (char *)v5 + v6;
          if ( v7 )
          {
            if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            {
              v8 = *((_QWORD *)v7 + 1);
              if ( (v8 & 0x800) == 0 )
                goto LABEL_2;
              v9 = 576LL;
              if ( (v8 & 4) != 0 )
                v9 = (unsigned int)(MEMORY[0xFFFFF7800000060C] + 576);
              if ( (v8 & 8) != 0 )
              {
                if ( (MEMORY[0xFFFFF780000005F8] & 8) != 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF78000000610] + v9);
              }
              if ( (v8 & 0x10) != 0 )
              {
                if ( (MEMORY[0xFFFFF780000005F8] & 0x10) != 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF78000000614] + v9);
              }
              if ( (v8 & 0x20) != 0 )
              {
                if ( (MEMORY[0xFFFFF780000005F8] & 0x20) != 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF78000000618] + v9);
              }
              if ( (v8 & 0x40) != 0 )
              {
                if ( (MEMORY[0xFFFFF780000005F8] & 0x40) != 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF7800000061C] + v9);
              }
              if ( (v8 & 0x80u) != 0LL )
              {
                if ( MEMORY[0xFFFFF780000005F8] < 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF78000000620] + v9);
              }
              if ( (v8 & 0x100) != 0 )
              {
                if ( (MEMORY[0xFFFFF780000005F8] & 0x100) != 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF78000000624] + v9);
              }
              if ( (v8 & 0x200) != 0 )
              {
                if ( (MEMORY[0xFFFFF780000005F8] & 0x200) != 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF78000000628] + v9);
              }
              if ( (v8 & 0x400) != 0 )
              {
                if ( (MEMORY[0xFFFFF780000005F8] & 0x400) != 0 )
                  LODWORD(v9) = (v9 + 63) & 0xFFFFFFC0;
                v9 = (unsigned int)(MEMORY[0xFFFFF7800000062C] + v9);
              }
              if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
                v9 = ((_DWORD)v9 + 63) & 0xFFFFFFC0;
            }
            else
            {
              v9 = MEMORY[0xFFFFF78000000448];
            }
            v10 = (__int64)&v7[v9 - 512];
            if ( v10 && (*(_BYTE *)v10 & 1) != 0 )
              *(_QWORD *)(v10 + 8) += (unsigned int)(8 * a2);
          }
        }
      }
    }
  }
LABEL_2:
  if ( a3 )
  {
    if ( (a1[12] & 0x100080) == 0x100080 )
      *(_QWORD *)((char *)a1 + a1[314] + 1232) += (unsigned int)(8 * a3);
  }
}
