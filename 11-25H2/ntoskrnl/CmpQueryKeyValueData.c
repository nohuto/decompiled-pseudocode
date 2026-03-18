/*
 * XREFs of CmpQueryKeyValueData @ 0x140879AE0
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A639DC (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A220 (CmpGetValueData.c)
 *     CmpCopyCompressedName @ 0x14087DC70 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQueryKeyValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *Size,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v8; // r10
  unsigned int v9; // r14d
  void *v10; // rbx
  _DWORD *v11; // r15
  unsigned __int16 v12; // dx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // r8d
  unsigned int v17; // r14d
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // r12d
  size_t v23; // r8
  unsigned int v24; // edx
  unsigned int v25; // r13d
  unsigned int v26; // ecx
  unsigned int v27; // r8d
  unsigned int i; // eax
  char ValueData; // al
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  unsigned int v37; // r14d
  void *Src; // [rsp+48h] [rbp-60h] BYREF
  __int64 v39[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v40; // [rsp+60h] [rbp-48h]
  unsigned int v42; // [rsp+C0h] [rbp+18h]
  __int64 v43; // [rsp+C8h] [rbp+20h] BYREF

  v8 = a1;
  v9 = 0;
  v10 = 0LL;
  Src = 0LL;
  LOBYTE(v43) = 0;
  v39[0] = 0xFFFFFFFFLL;
  v40 = *(_QWORD *)(a1 + 32);
  v11 = Size;
  v39[1] = a3;
  v12 = 2 * *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) == 0 )
    v12 = *(_WORD *)(a3 + 2);
  if ( a4 == 2 )
  {
    v13 = *(_DWORD *)(a3 + 4);
    v14 = v13 + 0x80000000;
    if ( v13 < 0x80000000 )
      v14 = *(_DWORD *)(a3 + 4);
    LODWORD(Size) = v14;
    v15 = 0;
    *a7 = v14 + 12;
    v16 = a6;
    if ( a6 < 0xC )
    {
      v15 = -1073741789;
    }
    else
    {
      *v11 = 0;
      v11[1] = *(_DWORD *)(a3 + 12);
      v11[2] = v14;
      v17 = v16 - 12;
      if ( v16 - 12 < v14 )
        v15 = -2147483643;
      if ( v17 >= v14 )
        v17 = v14;
      if ( v14 )
      {
        if ( v13 >= 0x80000000 )
        {
          v10 = (void *)(a3 + 8);
          Src = (void *)(a3 + 8);
        }
        else
        {
          if ( !(unsigned __int8)CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v43, (__int64)v39) )
            v15 = -1073741670;
          v10 = Src;
        }
        if ( v10 )
          memmove(v11 + 3, v10, v17);
      }
    }
  }
  else if ( a4 )
  {
    v19 = a4 - 1;
    if ( v19 && (v20 = v19 - 2) != 0 )
    {
      if ( v20 == 1 )
      {
        v33 = *(_DWORD *)(a3 + 4);
        v34 = v33 + 0x80000000;
        if ( v33 < 0x80000000 )
          v34 = *(_DWORD *)(a3 + 4);
        LODWORD(Size) = v34;
        v15 = 0;
        *a7 = v34 + 8;
        v35 = a6;
        if ( a6 < 8 )
        {
          v15 = -1073741789;
        }
        else
        {
          *v11 = *(_DWORD *)(a3 + 12);
          v11[1] = v34;
          v36 = v35 - 8;
          v37 = v34;
          if ( v36 < v34 )
          {
            v37 = v36;
            v15 = -2147483643;
          }
          if ( v34 )
          {
            if ( v33 >= 0x80000000 )
            {
              v10 = (void *)(a3 + 8);
              Src = (void *)(a3 + 8);
            }
            else
            {
              if ( !(unsigned __int8)CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v43, (__int64)v39) )
                v15 = -1073741670;
              v10 = Src;
            }
            if ( v10 )
              memmove(v11 + 2, v10, v37);
          }
        }
      }
      else
      {
        v15 = -1073741811;
      }
    }
    else
    {
      v21 = *(_DWORD *)(a3 + 4);
      v42 = v21;
      v22 = v21 + 0x80000000;
      if ( v21 < 0x80000000 )
        v22 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v22;
      v23 = v12;
      v24 = v22 + v12 + 20;
      v25 = 0;
      if ( v22 )
      {
        v25 = (v24 - v22 + 7) & 0xFFFFFFF8;
        if ( v25 > v24 - v22 )
          v24 = v25 + v22;
      }
      v15 = 0;
      *a7 = v24;
      v26 = a6;
      if ( a6 < 0x14 )
      {
        v15 = -1073741789;
      }
      else
      {
        *v11 = 0;
        v11[1] = *(_DWORD *)(a3 + 12);
        v11[3] = v22;
        v11[4] = v23;
        if ( v26 - 20 < (unsigned int)v23 )
        {
          v23 = v26 - 20;
          v15 = -2147483643;
        }
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        {
          v27 = (unsigned int)v23 >> 1;
          if ( v27 >= *(unsigned __int16 *)(a3 + 2) )
            v27 = *(unsigned __int16 *)(a3 + 2);
          for ( i = 0; i < v27; ++i )
            *((_WORD *)v11 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
        }
        else
        {
          memmove(v11 + 5, (const void *)(a3 + 20), v23);
          v21 = v42;
          v8 = a1;
        }
        if ( v22 )
        {
          if ( v21 >= 0x80000000 )
          {
            v10 = (void *)(a3 + 8);
            Src = (void *)(a3 + 8);
          }
          else
          {
            ValueData = CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v43, (__int64)v39);
            v30 = v15;
            if ( !ValueData )
              v30 = -1073741670;
            v15 = v30;
            v22 = (unsigned int)Size;
            v10 = Src;
          }
          v11[2] = v25;
          if ( a6 >= v25 )
            v9 = a6 - v25;
          if ( v9 >= v22 )
            v9 = v22;
          else
            v15 = -2147483643;
          if ( v10 )
            memmove((char *)v11 + v25, v10, v9);
        }
        else
        {
          v11[2] = -1;
        }
      }
    }
  }
  else
  {
    v31 = v12;
    v15 = 0;
    *a7 = v12 + 12;
    v32 = a6;
    if ( a6 < 0xC )
    {
      v15 = -1073741789;
    }
    else
    {
      *v11 = 0;
      v11[1] = *(_DWORD *)(a3 + 12);
      v11[2] = v31;
      if ( v32 - 12 < v31 )
      {
        v31 = v32 - 12;
        v15 = -2147483643;
      }
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        CmpCopyCompressedName(v11 + 3, v31, a3 + 20, *(unsigned __int16 *)(a3 + 2));
      else
        memmove(v11 + 3, (const void *)(a3 + 20), v31);
    }
  }
  if ( v10 && v10 != (void *)(a3 + 8) )
  {
    if ( (_BYTE)v43 == 1 )
    {
      ExFreePoolWithTag(v10, 0);
    }
    else if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v40, v39);
    }
    else
    {
      HvpReleaseCellPaged(v40, (unsigned int *)v39);
    }
  }
  return v15;
}
