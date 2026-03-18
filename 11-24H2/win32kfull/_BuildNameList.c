/*
 * XREFs of _BuildNameList @ 0x140194F68
 * Callers:
 *     NtUserBuildNameList @ 0x140194E30 (NtUserBuildNameList.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall BuildNameList(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  bool v4; // r13
  __int64 v5; // rbx
  unsigned int v6; // r15d
  PGENERIC_MAPPING v7; // r12
  __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 NameInfo; // rax
  __int64 v11; // rsi
  unsigned __int64 v13; // r8
  _WORD *v14; // [rsp+20h] [rbp-58h]
  _WORD *v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+20h] [rbp-58h]
  unsigned __int64 v17; // [rsp+28h] [rbp-50h]

  v4 = 1;
  a2[1] = 0;
  v14 = a2 + 2;
  v17 = (unsigned __int64)a2 + a3 - 2;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = 64;
    v7 = DesktopMapping;
    v8 = 32LL;
    v4 = (unsigned int)IsCurrentProcessDwm() == 0;
  }
  else
  {
    v5 = *(_QWORD *)(W32GetUserSessionState((char *)a2 + a3 - 2, a2) + 63560);
    v6 = 256;
    v7 = (PGENERIC_MAPPING)WinStaMapping;
    v8 = 8LL;
  }
  v9 = 0;
  *a4 = 0;
  while ( v5 )
  {
    LOBYTE(v13) = v4;
    if ( (unsigned int)AccessCheckObject(v5, v6, v13, v7) )
    {
      NameInfo = ObQueryNameInfo(v5);
      v11 = NameInfo;
      if ( NameInfo )
      {
        v13 = (unsigned __int64)v14 + *(unsigned __int16 *)(NameInfo + 8) + 2;
        if ( v13 >= v17 )
        {
          v13 = (unsigned __int64)a4;
          *a4 = *a4 - (_DWORD)a2 + (_DWORD)v14;
          v14 = a2 + 2;
          v9 = -1073741789;
        }
        ++a2[1];
        if ( (unsigned __int64)v14 + *(unsigned __int16 *)(NameInfo + 8) + 2 <= v17 )
        {
          memmove(v14, *(const void **)(NameInfo + 16), *(unsigned __int16 *)(NameInfo + 8));
          v15 = (_WORD *)((char *)v14 + *(unsigned __int16 *)(v11 + 8));
          *v15 = 0;
          v14 = v15 + 1;
        }
      }
    }
    v5 = *(_QWORD *)(v8 + v5);
  }
  *v14 = 0;
  v16 = (_DWORD)v14 + 2;
  *a2 = v16 - (_DWORD)a2;
  *a4 = *a4 - (_DWORD)a2 + v16;
  return v9;
}
