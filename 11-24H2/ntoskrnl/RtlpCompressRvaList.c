/*
 * XREFs of RtlpCompressRvaList @ 0x1408F3900
 * Callers:
 *     RtlCreateRvaList @ 0x1408F3740 (RtlCreateRvaList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MiQueryFlagsForRvaEntry @ 0x1408F3F70 (MiQueryFlagsForRvaEntry.c)
 *     MiImageGetRawRvaState @ 0x1408F4010 (MiImageGetRawRvaState.c)
 *     RtlpSetRvaListRvaStateBits @ 0x1408F4080 (RtlpSetRvaListRvaStateBits.c)
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
  __int64 v16; // r9
  unsigned int v17; // ebp
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // ebx
  _DWORD *v21; // r10
  unsigned int *v22; // r14
  unsigned int v23; // esi
  _DWORD *v24; // rbx
  __int64 (__fastcall *v25)(); // rax
  unsigned int v26; // r15d
  int v27; // r13d
  __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned __int32 *v30; // rsi
  unsigned __int32 RawRvaState; // eax
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // r8d
  unsigned int v36; // eax
  __int64 result; // rax
  int v38; // [rsp+50h] [rbp-78h]
  unsigned int v39; // [rsp+54h] [rbp-74h] BYREF
  unsigned __int32 v40; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v41; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v42; // [rsp+60h] [rbp-68h]
  unsigned int v43; // [rsp+64h] [rbp-64h]
  unsigned int v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  unsigned __int32 *v46; // [rsp+78h] [rbp-50h]
  unsigned __int32 v49; // [rsp+E0h] [rbp+18h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+E8h] [rbp+20h]

  v50 = a4;
  v7 = a5;
  v8 = &v40;
  v9 = 0;
  v10 = a2;
  v11 = a1;
  v40 = 0;
  v12 = 0;
  v13 = a5;
  if ( !a5 )
    v8 = 0LL;
  v14 = 0;
  v46 = v8;
  v15 = guard_dispatch_icall_no_overrides(a2, v8, a3, a4);
  v42 = v15;
  v17 = v15;
  if ( !v15 )
  {
    v9 = -1073741811;
    goto LABEL_59;
  }
  if ( v7 )
  {
    v18 = v40;
    v13 = v7 + 1;
    *v7 = v15;
    RtlpSetRvaListRvaStateBits(v11, 0LL, v18);
  }
  v14 = 4;
  v38 = 1;
  v19 = v17;
LABEL_7:
  v41 = v14;
LABEL_8:
  while ( v17 != v19 )
  {
LABEL_44:
    v34 = 0;
    v16 = v19 - v17;
    while ( v34 < 4 )
    {
      v35 = *((_DWORD *)RtlpRvaCompressionTableScales + v34);
      if ( (unsigned int)v16 >= v35 )
      {
        v36 = (unsigned int)v16 / v35;
        v16 = (unsigned int)v16 / v35;
        if ( v36 >= 0x3F )
          v16 = 63LL;
        if ( v13 )
        {
          *(_BYTE *)v13 = v16 | ((_BYTE)v34 << 6);
          v13 = (unsigned int *)((char *)v13 + 1);
        }
        v41 = ++v14;
        v17 += v16 * v35;
        v42 = v17;
        if ( v17 != v19 )
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
  v20 = v19;
  v44 = v19;
  if ( v50 == MiImageRvaRawEnumNext )
  {
    v21 = a2;
    if ( !a2[78] )
      goto LABEL_58;
    v22 = a2 + 38;
    v19 = 0;
    v23 = 0;
    if ( a2[36] )
    {
      v24 = a2 + 46;
      while ( 1 )
      {
        v25 = (__int64 (__fastcall *)())*((_QWORD *)v24 - 2);
        if ( v25 )
          break;
LABEL_28:
        ++v23;
        v22 += 10;
        v24 += 10;
        if ( v23 >= v21[36] )
        {
          v17 = v42;
          v9 = 0;
          v20 = v44;
          v14 = v41;
          goto LABEL_30;
        }
      }
      v26 = *v22;
      if ( *v22 != v21[78] )
      {
LABEL_25:
        if ( v26 )
        {
          if ( v19 )
          {
            if ( v19 >= v26 )
              v19 = v26;
          }
          else
          {
            v19 = v26;
          }
        }
        goto LABEL_28;
      }
      if ( v25 == MiImageCfgRvaIteratorNext )
      {
        v27 = *v24;
        v26 = 0;
        LOBYTE(v49) = 0;
        v16 = 0LL;
        v39 = 0;
        if ( !v27 )
        {
LABEL_24:
          *v22 = v26;
          goto LABEL_25;
        }
        v28 = *((_QWORD *)v24 - 1);
        v29 = v21[21];
        v45 = v28;
        v43 = v29;
        while ( 1 )
        {
          if ( !v27 )
            goto LABEL_22;
          if ( (int)MiQueryFlagsForRvaEntry(
                      v28,
                      v29,
                      (unsigned int)&v39,
                      v16,
                      v21[8],
                      v21[9],
                      0,
                      (__int64)(v24 - 7),
                      (__int64)&v49) < 0 )
            break;
          --v27;
          v29 = v43;
          v28 = v43 + v45;
          v45 = v28;
          if ( !(_BYTE)v49 )
          {
            v26 = v39;
LABEL_22:
            *v24 = v27;
            *((_QWORD *)v24 - 1) = v28;
            goto LABEL_23;
          }
          v16 = v39;
          v21 = a2;
        }
        dword_140E2D728 = 14;
      }
      else
      {
        v26 = guard_dispatch_icall_no_overrides(v21, v24 - 2, v24 - 7, v16);
      }
LABEL_23:
      v21 = a2;
      goto LABEL_24;
    }
LABEL_30:
    v30 = v46;
    if ( v46 && v19 )
    {
      RawRvaState = MiImageGetRawRvaState(v21, v19);
      v21 = a2;
      *v30 = RawRvaState;
    }
    v10 = a2;
    v11 = a1;
    v21[78] = v19;
  }
  else
  {
    v19 = guard_dispatch_icall_no_overrides(v10, v46, MiImageRvaRawEnumNext, v16);
  }
  if ( !v19 )
    goto LABEL_58;
  if ( v19 > v20 )
  {
    if ( v13 )
    {
      v49 = v40;
      if ( v40 )
      {
        v32 = *(_DWORD *)(v11 + 8);
        if ( v32 > 1 )
        {
          v33 = 0;
          do
          {
            if ( _bittest((const signed __int32 *)&v49, v33) )
              _bittestandset64(*(signed __int64 **)(v11 + 40), v38 * v32 + (unsigned __int64)v33);
            ++v33;
          }
          while ( v33 < *(_DWORD *)(v11 + 8) );
        }
      }
    }
    ++v38;
    goto LABEL_44;
  }
  v9 = -1073741701;
LABEL_58:
  v12 = v38;
  v7 = a5;
LABEL_59:
  if ( !v7 )
    *a6 = v14;
  result = v9;
  if ( a7 )
    *a7 = v12;
  return result;
}
