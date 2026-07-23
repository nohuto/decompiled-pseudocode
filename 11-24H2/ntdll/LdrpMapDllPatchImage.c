/*
 * XREFs of LdrpMapDllPatchImage @ 0x18010F6BC
 * Callers:
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 * Callees:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwManageHotPatch @ 0x180162380 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpMapDllPatchImage(__int64 a1)
{
  __int64 v2; // rdx
  NTSTATUS v3; // edi
  _DWORD v5[6]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp-10h]
  __int64 v8; // [rsp+60h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 48LL);
  v8 = 0LL;
  v5[1] = 0;
  v5[5] = 0;
  Handle = 0LL;
  v6 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  v5[0] = 1;
  v5[2] = 13;
  v5[3] = 16;
  v5[4] = 0x1000000;
  v3 = ZwManageHotPatch(10LL, v5, 40LL, &v8);
  if ( v3 >= 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x4000000u;
    v3 = LdrpMapDllWithSectionHandle(a1, (__int64)Handle);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
