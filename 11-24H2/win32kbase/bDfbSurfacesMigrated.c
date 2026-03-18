/*
 * XREFs of bDfbSurfacesMigrated @ 0x14000CB70
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140085260 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14000DEDC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     MulFindDisplayDhsurfFromMetaSurf @ 0x14014C8D0 (MulFindDisplayDhsurfFromMetaSurf.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDfbSurfacesMigrated(__int64 a1, __int64 a2)
{
  int v4; // r11d
  unsigned int v5; // esi
  HSURF v6; // r12
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD); // r10
  __int64 DisplayDhsurfFromMetaSurf; // r13
  __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rcx
  _QWORD *i; // rdx
  _QWORD *v14; // rdx
  _QWORD *j; // rax
  __int64 v16; // rax
  _BYTE v17[32]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD); // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v20; // [rsp+C8h] [rbp+48h]
  _QWORD *v21; // [rsp+D0h] [rbp+50h]

  if ( (*(_DWORD *)(a2 + 116) & 0x4000) == 0 && (*(_DWORD *)(a2 + 112) & 0x800000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    v5 = 0;
    if ( (v4 & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1784); i; i = (_QWORD *)*i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(i[6] + 1776LL) + 32LL) != 1 )
          return 0LL;
      }
    }
    v6 = 0LL;
    if ( (*(_DWORD *)(a1 + 1808) & 0x8000000) != 0 )
      goto LABEL_14;
    v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(a1 + 3432);
    v19 = v7;
    if ( !v7 )
      goto LABEL_14;
    DisplayDhsurfFromMetaSurf = *(_QWORD *)(a2 + 24);
    if ( !_bittest((const signed __int32 *)(*(_QWORD *)(a2 + 48) + 40LL), 0x11u) )
    {
LABEL_7:
      v9 = *(_QWORD *)(a2 + 56);
      v10 = *(_DWORD *)(a2 + 120);
      v19 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(a2 + 568);
      if ( (v4 & 0x4000000) != 0 )
      {
        v14 = *(_QWORD **)(a1 + 1784);
        v21 = v14;
        for ( j = (_QWORD *)*v14; ; j = (_QWORD *)*v20 )
        {
          v20 = j;
          if ( !j || v6 )
            break;
          v14[13] = *(_QWORD *)(*(_QWORD *)(j[7] + 2568LL) + 240LL);
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _QWORD *))(a1 + 3432))(
                  *(_QWORD *)(a1 + 1784),
                  v9,
                  *(unsigned int *)(a2 + 96),
                  v10 | 0x10u,
                  DisplayDhsurfFromMetaSurf,
                  *(_DWORD *)(a2 + 124),
                  0,
                  &v19);
          v14 = v21;
          v6 = (HSURF)v16;
        }
      }
      else
      {
        v6 = (HSURF)v7(
                      *(_QWORD *)(a1 + 1784),
                      v9,
                      *(unsigned int *)(a2 + 96),
                      v10 | 0x10u,
                      DisplayDhsurfFromMetaSurf,
                      *(_DWORD *)(a2 + 124),
                      0,
                      &v19);
      }
      SURFREF::SURFREF((SURFREF *)v17, v6);
      v11 = v18;
      if ( v18 )
      {
        *(_QWORD *)(a2 + 560) = v18;
        if ( (*(_DWORD *)(v11 + 116) & 0x2000) != 0 )
          *(_DWORD *)(a2 + 116) |= 0x2000u;
        *(_DWORD *)(v11 + 120) = v10;
        if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
        {
          if ( (v10 & 1) != 0 )
          {
            *(_DWORD *)(v18 + 116) |= 1u;
            *(_QWORD *)(v18 + 568) = v19;
            *(_QWORD *)(v18 + 576) = *(_QWORD *)(a2 + 576);
            *(_DWORD *)(v18 + 124) = *(_DWORD *)(a2 + 124);
          }
          else if ( (v10 & 2) != 0 )
          {
            *(_DWORD *)(v18 + 116) |= 8u;
          }
          *(_DWORD *)(v18 + 112) |= 0x800000u;
          *(_DWORD *)(v18 + 112) |= 0x4000000u;
          *(_DWORD *)(v18 + 112) |= 0x4000u;
        }
      }
      SURFREF::~SURFREF((SURFREF *)v17);
LABEL_14:
      LOBYTE(v5) = v6 != 0LL;
      return v5;
    }
    DisplayDhsurfFromMetaSurf = MulFindDisplayDhsurfFromMetaSurf((a2 + 24) & -(__int64)(a2 != 0));
    if ( DisplayDhsurfFromMetaSurf )
    {
      v7 = v19;
      goto LABEL_7;
    }
  }
  return 0LL;
}
