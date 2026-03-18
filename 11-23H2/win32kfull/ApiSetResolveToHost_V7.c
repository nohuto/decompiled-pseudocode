/*
 * XREFs of ApiSetResolveToHost_V7 @ 0x1C01403DC
 * Callers:
 *     ApiSetResolveToHost @ 0x1C0059E8C (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x1C01405F8 (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1C014068C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetResolveToHost_V7(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, _OWORD *a5)
{
  __int64 v5; // r14
  char v9; // bp
  int v10; // edx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // r8
  unsigned int v17; // eax
  unsigned __int64 v18; // r10
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // r9d
  _WORD *v22; // rdx
  unsigned __int16 *v23; // rdx
  int v24; // r9d
  int v25; // r11d
  __int64 v26; // r8
  unsigned int *v27; // rdx
  __int64 result; // rax
  unsigned __int16 v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF

  v30 = a3;
  v5 = (__int64)a5;
  v9 = 0;
  *a5 = 0LL;
  v10 = *a2;
  if ( (unsigned __int16)v10 >= 8u )
  {
    v11 = (_QWORD *)*((_QWORD *)a2 + 1);
    v12 = *v11 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
    {
      LOWORD(v10) = (unsigned __int16)v10 >> 1;
      LOBYTE(v30) = 0;
      v29 = 0;
      if ( (unsigned __int8)ApiSetpGetSearchKeyInfo_V7((_DWORD)v11, v10, a3, (unsigned int)&v29, (__int64)&v30) )
      {
        if ( (_BYTE)v30 )
        {
          v13 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 40, v11, v29);
          if ( v13 == -1 )
            goto LABEL_22;
          v14 = a1
              + v13 * (unsigned __int64)*(unsigned __int8 *)(a1 + 50)
              - *(unsigned __int16 *)(a1 + 6)
              + *(unsigned int *)(a1 + 40);
          v15 = *(unsigned int *)(v14 + 12);
          v16 = *(_BYTE *)(v14 + 22);
          goto LABEL_19;
        }
        v17 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 52, v11, v29);
        if ( v17 != -1 )
        {
          v18 = a1
              + v17 * (unsigned __int64)*(unsigned __int8 *)(a1 + 62)
              - *(unsigned __int16 *)(a1 + 6)
              + *(unsigned int *)(a1 + 52);
          v16 = *(_BYTE *)(v18 + 19);
          if ( (v16 & 4) == 0 )
            goto LABEL_18;
          v19 = 0;
          v20 = 2 * v29;
          v21 = (*a2 - v20) >> 1;
          if ( v21 )
          {
            v22 = (_WORD *)(*((_QWORD *)a2 + 1) + v20);
            if ( *v22 == 45 )
            {
              v23 = v22 + 1;
              v24 = v21 - 1;
              if ( v24 )
              {
                while ( v24 > 0 )
                {
                  v25 = *v23;
                  if ( (unsigned __int16)(v25 - 48) > 9u )
                    goto LABEL_22;
                  ++v23;
                  --v24;
                  v19 = v25 + 2 * (5 * v19 - 24);
                }
                if ( v19 <= *(unsigned __int8 *)(v18 + 18) )
                {
LABEL_18:
                  v15 = *(unsigned int *)(v18 + 8);
LABEL_19:
                  v9 = 1;
                  if ( (v16 & 2) != 0 )
                  {
                    v26 = *(unsigned __int16 *)(a1 + 6);
                    v27 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 76) + v15 * *(unsigned __int8 *)(a1 + 86) - v26);
                    if ( *((_BYTE *)v27 + 8) <= *(_BYTE *)(a1 + 3) )
                    {
                      *(_QWORD *)(v5 + 8) = a1 + *v27 + (unsigned __int64)*(unsigned int *)(a1 + 16) - v26;
                      *(_WORD *)(v5 + 2) = 2 * *((_WORD *)v27 + 2);
                      *(_WORD *)v5 = 2 * *((_WORD *)v27 + 2);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  result = 0LL;
  *a4 = v9;
  return result;
}
