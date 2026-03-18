/*
 * XREFs of NtUserGetImeHotKey @ 0x1C01D1210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1C01FB168 (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(__int64 a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  unsigned int v7; // ebx
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx
  _QWORD *v10; // rdx
  HKL *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int ImeHotKey; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v18; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+24h] [rbp-34h] BYREF
  HKL *v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF

  v7 = a1;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  v20 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_DWORD *)MmUserProbeAddress;
  *v8 = *v8;
  v9 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *v9 = *v9;
  if ( a4 )
  {
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_QWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v20 = (HKL *)&v21;
  }
  v11 = v20;
  ImeHotKey = GetImeHotKey(v7, &v18, &v19, v20);
  if ( ImeHotKey )
  {
    *a2 = v18;
    v13 = v19;
    *a3 = v19;
    if ( a4 )
      *a4 = *v11;
  }
  UserSessionSwitchLeaveCrit(v13, v12, v15, v16);
  return ImeHotKey;
}
