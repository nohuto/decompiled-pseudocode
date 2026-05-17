/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x180023840
 * Callers:
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DC2A4 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpLogDelayLoadTrigger @ 0x1800239B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     strlen @ 0x180169260 (strlen.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(__int64 a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  int v6; // ebp
  _QWORD *v8; // r14
  char *v10; // r15
  __int64 v11; // rdi
  size_t v12; // rax
  int v13; // edi
  STRING SourceString; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]

  *a3 = 0LL;
  v6 = a4;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v8 )
    return LdrpFindLoadedDllByHandle(*v8, a3, 0LL);
  v10 = (char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
  if ( !a4 )
    v6 = *(_DWORD *)(a1 + 272);
  v11 = *(_QWORD *)(a1 + 80);
  memset_thunk_772440563353939046(v16, 0, 0x80uLL);
  v18 = v11;
  v17 = v6 & 0xFFFFFFFE;
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
  v13 = LdrpLoadForwardedDll(&SourceString, 3, (__int64)a3);
  if ( v13 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
      *v8 = *(_QWORD *)(*a3 + 48LL);
    LdrpLogDelayLoadTrigger(a1, a2, *a3, a5);
  }
  LdrpReleaseDllPath(v16);
  return (unsigned int)v13;
}
