/*
 * XREFs of MiResolveSharedZeroFault @ 0x140243D50
 * Callers:
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFillPteWithProto @ 0x1403E6330 (MiFillPteWithProto.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned int *v1; // r13
  unsigned __int64 *v2; // rax
  unsigned int v3; // edx
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // r14
  char v7; // r10
  unsigned int v8; // ecx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int128 *v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  unsigned __int64 v24; // r8
  _QWORD *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 PrototypePteDirect; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // edi
  __int64 v33; // rcx
  __int64 v34; // rdx
  bool v35; // zf
  unsigned __int64 v36; // rdx
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // [rsp+20h] [rbp-99h]
  __int128 v42; // [rsp+28h] [rbp-91h] BYREF
  __int128 v43; // [rsp+40h] [rbp-79h] BYREF
  __int128 v44; // [rsp+50h] [rbp-69h]
  __int128 v45; // [rsp+60h] [rbp-59h]
  __int128 v46; // [rsp+70h] [rbp-49h]
  __int128 v47; // [rsp+80h] [rbp-39h]
  __int128 v48; // [rsp+90h] [rbp-29h]
  __int128 v49; // [rsp+A0h] [rbp-19h]
  __int64 v50; // [rsp+B0h] [rbp-9h]
  __int64 v51[3]; // [rsp+C0h] [rbp+7h] BYREF
  char v53; // [rsp+128h] [rbp+6Fh]
  unsigned int v54; // [rsp+130h] [rbp+77h]
  unsigned __int64 v55; // [rsp+138h] [rbp+7Fh]

  v51[0] = 0LL;
  v1 = a1;
  memset_0(&v43, 0, 0x78uLL);
  v2 = (unsigned __int64 *)*((_QWORD *)v1 + 1);
  v3 = v1[8];
  v42 = 0LL;
  v54 = v3;
  v4 = *v2;
  result = MiFillPteWithProto(((*v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *((_QWORD *)v1 + 3), v3);
  v6 = *((_QWORD *)v1 + 8);
  if ( v6 )
  {
    v7 = 0;
    v8 = *(_DWORD *)(v6 + 48);
    v9 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
    v10 = *(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32);
    v53 = 0;
    if ( MiVadPageSizes[(v8 >> 19) & 3] == 16 )
    {
      v40 = v4 & 0xFFFFFFFFFFFF0000uLL;
      *((_QWORD *)&v42 + 1) = 0x10000LL;
      *(_QWORD *)&v42 = v40;
      result = v40 >> 12;
      if ( v40 >> 12 >= v9 )
      {
        result = (v40 + 0xFFFF) >> 12;
        if ( result <= v10 )
        {
          v18 = 0LL;
          LOWORD(v43) = 2;
          v19 = 0LL;
          v44 = 1uLL;
          v21 = 0LL;
          v20 = 0LL;
          *(_QWORD *)&v45 = 0LL;
          v16 = &v42;
          v55 = 0LL;
          *((_QWORD *)&v43 + 1) = &v42;
          v41 = 16LL;
          goto LABEL_16;
        }
      }
    }
    else
    {
      result = *v1;
      if ( (result & 2) != 0 )
      {
        result = *((_QWORD *)v1 + 7);
        v41 = 512LL;
        v36 = v10 - (v4 >> 12) + 1;
        v37 = *(_OWORD *)(result + 16);
        v43 = *(_OWORD *)result;
        v16 = (__int128 *)*((_QWORD *)&v43 + 1);
        v44 = v37;
        v18 = *((_QWORD *)&v37 + 1);
        v38 = *(_OWORD *)(result + 48);
        v45 = *(_OWORD *)(result + 32);
        v19 = v45;
        v46 = v38;
        v39 = *(_OWORD *)(result + 80);
        v47 = *(_OWORD *)(result + 64);
        v48 = v39;
        v50 = *(_QWORD *)(result + 112);
        v49 = *(_OWORD *)(result + 96);
        if ( v36 < 0x200 )
          v41 = v36;
      }
      else
      {
        if ( (v8 & 0x70) == 0x20 )
          return result;
        v11 = 8LL;
        *(_QWORD *)&v42 = v4 & 0xFFFFFFFFFFFFF000uLL;
        v12 = *(_QWORD *)(v6 + 120);
        if ( v12 >= 0 )
        {
          v13 = *(_QWORD *)(v6 + 120) & 0xFFFLL;
          if ( (v12 & 0xFFF) != 0 && v13 + (((unsigned __int64)v12 >> 12) & 0x7FFFFFFFFFFFFLL) - 1 == v4 >> 12 )
          {
            v14 = *(__int64 **)(v6 + 72);
            if ( v14 )
            {
              v15 = *v14;
              if ( *(_QWORD *)(*v14 + 64) )
              {
                if ( (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (*(_BYTE *)(v15 + 62) & 0xC) == 4 )
                {
                  v11 = 2 * v13;
                  v7 = 1;
                  v53 = 1;
                  if ( (unsigned __int64)(2 * v13) > 0x80 )
                    v11 = 128LL;
                }
              }
            }
          }
        }
        v16 = &v42;
        LOWORD(v43) = 2;
        *((_QWORD *)&v43 + 1) = &v42;
        *(_QWORD *)&v44 = 1LL;
        v17 = v10 - (v4 >> 12) + 1;
        if ( v11 <= v17 )
          v17 = v11;
        v18 = 0LL;
        v41 = v17;
        result = v17 << 12;
        v19 = 0LL;
        *((_QWORD *)&v42 + 1) = result;
        *(_QWORD *)&v45 = 0LL;
        *((_QWORD *)&v44 + 1) = 0LL;
      }
      v20 = 0LL;
      v21 = 0LL;
      v55 = 0LL;
      if ( v41 )
      {
        while ( 1 )
        {
LABEL_16:
          v22 = ((v19 << 12) + *(_QWORD *)&v16[v18]) & 0xFFFFFFFFFFFFF000uLL;
          v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v20 )
          {
            result = v21 + 4096;
            if ( v22 != v21 + 4096 || ((v22 >> 9) & 0xFF8) == 0 )
            {
LABEL_39:
              v1 = a1;
              v7 = v53;
              goto LABEL_40;
            }
          }
          if ( !MI_READ_PTE_LOCK_FREE(
                  (((((v19 << 12) + *(_QWORD *)&v16[v18]) & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL)
                - 0x98000000000LL) )
          {
            result = MiGetProtoPteAddress(v6, v22 >> 12, 12LL, v51);
            v24 = result;
            if ( !result
              || (v25 = *(_QWORD **)(v6 + 120), (__int64)v25 < 0)
              && (result = (unsigned __int64)(*v25 - 1LL) >> 12,
                  (v22 >> 12) - (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) > result) )
            {
LABEL_52:
              LODWORD(v20) = v55;
              goto LABEL_39;
            }
            v26 = v23 << 25 >> 16;
            if ( v54 == 256 )
            {
              PrototypePteDirect = MiMakePrototypePteDirect(v24);
            }
            else
            {
              PrototypePteDirect = 32 * (v54 & 0x1F | 0xFFFFFFFFF8000020uLL);
              if ( qword_140E2D940 )
              {
                if ( (qword_140E2D940 & PrototypePteDirect) != 0 )
                  PrototypePteDirect |= 0x10uLL;
                else
                  PrototypePteDirect |= qword_140E2D940;
              }
            }
            *(_QWORD *)v23 = PrototypePteDirect;
            v28 = ((v26 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            if ( v28 != 0xFFFFF6FB7DBEDF68uLL )
            {
              v29 = MI_READ_PTE_LOCK_FREE(v28);
              v30 = 0xFFFFFFFFFFLL;
              v31 = 48 * ((v29 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              v32 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v32 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
                  {
                    HvlNotifyLongSpinWait(v32);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v31 + 24) < 0 );
              }
              if ( (*(_DWORD *)(v31 + 36) & 0x4000000) != 0 )
                v33 = HIDWORD(*(_QWORD *)v31);
              else
                v33 = *(_QWORD *)(v31 + 16) >> 16;
              v34 = (unsigned int)(v33 + 1);
              if ( (*(_DWORD *)(v31 + 36) & 0x4000000) != 0 )
                *(_QWORD *)v31 = (v34 << 32) ^ (*(_QWORD *)v31 ^ (v34 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
              else
                *(_QWORD *)(v31 + 16) = (v34 << 16) ^ (*(_QWORD *)(v31 + 16) ^ (v34 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v16 = (__int128 *)*((_QWORD *)&v43 + 1);
            v18 = *((_QWORD *)&v44 + 1);
            v19 = v45;
          }
          ++v19;
          result = 2 * v18;
          *(_QWORD *)&v45 = v19;
          if ( v19 != (*((_QWORD *)&v16[v18] + 1) + (unsigned __int64)(v16[v18] & 0xFFF) + 4095) >> 12 )
            goto LABEL_36;
          ++v18;
          v19 = 0LL;
          *((_QWORD *)&v44 + 1) = v18;
          *(_QWORD *)&v45 = 0LL;
          v35 = v18 == (_QWORD)v44;
          if ( v18 < (unsigned __int64)v44 )
            break;
LABEL_37:
          LODWORD(v20) = v55;
          if ( !v35 )
          {
            v20 = v55 + 1;
            v21 = v22;
            v55 = v20;
            if ( v20 < v41 )
              continue;
          }
          goto LABEL_39;
        }
        result = 2 * v18;
        if ( !*((_QWORD *)&v16[v18] + 1) )
          goto LABEL_52;
LABEL_36:
        v35 = v18 == (_QWORD)v44;
        goto LABEL_37;
      }
LABEL_40:
      if ( v7 )
      {
        result = *v1;
        *v1 = result ^ (result ^ ((_DWORD)v20 << 10)) & 0x3FC00;
      }
    }
  }
  return result;
}
