/*
 * XREFs of LdrpResGetResourceDirectory @ 0x1800789A0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180079BD0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  char v9; // di
  _DWORD *SharedData; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  char v13; // di
  int v14; // esi
  __int64 result; // rax
  __int64 v16; // r9
  __int128 *v17; // rcx
  __int16 v18; // ax
  unsigned int v19; // eax
  char v20; // cl
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int *v23; // rdx
  int i; // r8d
  __int64 v25; // r10
  unsigned __int64 v26; // r8
  int v27; // eax
  int v28; // ecx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // [rsp+20h] [rbp-168h]
  __int64 v33; // [rsp+38h] [rbp-150h] BYREF
  unsigned int *v34; // [rsp+40h] [rbp-148h]
  unsigned __int64 v35; // [rsp+48h] [rbp-140h]
  _QWORD v36[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-128h] BYREF
  __int128 v38; // [rsp+70h] [rbp-118h]
  __int128 v39; // [rsp+80h] [rbp-108h]
  __int128 v40; // [rsp+90h] [rbp-F8h]
  __int128 v41; // [rsp+A0h] [rbp-E8h]
  __int128 v42; // [rsp+B0h] [rbp-D8h]
  __int128 v43; // [rsp+C0h] [rbp-C8h]
  __int128 v44; // [rsp+D0h] [rbp-B8h]
  __int128 v45; // [rsp+E0h] [rbp-A8h]
  __int128 v46; // [rsp+F0h] [rbp-98h]
  __int128 v47; // [rsp+100h] [rbp-88h]
  __int128 v48; // [rsp+110h] [rbp-78h]
  __int128 v49; // [rsp+120h] [rbp-68h]
  __int128 v50; // [rsp+130h] [rbp-58h]
  __int128 v51; // [rsp+140h] [rbp-48h]
  __int128 v52; // [rsp+150h] [rbp-38h]

  v35 = 0LL;
  v33 = 0LL;
  v9 = 1;
  v36[0] = 4456514LL;
  v36[1] = L"LdrpResGetResourceDirectory Enter";
  v37[0] = 4325440LL;
  v37[1] = L"LdrpResGetResourceDirectory Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    v11 = 2147353477LL;
  }
  else
  {
    v11 = 2147353477LL;
    v12 = 2147353477LL;
  }
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v30 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v30 = 2147353476LL;
    LdrpTraceLoadMUIDll(v36, *(unsigned __int8 *)v30);
  }
  if ( !a1 || !a4 || !a5 )
    return 3221225485LL;
  if ( (a1 & 3) != 0 )
  {
    v13 = a1 & 1;
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
    v9 = v13 ^ 1;
  }
  v14 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v14 == 0, a1, a2, &v33);
  if ( (int)result >= 0 )
  {
    v16 = v33;
    v17 = (__int128 *)(v33 + 24);
    v18 = *(_WORD *)(v33 + 24);
    if ( v18 == 267 )
    {
      v38 = *v17;
      v39 = *(_OWORD *)(v33 + 40);
      v40 = *(_OWORD *)(v33 + 56);
      v41 = *(_OWORD *)(v33 + 72);
      v42 = *(_OWORD *)(v33 + 88);
      v43 = *(_OWORD *)(v33 + 104);
      v44 = *(_OWORD *)(v33 + 120);
      v45 = *(_OWORD *)(v33 + 136);
      v46 = *(_OWORD *)(v33 + 152);
      v47 = *(_OWORD *)(v33 + 168);
      v48 = *(_OWORD *)(v33 + 184);
      v49 = *(_OWORD *)(v33 + 200);
      v50 = *(_OWORD *)(v33 + 216);
      v51 = *(_OWORD *)(v33 + 232);
      v19 = HIDWORD(v43);
      v20 = 1;
    }
    else
    {
      if ( v18 != 523 )
      {
        v32 = -1073741701;
        goto LABEL_46;
      }
      v38 = *v17;
      v39 = *(_OWORD *)(v33 + 40);
      v40 = *(_OWORD *)(v33 + 56);
      v41 = *(_OWORD *)(v33 + 72);
      v42 = *(_OWORD *)(v33 + 88);
      v43 = *(_OWORD *)(v33 + 104);
      v44 = *(_OWORD *)(v33 + 120);
      v45 = *(_OWORD *)(v33 + 136);
      v46 = *(_OWORD *)(v33 + 152);
      v47 = *(_OWORD *)(v33 + 168);
      v48 = *(_OWORD *)(v33 + 184);
      v49 = *(_OWORD *)(v33 + 200);
      v50 = *(_OWORD *)(v33 + 216);
      v51 = *(_OWORD *)(v33 + 232);
      v52 = *(_OWORD *)(v33 + 248);
      v20 = 0;
      v19 = HIDWORD(v44);
    }
    if ( v19 <= 2 )
    {
      v32 = -1073741687;
      goto LABEL_46;
    }
    v21 = v46;
    if ( v20 )
      v21 = v45;
    if ( !v21 )
    {
      v32 = -1073741687;
      goto LABEL_46;
    }
    if ( !v9 && v21 >= HIDWORD(v41) )
    {
      v34 = 0LL;
      v16 = v33;
      v23 = (unsigned int *)(*(unsigned __int16 *)(v33 + 20) + v33 + 24);
      v34 = v23;
      if ( v23 )
      {
        for ( i = 0;
              i < *(unsigned __int16 *)(v33 + 6)
           && (!v14 || (unsigned __int64)(v23 + 10) <= a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL));
              ++i )
        {
          v25 = v23[3];
          if ( v21 == (_DWORD)v25 || v21 > (unsigned int)v25 && v21 < (unsigned int)v25 + v23[4] )
          {
            if ( v23[4] )
            {
              v22 = a1 + v23[5] - v25 + v21;
              goto LABEL_21;
            }
            v32 = -1073741687;
            goto LABEL_46;
          }
          v23 += 10;
          v34 = v23;
        }
      }
      v32 = -1073741701;
      goto LABEL_46;
    }
    v22 = a1 + v21;
    if ( v22 < a1 )
    {
      v32 = -1073741701;
      goto LABEL_46;
    }
LABEL_21:
    v35 = v22;
    if ( v22 )
    {
      if ( !v14 )
      {
LABEL_45:
        *a4 = v22;
        *a5 = v16;
        v32 = 0;
        goto LABEL_46;
      }
      if ( v22 > a1 )
      {
        v26 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + a2;
        if ( v22 + 16 <= v26 )
        {
          v27 = *(unsigned __int16 *)(v22 + 12);
          v28 = *(unsigned __int16 *)(v22 + 14);
          if ( !__PAIR32__(v28, v27) )
          {
            v32 = -1073741686;
            goto LABEL_46;
          }
          if ( v22 + 8LL * (unsigned int)(v27 + v28) <= v26 )
            goto LABEL_45;
        }
      }
      v32 = -1073741701;
    }
    else
    {
      v32 = -1073741687;
    }
LABEL_46:
    v29 = NtCurrentPeb()->SharedData;
    if ( v29 && *v29 )
      v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v11 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v31 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v31 = 2147353476LL;
      LdrpTraceLoadMUIDll(v37, *(unsigned __int8 *)v31);
    }
    return v32;
  }
  return result;
}
