/*
 * XREFs of BiEnumerateSubKeys @ 0x1409BFD40
 * Callers:
 *     BcdEnumerateObjects @ 0x140811F1C (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1404A6FD0 (BiSanitizeHandle.c)
 *     BiZwQueryKey @ 0x1404A8854 (BiZwQueryKey.c)
 *     BiZwEnumerateKey @ 0x1404AC674 (BiZwEnumerateKey.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 Pool2; // rax
  char *v15; // r12
  ULONG v16; // ecx
  __int64 v17; // r8
  ULONG j; // esi
  NTSTATUS v19; // eax
  char *v20; // r12
  unsigned int i; // [rsp+34h] [rbp-B4h]
  void *v23; // [rsp+38h] [rbp-B0h]
  ULONG v24; // [rsp+40h] [rbp-A8h] BYREF
  ULONG v25; // [rsp+44h] [rbp-A4h]
  ULONG v26; // [rsp+48h] [rbp-A0h]
  _QWORD *v27; // [rsp+50h] [rbp-98h]
  ULONG *v28; // [rsp+58h] [rbp-90h]
  _QWORD *v29; // [rsp+60h] [rbp-88h]
  ULONG *v30; // [rsp+68h] [rbp-80h]
  int v31[4]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v32; // [rsp+80h] [rbp-68h]
  __int128 v33; // [rsp+90h] [rbp-58h]

  v28 = a3;
  v3 = a2;
  v27 = a2;
  v29 = a2;
  v30 = a3;
  *(_OWORD *)v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v24 = 0;
  v5 = 0;
  for ( i = 0; ; i = v5 )
  {
    *v3 = 0LL;
    *a3 = 0;
    v6 = 0LL;
    v7 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v23 = a1;
    v8 = BiZwQueryKey(a1, KeyFullInformation, v31, 0x30u, &v24);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      v9 = DWORD1(v32);
      v25 = DWORD1(v32);
      if ( DWORD1(v32) )
      {
        v10 = DWORD2(v32) + 2;
        if ( (unsigned int)(DWORD2(v32) + 2) < DWORD2(v32) )
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
          v11 = v10 * (unsigned __int64)DWORD1(v32);
          v10 = -1;
          if ( v11 <= 0xFFFFFFFF )
            v10 = v11;
          v8 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
        }
        if ( v8 >= 0 )
        {
          v12 = 8LL * DWORD1(v32);
          v13 = -1;
          if ( v12 <= 0xFFFFFFFF )
            v13 = v12;
          v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v12 <= 0xFFFFFFFF )
          {
            v8 = v13 + v10 < v13 ? 0xC0000095 : 0;
            if ( v13 + v10 >= v13 )
            {
              Pool2 = ExAllocatePool2(0x102uLL);
              v7 = (_QWORD *)Pool2;
              if ( Pool2 )
              {
                v15 = (char *)(Pool2 + 8 * v9);
                v16 = -1;
                if ( DWORD2(v32) < 0xFFFFFFE6 )
                  v16 = DWORD2(v32) + 26;
                v26 = v16;
                v8 = DWORD2(v32) >= 0xFFFFFFE6 ? 0xC0000095 : 0;
                if ( (unsigned int)(DWORD2(v32) + 26) >= 0x1A )
                {
                  v6 = (unsigned int *)ExAllocatePool2(0x102uLL);
                  if ( v6 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v25 )
                        goto LABEL_27;
                      v19 = BiZwEnumerateKey(v23, j, v17, v6, v26, &v24);
                      v8 = v19;
                      if ( v19 == -2147483622 )
                      {
                        if ( !j )
                          goto LABEL_28;
LABEL_27:
                        *v27 = v7;
                        *v28 = j;
                        v8 = 0;
                        goto LABEL_28;
                      }
                      if ( v19 < 0 )
                        goto LABEL_28;
                      if ( (unsigned __int64)v6[3] + 2 > v10 )
                        break;
                      v7[j] = v15;
                      memmove(v15, v6 + 4, v6[3]);
                      v20 = &v15[v6[3]];
                      *(_WORD *)v20 = 0;
                      v15 = v20 + 2;
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
LABEL_28:
        a1 = v23;
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
    v3 = v27;
    a3 = v28;
    if ( v5 >= 5 )
      break;
    ++v5;
  }
  return (unsigned int)v8;
}
