/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x14002A6B0
 * Callers:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14002A15C (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // r11d
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // edx
  __int64 v24; // r10
  DC *v25; // rdx
  char *SystemArgument1; // rdi
  int v27; // r14d
  char *v28; // r15
  int v29; // eax
  char *v30; // rcx
  int v31; // edi
  __m128i v32; // xmm1
  int v33; // edx
  _DWORD *v34; // r8
  __int64 v35; // r10
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r11d
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned int sizeScan; // eax
  __int64 v43; // r9
  unsigned int v44; // r8d
  __int64 v45; // r11
  unsigned int v46; // ecx
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r11
  unsigned int v50; // ebx
  __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // r10
  unsigned int v54; // r8d
  __int64 v55; // r11
  DC *v56; // rdx

  v5 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this) + 88) + 5672LL);
  v6 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
  if ( v6 >= 0x10000 )
  {
    v7 = (unsigned __int16)*(_DWORD *)this;
    if ( *(_DWORD *)v5 <= 0x10000u )
    {
      v6 = (unsigned __int16)*(_DWORD *)this;
    }
    else
    {
      v8 = *(_QWORD *)(v5 + 16);
      v9 = *(_DWORD *)(v8 + 2056);
      if ( (unsigned __int16)*(_DWORD *)this >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      {
        v11 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*(_DWORD *)this >= v9 )
        {
          v10 = *(_QWORD *)(v8 + 8LL * ((((unsigned __int16)*(_DWORD *)this - v9) >> 16) + 1) + 8);
          v7 = -65536 * (((unsigned __int16)v6 - v9) >> 16) - v9 + (unsigned __int16)v6;
        }
        else
        {
          v10 = *(_QWORD *)(v8 + 8);
        }
        v11 = 0LL;
        if ( (unsigned int)v7 < *(_DWORD *)(v10 + 20) )
          v11 = *(_QWORD *)v10 + 24 * v7;
      }
      v4 = *(unsigned __int8 *)(v11 + 13);
      if ( (_DWORD)v4 == HIWORD(v6) )
        v6 = (unsigned __int16)*(_DWORD *)this;
    }
  }
  v12 = *(_QWORD *)(v5 + 16);
  v13 = *(_DWORD *)(v12 + 2056);
  if ( v6 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    v16 = 0LL;
  }
  else
  {
    if ( v6 >= v13 )
    {
      v4 = ((v6 - v13) >> 16) + 1;
      v14 = *(_QWORD *)(v12 + 8 * v4 + 8);
      v15 = v6 + -65536 * ((v6 - v13) >> 16) - v13;
    }
    else
    {
      v14 = *(_QWORD *)(v12 + 8);
      v15 = v6;
    }
    v16 = 0LL;
    if ( v15 < *(_DWORD *)(v14 + 20) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                     + 16LL * (unsigned __int8)v15
                     + 8);
      if ( v4 )
      {
        v4 = 3LL * v15;
        v16 = *(_QWORD *)v14 + 24LL * v15;
      }
    }
  }
  if ( v6 >= 0x10000 )
  {
    v17 = (unsigned __int16)v6;
    if ( *(_DWORD *)v5 <= 0x10000u )
    {
      v6 = (unsigned __int16)v6;
    }
    else
    {
      v18 = *(_QWORD *)(v5 + 16);
      v19 = *(_DWORD *)(v18 + 2056);
      if ( (unsigned __int16)v6 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
      {
        v21 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v19 )
        {
          v20 = *(_QWORD *)(v18 + 8LL * ((((unsigned __int16)v6 - v19) >> 16) + 1) + 8);
          v17 = -65536 * (((unsigned __int16)v6 - v19) >> 16) - v19 + (unsigned __int16)v6;
        }
        else
        {
          v20 = *(_QWORD *)(v18 + 8);
        }
        v21 = 0LL;
        if ( (unsigned int)v17 < *(_DWORD *)(v20 + 20) )
          v21 = *(_QWORD *)v20 + 24 * v17;
      }
      v4 = *(unsigned __int8 *)(v21 + 13);
      if ( (_DWORD)v4 == HIWORD(v6) )
        v6 = (unsigned __int16)v6;
    }
  }
  v22 = *(_QWORD *)(v5 + 16);
  v23 = *(_DWORD *)(v22 + 2056);
  if ( v6 >= v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16)
    || (v6 >= v23
      ? (v4 = ((v6 - v23) >> 16) + 1, v24 = *(_QWORD *)(v22 + 8 * v4 + 8), v6 += -65536 * ((v6 - v23) >> 16) - v23)
      : (v24 = *(_QWORD *)(v22 + 8)),
        v6 >= *(_DWORD *)(v24 + 20)) )
  {
    v25 = 0LL;
  }
  else
  {
    v4 = 2LL * (unsigned __int8)v6;
    v25 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                 + 16LL * (unsigned __int8)v6
                 + 8);
  }
  if ( v25 != this )
    v16 = 0LL;
  if ( (*(_BYTE *)(v16 + 15) & 4) != 0 )
  {
    if ( !a2 )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_140259EE0;
      goto LABEL_38;
    }
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      v27 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)SystemArgument1 + 72LL))((char *)a2 + 24);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
      SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    }
    else if ( *((_DWORD *)a2 + 12) == 1 )
    {
      v27 = 1;
    }
    else
    {
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        sizeScan = Win32kRS::RegionCore_get_sizeScan((struct REGION *)((char *)a2 + 24), v25);
        SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
      }
      else
      {
        sizeScan = *((_DWORD *)a2 + 10);
      }
      v27 = (sizeScan > 0x38) + 2;
    }
    v28 = (char *)this + 976;
    *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = v27;
    if ( SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      v29 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)SystemArgument1 + 72LL))((char *)a2 + 24);
      v30 = SystemArgument1 + 8;
      v31 = v29;
      ExReleasePushLockSharedEx(v30, 2LL);
      KeLeaveCriticalRegion();
      if ( v31 != 1 )
      {
LABEL_37:
        v32 = *(__m128i *)((char *)a2 + 52);
        v4 = *((unsigned int *)this + 258);
        v33 = *((_DWORD *)this + 259);
        v34 = *(_DWORD **)v28;
        v34[30] = v32.m128i_i32[0] - v4;
        v34[31] = _mm_cvtsi128_si32(_mm_srli_si128(v32, 4)) - v33;
        v34[32] = _mm_srli_si128(v32, 8).m128i_u32[0] - v4;
        v34[33] = _mm_cvtsi128_si32(_mm_srli_si128(v32, 12)) - v33;
LABEL_38:
        v35 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4) + 88) + 5672LL);
        v36 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
        if ( v36 >= 0x10000 )
        {
          v37 = (unsigned __int16)*(_DWORD *)this;
          if ( *(_DWORD *)v35 <= 0x10000u )
          {
            v36 = (unsigned __int16)*(_DWORD *)this;
          }
          else
          {
            v38 = *(_QWORD *)(v35 + 16);
            v39 = *(_DWORD *)(v38 + 2056);
            if ( (unsigned __int16)*(_DWORD *)this >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
            {
              v41 = 0LL;
            }
            else
            {
              if ( (unsigned __int16)*(_DWORD *)this >= v39 )
              {
                v40 = *(_QWORD *)(v38 + 8LL * ((((unsigned __int16)*(_DWORD *)this - v39) >> 16) + 1) + 8);
                v37 = -65536 * (((unsigned __int16)v36 - v39) >> 16) - v39 + (unsigned __int16)v36;
              }
              else
              {
                v40 = *(_QWORD *)(v38 + 8);
              }
              v41 = 0LL;
              if ( (unsigned int)v37 < *(_DWORD *)(v40 + 20) )
                v41 = *(_QWORD *)v40 + 24 * v37;
            }
            if ( *(unsigned __int8 *)(v41 + 13) == HIWORD(v36) )
              v36 = (unsigned __int16)*(_DWORD *)this;
          }
        }
        v43 = *(_QWORD *)(v35 + 16);
        v44 = *(_DWORD *)(v43 + 2056);
        if ( v36 >= v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
        {
          v47 = 0LL;
        }
        else
        {
          if ( v36 >= v44 )
          {
            v45 = *(_QWORD *)(v43 + 8LL * (((v36 - v44) >> 16) + 1) + 8);
            v46 = v36 + -65536 * ((v36 - v44) >> 16) - v44;
          }
          else
          {
            v45 = *(_QWORD *)(v43 + 8);
            v46 = v36;
          }
          v47 = 0LL;
          if ( v46 < *(_DWORD *)(v45 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v46 >> 8))
                         + 16LL * (unsigned __int8)v46
                         + 8) )
          {
            v47 = *(_QWORD *)v45 + 24LL * v46;
          }
        }
        if ( v36 >= 0x10000 )
        {
          v48 = (unsigned __int16)v36;
          if ( *(_DWORD *)v35 <= 0x10000u )
          {
            v36 = (unsigned __int16)v36;
          }
          else
          {
            v49 = *(_QWORD *)(v35 + 16);
            v50 = *(_DWORD *)(v49 + 2056);
            if ( (unsigned __int16)v36 >= v50 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
            {
              v52 = 0LL;
            }
            else
            {
              if ( (unsigned __int16)v36 >= v50 )
              {
                v51 = *(_QWORD *)(v49 + 8LL * ((((unsigned __int16)v36 - v50) >> 16) + 1) + 8);
                v48 = -65536 * (((unsigned __int16)v36 - v50) >> 16) - v50 + (unsigned __int16)v36;
              }
              else
              {
                v51 = *(_QWORD *)(v49 + 8);
              }
              v52 = 0LL;
              if ( (unsigned int)v48 < *(_DWORD *)(v51 + 20) )
                v52 = *(_QWORD *)v51 + 24 * v48;
            }
            if ( *(unsigned __int8 *)(v52 + 13) == HIWORD(v36) )
              v36 = (unsigned __int16)v36;
          }
        }
        v53 = *(_QWORD *)(v35 + 16);
        v54 = *(_DWORD *)(v53 + 2056);
        if ( v36 >= v54 + ((*(unsigned __int16 *)(v53 + 2) + 0xFFFF) << 16)
          || (v36 >= v54
            ? (v55 = *(_QWORD *)(v53 + 8LL * (((v36 - v54) >> 16) + 1) + 8), v36 += -65536 * ((v36 - v54) >> 16) - v54)
            : (v55 = *(_QWORD *)(v53 + 8)),
              v36 >= *(_DWORD *)(v55 + 20)) )
        {
          v56 = 0LL;
        }
        else
        {
          v56 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                       + 16LL * (unsigned __int8)v36
                       + 8);
        }
        if ( v56 != this )
          v47 = 0LL;
        *(_BYTE *)(v47 + 15) &= ~4u;
        return;
      }
    }
    else if ( *((_DWORD *)a2 + 12) != 1 )
    {
      v28 = (char *)this + 976;
      goto LABEL_37;
    }
    *(_OWORD *)(*(_QWORD *)v28 + 120LL) = xmmword_140259EE0;
    goto LABEL_38;
  }
}
