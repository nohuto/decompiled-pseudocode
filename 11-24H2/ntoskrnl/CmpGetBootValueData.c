/*
 * XREFs of CmpGetBootValueData @ 0x140C4ECBC
 * Callers:
 *     CmpGetSystemControlValues @ 0x140C4ABDC (CmpGetSystemControlValues.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpGetBootValueData(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  unsigned int v4; // eax
  size_t v6; // r14
  ULONG_PTR v8; // rdx
  char v9; // si
  __int64 CellPaged; // rax
  __int64 v11; // r15
  ULONG_PTR v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  unsigned int v15; // edi
  unsigned __int16 i; // r14
  ULONG_PTR v17; // rdx
  const void *v18; // rax
  size_t v19; // r8
  const void *CellFlat; // rax
  ULONG_PTR v21; // rdx
  unsigned int v23[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+48h] BYREF
  int v26; // [rsp+7Ch] [rbp+4Ch]
  char *v27; // [rsp+80h] [rbp+50h]

  v27 = a3;
  v24 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v6 = a4;
  v24 = 0xFFFFFFFFLL;
  if ( v4 >= 0x80000000 )
  {
    memmove(a3, (const void *)(a2 + 8), a4);
LABEL_45:
    LOBYTE(CellFlat) = 1;
    return (char)CellFlat;
  }
  if ( (unsigned int)dword_14100D6AC < 4 || v4 - 16345 > 0x7FFFC026 )
  {
    v21 = *(unsigned int *)(a2 + 8);
    if ( (byte_14100D65C & 1) != 0 )
      CellFlat = (const void *)HvpGetCellFlat((ULONG_PTR)&CmControlHive, v21, &v24);
    else
      CellFlat = (const void *)HvpGetCellPaged((ULONG_PTR)&CmControlHive, v21, &v24);
    if ( CellFlat )
    {
      memmove(a3, CellFlat, v6);
      if ( (byte_14100D65C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)&v24);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v24);
      goto LABEL_45;
    }
  }
  else
  {
    v8 = *(unsigned int *)(a2 + 8);
    v9 = 1;
    v23[0] = -1;
    v24 = 0xFFFFFFFFLL;
    v25 = -1;
    v23[1] = 0;
    v26 = 0;
    if ( (byte_14100D65C & 1) != 0 )
      CellPaged = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v8, v23);
    else
      CellPaged = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v8, v23);
    v11 = CellPaged;
    if ( CellPaged )
    {
      v12 = *(unsigned int *)(CellPaged + 4);
      if ( (byte_14100D65C & 1) != 0 )
        v13 = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v12, &v25);
      else
        v13 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v12, &v25);
      v14 = v13;
      if ( v13 )
      {
        v15 = *(_DWORD *)(a2 + 4);
        if ( v15 > (unsigned int)v6 )
          v15 = v6;
        for ( i = 0; i < *(_WORD *)(v11 + 2); ++i )
        {
          v17 = *(unsigned int *)(v14 + 4LL * i);
          if ( (byte_14100D65C & 1) != 0 )
            v18 = (const void *)HvpGetCellFlat((ULONG_PTR)&CmControlHive, v17, &v24);
          else
            v18 = (const void *)HvpGetCellPaged((ULONG_PTR)&CmControlHive, v17, &v24);
          if ( !v18 )
          {
            v9 = 0;
            break;
          }
          v19 = v15;
          if ( v15 > 0x3FD8 )
            v19 = 16344LL;
          memmove(&v27[16344 * i], v18, v19);
          if ( (byte_14100D65C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)&v24);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v24);
          if ( v15 <= 0x3FD8 )
            break;
          v15 -= 16344;
        }
        if ( (byte_14100D65C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)&v25);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, &v25);
      }
      else
      {
        v9 = 0;
      }
      if ( (byte_14100D65C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v23);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, v23);
    }
    else
    {
      v9 = 0;
    }
    LOBYTE(CellFlat) = v9;
  }
  return (char)CellFlat;
}
