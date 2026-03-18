/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x14009E330
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z @ 0x14009C8BC (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400A4090 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x1400D3588 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400D5A20 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1401108F4 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 *v6; // r13
  int v7; // r12d
  _QWORD *v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  int v15; // eax
  char v16; // al
  unsigned __int64 v17; // r13
  char v18; // r15
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // rcx
  char *v28; // [rsp+30h] [rbp-58h]
  char v30; // [rsp+98h] [rbp+10h]
  unsigned __int64 v31; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  v5 = v2;
  v6 = (unsigned __int64 *)this;
  v31 = v2;
  v32 = v4;
  v7 = *((_DWORD *)a2 + 4);
  if ( v7 )
    v5 = v4;
  if ( v2 == v4 )
    goto LABEL_18;
  v8 = (_QWORD *)((char *)this + 80);
  v28 = (char *)this + 80;
  if ( v7 )
    v9 = (_QWORD *)*((_QWORD *)this + 11);
  else
    v9 = (_QWORD *)*v8;
  while ( 1 )
  {
    v10 = v9;
    if ( v9 == v8 )
      break;
    v11 = v9 - 5;
    if ( v7 )
      v9 = (_QWORD *)v9[1];
    else
      v9 = (_QWORD *)*v9;
    v12 = *v11;
    v13 = *v11 + v11[1];
    if ( v13 > v2 )
    {
      if ( v12 < v4 )
      {
        if ( !v7 )
          v12 = *v11 + v11[1];
        *((_QWORD *)a2 + 10) = v12;
        if ( *((_BYTE *)v11 + 56) == 2 )
          goto LABEL_68;
        if ( *((_BYTE *)v11 + 56) == 3 || *((_BYTE *)v11 + 56) == 4 )
        {
LABEL_33:
          v16 = (*((__int64 (__fastcall **)(unsigned __int64))a2 + 4))(v11[2]);
          if ( v16 == 0 )
          {
            v2 = v31;
            v4 = v32;
            if ( !v16 )
              goto LABEL_39;
            if ( -(v16 != 0) != 1 )
            {
              v8 = v6 + 10;
              goto LABEL_37;
            }
LABEL_68:
            if ( v13 == v4 )
            {
              v5 = v4;
              if ( *v11 == v2 )
                goto LABEL_18;
            }
            v23 = *v10;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 )
              goto LABEL_76;
            v24 = (_QWORD *)v10[1];
            if ( (_QWORD *)*v24 != v10
              || (*v24 = v23,
                  *(_QWORD *)(v23 + 8) = v24,
                  v25 = v11 + 3,
                  *v10 = 0LL,
                  v10[1] = 0LL,
                  v26 = v11[3],
                  *(unsigned __int64 **)(v26 + 8) != v11 + 3)
              || (v27 = (unsigned __int64 *)v11[4], (_QWORD *)*v27 != v25) )
            {
LABEL_76:
              __fastfail(3u);
            }
            *v27 = v26;
            *(_QWORD *)(v26 + 8) = v27;
            *v25 = 0LL;
            v11[4] = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock((VIDMM_LINEAR_POOL *)v6, (struct _VIDMM_POOL_BLOCK *)v11);
            v2 = v31;
            v8 = v6 + 10;
            goto LABEL_7;
          }
          v17 = v11[2];
          v18 = 0;
          v30 = 0;
          if ( (*((unsigned __int8 (__fastcall **)(unsigned __int64))a2 + 5))(v17) )
          {
            if ( v7 )
            {
              if ( v5 - v11[1] < v13 )
              {
                if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
                {
LABEL_51:
                  v18 = 1;
                  goto LABEL_52;
                }
                v5 = v13;
              }
            }
            else if ( v5 + v11[1] > *v11 )
            {
              if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
                goto LABEL_51;
              v5 = *v11;
            }
          }
LABEL_52:
          v19 = (*((__int64 (__fastcall **)(unsigned __int64))a2 + 7))(v17);
          v20 = v19 - 1LL;
          if ( v19 )
          {
            v21 = ~v20;
            if ( v7 )
              v5 = v11[1] + (v21 & (v5 - v11[1]));
            else
              v5 = v21 & (v20 + v5);
          }
          if ( (*((_DWORD *)a2 + 16) & 1) != 0
            && (*((unsigned __int8 (__fastcall **)(unsigned __int64, __int64))a2 + 6))(v17, v20)
            && (v5 != *v11 || (*((_DWORD *)a2 + 16) & 2) != 0) )
          {
            v2 = v31;
            *((_QWORD *)a2 + 11) = v17;
            v6 = (unsigned __int64 *)this;
            *((_QWORD *)a2 + 12) = *v11;
            *((_BYTE *)a2 + 112) = v18;
            *((_QWORD *)a2 + 13) = v5;
            goto LABEL_18;
          }
          v22 = *v11;
          if ( v7 )
          {
            v5 -= v11[1];
            if ( v22 != v5 )
            {
              *v11 = v5;
              v22 = v5;
              v30 = 1;
            }
          }
          else
          {
            if ( v22 != v5 )
            {
              *v11 = v5;
              v22 = v5;
              v30 = 1;
            }
            v5 += v11[1];
          }
          v6 = (unsigned __int64 *)this;
          v2 = v31;
          v8 = (_QWORD *)((char *)this + 80);
          if ( v30 )
          {
            (*((void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD *, unsigned __int64))a2 + 3))(
              v11[2],
              v22,
              v8,
              v31);
            v2 = v31;
            v8 = v28;
          }
LABEL_7:
          v4 = v32;
        }
        else if ( *((_BYTE *)v11 + 56) == 5 || (unsigned int)*((unsigned __int8 *)v11 + 56) - 6 < 2 )
        {
LABEL_40:
          if ( v7 )
            v5 = *v11;
          else
            v5 = *v11 + v11[1];
        }
        else
        {
          if ( g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
            WdLogGlobalForLineNumber = 195;
            goto LABEL_33;
          }
LABEL_37:
          if ( g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
            WdLogGlobalForLineNumber = 195;
LABEL_39:
            v8 = v6 + 10;
            goto LABEL_40;
          }
        }
      }
      else if ( !v7 )
      {
LABEL_14:
        if ( v9 != v8 )
          goto LABEL_16;
        break;
      }
    }
    else if ( v7 )
    {
      goto LABEL_14;
    }
  }
  *((_QWORD *)a2 + 10) = v6[1];
LABEL_16:
  v14 = *((_QWORD *)a2 + 1);
  if ( *((_QWORD *)a2 + 10) > v14 )
    *((_QWORD *)a2 + 10) = v14;
LABEL_18:
  v15 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v5;
  if ( (v15 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks((VIDMM_LINEAR_POOL *)v6, v2, v6[1]);
}
