/*
 * XREFs of USBD_ValidateExtendedConfigurationDescriptor @ 0x1C0032600
 * Callers:
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0033348 (UsbhGetMsOsExtendedConfigDesc.c)
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
  __int16 v8; // r15
  unsigned int v9; // eax
  _BYTE *Pool2; // r11
  unsigned __int8 *v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // r14d
  int v14; // edi
  unsigned __int8 *v15; // rdx
  unsigned int v16; // r9d
  unsigned __int8 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r14d
  unsigned int v23; // eax
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rax
  _BYTE *v28; // rcx
  char v29; // r10
  unsigned int i; // r8d
  unsigned __int8 v31; // al
  char v32; // r10
  _BYTE *v33; // rcx
  unsigned int j; // r8d
  unsigned __int8 v35; // al

  v4 = 0;
  v8 = 0;
  if ( a1 && a2 >= 0x10 && a3 && (v9 = *(unsigned __int16 *)(a3 + 2), v9 >= 9) && v9 <= a4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 256LL, 1112885333LL);
    if ( Pool2 )
    {
      v11 = (unsigned __int8 *)(a3 + 9);
      v12 = a3 + *(unsigned __int16 *)(a3 + 2);
      v13 = 0;
      v14 = *(unsigned __int8 *)(a3 + 4);
      while ( (unsigned __int64)v11 < v12 )
      {
        if ( (unsigned __int64)&v11[*v11] > v12 )
          goto LABEL_46;
        v15 = v11 + 2;
        if ( v11[1] == 11 )
        {
          v16 = 1;
          Pool2[*v15] = 1;
          v17 = v11[3];
          if ( v17 > 1u )
          {
            do
            {
              v18 = v16 + *v15;
              if ( (unsigned int)v18 >= 0x100 )
                goto LABEL_46;
              Pool2[v18] = 2;
              ++v16;
              v17 = v11[3];
            }
            while ( v16 < v17 );
          }
          ++v13;
          v14 -= v17;
        }
        if ( v11[1] == 4 )
        {
          v19 = *v15;
          if ( !Pool2[v19] )
            Pool2[v19] = 1;
        }
        v20 = *v11;
        if ( !(_BYTE)v20 )
          break;
        v11 += v20;
      }
      v21 = *a1;
      v22 = v14 + v13;
      if ( (unsigned int)(v21 - 16) <= 0x1800 && (unsigned int)v21 <= a2 && *((_WORD *)a1 + 3) == 4 )
      {
        v23 = *((unsigned __int8 *)a1 + 8);
        if ( v23 <= v22 && (unsigned int)v21 >= 24 * v23 + 16 )
        {
          v24 = (unsigned __int8 *)(a1 + 4);
          v25 = (unsigned __int8 *)a1 + v21;
          if ( a1 + 4 >= (unsigned int *)((char *)a1 + v21) )
          {
LABEL_45:
            if ( v8 == *((unsigned __int8 *)a1 + 8) )
              goto LABEL_47;
          }
          else
          {
            v26 = 0x87FFFFFE03FFLL;
            while ( 1 )
            {
              v27 = *v24;
              if ( Pool2[v27] != 1 && v22 > 1 )
                break;
              Pool2[v27] = 3;
              v28 = v24 + 2;
              v29 = 0;
              for ( i = 0; i < 8; ++i )
              {
                if ( *v28 )
                {
                  if ( v29 )
                    goto LABEL_46;
                  v31 = *v28 - 48;
                  if ( v31 > 0x2Fu || !_bittest64(&v26, v31) )
                    goto LABEL_46;
                }
                else
                {
                  v29 = 1;
                }
                ++v28;
              }
              v32 = 0;
              v33 = v24 + 10;
              for ( j = 0; j < 8; ++j )
              {
                if ( *v33 )
                {
                  if ( v32 )
                    goto LABEL_46;
                  v35 = *v33 - 48;
                  if ( v35 > 0x2Fu || !_bittest64(&v26, v35) )
                    goto LABEL_46;
                }
                else
                {
                  v32 = 1;
                }
                ++v33;
              }
              v24 += 24;
              ++v8;
              if ( v24 >= v25 )
                goto LABEL_45;
            }
          }
        }
      }
LABEL_46:
      v4 = -1073741811;
LABEL_47:
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
