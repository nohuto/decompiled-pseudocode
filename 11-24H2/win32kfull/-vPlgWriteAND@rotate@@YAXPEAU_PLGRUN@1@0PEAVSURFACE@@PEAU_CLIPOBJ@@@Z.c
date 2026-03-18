/*
 * XREFs of ?vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031E9E0
 * Callers:
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A2850 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x140154410 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall rotate::vPlgWriteAND(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  XCLIPOBJ *v5; // rdi
  struct rotate::_PLGRUN *v6; // r15
  rotate *v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  int v11; // edi
  int v12; // eax
  int v13; // ebp
  __int64 j; // r10
  int v15; // r11d
  int v16; // r9d
  char *v17; // rcx
  unsigned __int8 v18; // r8
  char v19; // dl
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  int v22; // eax
  LONG v23; // ebp
  int v24; // r8d
  __int64 v25; // rdx
  bool i; // zf
  int v27; // edi
  int v28; // r13d
  unsigned __int64 v29; // rcx
  char *v30; // r10
  unsigned __int8 v31; // r15
  char v32; // bl
  char v33; // si
  unsigned __int8 v34; // al
  int v35; // [rsp+30h] [rbp-78h]
  int v36; // [rsp+38h] [rbp-70h]
  unsigned __int64 v37; // [rsp+40h] [rbp-68h]
  __int64 v38; // [rsp+48h] [rbp-60h]
  rotate *v39; // [rsp+50h] [rbp-58h]
  struct _RECTL si128; // [rsp+58h] [rbp-50h] BYREF

  if ( a2 )
  {
    v5 = a4;
    v6 = a2;
    v7 = this;
    v8 = *((_QWORD *)a3 + 9);
    v9 = *((unsigned int *)a3 + 16) + v8 - 1;
    v37 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v7 < v6 )
      {
        LODWORD(v21) = *((_DWORD *)a3 + 22);
        do
        {
          v22 = *(_DWORD *)v7;
          v23 = *((_DWORD *)v7 + 1);
          v24 = *((_DWORD *)v7 + 2);
          v7 = (rotate *)((char *)v7 + 12);
          v36 = v22;
          v25 = *((_QWORD *)a3 + 10) + v23 * (int)v21;
          for ( i = v24 == 0; ; i = v24 == 0 )
          {
            v38 = v25;
            v35 = v24;
            if ( i )
              break;
            v39 = (rotate *)((char *)v7 + 8);
            if ( (rotate *)((char *)v7 + 8) > v6 )
              break;
            if ( v23 < si128.top || v23 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(v5, &si128, v23);
              v25 = v38;
              v24 = v35;
            }
            if ( v23 >= si128.top && v23 < si128.bottom )
            {
              v27 = *(_DWORD *)v7;
              v28 = *((_DWORD *)v7 + 1);
              v29 = v37;
              v30 = (char *)(v25 + ((__int64)*(int *)v7 >> 3));
              v31 = *((_BYTE *)&dword_1403622F0 + (*(_DWORD *)v7 & 7));
              if ( *(int *)v7 < 0
                || v27 >= *((_DWORD *)a3 + 14)
                || (unsigned __int64)v30 < v8
                || (unsigned __int64)v30 > v37 )
              {
                v33 = 0;
                v32 = 0;
              }
              else
              {
                v32 = *v30;
                v33 = 1;
              }
              if ( v28 >= 0 )
              {
                do
                {
                  if ( (unsigned __int64)v30 < v8 || (unsigned __int64)v30 > v29 )
                    break;
                  if ( v27 < si128.left || v27 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment(a4, &si128, v27);
                    v29 = v37;
                  }
                  if ( v27 >= si128.left && v27 < si128.right )
                  {
                    v34 = v31;
                    if ( v36 )
                      v34 = 0;
                    v32 &= ~v34;
                  }
                  --v28;
                  ++v27;
                  v31 >>= 1;
                  if ( !v31 )
                  {
                    if ( v33 )
                      *v30 = v32;
                    ++v30;
                    v31 = *((_BYTE *)&dword_1403622F0 + (v27 & 7));
                    if ( v27 < 0
                      || v27 >= *((_DWORD *)a3 + 14)
                      || (unsigned __int64)v30 < v8
                      || (unsigned __int64)v30 > v29 )
                    {
                      v33 = 0;
                      v32 = 0;
                    }
                    else
                    {
                      v32 = *v30;
                      v33 = 1;
                    }
                  }
                }
                while ( v28 >= 0 );
                v25 = v38;
              }
              if ( v33 && (unsigned __int64)v30 >= v8 )
              {
                v6 = a2;
                v5 = a4;
                v24 = v35;
                if ( (unsigned __int64)v30 <= v29 )
                  *v30 = v32;
              }
              else
              {
                v24 = v35;
                v5 = a4;
                v6 = a2;
              }
            }
            v21 = *((int *)a3 + 22);
            ++v23;
            v7 = v39;
            v25 += v21;
            --v24;
          }
        }
        while ( v7 < v6 );
      }
    }
    else if ( this < a2 )
    {
      LODWORD(v10) = *((_DWORD *)a3 + 22);
      do
      {
        v11 = *((_DWORD *)v7 + 2);
        v12 = *((_DWORD *)v7 + 1) * v10;
        v13 = *(_DWORD *)v7;
        v7 = (rotate *)((char *)v7 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v12; v11; --v11 )
        {
          if ( (rotate *)((char *)v7 + 8) > v6 )
            break;
          v15 = *(_DWORD *)v7;
          v16 = *((_DWORD *)v7 + 1);
          v17 = (char *)(j + ((__int64)*(int *)v7 >> 3));
          v18 = *((_BYTE *)&dword_1403622F0 + (*(_DWORD *)v7 & 7));
          if ( (unsigned __int64)v17 < v8 || (unsigned __int64)v17 > v9 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 < 0 )
          {
LABEL_23:
            if ( (unsigned __int64)v17 >= v8 && (unsigned __int64)v17 <= v9 )
              *v17 = v19;
          }
          else
          {
            while ( (unsigned __int64)v17 >= v8 && (unsigned __int64)v17 <= v9 )
            {
              v20 = v18;
              if ( v13 )
                v20 = 0;
              --v16;
              LOBYTE(v15) = v15 + 1;
              v19 &= ~v20;
              v18 >>= 1;
              if ( !v18 )
              {
                *v17++ = v19;
                if ( (unsigned __int64)v17 < v8 || (unsigned __int64)v17 > v9 )
                  v19 = 0;
                else
                  v19 = *v17;
                v18 = *((_BYTE *)&dword_1403622F0 + (v15 & 7));
              }
              if ( v16 < 0 )
                goto LABEL_23;
            }
          }
          v10 = *((int *)a3 + 22);
          j += v10;
          v7 = (rotate *)((char *)v7 + 8);
        }
      }
      while ( v7 < v6 );
    }
  }
}
