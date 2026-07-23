/*
 * XREFs of PPmHeteroHgsUpdateOrderValue @ 0x14047BAB4
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 */

char __fastcall PPmHeteroHgsUpdateOrderValue(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3, char a4)
{
  __int64 v4; // r14
  char v5; // r15
  int IsEmptyAffinity; // eax
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  __int64 Prcb; // rax
  unsigned __int64 v23; // r12
  int v24; // ebp
  __int64 v25; // rsi
  unsigned int v26; // r13d
  unsigned int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int8 v30; // al
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  unsigned int v33; // ecx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // [rsp+21h] [rbp-47h]
  int v40; // [rsp+24h] [rbp-44h]
  unsigned int v41; // [rsp+28h] [rbp-40h]
  int v42; // [rsp+2Ch] [rbp-3Ch]

  v4 = a3;
  v5 = 0;
  if ( (unsigned int)KeIsEmptyAffinityEx(a1) )
  {
    v15 = PpmCheckRegistered.Bitmap[0];
    LOWORD(v16) = 0;
    while ( 1 )
    {
      while ( v15 )
      {
        _BitScanForward64(&v37, v15);
        v15 &= ~(1LL << v37);
        v38 = *(_QWORD *)(KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v16 + (unsigned __int8)v37))
                        + 35408);
        if ( a4 )
        {
          if ( *(_BYTE *)(v38 + 4 * v4 + 4) )
          {
            v5 = 1;
            *(_BYTE *)(v38 + 4 * v4 + 4) = 0;
          }
        }
        else if ( *(_BYTE *)(v38 + 4 * v4 + 5) )
        {
          v5 = 1;
          *(_BYTE *)(v38 + 4 * v4 + 5) = 0;
        }
      }
      v16 = (unsigned __int16)(v16 + 1);
      if ( (unsigned int)v16 >= PpmCheckRegistered.Count )
        break;
      v15 = PpmCheckRegistered.Bitmap[v16];
    }
  }
  else
  {
    IsEmptyAffinity = KeIsEmptyAffinityEx(a2);
    v10 = *((_QWORD *)a2 + 1);
    LOWORD(v11) = 0;
    v42 = IsEmptyAffinity;
LABEL_3:
    if ( a2 )
      v12 = *a2;
    else
      v12 = (unsigned __int16)v11 + 1;
    while ( 1 )
    {
      if ( v10 )
      {
        _BitScanForward64(&v13, v10);
        v10 &= ~(1LL << v13);
        v14 = *(_QWORD *)(KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v11 + (unsigned __int8)v13))
                        + 35408);
        if ( a4 )
        {
          if ( *(_BYTE *)(v14 + 4LL * a3 + 4) )
          {
            v5 = 1;
            *(_BYTE *)(v14 + 4LL * a3 + 4) = 0;
          }
        }
        else if ( *(_BYTE *)(v14 + 4LL * a3 + 5) )
        {
          v5 = 1;
          *(_BYTE *)(v14 + 4LL * a3 + 5) = 0;
        }
        goto LABEL_3;
      }
      v11 = (unsigned __int16)(v11 + 1);
      if ( (unsigned int)v11 >= v12 )
        break;
      v10 = *(_QWORD *)&a2[4 * v11 + 4];
    }
    v41 = -1;
    v40 = KeCountSetBitsAffinityEx(a1);
    if ( v40 )
    {
      v39 = v42 == 0;
      do
      {
        v17 = *((_QWORD *)a1 + 1);
        LOWORD(v18) = 0;
        while ( 1 )
        {
          v19 = a1 ? *a1 : (unsigned __int16)v18 + 1;
LABEL_23:
          if ( !v17 )
            break;
          _BitScanForward64(&v20, v17);
          v17 &= ~(1LL << v20);
          Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v18 + (unsigned __int8)v20));
          if ( *(_BYTE *)(Prcb + 35404) )
          {
            v5 = 1;
            *(_BYTE *)(Prcb + 35404) = 0;
          }
        }
        v18 = (unsigned __int16)(v18 + 1);
        if ( (unsigned int)v18 < v19 )
        {
          v17 = *(_QWORD *)&a1[4 * v18 + 4];
          goto LABEL_23;
        }
        v23 = *((_QWORD *)a1 + 1);
        v24 = -1;
        LOWORD(v25) = 0;
        while ( 1 )
        {
          v26 = v24;
          v27 = a1 ? *a1 : (unsigned __int16)v25 + 1;
LABEL_34:
          if ( !v23 )
            break;
          _BitScanForward64(&v28, v23);
          v23 &= ~(1LL << v28);
          v29 = *(_QWORD *)(KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v25 + (unsigned __int8)v28))
                          + 35408);
          if ( a4 )
            v30 = *(_BYTE *)(v29 + 4LL * a3 + 6);
          else
            v30 = *(_BYTE *)(v29 + 4LL * a3 + 7);
          if ( v41 == -1 || v30 > v41 )
          {
            v24 = v30;
            if ( v26 < v30 )
              v24 = v26;
          }
        }
        v25 = (unsigned __int16)(v25 + 1);
        if ( (unsigned int)v25 < v27 )
        {
          v23 = *(_QWORD *)&a1[4 * v25 + 4];
          goto LABEL_34;
        }
        v31 = *((_QWORD *)a1 + 1);
        LOWORD(v32) = 0;
        while ( 1 )
        {
          v33 = a1 ? *a1 : (unsigned __int16)v32 + 1;
LABEL_50:
          if ( !v31 )
            break;
          _BitScanForward64(&v34, v31);
          v31 &= ~(1LL << v34);
          v35 = *(_QWORD *)(KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v32 + (unsigned __int8)v34))
                          + 35408);
          if ( a4 )
            v36 = *(_BYTE *)(v35 + 4LL * a3 + 6);
          else
            v36 = *(_BYTE *)(v35 + 4LL * a3 + 7);
          if ( v36 == v24 )
          {
            if ( a4 )
            {
              if ( *(_BYTE *)(v35 + 4LL * a3 + 4) != v39 )
              {
                *(_BYTE *)(v35 + 4LL * a3 + 4) = v39;
LABEL_57:
                v5 = 1;
              }
            }
            else if ( *(_BYTE *)(v35 + 4LL * a3 + 5) != v39 )
            {
              *(_BYTE *)(v35 + 4LL * a3 + 5) = v39;
              goto LABEL_57;
            }
            --v40;
            continue;
          }
        }
        v32 = (unsigned __int16)(v32 + 1);
        if ( (unsigned int)v32 < v33 )
        {
          v31 = *(_QWORD *)&a1[4 * v32 + 4];
          goto LABEL_50;
        }
        v41 = v24;
        ++v39;
      }
      while ( v40 );
    }
  }
  return v5;
}
