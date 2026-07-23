/*
 * XREFs of CmQueryValueKeyCallout @ 0x1406F3010
 * Callers:
 *     <none>
 * Callees:
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 */

void __fastcall CmQueryValueKeyCallout(_OWORD *Parameter)
{
  __int128 v1; // xmm0
  __int64 v2; // r9
  int v4; // r8d
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v1 = Parameter[1];
  v2 = *((_QWORD *)Parameter + 5);
  v4 = *((_DWORD *)Parameter + 8);
  v7 = *((_QWORD *)Parameter + 7);
  v5 = *((_DWORD *)Parameter + 12);
  v6 = *((_QWORD *)Parameter + 1);
  v8 = v1;
  *(_DWORD *)Parameter = CmQueryValueKey(v6, (unsigned int)&v8, v4, v2, v5, v7);
}
