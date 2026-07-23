/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x180036720
 * Callers:
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800D94F0 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLoadForwardedDll @ 0x180038380 (LdrpLoadForwardedDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003C2E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800D7DA0 (LdrpLogDelayLoadTrigger.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     strlen @ 0x1801660A0 (strlen.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(_QWORD *a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  int v6; // ebp
  _QWORD *v8; // r14
  char *v10; // r15
  __int64 v11; // rdi
  size_t v12; // rax
  int v13; // edi
  ANSI_STRING SourceString; // [rsp+30h] [rbp-D8h] BYREF
  int v16[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h]

  *a3 = 0LL;
  v6 = a4;
  v8 = (_QWORD *)(a1[6] + *(unsigned int *)(a2 + 8));
  if ( *v8 )
    return LdrpFindLoadedDllByHandle(*v8, a3, 0LL);
  v10 = (char *)(a1[6] + *(unsigned int *)(a2 + 4));
  if ( !a4 )
    v6 = *((_DWORD *)a1 + 68);
  v11 = a1[10];
  memset_thunk_772440563353939046(v16, 0, 0x80uLL);
  v17 = v11;
  v16[6] = v6 & 0xFFFFFFFE;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = v10;
  if ( v10 )
  {
    v12 = strlen(v10);
    if ( v12 >= 0xFFFF )
      LOWORD(v12) = -2;
    SourceString.Length = v12;
    SourceString.MaximumLength = v12 + 1;
  }
  v13 = LdrpLoadForwardedDll(&SourceString, (int)v16, (__int64)a1, a1, 3, (__int64)a3);
  if ( v13 >= 0 )
  {
    if ( (a1[13] & 0x8000) == 0 )
      *v8 = *(_QWORD *)(*a3 + 48LL);
    LdrpLogDelayLoadTrigger(a1, a2, *a3, a5);
  }
  LdrpReleaseDllPath(v16);
  return (unsigned int)v13;
}
