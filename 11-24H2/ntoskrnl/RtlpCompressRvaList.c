/*
 * XREFs of RtlpCompressRvaList @ 0x14093EA90
 * Callers:
 *     RtlCreateRvaList @ 0x14093E8D0 (RtlCreateRvaList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MiQueryFlagsForRvaEntry @ 0x14093F100 (MiQueryFlagsForRvaEntry.c)
 *     MiImageGetRawRvaState @ 0x14093F1A0 (MiImageGetRawRvaState.c)
 *     RtlpSetRvaListRvaStateBits @ 0x14093F210 (RtlpSetRvaListRvaStateBits.c)
 */

__int64 __fastcall RtlpCompressRvaList(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(),
        unsigned int *a5,
        _QWORD *a6,
        int *a7)
{
  unsigned int *v7; // rdi
  unsigned __int32 *v8; // rax
  unsigned int v9; // r15d
  _DWORD *v10; // rsi
  __int64 v11; // r14
  int v12; // ebx
  unsigned int *v13; // r12
  unsigned int v14; // r13d
  unsigned int v15; // eax
  unsigned int v16; // ebp
  __int64 v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // ebx
  _DWORD *v20; // r10
  unsigned int *v21; // r14
  unsigned int v22; // esi
  _DWORD *v23; // rbx
  __int64 (__fastcall *v24)(); // rax
  unsigned int v25; // r15d
  int v26; // r13d
  unsigned int v27; // r9d
  __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned __int32 *v30; // rsi
  unsigned __int32 RawRvaState; // eax
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // r9d
  unsigned int v36; // r8d
  unsigned int v37; // r9d
  __int64 result; // rax
  int v39; // [rsp+50h] [rbp-78h]
  unsigned int v40; // [rsp+54h] [rbp-74h] BYREF
  unsigned __int32 v41; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v42; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v43; // [rsp+60h] [rbp-68h]
  unsigned int v44; // [rsp+64h] [rbp-64h]
  unsigned int v45; // [rsp+68h] [rbp-60h]
  __int64 v46; // [rsp+70h] [rbp-58h]
  unsigned __int32 *v47; // [rsp+78h] [rbp-50h]
  unsigned __int32 v50; // [rsp+E0h] [rbp+18h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+E8h] [rbp+20h]

  v51 = a4;
  v7 = a5;
  v8 = &v41;
  v9 = 0;
  v10 = a2;
  v11 = a1;
  v41 = 0;
  v12 = 0;
  v13 = a5;
  if ( !a5 )
    v8 = 0LL;
  v14 = 0;
  v47 = v8;
  v15 = guard_dispatch_icall_no_overrides(a2, v8);
  v43 = v15;
  v16 = v15;
  if ( !v15 )
  {
    v9 = -1073741811;
    goto LABEL_59;
  }
  if ( v7 )
  {
    v17 = v41;
    v13 = v7 + 1;
    *v7 = v15;
    RtlpSetRvaListRvaStateBits(v11, 0LL, v17);
  }
  v14 = 4;
  v39 = 1;
  v18 = v16;
LABEL_7:
  v42 = v14;
LABEL_8:
  while ( v16 != v18 )
  {
LABEL_44:
    v34 = 0;
    v35 = v18 - v16;
    while ( v34 < 4 )
    {
      v36 = *((_DWORD *)RtlpRvaCompressionTableScales + v34);
      if ( v35 >= v36 )
      {
        v37 = v35 / v36;
        if ( v37 >= 0x3F )
          v37 = 63;
        if ( v13 )
        {
          *(_BYTE *)v13 = v37 | ((_BYTE)v34 << 6);
          v13 = (unsigned int *)((char *)v13 + 1);
        }
        v42 = ++v14;
        v16 += v37 * v36;
        v43 = v16;
        if ( v16 != v18 )
          goto LABEL_44;
        if ( v34 == 3 )
          goto LABEL_8;
        if ( v13 )
        {
          *(_BYTE *)v13 = -64;
          v13 = (unsigned int *)((char *)v13 + 1);
        }
        ++v14;
        goto LABEL_7;
      }
      ++v34;
    }
  }
  v19 = v18;
  v45 = v18;
  if ( v51 == MiImageRvaRawEnumNext )
  {
    v20 = a2;
    if ( !a2[78] )
      goto LABEL_58;
    v21 = a2 + 38;
    v18 = 0;
    v22 = 0;
    if ( a2[36] )
    {
      v23 = a2 + 46;
      while ( 1 )
      {
        v24 = (__int64 (__fastcall *)())*((_QWORD *)v23 - 2);
        if ( v24 )
          break;
LABEL_28:
        ++v22;
        v21 += 10;
        v23 += 10;
        if ( v22 >= v20[36] )
        {
          v16 = v43;
          v9 = 0;
          v19 = v45;
          v14 = v42;
          goto LABEL_30;
        }
      }
      v25 = *v21;
      if ( *v21 != v20[78] )
      {
LABEL_25:
        if ( v25 )
        {
          if ( v18 )
          {
            if ( v18 >= v25 )
              v18 = v25;
          }
          else
          {
            v18 = v25;
          }
        }
        goto LABEL_28;
      }
      if ( v24 == MiImageCfgRvaIteratorNext )
      {
        v26 = *v23;
        v25 = 0;
        LOBYTE(v50) = 0;
        v27 = 0;
        v40 = 0;
        if ( !v26 )
        {
LABEL_24:
          *v21 = v25;
          goto LABEL_25;
        }
        v28 = *((_QWORD *)v23 - 1);
        v29 = v20[21];
        v46 = v28;
        v44 = v29;
        while ( 1 )
        {
          if ( !v26 )
            goto LABEL_22;
          if ( (int)MiQueryFlagsForRvaEntry(
                      v28,
                      v29,
                      (unsigned int)&v40,
                      v27,
                      v20[8],
                      v20[9],
                      0,
                      (__int64)(v23 - 7),
                      (__int64)&v50) < 0 )
            break;
          --v26;
          v29 = v44;
          v28 = v44 + v46;
          v46 = v28;
          if ( !(_BYTE)v50 )
          {
            v25 = v40;
LABEL_22:
            *v23 = v26;
            *((_QWORD *)v23 - 1) = v28;
            goto LABEL_23;
          }
          v27 = v40;
          v20 = a2;
        }
        dword_140E2D868 = 14;
      }
      else
      {
        v25 = guard_dispatch_icall_no_overrides(v20, v23 - 2);
      }
LABEL_23:
      v20 = a2;
      goto LABEL_24;
    }
LABEL_30:
    v30 = v47;
    if ( v47 && v18 )
    {
      RawRvaState = MiImageGetRawRvaState(v20, v18);
      v20 = a2;
      *v30 = RawRvaState;
    }
    v10 = a2;
    v11 = a1;
    v20[78] = v18;
  }
  else
  {
    v18 = guard_dispatch_icall_no_overrides(v10, v47);
  }
  if ( !v18 )
    goto LABEL_58;
  if ( v18 > v19 )
  {
    if ( v13 )
    {
      v50 = v41;
      if ( v41 )
      {
        v32 = *(_DWORD *)(v11 + 8);
        if ( v32 > 1 )
        {
          v33 = 0;
          do
          {
            if ( _bittest((const signed __int32 *)&v50, v33) )
              _bittestandset64(*(signed __int64 **)(v11 + 40), v39 * v32 + (unsigned __int64)v33);
            ++v33;
          }
          while ( v33 < *(_DWORD *)(v11 + 8) );
        }
      }
    }
    ++v39;
    goto LABEL_44;
  }
  v9 = -1073741701;
LABEL_58:
  v12 = v39;
  v7 = a5;
LABEL_59:
  if ( !v7 )
    *a6 = v14;
  result = v9;
  if ( a7 )
    *a7 = v12;
  return result;
}
