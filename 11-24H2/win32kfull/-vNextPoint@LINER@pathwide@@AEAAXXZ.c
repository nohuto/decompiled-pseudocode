/*
 * XREFs of ?vNextPoint@LINER@pathwide@@AEAAXXZ @ 0x1400EBA1C
 * Callers:
 *     ?vNextEvent@LINER@pathwide@@QEAAXXZ @ 0x1400EBF1C (-vNextEvent@LINER@pathwide@@QEAAXXZ.c)
 * Callees:
 *     ?bNextFigure@READER@pathwide@@IEAAHXZ @ 0x1400EBD9C (-bNextFigure@READER@pathwide@@IEAAHXZ.c)
 *     ?bNextPoint@READER@pathwide@@IEAAHAEAU_POINTFIX@@@Z @ 0x1400EBE08 (-bNextPoint@READER@pathwide@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1400EC268 (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 *     ?bNext@BEZIER@@QEAAHPEAU_POINTFIX@@@Z @ 0x1400EC2E4 (-bNext@BEZIER@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall pathwide::LINER::vNextPoint(pathwide::LINER *this)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 *v4; // rsi
  int Point; // eax
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  struct _RECTFX *v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // xmm1_8
  int *v17; // rbx
  __int64 v18; // rdx
  int v19; // ecx
  struct _POINTFIX v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h]
  struct _POINTFIX v22; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTFIX v23; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( *((pathwide::LINER **)this + 88) == (pathwide::LINER *)((char *)this + 328) )
    v2 = 88LL;
  v3 = *((_DWORD *)this + 126);
  *((_QWORD *)this + 89) = (char *)this + v2 + 328;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      switch ( v3 )
      {
        case 2:
          *((_DWORD *)this + 172) = (*((_DWORD *)this + 2) & 8) != 0 ? 2 : 8;
          *((_QWORD *)this + 89) = (char *)this + 240;
          if ( (unsigned int)pathwide::READER::bNextFigure(this) )
          {
            pathwide::READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
            *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
            v10 = 1;
          }
          else
          {
            v10 = 4;
          }
          *((_DWORD *)this + 126) = v10;
          break;
        case 3:
          v17 = (int *)((char *)this + 224);
          *((_DWORD *)this + 172) = 4;
          if ( (unsigned int)BEZIER::bNext((pathwide::LINER *)((char *)this + 48), (struct _POINTFIX *)this + 28) )
            goto LABEL_9;
          *((_DWORD *)this + 126) = 0;
          v18 = *((_QWORD *)this + 89);
          *(_DWORD *)v18 = 0;
          v19 = *v17;
          *(_DWORD *)(v18 + 40) = *v17;
          *(_DWORD *)(v18 + 44) = *((_DWORD *)this + 57);
          *(_DWORD *)(v18 + 40) = v19 - *((_DWORD *)this + 173);
          *(_DWORD *)(v18 + 44) -= *((_DWORD *)this + 174);
          *(_QWORD *)(v18 + 48) = *(_QWORD *)(v18 + 40);
          *(_QWORD *)(*((_QWORD *)this + 89) + 48LL) = *((_QWORD *)this + 70);
          break;
        case 4:
          *((_DWORD *)this + 172) = 9;
          break;
        default:
          goto LABEL_9;
      }
      return;
    }
    *((_DWORD *)this + 126) = 0;
    v9 = 0;
  }
  else
  {
    v9 = 3;
  }
  v4 = (__int64 *)((char *)this + 224);
  *((_DWORD *)this + 172) = v9;
  Point = pathwide::READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
  v6 = *((_DWORD *)this + 2);
  if ( Point )
  {
    if ( (v6 & 0x10) == 0 )
    {
LABEL_9:
      v7 = *((_QWORD *)this + 89);
      *(_DWORD *)v7 = 0;
      v8 = *((_DWORD *)this + 56);
      *(_DWORD *)(v7 + 40) = v8;
      *(_DWORD *)(v7 + 44) = *((_DWORD *)this + 57);
      *(_DWORD *)(v7 + 40) = v8 - *((_DWORD *)this + 173);
      *(_DWORD *)(v7 + 44) -= *((_DWORD *)this + 174);
      *(_QWORD *)(v7 + 48) = *(_QWORD *)(v7 + 40);
      return;
    }
    v20 = *(struct _POINTFIX *)((char *)this + 692);
    v21 = *v4;
    pathwide::READER::bNextPoint(this, &v22);
    pathwide::READER::bNextPoint(this, &v23);
    BEZIER::vInit((pathwide::LINER *)((char *)this + 48), &v20, v11, gpeqErrorLow);
    v12 = BEZIER::bNext((pathwide::LINER *)((char *)this + 48), (struct _POINTFIX *)this + 28);
    v13 = *((_QWORD *)this + 89);
    *(_DWORD *)v13 = 0;
    v14 = *(_DWORD *)v4;
    *(_DWORD *)(v13 + 40) = *(_DWORD *)v4;
    *(_DWORD *)(v13 + 44) = *((_DWORD *)this + 57);
    *(_DWORD *)(v13 + 40) = v14 - *((_DWORD *)this + 173);
    *(_DWORD *)(v13 + 44) -= *((_DWORD *)this + 174);
    *(_QWORD *)(v13 + 48) = *(_QWORD *)(v13 + 40);
    if ( v12 )
    {
      v15 = *((_QWORD *)this + 89);
      *(_OWORD *)((char *)this + 600) = *(_OWORD *)v15;
      *(_OWORD *)((char *)this + 616) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)((char *)this + 632) = *(_OWORD *)(v15 + 32);
      *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v15 + 48);
      *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v15 + 64);
      v16 = *(_QWORD *)(v15 + 80);
      LODWORD(v15) = HIDWORD(v21);
      *((_QWORD *)this + 85) = v16;
      *((_DWORD *)this + 163) = v15;
      *((_DWORD *)this + 162) = v21 - v20.x;
      *((_DWORD *)this + 163) -= v20.y;
      *((_DWORD *)this + 128) = 0;
      *((_DWORD *)this + 139) = v23.y;
      *((_DWORD *)this + 138) = v23.x - v22.x;
      *((_DWORD *)this + 139) -= v22.y;
      *((_QWORD *)this + 70) = *((_QWORD *)this + 69);
      *((_QWORD *)this + 89) = (char *)this + 600;
      *((_DWORD *)this + 126) = 3;
    }
    else
    {
      *((_DWORD *)this + 126) = 0;
    }
  }
  else
  {
    *v4 = *((_QWORD *)this + 29);
    *((_DWORD *)this + 126) = 2;
    if ( (v6 & 8) != 0 )
    {
      *((_DWORD *)this + 172) = 3;
      goto LABEL_9;
    }
    *((_DWORD *)this + 172) = 1;
  }
}
