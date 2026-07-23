/*
 * XREFs of MiResolveSharedZeroFault @ 0x14030A4E0
 * Callers:
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiFillPteWithProto @ 0x1403E17D0 (MiFillPteWithProto.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned int *v1; // r12
  unsigned __int64 *v2; // rax
  unsigned int v3; // edx
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // rsi
  char v7; // r11
  unsigned int v8; // ecx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int128 *v13; // r10
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rdx
  bool v31; // zf
  _KPROCESS *v32; // rax
  __int64 v33; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 *v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm1
  unsigned __int64 v43; // rbx
  __int128 v44; // [rsp+20h] [rbp-79h] BYREF
  __int128 v45; // [rsp+30h] [rbp-69h] BYREF
  __int128 v46; // [rsp+40h] [rbp-59h]
  __int128 v47; // [rsp+50h] [rbp-49h]
  __int128 v48; // [rsp+60h] [rbp-39h]
  __int128 v49; // [rsp+70h] [rbp-29h]
  __int128 v50; // [rsp+80h] [rbp-19h]
  __int128 v51; // [rsp+90h] [rbp-9h]
  __int64 v52; // [rsp+A0h] [rbp+7h]
  char v54; // [rsp+108h] [rbp+6Fh]
  unsigned int v55; // [rsp+110h] [rbp+77h]
  __int64 v56; // [rsp+118h] [rbp+7Fh] BYREF

  v56 = 0LL;
  v1 = a1;
  memset_0(&v45, 0, 0x78uLL);
  v2 = (unsigned __int64 *)*((_QWORD *)v1 + 1);
  v3 = v1[8];
  v44 = 0LL;
  v55 = v3;
  v4 = *v2;
  result = MiFillPteWithProto(((*v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *((_QWORD *)v1 + 3), v3);
  v6 = *((_QWORD *)v1 + 8);
  if ( v6 )
  {
    v7 = 0;
    v8 = *(_DWORD *)(v6 + 48);
    v9 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
    v10 = *(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32);
    v54 = 0;
    if ( MiVadPageSizes[(v8 >> 19) & 3] == 16 )
    {
      v43 = v4 & 0xFFFFFFFFFFFF0000uLL;
      *((_QWORD *)&v44 + 1) = 0x10000LL;
      *(_QWORD *)&v44 = v43;
      result = v43 >> 12;
      if ( v43 >> 12 >= v9 )
      {
        result = (v43 + 0xFFFF) >> 12;
        if ( result <= v10 )
        {
          v15 = 0LL;
          LOWORD(v45) = 2;
          v16 = 0LL;
          v46 = 1uLL;
          v13 = &v44;
          v17 = 0LL;
          *((_QWORD *)&v45 + 1) = &v44;
          v14 = 16LL;
          *(_QWORD *)&v47 = 0LL;
          v18 = 0LL;
          goto LABEL_11;
        }
      }
    }
    else
    {
      result = *v1;
      if ( (result & 2) != 0 )
      {
        result = *((_QWORD *)v1 + 7);
        v14 = 512LL;
        v39 = v10 - (v4 >> 12) + 1;
        v40 = *(_OWORD *)(result + 16);
        v45 = *(_OWORD *)result;
        v13 = (__int128 *)*((_QWORD *)&v45 + 1);
        v46 = v40;
        v15 = *((_QWORD *)&v40 + 1);
        v41 = *(_OWORD *)(result + 48);
        v47 = *(_OWORD *)(result + 32);
        v16 = v47;
        v48 = v41;
        v42 = *(_OWORD *)(result + 80);
        v49 = *(_OWORD *)(result + 64);
        v50 = v42;
        v52 = *(_QWORD *)(result + 112);
        v51 = *(_OWORD *)(result + 96);
        if ( v39 < 0x200 )
          v14 = v39;
      }
      else
      {
        if ( (v8 & 0x70) == 0x20 )
          return result;
        v11 = 8LL;
        *(_QWORD *)&v44 = v4 & 0xFFFFFFFFFFFFF000uLL;
        v12 = *(_QWORD *)(v6 + 120);
        if ( v12 >= 0 )
        {
          v36 = *(_QWORD *)(v6 + 120) & 0xFFFLL;
          if ( (v12 & 0xFFF) != 0 && v36 + (((unsigned __int64)v12 >> 12) & 0x7FFFFFFFFFFFFLL) - 1 == v4 >> 12 )
          {
            v37 = *(__int64 **)(v6 + 72);
            if ( v37 )
            {
              v38 = *v37;
              if ( *(_QWORD *)(*v37 + 64) )
              {
                if ( (*(_DWORD *)(v38 + 56) & 0x20) == 0 && (*(_BYTE *)(v38 + 62) & 0xC) == 4 )
                {
                  v11 = 2 * v36;
                  v7 = 1;
                  v54 = 1;
                  if ( (unsigned __int64)(2 * v36) > 0x80 )
                    v11 = 128LL;
                }
              }
            }
          }
        }
        v13 = &v44;
        LOWORD(v45) = 2;
        *((_QWORD *)&v45 + 1) = &v44;
        *(_QWORD *)&v46 = 1LL;
        v14 = v10 - (v4 >> 12) + 1;
        if ( v11 <= v14 )
          v14 = v11;
        v15 = 0LL;
        *((_QWORD *)&v46 + 1) = 0LL;
        result = v14 << 12;
        v16 = 0LL;
        *((_QWORD *)&v44 + 1) = v14 << 12;
        *(_QWORD *)&v47 = 0LL;
      }
      v17 = 0LL;
      v18 = 0LL;
      if ( v14 )
      {
        while ( 1 )
        {
LABEL_11:
          v19 = ((v16 << 12) + *(_QWORD *)&v13[v15]) & 0xFFFFFFFFFFFFF000uLL;
          v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v18 )
          {
            result = v17 + 4096;
            if ( v19 != v17 + 4096 || ((v19 >> 9) & 0xFF8) == 0 )
            {
LABEL_39:
              v1 = a1;
              v7 = v54;
              goto LABEL_40;
            }
          }
          v21 = *(_QWORD *)v20;
          if ( v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (v21 & 1) != 0 && ((v21 & 0x42) == 0 || (v21 & 0x20) == 0) )
            {
              v32 = MiPteHasShadow();
              if ( v32 )
              {
                KernelWaitTime = v32[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v35 = *(_QWORD *)(KernelWaitTime + 8 * ((v20 >> 3) & 0x1FF));
                  if ( (v35 & 0x20) != 0 )
                    v33 |= 0x20uLL;
                  v21 = v33 | 0x42;
                  if ( (v35 & 0x42) == 0 )
                    v21 = v33;
                }
              }
            }
            v54 = v7;
          }
          if ( !v21 )
          {
            result = MiGetProtoPteAddress(v6, v19 >> 12, 12LL, &v56);
            v22 = result;
            if ( !result )
              goto LABEL_39;
            v23 = *(_QWORD **)(v6 + 120);
            if ( (__int64)v23 < 0 )
            {
              result = (unsigned __int64)(*v23 - 1LL) >> 12;
              if ( (v19 >> 12) - (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) > result )
                goto LABEL_39;
            }
            v24 = (__int64)(v20 << 25) >> 16;
            if ( v55 == 256 )
            {
              PrototypePteDirect = MiMakePrototypePteDirect(v22);
            }
            else
            {
              PrototypePteDirect = 32 * (v55 & 0x1F | 0xFFFFFFFFF8000020uLL);
              if ( qword_140E2DCC0 )
              {
                if ( (qword_140E2DCC0 & PrototypePteDirect) != 0 )
                  PrototypePteDirect |= 0x10uLL;
                else
                  PrototypePteDirect |= qword_140E2DCC0;
              }
            }
            *(_QWORD *)v20 = PrototypePteDirect;
            v26 = ((v24 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            if ( v26 != 0xFFFFF6FB7DBEDF68uLL )
            {
              v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v26) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              v28 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v28 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v28);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v27 + 24) < 0 );
              }
              if ( (*(_DWORD *)(v27 + 36) & 0x4000000) != 0 )
                v29 = HIDWORD(*(_QWORD *)v27);
              else
                v29 = *(_QWORD *)(v27 + 16) >> 16;
              v30 = (unsigned int)(v29 + 1);
              if ( (*(_DWORD *)(v27 + 36) & 0x4000000) != 0 )
                *(_QWORD *)v27 = (v30 << 32) ^ (*(_QWORD *)v27 ^ (v30 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
              else
                *(_QWORD *)(v27 + 16) = (v30 << 16) ^ (*(_QWORD *)(v27 + 16) ^ (v30 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v7 = v54;
          }
          v13 = (__int128 *)*((_QWORD *)&v45 + 1);
          v15 = *((_QWORD *)&v46 + 1);
          v16 = v47 + 1;
          *(_QWORD *)&v47 = v16;
          result = 2LL * *((_QWORD *)&v46 + 1);
          if ( v16 != ((unsigned __int64)(*(_DWORD *)(*((_QWORD *)&v45 + 1) + 16LL * *((_QWORD *)&v46 + 1)) & 0xFFF)
                     + *(_QWORD *)(*((_QWORD *)&v45 + 1) + 16LL * *((_QWORD *)&v46 + 1) + 8)
                     + 4095LL) >> 12 )
            goto LABEL_36;
          v15 = *((_QWORD *)&v46 + 1) + 1LL;
          v16 = 0LL;
          *((_QWORD *)&v46 + 1) = v15;
          *(_QWORD *)&v47 = 0LL;
          v31 = v15 == (_QWORD)v46;
          if ( v15 < (unsigned __int64)v46 )
            break;
LABEL_37:
          if ( !v31 )
          {
            ++v18;
            v17 = v19;
            if ( v18 < v14 )
              continue;
          }
          goto LABEL_39;
        }
        result = 2 * v15;
        if ( !*(_QWORD *)(*((_QWORD *)&v45 + 1) + 16 * v15 + 8) )
          goto LABEL_39;
LABEL_36:
        v31 = v15 == (_QWORD)v46;
        goto LABEL_37;
      }
LABEL_40:
      if ( v7 )
      {
        result = *v1;
        *v1 = result ^ (result ^ ((_DWORD)v18 << 10)) & 0x3FC00;
      }
    }
  }
  return result;
}
