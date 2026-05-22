/*
 * XREFs of ?ShellButtonRepeatCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x180060F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180060FC0 (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameControllerRawInputProvider::ShellButtonRepeatCallback(_DWORD *a1)
{
  QpcTimeConverter *v2; // rcx
  _DWORD v4[4]; // [rsp+20h] [rbp-BD8h] BYREF
  unsigned __int64 CurrentMicroSecTime; // [rsp+30h] [rbp-BC8h]
  int v6; // [rsp+38h] [rbp-BC0h]
  __int64 v7; // [rsp+40h] [rbp-BB8h]
  int v8; // [rsp+60h] [rbp-B98h]
  char v9; // [rsp+64h] [rbp-B94h]

  memset_0(v4, 0, 0xBC0uLL);
  v6 = 3008;
  v4[0] = 128;
  v4[1] = a1[9];
  CurrentMicroSecTime = QpcTimeConverter::GetCurrentMicroSecTime(v2);
  v7 = *((_QWORD *)a1 + 5);
  v8 = a1[8];
  v9 = 1;
  v4[2] = GetTickCount();
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)a1 + 2) + 24LL))(*((_QWORD *)a1 + 2), v4);
  return 0LL;
}
