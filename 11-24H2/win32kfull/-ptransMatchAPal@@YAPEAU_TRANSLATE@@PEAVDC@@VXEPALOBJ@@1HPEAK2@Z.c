/*
 * XREFs of ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x140310DC0
 * Callers:
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x14010CBB0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x140310CC0 (-ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z.c)
 */

__int64 __fastcall ptransMatchAPal(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // eax
  unsigned int v8; // edi
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 result; // rax
  _DWORD *v13; // r12
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r15
  char v20; // r14
  __int64 v21; // rbx
  unsigned int v22; // eax
  char v23; // r11
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-10h]
  int v27; // [rsp+20h] [rbp-10h]
  int v28; // [rsp+20h] [rbp-10h]
  int v29; // [rsp+24h] [rbp-Ch]
  int v30; // [rsp+28h] [rbp-8h]
  __int64 v31; // [rsp+70h] [rbp+40h] BYREF
  __int64 v32; // [rsp+78h] [rbp+48h] BYREF
  __int64 v33; // [rsp+80h] [rbp+50h] BYREF

  v33 = a3;
  v32 = a2;
  v31 = a1;
  v6 = *(_DWORD *)(a2 + 24);
  if ( (v6 & 0x1000) != 0 )
  {
    v8 = 1;
  }
  else if ( (v6 & 0x10000) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 60) >> 1;
  }
  v9 = *(_DWORD *)(a3 + 28);
  LODWORD(v31) = 0;
  v29 = 0;
  v10 = v8;
  v11 = 256 - v8;
  result = PALLOCNOZ(v9 + 7, 1818316871LL);
  v13 = (_DWORD *)result;
  if ( result )
  {
    v14 = v33;
    v30 = *(_DWORD *)(v33 + 28);
    if ( a4 )
    {
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v32);
      LODWORD(v31) = v8;
      if ( v8 < v11 )
      {
        v15 = v8;
        v16 = v8;
        v17 = v8;
        do
        {
          v18 = *(_QWORD *)(v32 + 112);
          v26 = *(_DWORD *)(v18 + 4LL * v15);
          HIBYTE(v26) &= 0xCEu;
          *(_DWORD *)(v18 + 4LL * v17) = v26;
          v15 = v16 + 1;
          LODWORD(v31) = v15;
          v17 = ++v16;
        }
        while ( v15 < v11 );
      }
      v14 = v33;
    }
    v19 = 0LL;
    v20 = 48;
    if ( *(_DWORD *)(v14 + 28) )
    {
      do
      {
        v21 = v32;
        v27 = *(_DWORD *)(*(_QWORD *)(v14 + 112) + 4 * v19);
        v22 = ColorMatch(v32, v27, (unsigned int *)&v31);
        v23 = v22;
        if ( (_DWORD)v31 )
        {
          if ( v10 || (*(_DWORD *)(v21 + 24) & 0x10000) != 0 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                LODWORD(v31) = v10;
                if ( v10 >= v11 )
                  break;
                v25 = *(_QWORD *)(v21 + 112);
                if ( ((unsigned __int8)v20 & *(_BYTE *)(v25 + 4LL * v10 + 3)) == 0 )
                {
                  HIBYTE(v27) |= 0x30u;
                  v23 = v10;
                  ++v29;
                  *(_DWORD *)(v25 + 4LL * v10) = v27;
                  goto LABEL_25;
                }
                ++v10;
              }
              if ( (v20 & 0x10) == 0 )
                break;
              v20 &= ~0x10u;
              v10 = v8;
            }
            v10 = 0;
          }
        }
        else if ( (v27 & 0x2000000) == 0 )
        {
          v24 = *(_QWORD *)(v21 + 112);
          v28 = *(_DWORD *)(v24 + 4LL * v22);
          HIBYTE(v28) |= 0x30u;
          *(_DWORD *)(v24 + 4LL * v22) = v28;
        }
LABEL_25:
        *((_BYTE *)v13 + v19 + 4) = v23;
        v19 = (unsigned int)(v19 + 1);
        v14 = v33;
      }
      while ( (unsigned int)v19 < *(_DWORD *)(v33 + 28) );
    }
    XEPALOBJ::vUpdateTime((XEPALOBJ *)&v33);
    *v13 = XEPALOBJ::ulTime((XEPALOBJ *)&v32);
    *a5 = v29;
    *a6 = v30;
    return (__int64)v13;
  }
  return result;
}
