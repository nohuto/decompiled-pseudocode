/*
 * XREFs of PopMarshalSettingValues @ 0x1409A45C8
 * Callers:
 *     PopGetSettingValue @ 0x1409A1370 (PopGetSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x1409A4CC8 (PopDispatchNotificationsToList.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PopUnreferencePowerSetting @ 0x1409A44C4 (PopUnreferencePowerSetting.c)
 */

__int64 __fastcall PopMarshalSettingValues(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // rcx
  __int64 i; // rbx
  _DWORD *v14; // rdx
  unsigned int v15; // r15d
  unsigned int v16; // edi
  __int128 *v17; // rbx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  v7 = 0;
  v8 = dword_140F0B38C;
  v9 = 0LL;
  v10 = 3LL;
  while ( (unsigned int)v9 < 3 )
  {
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      v12 = *(_DWORD **)(a1 + 8 * v8 + 64);
      *((_QWORD *)&v19 + v9) = v12;
    }
    else
    {
      v11 = *(_DWORD **)(a1 + 8 * v9 + 64);
      v12 = v11;
      *((_QWORD *)&v19 + v9) = v11;
      if ( (_DWORD)v9 == 2 && !v11 )
      {
        *((_QWORD *)&v19 + v9) = *((_QWORD *)&v19 + 1);
        v12 = (_DWORD *)*((_QWORD *)&v19 + 1);
      }
    }
    v7 += 8;
    if ( v12 )
    {
      ++*v12;
      v7 += v12[1];
    }
    v9 = (unsigned int)(v9 + 1);
  }
  if ( a3 < v7 )
  {
    v16 = -1073741789;
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
    {
      v14 = (_DWORD *)*((_QWORD *)&v19 + i);
      if ( v14 )
      {
        *a2 = v14[2];
        a2[1] = v14[1];
        v15 = v14[1];
        memmove(a2 + 2, v14 + 3, v15);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        v15 = 0;
      }
      a2 = (_DWORD *)((char *)a2 + v15 + 8);
    }
    *a4 = v7;
    v16 = 0;
  }
  v17 = &v19;
  do
  {
    if ( *(_QWORD *)v17 )
      PopUnreferencePowerSetting(*(_DWORD **)v17);
    v17 = (__int128 *)((char *)v17 + 8);
    --v10;
  }
  while ( v10 );
  return v16;
}
