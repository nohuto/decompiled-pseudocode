/*
 * XREFs of RtlpCopyContext @ 0x1800CB2D0
 * Callers:
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyContext(__int64 a1, __int64 a2)
{
  int v3; // eax
  char *v4; // r10
  __int64 result; // rax
  _OWORD *v6; // rcx
  unsigned int v7; // r11d
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  char *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rbx
  char v14; // si
  _DWORD *v15; // rdi
  char *v16; // rbx
  __int64 v17; // r14
  char *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r10

  if ( a2 != a1 )
  {
    v3 = *(_DWORD *)(a1 + 48);
    v4 = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
    if ( (v3 & *(_DWORD *)(a2 + 48) & 0x100040) != 0x100040 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 48) |= *(_DWORD *)(a2 + 48) & 0x10000F;
      *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
      *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
      *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
      *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
      *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
      *(_OWORD *)(a1 + 512) = *(_OWORD *)(a2 + 512);
      *(_OWORD *)(a1 + 528) = *(_OWORD *)(a2 + 528);
      *(_OWORD *)(a1 + 544) = *(_OWORD *)(a2 + 544);
      *(_OWORD *)(a1 + 560) = *(_OWORD *)(a2 + 560);
      *(_OWORD *)(a1 + 576) = *(_OWORD *)(a2 + 576);
      *(_OWORD *)(a1 + 592) = *(_OWORD *)(a2 + 592);
      *(_OWORD *)(a1 + 608) = *(_OWORD *)(a2 + 608);
      *(_OWORD *)(a1 + 624) = *(_OWORD *)(a2 + 624);
      *(_OWORD *)(a1 + 640) = *(_OWORD *)(a2 + 640);
      *(_OWORD *)(a1 + 656) = *(_OWORD *)(a2 + 656);
      *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 56);
      *(_WORD *)(a1 + 66) = *(_WORD *)(a2 + 66);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
      result = a2 + 256;
      v6 = (_OWORD *)(a1 + 256);
      *v6 = *(_OWORD *)(a2 + 256);
      v6[1] = *(_OWORD *)(a2 + 272);
      v6[2] = *(_OWORD *)(a2 + 288);
      v6[3] = *(_OWORD *)(a2 + 304);
      v6[4] = *(_OWORD *)(a2 + 320);
      v6[5] = *(_OWORD *)(a2 + 336);
      v6[6] = *(_OWORD *)(a2 + 352);
      v6[7] = *(_OWORD *)(a2 + 368);
      v6[8] = *(_OWORD *)(a2 + 384);
      v6[9] = *(_OWORD *)(a2 + 400);
      return result;
    }
    v7 = 576;
    *(_DWORD *)(a1 + 48) = 1048640;
    v8 = (_DWORD *)(a2 + 1232);
    if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) == 0 || (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
    {
      v15 = (_DWORD *)(a1 + 1232);
      if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) == 0 )
        goto LABEL_3;
      v14 = MEMORY[0x7FFE03EC];
      v16 = 0LL;
      if ( (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
        goto LABEL_3;
LABEL_54:
      v17 = (int)v15[4];
      if ( *v15 <= (int)v17 && v15[1] + *v15 >= (int)v17 + v15[5] )
      {
        v18 = (char *)v15 + v17;
        if ( (_DWORD *)((char *)v15 + v17) )
        {
          if ( (v14 & 2) != 0 )
          {
            v19 = *((_QWORD *)v18 + 1);
            if ( (v19 & 0x800) == 0 )
              goto LABEL_97;
            if ( (v19 & 4) != 0 )
              v7 = MEMORY[0x7FFE060C] + 576;
            if ( (v19 & 8) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE0610];
            }
            if ( (v19 & 0x10) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE0614];
            }
            if ( (v19 & 0x20) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE0618];
            }
            if ( (v19 & 0x40) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE061C];
            }
            if ( (v19 & 0x80u) != 0LL )
            {
              if ( MEMORY[0x7FFE05F8] < 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE0620];
            }
            if ( (v19 & 0x100) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE0624];
            }
            if ( (v19 & 0x200) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE0628];
            }
            if ( (v19 & 0x400) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += MEMORY[0x7FFE062C];
            }
            if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
              v7 = (v7 + 63) & 0xFFFFFFC0;
            v20 = v7 - 512LL;
          }
          else
          {
            v20 = MEMORY[0x7FFE0448] - 512LL;
          }
          v4 = &v18[v20];
        }
      }
LABEL_97:
      if ( v16 )
      {
        if ( v4 )
        {
          *(_OWORD *)v4 = *(_OWORD *)v16;
          *(_QWORD *)(*(int *)(a1 + 1248) + a1 + 1232) |= *(_DWORD *)(*(int *)(a2 + 1248) + a2 + 1232) & 0x800;
        }
      }
      goto LABEL_3;
    }
    v9 = *(int *)(a2 + 1248);
    if ( *v8 <= (int)v9 && *(_DWORD *)(a2 + 1236) + *v8 >= (int)v9 + *(_DWORD *)(a2 + 1252) )
    {
      v10 = (char *)v8 + v9;
      if ( (_DWORD *)((char *)v8 + v9) )
      {
        if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
        {
          v13 = MEMORY[0x7FFE0448] - 512LL;
LABEL_48:
          v14 = MEMORY[0x7FFE03EC];
          v15 = (_DWORD *)(a1 + 1232);
          v16 = &v10[v13];
          goto LABEL_54;
        }
        v11 = *((_QWORD *)v10 + 1);
        if ( (v11 & 0x800) != 0 )
        {
          v12 = 576;
          if ( (v11 & 4) != 0 )
            v12 = MEMORY[0x7FFE060C] + 576;
          if ( (v11 & 8) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE0610];
          }
          if ( (v11 & 0x10) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE0614];
          }
          if ( (v11 & 0x20) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE0618];
          }
          if ( (v11 & 0x40) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE061C];
          }
          if ( (v11 & 0x80u) != 0LL )
          {
            if ( MEMORY[0x7FFE05F8] < 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE0620];
          }
          if ( (v11 & 0x100) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE0624];
          }
          if ( (v11 & 0x200) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE0628];
          }
          if ( (v11 & 0x400) != 0 )
          {
            if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v12 += MEMORY[0x7FFE062C];
          }
          if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
            v12 = (v12 + 63) & 0xFFFFFFC0;
          v13 = v12 - 512LL;
          goto LABEL_48;
        }
      }
    }
    v14 = MEMORY[0x7FFE03EC];
    v15 = (_DWORD *)(a1 + 1232);
    v16 = 0LL;
    goto LABEL_54;
  }
  result = *(_DWORD *)(a2 + 48) & 0x10004F;
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
