/*
 * XREFs of BiEnumerateSubKeys @ 0x1409A6390
 * Callers:
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1404A1930 (BiSanitizeHandle.c)
 *     BiZwQueryKey @ 0x1404A2DC4 (BiZwQueryKey.c)
 *     BiZwEnumerateKey @ 0x1404A6AD4 (BiZwEnumerateKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // esi
  unsigned int *v6; // r15
  _QWORD *v7; // r13
  NTSTATUS v8; // ebx
  __int64 v9; // rsi
  unsigned int v10; // r14d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 Pool2; // rax
  char *v17; // r12
  ULONG v18; // ecx
  __int64 v19; // r8
  ULONG j; // esi
  NTSTATUS v21; // eax
  char *v22; // r12
  unsigned int i; // [rsp+34h] [rbp-B4h]
  void *v25; // [rsp+38h] [rbp-B0h]
  ULONG v26; // [rsp+40h] [rbp-A8h] BYREF
  ULONG v27; // [rsp+44h] [rbp-A4h]
  ULONG v28; // [rsp+48h] [rbp-A0h]
  _QWORD *v29; // [rsp+50h] [rbp-98h]
  ULONG *v30; // [rsp+58h] [rbp-90h]
  _QWORD *v31; // [rsp+60h] [rbp-88h]
  ULONG *v32; // [rsp+68h] [rbp-80h]
  int v33[4]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v34; // [rsp+80h] [rbp-68h]
  __int128 v35; // [rsp+90h] [rbp-58h]

  v30 = a3;
  v3 = a2;
  v29 = a2;
  v31 = a2;
  v32 = a3;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v26 = 0;
  v5 = 0;
  for ( i = 0; ; i = v5 )
  {
    *v3 = 0LL;
    *a3 = 0;
    v6 = 0LL;
    v7 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v25 = a1;
    v8 = BiZwQueryKey(a1, KeyFullInformation, v33, 0x30u, &v26);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      v9 = DWORD1(v34);
      v27 = DWORD1(v34);
      if ( DWORD1(v34) )
      {
        v10 = DWORD2(v34) + 2;
        if ( (unsigned int)(DWORD2(v34) + 2) < DWORD2(v34) )
        {
          v10 = -1;
          v8 = -1073741675;
        }
        else
        {
          v8 = 0;
        }
        if ( v8 >= 0 )
        {
          v11 = v10 * (unsigned __int64)DWORD1(v34);
          v10 = -1;
          if ( v11 <= 0xFFFFFFFF )
            v10 = v11;
          v8 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
        }
        if ( v8 >= 0 )
        {
          v12 = 8LL * DWORD1(v34);
          v13 = -1;
          if ( v12 <= 0xFFFFFFFF )
            v13 = v12;
          v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v12 <= 0xFFFFFFFF )
          {
            v14 = v13 + v10;
            v15 = -1;
            if ( v13 + v10 >= v13 )
              v15 = v13 + v10;
            v8 = v14 < v13 ? 0xC0000095 : 0;
            if ( v14 >= v13 )
            {
              Pool2 = ExAllocatePool2(0x102uLL, v15, 0x4B444342u);
              v7 = (_QWORD *)Pool2;
              if ( Pool2 )
              {
                v17 = (char *)(Pool2 + 8 * v9);
                v18 = -1;
                if ( DWORD2(v34) < 0xFFFFFFE6 )
                  v18 = DWORD2(v34) + 26;
                v28 = v18;
                v8 = DWORD2(v34) >= 0xFFFFFFE6 ? 0xC0000095 : 0;
                if ( (unsigned int)(DWORD2(v34) + 26) >= 0x1A )
                {
                  v6 = (unsigned int *)ExAllocatePool2(0x102uLL, v18, 0x4B444342u);
                  if ( v6 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v27 )
                        goto LABEL_29;
                      v21 = BiZwEnumerateKey(v25, j, v19, v6, v28, &v26);
                      v8 = v21;
                      if ( v21 == -2147483622 )
                      {
                        if ( !j )
                          goto LABEL_30;
LABEL_29:
                        *v29 = v7;
                        *v30 = j;
                        v8 = 0;
                        goto LABEL_30;
                      }
                      if ( v21 < 0 )
                        goto LABEL_30;
                      if ( (unsigned __int64)v6[3] + 2 > v10 )
                        break;
                      v7[j] = v17;
                      memmove(v17, v6 + 4, v6[3]);
                      v22 = &v17[v6[3]];
                      *(_WORD *)v22 = 0;
                      v17 = v22 + 2;
                      v10 += -2 - v6[3];
                    }
                    v8 = -1073741789;
                  }
                  else
                  {
                    v8 = -1073741670;
                  }
                }
              }
              else
              {
                v8 = -1073741670;
              }
            }
          }
        }
LABEL_30:
        a1 = v25;
      }
      else
      {
        v8 = 0;
      }
      v5 = i;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x4B444342u);
    if ( v8 < 0 && v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    v3 = v29;
    a3 = v30;
    if ( v5 >= 5 )
      break;
    ++v5;
  }
  return (unsigned int)v8;
}
