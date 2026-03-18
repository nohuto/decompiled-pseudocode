/*
 * XREFs of USBD_ValidateExtendedConfigurationDescriptor @ 0x140041560
 * Callers:
 *     UsbhGetMsOsExtendedConfigDesc @ 0x140042298 (UsbhGetMsOsExtendedConfigDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_ValidateExtendedConfigurationDescriptor(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  __int16 v8; // bp
  unsigned int v9; // eax
  _BYTE *Pool2; // r10
  unsigned __int8 *v11; // rcx
  int v12; // r9d
  unsigned __int64 v13; // r8
  int v14; // r11d
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r11d
  unsigned int v22; // eax
  unsigned __int8 *v23; // r8
  __int64 v24; // rsi
  unsigned __int8 *v25; // rdi
  __int64 v26; // rax
  char v27; // r9
  unsigned int i; // edx
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  char v31; // r9
  unsigned int j; // edx
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // cl

  v4 = 0;
  v8 = 0;
  if ( a1 && a2 >= 0x10 && a3 && (v9 = *(unsigned __int16 *)(a3 + 2), v9 >= 9) && v9 <= a4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 256LL, 1112885333LL);
    if ( Pool2 )
    {
      v11 = (unsigned __int8 *)(a3 + 9);
      v12 = *(unsigned __int8 *)(a3 + 4);
      v13 = a3 + *(unsigned __int16 *)(a3 + 2);
      v14 = 0;
      while ( (unsigned __int64)v11 < v13 )
      {
        if ( (unsigned __int64)&v11[*v11] > v13 )
          goto LABEL_49;
        if ( v11[1] == 11 )
        {
          v15 = 1;
          Pool2[v11[2]] = 1;
          while ( 1 )
          {
            v16 = v11[3];
            if ( v15 >= v16 )
              break;
            v17 = v15 + v11[2];
            if ( (unsigned int)v17 >= 0x100 )
              goto LABEL_49;
            Pool2[v17] = 2;
            ++v15;
          }
          ++v14;
          v12 -= v16;
        }
        if ( v11[1] == 4 )
        {
          v18 = v11[2];
          if ( !Pool2[v18] )
            Pool2[v18] = 1;
        }
        v19 = *v11;
        if ( !(_BYTE)v19 )
          break;
        v11 += v19;
      }
      v20 = *a1;
      v21 = v12 + v14;
      if ( (unsigned int)(v20 - 16) > 0x1800 )
        goto LABEL_49;
      if ( (unsigned int)v20 > a2 )
        goto LABEL_49;
      if ( *((_WORD *)a1 + 3) != 4 )
        goto LABEL_49;
      v22 = *((unsigned __int8 *)a1 + 8);
      if ( v22 > v21 || (unsigned int)v20 < 24 * v22 + 16 )
        goto LABEL_49;
      v23 = (unsigned __int8 *)(a1 + 4);
      v24 = 0x87FFFFFE03FFLL;
      v25 = (unsigned __int8 *)a1 + v20;
      while ( v23 < v25 )
      {
        v26 = *v23;
        if ( Pool2[v26] != 1 && v21 > 1 )
          goto LABEL_49;
        Pool2[v26] = 3;
        v27 = 0;
        for ( i = 0; i < 8; ++i )
        {
          v29 = v23[i + 2];
          if ( v29 )
          {
            if ( v27 )
              goto LABEL_49;
            v30 = v29 - 48;
            if ( v30 > 0x2Fu || !_bittest64(&v24, v30) )
              goto LABEL_49;
          }
          else
          {
            v27 = 1;
          }
        }
        v31 = 0;
        for ( j = 0; j < 8; ++j )
        {
          v33 = v23[j + 10];
          if ( v33 )
          {
            if ( v31 )
              goto LABEL_49;
            v34 = v33 - 48;
            if ( v34 > 0x2Fu || !_bittest64(&v24, v34) )
              goto LABEL_49;
          }
          else
          {
            v31 = 1;
          }
        }
        v23 += 24;
        ++v8;
      }
      if ( v8 != *((unsigned __int8 *)a1 + 8) )
LABEL_49:
        v4 = -1073741811;
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
