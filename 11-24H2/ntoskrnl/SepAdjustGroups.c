/*
 * XREFs of SepAdjustGroups @ 0x140986D58
 * Callers:
 *     NtAdjustGroupsToken @ 0x140986940 (NtAdjustGroupsToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 */

__int64 __fastcall SepAdjustGroups(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char *DestinationSid,
        _DWORD *a8,
        _DWORD *a9,
        char *a10)
{
  unsigned int v11; // ebp
  unsigned int v12; // r12d
  char v13; // r11
  char v14; // r10
  char v15; // bl
  unsigned int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // r15d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r14
  PSID v22; // rsi
  char v23; // al
  BOOLEAN v24; // al
  __int64 v25; // rax
  int v26; // ecx
  ULONG v27; // esi
  char v29; // cl
  int v30; // eax
  int v31; // ecx
  char v32; // si
  ULONG v33; // ebp
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // eax
  int v37; // [rsp+20h] [rbp-68h]
  int v38; // [rsp+24h] [rbp-64h]
  unsigned int v39; // [rsp+28h] [rbp-60h]
  PSID Sid1[2]; // [rsp+30h] [rbp-58h]
  char v45; // [rsp+D0h] [rbp+48h]

  v11 = 0;
  v12 = a4;
  v13 = a3;
  v37 = 0;
  v14 = a2;
  v39 = 0;
  v15 = 1;
  *a9 = 0;
  v16 = 1;
  v38 = 1;
  v17 = a1;
  v18 = 0;
  v19 = 0;
  while ( v16 < *(_DWORD *)(v17 + 124) )
  {
    v20 = *(_QWORD *)(v17 + 152);
    v21 = 2LL * v16;
    *(_OWORD *)Sid1 = *(_OWORD *)(v20 + 16LL * v16);
    if ( !v13 )
    {
      v22 = *(PSID *)(v20 + 16LL * v16);
      v23 = 0;
      v45 = 0;
      while ( 1 )
      {
        if ( v11 >= v12 || v23 )
        {
          v13 = a3;
          v11 = 0;
          v14 = a2;
          v19 = v37;
          v16 = v38;
          goto LABEL_7;
        }
        v24 = RtlEqualSid(v22, *(PSID *)(a5 + 16LL * v11));
        v17 = a1;
        if ( v24 )
        {
          v25 = *(_QWORD *)(a1 + 152);
          ++v39;
          v45 = 1;
          v26 = *(_DWORD *)(v25 + 8 * v21 + 8);
          if ( ((*(_BYTE *)(a5 + 16LL * v11 + 8) ^ *(_BYTE *)(v25 + 8 * v21 + 8)) & 4) != 0 )
          {
            if ( (v26 & 1) != 0 )
              return 3221225565LL;
            if ( (v26 & 0x10) != 0 )
              return 3221226163LL;
            v27 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
            v37 += v27;
            if ( a2 )
            {
              if ( a6 )
              {
                *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
                *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
                RtlCopySid(v27, DestinationSid, Sid1[0]);
                v17 = a1;
                DestinationSid += v27;
              }
              *(_DWORD *)(*(_QWORD *)(v17 + 152) + 8 * v21 + 8) &= ~(*(_DWORD *)(*(_QWORD *)(v17 + 152) + 8 * v21 + 8) & 4);
              *(_DWORD *)(*(_QWORD *)(v17 + 152) + 8 * v21 + 8) |= *(_DWORD *)(a5 + 16LL * v11 + 8) & 4;
            }
            ++*a9;
            v22 = Sid1[0];
          }
        }
        v23 = v45;
        ++v11;
        v12 = a4;
      }
    }
    v29 = *(_DWORD *)(v20 + 16LL * v16 + 8);
    v30 = *(_DWORD *)(v20 + 16LL * v16 + 8) & 4;
    v31 = v29 & 2;
    if ( v31 && !v30 )
    {
      v32 = 1;
LABEL_31:
      if ( !v32 )
        goto LABEL_7;
      goto LABEL_39;
    }
    v32 = 0;
    if ( v31 || !v30 )
      goto LABEL_31;
LABEL_39:
    v33 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
    v19 += v33;
    v37 = v19;
    if ( v14 )
    {
      if ( a6 )
      {
        *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
        *(_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8) = DestinationSid;
        RtlCopySid(v33, DestinationSid, Sid1[0]);
        v16 = v38;
        v19 = v37;
        v14 = a2;
        v13 = a3;
        DestinationSid += v33;
        v12 = a4;
      }
      v17 = a1;
      v11 = 0;
      v34 = *(_QWORD *)(a1 + 152);
      v35 = *(_DWORD *)(v34 + 8 * v21 + 8);
      if ( v32 )
        v36 = v35 | 4;
      else
        v36 = v35 & 0xFFFFFFFB;
      *(_DWORD *)(v34 + 8 * v21 + 8) = v36;
    }
    else
    {
      v17 = a1;
      v11 = 0;
    }
    ++*a9;
LABEL_7:
    v38 = ++v16;
  }
  if ( !v13 && v39 < v12 )
    v18 = 262;
  if ( !*a9 || !v14 )
    v15 = 0;
  *a10 = v15;
  if ( a6 )
    *a8 = v19 + 16 * *a9 + 8;
  return v18;
}
