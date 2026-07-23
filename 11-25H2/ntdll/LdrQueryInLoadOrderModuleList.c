/*
 * XREFs of LdrQueryInLoadOrderModuleList @ 0x18006ACB0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpReadMemory @ 0x18006A550 (LdrpReadMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrQueryInLoadOrderModuleList(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  int *v3; // r9
  NTSTATUS result; // eax
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+58h] [rbp-10h]
  int *v11; // [rsp+70h] [rbp+8h] BYREF

  v3 = &PebLdr;
  v11 = &PebLdr;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  v10 = 0;
  if ( a1 != (_QWORD *)&LdrpLocalProcess )
  {
    if ( ((int (__fastcall *)(_QWORD, _QWORD, _OWORD *, __int64, _QWORD))a1[2])(*a1, 0LL, v8, 48LL, 0LL) >= 0 )
    {
      result = LdrpReadMemory((__int64)a1, (void *)(*((_QWORD *)&v8[0] + 1) + 24LL), &v11, 8uLL);
      if ( result < 0 )
        return result;
    }
    v3 = v11;
  }
  *a2 = v3 + 4;
  if ( a3 )
    *a3 = v3 + 12;
  return 0;
}
