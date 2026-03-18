/*
 * XREFs of HmgPrefetchAllObjt @ 0x1400CE450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned int v14; // r8d
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r10
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rdx
  _QWORD v28[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-D0h]
  _QWORD *v30; // [rsp+40h] [rbp-C8h]
  _QWORD v31[32]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = 0;
  memset(v31, 0, sizeof(v31));
  v29 = 0LL;
  v6 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  result = (__int64)v31;
  v30 = v31;
  v8 = 0;
  v28[0] = 1LL;
  v28[1] = -3LL;
LABEL_2:
  v9 = *(_QWORD *)(v6 + 5672);
  while ( ++v8 < *(_DWORD *)v9 )
  {
    v10 = *(_QWORD *)(v9 + 16);
    v11 = *(_DWORD *)(v10 + 2056);
    result = v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
    if ( v8 < (unsigned int)result )
    {
      if ( v8 >= v11 )
        v12 = ((v8 - v11) >> 16) + 1;
      else
        v12 = 0LL;
      v13 = *(_QWORD *)(v10 + 8 * v12 + 8);
      if ( (_DWORD)v12 )
        v14 = v8 + ((1 - (_DWORD)v12) << 16) - v11;
      else
        v14 = v8;
      v15 = 0LL;
      if ( v14 < *(_DWORD *)(v13 + 20) )
      {
        result = *(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v14 >> 8));
        if ( *(_QWORD *)(result + 16LL * (unsigned __int8)v14 + 8) )
        {
          result = *(_QWORD *)v13;
          v15 = *(_QWORD *)v13 + 24LL * v14;
        }
      }
      if ( v15 )
      {
        if ( !v8 )
          break;
        if ( *(_BYTE *)(v15 + 14) == a1 )
        {
          v16 = v8;
          if ( v8 >= 0x10000 )
          {
            v17 = (unsigned __int16)v8;
            if ( *(_DWORD *)v9 <= 0x10000u )
            {
              v16 = (unsigned __int16)v8;
            }
            else
            {
              v18 = *(_QWORD *)(v9 + 16);
              v19 = *(_DWORD *)(v18 + 2056);
              if ( (unsigned __int16)v8 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
              {
                v22 = 0LL;
              }
              else
              {
                if ( (unsigned __int16)v8 >= v19 )
                  v20 = (((unsigned __int16)v8 - v19) >> 16) + 1;
                else
                  v20 = 0LL;
                v21 = *(_QWORD *)(v18 + 8 * v20 + 8);
                if ( (_DWORD)v20 )
                  v17 = ((1 - (_DWORD)v20) << 16) - v19 + (unsigned __int16)v8;
                v22 = 0LL;
                if ( v17 < *(_DWORD *)(v21 + 20) )
                  v22 = *(_QWORD *)v21 + 24LL * v17;
              }
              if ( *(unsigned __int8 *)(v22 + 13) == HIWORD(v8) )
                v16 = (unsigned __int16)v8;
            }
          }
          v23 = *(_QWORD *)(*(_QWORD *)(v6 + 5672) + 16LL);
          v24 = *(_DWORD *)(v23 + 2056);
          result = v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16);
          if ( (unsigned int)v16 < (unsigned int)result )
          {
            if ( (unsigned int)v16 >= v24 )
              v25 = (((unsigned int)v16 - v24) >> 16) + 1;
            else
              v25 = 0LL;
            v26 = *(_QWORD *)(v23 + 8 * v25 + 8);
            if ( (_DWORD)v25 )
            {
              result = ((1 - (_DWORD)v25) << 16) - v24;
              v16 = (unsigned int)(result + v16);
            }
            if ( (unsigned int)v16 >= *(_DWORD *)(v26 + 20) )
            {
              v27 = 0LL;
            }
            else
            {
              result = *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v16 >> 8));
              v27 = *(_QWORD *)(result + 16LL * (unsigned __int8)v16 + 8);
            }
            if ( v27 )
            {
              result = 2LL * v4++;
              v31[result] = v27;
              v31[result + 1] = a2;
            }
          }
        }
        if ( v4 == 16 )
        {
          v29 = 16LL;
          result = MmPrefetchVirtualAddresses(v28);
          v4 = 0;
        }
        goto LABEL_2;
      }
    }
  }
  if ( v4 )
  {
    v29 = v4;
    return MmPrefetchVirtualAddresses(v28);
  }
  return result;
}
